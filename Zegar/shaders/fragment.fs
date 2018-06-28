#version 330

out vec4 pixelColor; //Zmienna wyjsciowa fragment shadera. Zapisuje sie do niej ostateczny (prawie) kolor piksela

in vec4 n;
in vec4 v;
in vec4 d;
in vec2 texCoord;

struct DirectionalLight {
	vec3 direction;
	vec3 ambient;
	vec3 diffuse;
	vec3 specular;
};

//Zmienne reprezentujace jednostki teksturujace
uniform sampler2D textureMap;
uniform DirectionalLight directionalLight;

vec3 calcDirectionalLight(DirectionalLight directionalLight, vec4 md, vec4 mn, vec4 mv);

void main(void) {
	vec4 mn = normalize(n);
	vec4 mv = normalize(v);

	vec4 md = normalize(d);


    pixelColor = vec4(calcDirectionalLight(directionalLight, md, mn, mv),1);
}


vec3 calcDirectionalLight(DirectionalLight directionalLight, vec4 md, vec4 mn, vec4 mv) {
	// diffuse
	float nl = max(dot(mn, -md), 0);
	// specular
	vec4 r = reflect(md, mn);
	float rv = pow(max(dot(r, mv), 0), 32);

	// result
	vec3 ambient = directionalLight.ambient * vec3(texture(textureMap, texCoord));
	vec3 diffuse = directionalLight.diffuse * vec3(vec4(nl,nl,nl,1) * texture(textureMap, texCoord));
	vec3 specular = directionalLight.specular * vec3(rv * texture(textureMap, texCoord));

	return vec3(ambient+diffuse+specular);
}