#version 330

// jednorodne
uniform mat4 P;
uniform mat4 V;
uniform mat4 M;

struct DirectionalLight {
	vec3 direction;
	vec3 ambient;
	vec3 diffuse;
	vec3 specular;
};

//Atrybuty
in vec4 vertex;
in vec4 normal;
in vec2 texture;

uniform DirectionalLight directionalLight;

//Zmienne interpolowane
out vec4 n;
out vec4 v;
out vec4 d;
out vec2 texCoord;

void main()	{
	texCoord = texture;
	n = normalize(V*M*normal);
	v = normalize(vec4(0,0,0,1) - V*M*vertex);
	
	// directional
	d = normalize(V*vec4(directionalLight.direction,0));

	gl_Position = P*V*M*vertex;
}


