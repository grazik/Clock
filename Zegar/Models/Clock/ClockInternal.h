#pragma once
		#include <string>
		#include <sstream>
		namespace ClockInternal {
		std::string name = "Clock";
		int vertexCount = 420;
		float vertices[] = { 0.577643, 1.793204, -0.419203, 1.0f,
0.577643, 2.463039, 0.250633, 1.0f,
0.577643, 1.793204, 0.250633, 1.0f,
0.977493, 1.793204, -0.419203, 1.0f,
0.577643, 2.463039, -0.419203, 1.0f,
0.577643, 1.793204, -0.419203, 1.0f,
0.577643, 1.793204, 0.250633, 1.0f,
0.977493, 1.793204, -0.419203, 1.0f,
0.577643, 1.793204, -0.419203, 1.0f,
-0.474568, -1.017652, -0.979698, 1.0f,
-0.474568, 1.575421, 0.844953, 1.0f,
-0.474568, -1.017652, 0.844953, 1.0f,
0.977493, -1.017652, -0.979698, 1.0f,
-0.474568, 1.575421, -0.979698, 1.0f,
-0.474568, -1.017652, -0.979698, 1.0f,
-0.474568, -1.017652, 0.844953, 1.0f,
0.977493, -1.017652, -0.979698, 1.0f,
-0.474568, -1.017652, -0.979698, 1.0f,
-0.844342, 4.576788, 1.328207, 1.0f,
-0.844342, -1.426991, -1.450490, 1.0f,
-0.844342, -1.426991, 1.328207, 1.0f,
-0.844342, 4.576788, -1.450490, 1.0f,
0.977493, -1.426991, -1.450490, 1.0f,
-0.844342, -1.426991, -1.450490, 1.0f,
0.977493, -1.426991, -1.450490, 1.0f,
0.977493, 1.575421, -0.979698, 1.0f,
0.977493, -1.017652, -0.979698, 1.0f,
0.977493, 4.576788, 1.328207, 1.0f,
-0.844342, -1.426991, 1.328207, 1.0f,
0.977493, -1.426991, 1.328207, 1.0f,
0.977493, -1.426991, -1.450490, 1.0f,
-0.844342, -1.426991, 1.328207, 1.0f,
-0.844342, -1.426991, -1.450490, 1.0f,
-0.844342, 4.576788, -1.450490, 1.0f,
0.977493, 4.576788, 1.328207, 1.0f,
0.977493, 4.576788, -1.450490, 1.0f,
0.977493, 1.793204, 0.250633, 1.0f,
0.977493, 1.575421, 0.844953, 1.0f,
0.977493, 1.575421, -0.979698, 1.0f,
-0.474568, 1.575421, 0.844953, 1.0f,
0.977493, 1.575421, -0.979698, 1.0f,
0.977493, 1.575421, 0.844953, 1.0f,
-0.474568, -1.017652, 0.844953, 1.0f,
0.977493, 1.575421, 0.844953, 1.0f,
0.977493, -1.017652, 0.844953, 1.0f,
0.977493, 2.463039, 0.250633, 1.0f,
0.977493, 2.463039, -0.419203, 1.0f,
0.977493, 4.576788, -1.450490, 1.0f,
0.977493, 2.463039, 0.250633, 1.0f,
0.577643, 2.463039, -0.419203, 1.0f,
0.977493, 2.463039, -0.419203, 1.0f,
0.577643, 1.793204, 0.250633, 1.0f,
0.977493, 2.463039, 0.250633, 1.0f,
0.977493, 1.793204, 0.250633, 1.0f,
-0.982406, -1.507979, 1.804684, 1.0f,
-0.982406, -1.608322, -1.847389, 1.0f,
-0.982406, -1.608322, 1.804684, 1.0f,
-0.982406, -1.507979, -1.847389, 1.0f,
1.175697, -1.608322, -1.847389, 1.0f,
-0.982406, -1.608322, -1.847389, 1.0f,
1.175697, -1.507979, -1.847389, 1.0f,
1.175697, -1.608322, 1.804684, 1.0f,
1.175697, -1.608322, -1.847389, 1.0f,
1.175697, -1.507979, 1.804684, 1.0f,
-0.982406, -1.608322, 1.804684, 1.0f,
1.175697, -1.608322, 1.804684, 1.0f,
1.175697, -1.608322, -1.847389, 1.0f,
-0.982406, -1.608322, 1.804684, 1.0f,
-0.982406, -1.608322, -1.847389, 1.0f,
-0.982406, -1.507979, -1.847389, 1.0f,
1.175697, -1.507979, 1.804684, 1.0f,
1.175697, -1.507979, -1.847389, 1.0f,
-0.982406, 4.612055, 1.574145, 1.0f,
-0.982406, 4.511712, -1.607447, 1.0f,
-0.982406, 4.511712, 1.574145, 1.0f,
-0.982406, 4.612055, -1.607447, 1.0f,
1.175697, 4.511712, -1.607447, 1.0f,
-0.982406, 4.511712, -1.607447, 1.0f,
1.175697, 4.612055, -1.607447, 1.0f,
1.175697, 4.511712, 1.574145, 1.0f,
1.175697, 4.511712, -1.607447, 1.0f,
1.175697, 4.612055, 1.574145, 1.0f,
-0.982406, 4.511712, 1.574145, 1.0f,
1.175697, 4.511712, 1.574145, 1.0f,
1.175697, 4.511712, -1.607447, 1.0f,
-0.982406, 4.511712, 1.574145, 1.0f,
-0.982406, 4.511712, -1.607447, 1.0f,
-0.982406, 4.612055, -1.607447, 1.0f,
1.175697, 4.612055, 1.574145, 1.0f,
1.175697, 4.612055, -1.607447, 1.0f,
-0.991309, 4.700004, 1.391413, 1.0f,
-0.991309, 4.599661, -1.456696, 1.0f,
-0.991309, 4.599661, 1.391413, 1.0f,
-0.991309, 4.700004, -1.456696, 1.0f,
1.166794, 4.599661, -1.456696, 1.0f,
-0.991309, 4.599661, -1.456696, 1.0f,
1.166794, 4.700004, -1.456696, 1.0f,
1.166794, 4.599661, 1.391413, 1.0f,
1.166794, 4.599661, -1.456696, 1.0f,
1.166794, 4.700004, 1.391413, 1.0f,
-0.991309, 4.599661, 1.391413, 1.0f,
1.166794, 4.599661, 1.391413, 1.0f,
1.166794, 4.599661, -1.456696, 1.0f,
-0.991309, 4.599661, 1.391413, 1.0f,
-0.991309, 4.599661, -1.456696, 1.0f,
-0.991309, 4.700004, -1.456696, 1.0f,
1.166794, 4.700004, 1.391413, 1.0f,
1.166794, 4.700004, -1.456696, 1.0f,
-1.000425, 4.797685, 1.184163, 1.0f,
-1.000425, 4.697342, -1.262081, 1.0f,
-1.000425, 4.697342, 1.184163, 1.0f,
-1.000425, 4.797685, -1.262081, 1.0f,
1.157678, 4.697342, -1.262081, 1.0f,
-1.000425, 4.697342, -1.262081, 1.0f,
1.157678, 4.797685, -1.262081, 1.0f,
1.157678, 4.697342, 1.184163, 1.0f,
1.157678, 4.697342, -1.262081, 1.0f,
1.157678, 4.797685, 1.184163, 1.0f,
-1.000425, 4.697342, 1.184163, 1.0f,
1.157678, 4.697342, 1.184163, 1.0f,
1.157678, 4.697342, -1.262081, 1.0f,
-1.000425, 4.697342, 1.184163, 1.0f,
-1.000425, 4.697342, -1.262081, 1.0f,
-1.000425, 4.797685, -1.262081, 1.0f,
1.157678, 4.797685, 1.184163, 1.0f,
1.157678, 4.797685, -1.262081, 1.0f,
-1.002402, 4.878852, 1.018931, 1.0f,
-1.002402, 4.789392, -1.096868, 1.0f,
-1.002402, 4.789392, 1.018931, 1.0f,
-1.002402, 4.878852, -1.096868, 1.0f,
1.147309, 4.789392, -1.096868, 1.0f,
-1.002402, 4.789392, -1.096868, 1.0f,
1.147309, 4.878852, -1.096868, 1.0f,
1.147309, 4.789392, 1.018931, 1.0f,
1.147309, 4.789392, -1.096868, 1.0f,
1.147309, 4.878852, 1.018931, 1.0f,
-1.002402, 4.789392, 1.018931, 1.0f,
1.147309, 4.789392, 1.018931, 1.0f,
1.147309, 4.789392, -1.096868, 1.0f,
-1.002402, 4.789392, 1.018931, 1.0f,
-1.002402, 4.789392, -1.096868, 1.0f,
-1.002402, 4.878852, -1.096868, 1.0f,
1.147309, 4.878852, 1.018931, 1.0f,
1.147309, 4.878852, -1.096868, 1.0f,
-0.977182, 4.956216, 0.910881, 1.0f,
-0.977182, 4.866757, -0.981747, 1.0f,
-0.977182, 4.866757, 0.910881, 1.0f,
-0.977182, 4.956216, -0.981747, 1.0f,
1.148748, 4.866757, -0.981747, 1.0f,
-0.977182, 4.866757, -0.981747, 1.0f,
1.148748, 4.956216, -0.981747, 1.0f,
1.148748, 4.866757, 0.910881, 1.0f,
1.148748, 4.866757, -0.981747, 1.0f,
1.148748, 4.956216, 0.910881, 1.0f,
-0.977182, 4.866757, 0.910881, 1.0f,
1.148748, 4.866757, 0.910881, 1.0f,
1.148748, 4.866757, -0.981747, 1.0f,
-0.977182, 4.866757, 0.910881, 1.0f,
-0.977182, 4.866757, -0.981747, 1.0f,
-0.977182, 4.956216, -0.981747, 1.0f,
1.148748, 4.956216, 0.910881, 1.0f,
1.148748, 4.956216, -0.981747, 1.0f,
-0.985964, 5.038169, 0.740451, 1.0f,
-0.985964, 4.948710, -0.819800, 1.0f,
-0.985964, 4.948710, 0.740451, 1.0f,
-0.985964, 5.038169, -0.819800, 1.0f,
1.139966, 4.948710, -0.819800, 1.0f,
-0.985964, 4.948710, -0.819800, 1.0f,
1.139966, 5.038169, -0.819800, 1.0f,
1.139966, 4.948710, 0.740451, 1.0f,
1.139966, 4.948710, -0.819800, 1.0f,
1.139966, 5.038169, 0.740451, 1.0f,
-0.985964, 4.948710, 0.740451, 1.0f,
1.139966, 4.948710, 0.740451, 1.0f,
1.139966, 4.948710, -0.819800, 1.0f,
-0.985964, 4.948710, 0.740451, 1.0f,
-0.985964, 4.948710, -0.819800, 1.0f,
-0.985964, 5.038169, -0.819800, 1.0f,
1.139966, 5.038169, 0.740451, 1.0f,
1.139966, 5.038169, -0.819800, 1.0f,
-0.995383, 5.121977, 0.618441, 1.0f,
-0.995383, 5.032518, -0.719882, 1.0f,
-0.995383, 5.032518, 0.618441, 1.0f,
-0.995383, 5.121977, -0.719882, 1.0f,
1.130547, 5.032518, -0.719882, 1.0f,
-0.995383, 5.032518, -0.719882, 1.0f,
1.130547, 5.121977, -0.719882, 1.0f,
1.130547, 5.032518, 0.618441, 1.0f,
1.130547, 5.032518, -0.719882, 1.0f,
1.130547, 5.121977, 0.618441, 1.0f,
-0.995383, 5.032518, 0.618441, 1.0f,
1.130547, 5.032518, 0.618441, 1.0f,
1.130547, 5.032518, -0.719882, 1.0f,
-0.995383, 5.032518, 0.618441, 1.0f,
-0.995383, 5.032518, -0.719882, 1.0f,
-0.995383, 5.121977, -0.719882, 1.0f,
1.130547, 5.121977, 0.618441, 1.0f,
1.130547, 5.121977, -0.719882, 1.0f,
0.577643, 1.793204, -0.419203, 1.0f,
0.577643, 2.463039, -0.419203, 1.0f,
0.577643, 2.463039, 0.250633, 1.0f,
0.977493, 1.793204, -0.419203, 1.0f,
0.977493, 2.463039, -0.419203, 1.0f,
0.577643, 2.463039, -0.419203, 1.0f,
0.577643, 1.793204, 0.250633, 1.0f,
0.977493, 1.793204, 0.250633, 1.0f,
0.977493, 1.793204, -0.419203, 1.0f,
-0.474568, -1.017652, -0.979698, 1.0f,
-0.474568, 1.575421, -0.979698, 1.0f,
-0.474568, 1.575421, 0.844953, 1.0f,
0.977493, -1.017652, -0.979698, 1.0f,
0.977493, 1.575421, -0.979698, 1.0f,
-0.474568, 1.575421, -0.979698, 1.0f,
-0.474568, -1.017652, 0.844953, 1.0f,
0.977493, -1.017652, 0.844953, 1.0f,
0.977493, -1.017652, -0.979698, 1.0f,
-0.844342, 4.576788, 1.328207, 1.0f,
-0.844342, 4.576788, -1.450490, 1.0f,
-0.844342, -1.426991, -1.450490, 1.0f,
-0.844342, 4.576788, -1.450490, 1.0f,
0.977493, 4.576788, -1.450490, 1.0f,
0.977493, -1.426991, -1.450490, 1.0f,
0.977493, -1.426991, -1.450490, 1.0f,
0.977493, 4.576788, -1.450490, 1.0f,
0.977493, 1.575421, -0.979698, 1.0f,
0.977493, -1.017652, -0.979698, 1.0f,
0.977493, -1.017652, 0.844953, 1.0f,
0.977493, -1.426991, -1.450490, 1.0f,
0.977493, -1.017652, 0.844953, 1.0f,
0.977493, -1.426991, 1.328207, 1.0f,
0.977493, -1.426991, -1.450490, 1.0f,
0.977493, 4.576788, 1.328207, 1.0f,
-0.844342, 4.576788, 1.328207, 1.0f,
-0.844342, -1.426991, 1.328207, 1.0f,
0.977493, -1.426991, -1.450490, 1.0f,
0.977493, -1.426991, 1.328207, 1.0f,
-0.844342, -1.426991, 1.328207, 1.0f,
-0.844342, 4.576788, -1.450490, 1.0f,
-0.844342, 4.576788, 1.328207, 1.0f,
0.977493, 4.576788, 1.328207, 1.0f,
0.977493, 4.576788, 1.328207, 1.0f,
0.977493, -1.426991, 1.328207, 1.0f,
0.977493, 1.575421, 0.844953, 1.0f,
0.977493, -1.426991, 1.328207, 1.0f,
0.977493, -1.017652, 0.844953, 1.0f,
0.977493, 1.575421, 0.844953, 1.0f,
0.977493, 1.793204, 0.250633, 1.0f,
0.977493, 4.576788, 1.328207, 1.0f,
0.977493, 1.575421, 0.844953, 1.0f,
0.977493, 1.575421, -0.979698, 1.0f,
0.977493, 2.463039, -0.419203, 1.0f,
0.977493, 1.793204, -0.419203, 1.0f,
0.977493, 1.793204, -0.419203, 1.0f,
0.977493, 1.793204, 0.250633, 1.0f,
0.977493, 1.575421, -0.979698, 1.0f,
-0.474568, 1.575421, 0.844953, 1.0f,
-0.474568, 1.575421, -0.979698, 1.0f,
0.977493, 1.575421, -0.979698, 1.0f,
-0.474568, -1.017652, 0.844953, 1.0f,
-0.474568, 1.575421, 0.844953, 1.0f,
0.977493, 1.575421, 0.844953, 1.0f,
0.977493, 4.576788, 1.328207, 1.0f,
0.977493, 1.793204, 0.250633, 1.0f,
0.977493, 2.463039, 0.250633, 1.0f,
0.977493, 2.463039, -0.419203, 1.0f,
0.977493, 1.575421, -0.979698, 1.0f,
0.977493, 4.576788, -1.450490, 1.0f,
0.977493, 4.576788, 1.328207, 1.0f,
0.977493, 2.463039, 0.250633, 1.0f,
0.977493, 4.576788, -1.450490, 1.0f,
0.977493, 2.463039, 0.250633, 1.0f,
0.577643, 2.463039, 0.250633, 1.0f,
0.577643, 2.463039, -0.419203, 1.0f,
0.577643, 1.793204, 0.250633, 1.0f,
0.577643, 2.463039, 0.250633, 1.0f,
0.977493, 2.463039, 0.250633, 1.0f,
-0.982406, -1.507979, 1.804684, 1.0f,
-0.982406, -1.507979, -1.847389, 1.0f,
-0.982406, -1.608322, -1.847389, 1.0f,
-0.982406, -1.507979, -1.847389, 1.0f,
1.175697, -1.507979, -1.847389, 1.0f,
1.175697, -1.608322, -1.847389, 1.0f,
1.175697, -1.507979, -1.847389, 1.0f,
1.175697, -1.507979, 1.804684, 1.0f,
1.175697, -1.608322, 1.804684, 1.0f,
1.175697, -1.507979, 1.804684, 1.0f,
-0.982406, -1.507979, 1.804684, 1.0f,
-0.982406, -1.608322, 1.804684, 1.0f,
1.175697, -1.608322, -1.847389, 1.0f,
1.175697, -1.608322, 1.804684, 1.0f,
-0.982406, -1.608322, 1.804684, 1.0f,
-0.982406, -1.507979, -1.847389, 1.0f,
-0.982406, -1.507979, 1.804684, 1.0f,
1.175697, -1.507979, 1.804684, 1.0f,
-0.982406, 4.612055, 1.574145, 1.0f,
-0.982406, 4.612055, -1.607447, 1.0f,
-0.982406, 4.511712, -1.607447, 1.0f,
-0.982406, 4.612055, -1.607447, 1.0f,
1.175697, 4.612055, -1.607447, 1.0f,
1.175697, 4.511712, -1.607447, 1.0f,
1.175697, 4.612055, -1.607447, 1.0f,
1.175697, 4.612055, 1.574145, 1.0f,
1.175697, 4.511712, 1.574145, 1.0f,
1.175697, 4.612055, 1.574145, 1.0f,
-0.982406, 4.612055, 1.574145, 1.0f,
-0.982406, 4.511712, 1.574145, 1.0f,
1.175697, 4.511712, -1.607447, 1.0f,
1.175697, 4.511712, 1.574145, 1.0f,
-0.982406, 4.511712, 1.574145, 1.0f,
-0.982406, 4.612055, -1.607447, 1.0f,
-0.982406, 4.612055, 1.574145, 1.0f,
1.175697, 4.612055, 1.574145, 1.0f,
-0.991309, 4.700004, 1.391413, 1.0f,
-0.991309, 4.700004, -1.456696, 1.0f,
-0.991309, 4.599661, -1.456696, 1.0f,
-0.991309, 4.700004, -1.456696, 1.0f,
1.166794, 4.700004, -1.456696, 1.0f,
1.166794, 4.599661, -1.456696, 1.0f,
1.166794, 4.700004, -1.456696, 1.0f,
1.166794, 4.700004, 1.391413, 1.0f,
1.166794, 4.599661, 1.391413, 1.0f,
1.166794, 4.700004, 1.391413, 1.0f,
-0.991309, 4.700004, 1.391413, 1.0f,
-0.991309, 4.599661, 1.391413, 1.0f,
1.166794, 4.599661, -1.456696, 1.0f,
1.166794, 4.599661, 1.391413, 1.0f,
-0.991309, 4.599661, 1.391413, 1.0f,
-0.991309, 4.700004, -1.456696, 1.0f,
-0.991309, 4.700004, 1.391413, 1.0f,
1.166794, 4.700004, 1.391413, 1.0f,
-1.000425, 4.797685, 1.184163, 1.0f,
-1.000425, 4.797685, -1.262081, 1.0f,
-1.000425, 4.697342, -1.262081, 1.0f,
-1.000425, 4.797685, -1.262081, 1.0f,
1.157678, 4.797685, -1.262081, 1.0f,
1.157678, 4.697342, -1.262081, 1.0f,
1.157678, 4.797685, -1.262081, 1.0f,
1.157678, 4.797685, 1.184163, 1.0f,
1.157678, 4.697342, 1.184163, 1.0f,
1.157678, 4.797685, 1.184163, 1.0f,
-1.000425, 4.797685, 1.184163, 1.0f,
-1.000425, 4.697342, 1.184163, 1.0f,
1.157678, 4.697342, -1.262081, 1.0f,
1.157678, 4.697342, 1.184163, 1.0f,
-1.000425, 4.697342, 1.184163, 1.0f,
-1.000425, 4.797685, -1.262081, 1.0f,
-1.000425, 4.797685, 1.184163, 1.0f,
1.157678, 4.797685, 1.184163, 1.0f,
-1.002402, 4.878852, 1.018931, 1.0f,
-1.002402, 4.878852, -1.096868, 1.0f,
-1.002402, 4.789392, -1.096868, 1.0f,
-1.002402, 4.878852, -1.096868, 1.0f,
1.147309, 4.878852, -1.096868, 1.0f,
1.147309, 4.789392, -1.096868, 1.0f,
1.147309, 4.878852, -1.096868, 1.0f,
1.147309, 4.878852, 1.018931, 1.0f,
1.147309, 4.789392, 1.018931, 1.0f,
1.147309, 4.878852, 1.018931, 1.0f,
-1.002402, 4.878852, 1.018931, 1.0f,
-1.002402, 4.789392, 1.018931, 1.0f,
1.147309, 4.789392, -1.096868, 1.0f,
1.147309, 4.789392, 1.018931, 1.0f,
-1.002402, 4.789392, 1.018931, 1.0f,
-1.002402, 4.878852, -1.096868, 1.0f,
-1.002402, 4.878852, 1.018931, 1.0f,
1.147309, 4.878852, 1.018931, 1.0f,
-0.977182, 4.956216, 0.910881, 1.0f,
-0.977182, 4.956216, -0.981747, 1.0f,
-0.977182, 4.866757, -0.981747, 1.0f,
-0.977182, 4.956216, -0.981747, 1.0f,
1.148748, 4.956216, -0.981747, 1.0f,
1.148748, 4.866757, -0.981747, 1.0f,
1.148748, 4.956216, -0.981747, 1.0f,
1.148748, 4.956216, 0.910881, 1.0f,
1.148748, 4.866757, 0.910881, 1.0f,
1.148748, 4.956216, 0.910881, 1.0f,
-0.977182, 4.956216, 0.910881, 1.0f,
-0.977182, 4.866757, 0.910881, 1.0f,
1.148748, 4.866757, -0.981747, 1.0f,
1.148748, 4.866757, 0.910881, 1.0f,
-0.977182, 4.866757, 0.910881, 1.0f,
-0.977182, 4.956216, -0.981747, 1.0f,
-0.977182, 4.956216, 0.910881, 1.0f,
1.148748, 4.956216, 0.910881, 1.0f,
-0.985964, 5.038169, 0.740451, 1.0f,
-0.985964, 5.038169, -0.819800, 1.0f,
-0.985964, 4.948710, -0.819800, 1.0f,
-0.985964, 5.038169, -0.819800, 1.0f,
1.139966, 5.038169, -0.819800, 1.0f,
1.139966, 4.948710, -0.819800, 1.0f,
1.139966, 5.038169, -0.819800, 1.0f,
1.139966, 5.038169, 0.740451, 1.0f,
1.139966, 4.948710, 0.740451, 1.0f,
1.139966, 5.038169, 0.740451, 1.0f,
-0.985964, 5.038169, 0.740451, 1.0f,
-0.985964, 4.948710, 0.740451, 1.0f,
1.139966, 4.948710, -0.819800, 1.0f,
1.139966, 4.948710, 0.740451, 1.0f,
-0.985964, 4.948710, 0.740451, 1.0f,
-0.985964, 5.038169, -0.819800, 1.0f,
-0.985964, 5.038169, 0.740451, 1.0f,
1.139966, 5.038169, 0.740451, 1.0f,
-0.995383, 5.121977, 0.618441, 1.0f,
-0.995383, 5.121977, -0.719882, 1.0f,
-0.995383, 5.032518, -0.719882, 1.0f,
-0.995383, 5.121977, -0.719882, 1.0f,
1.130547, 5.121977, -0.719882, 1.0f,
1.130547, 5.032518, -0.719882, 1.0f,
1.130547, 5.121977, -0.719882, 1.0f,
1.130547, 5.121977, 0.618441, 1.0f,
1.130547, 5.032518, 0.618441, 1.0f,
1.130547, 5.121977, 0.618441, 1.0f,
-0.995383, 5.121977, 0.618441, 1.0f,
-0.995383, 5.032518, 0.618441, 1.0f,
1.130547, 5.032518, -0.719882, 1.0f,
1.130547, 5.032518, 0.618441, 1.0f,
-0.995383, 5.032518, 0.618441, 1.0f,
-0.995383, 5.121977, -0.719882, 1.0f,
-0.995383, 5.121977, 0.618441, 1.0f,
1.130547, 5.121977, 0.618441, 1.0f};
		float vertexNormals[] = {1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
-1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
0.0000, 0.0000, -1.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
1.0000, 0.0000, 0.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, 0.0000, 1.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, -1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f}; ;
			float texCoords[] = {1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
0.500000, 1.000000,
0.933013, 0.250000,
0.500000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
0.000000, 0.500000,
1.000000, 0.500000,
0.853553, 0.146447,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
0.933013, 0.250000,
0.500000, 0.000000,
0.066987, 0.750000,
0.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
0.000000, 1.000000,
0.000000, 0.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
0.500000, 1.000000,
0.933013, 0.750000,
0.933013, 0.250000,
0.500000, 0.000000,
0.066987, 0.250000,
0.500000, 1.000000,
0.066987, 0.250000,
0.066987, 0.750000,
0.500000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
0.146447, 0.853553,
0.500000, 1.000000,
1.000000, 0.500000,
0.500000, 1.000000,
0.853553, 0.853553,
1.000000, 0.500000,
0.000000, 0.500000,
0.146447, 0.853553,
1.000000, 0.500000,
0.853553, 0.146447,
0.500000, 0.000000,
0.146447, 0.146447,
0.146447, 0.146447,
0.000000, 0.500000,
0.853553, 0.146447,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
0.500000, 1.000000,
0.933013, 0.750000,
0.933013, 0.250000,
0.500000, 0.000000,
0.066987, 0.250000,
0.066987, 0.750000,
0.500000, 1.000000,
0.933013, 0.250000,
0.066987, 0.750000,
0.000000, 0.000000,
1.000000, 0.000000,
1.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000,
1.000000, 0.000000,
1.000000, 1.000000,
0.000000, 1.000000};
		}