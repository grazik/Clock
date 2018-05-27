const btn = document.getElementById('convert');
btn.addEventListener('click', convert);

function convert() {
    document.getElementById('output').innerHTML = '';

    const code = document.getElementById('code').value.split('\n');

    const vertices = code.filter(line => line.match(/^v /g))
        .map(line => line.replace(/\s+/g,' ').split(' '))
        .map(elem => `${elem[1]}, ${elem[2]}, ${elem[3]}`);

    const vertex_texture = code.filter(line => line.match(/^vt /g))
        .map(line => line.replace(/\s+/g,' ').split(' '))
        .map(elem => `${elem[1]}, ${elem[2]}`);

    const vertex_normals = code.filter(line => line.match(/^vn /g))
        .map(line => line.replace(/\s+/g,' ').split(' '))
        .map(elem => `${elem[1]}, ${elem[2]}, ${elem[3]}`);
    
    const faces = code.filter(line => line.match(/^f /g))
        .map(line => line.replace(/\s+/g,' ').split(' '))
        .map(line => [line[1],line[2],line[3]])
        .map(line => line.map(elem => elem.split('/')))
        .map(line => line.map(coords => 
            [vertices[coords[0]-1]+', 1.0f', vertex_texture[coords[1]-1], vertex_normals[coords[2]-1]+', 0.0f']
        ));

    //console.log(faces);

    const out = document.getElementById('output');
    //console.log(out);
    let h1, p, btn_copy;

    const num_of_triangles = faces.length*3;
    h1 = document.createElement('h1');
    h1.innerHTML = 'num_of_triangles';
    out.appendChild(h1);
    p = document.createElement('p');
    p.innerHTML = num_of_triangles;
    out.appendChild(p);

    //console.log('num_of_triangles');
    //console.log(num_of_triangles);

    //---------------------------

    const vertex_array = faces.reduce(function(prev, cur) {
        const v = cur.map(elem => elem[0]).join(',\n');
        return prev + ',\n' + v;
    },"").split('\n').filter(cur => cur.length>2).join('\n');

    h1 = document.createElement('h1');
    h1.innerHTML = 'vertex';
    out.appendChild(h1);
    btn_copy = document.createElement('button');
    btn_copy.innerHTML = 'Copy to clipboard';
    btn_copy.addEventListener('click',copy);
    out.appendChild(btn_copy);
    p = document.createElement('p');
    p.innerHTML = vertex_array;
    out.appendChild(p);
    
    //console.log('vertex');
    //console.log(vertex_array);

    //---------------------------

    const vertex_texture_array = faces.reduce(function(prev, cur) {
        const v = cur.map(elem => elem[1]).join(',\n');
        return prev + ',\n' + v;
    },"").split('\n').filter(cur => cur.length>3).join('\n');

    h1 = document.createElement('h1');
    h1.innerHTML = 'vertex_texture';
    out.appendChild(h1);
    btn_copy = document.createElement('button');
    btn_copy.innerHTML = 'Copy to clipboard';
    btn_copy.addEventListener('click',copy);
    out.appendChild(btn_copy);
    p = document.createElement('p');
    p.innerHTML = vertex_texture_array;
    out.appendChild(p);
    
    //console.log('vertex_texture');
    //console.log(vertex_texture_array);

    //---------------------------

    const vertex_normals_array = faces.reduce(function(prev, cur) {
        const v = cur.map(elem => elem[2]).join(',\n');
        return prev + ',\n' + v;
    },"").split('\n').filter(cur => cur.length>3).join('\n');

    h1 = document.createElement('h1');
    h1.innerHTML = 'vertex_normals';
    out.appendChild(h1);
    btn_copy = document.createElement('button');
    btn_copy.innerHTML = 'Copy to clipboard';
    btn_copy.addEventListener('click',copy);
    out.appendChild(btn_copy);
    p = document.createElement('p');
    p.innerHTML = vertex_normals_array;
    out.appendChild(p);
    
    //console.log('vertex_normals');
    //console.log(vertex_normals_array);

}

function copy(e) {
    const range = document.createRange();
    range.selectNode(e.target.nextSibling);
    let selection = window.getSelection()
    selection.addRange(range);
    document.execCommand('copy');
    selection.removeAllRanges();
}