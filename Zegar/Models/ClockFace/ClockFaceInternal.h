#pragma once
		#include <string>
		#include <sstream>
		namespace ClockFaceInternal {
		std::string name = "ClockFace";
		int vertexCount = 372;
		float vertices[] = { 0.000000, -0.000452, -1.167079, 1.0f,
0.000000, 0.000452, -1.167079, 1.0f,
0.227686, 0.000452, -1.144654, 1.0f,
0.227686, -0.000452, -1.144654, 1.0f,
0.227686, 0.000452, -1.144654, 1.0f,
0.446622, 0.000452, -1.078241, 1.0f,
0.446622, -0.000452, -1.078241, 1.0f,
0.446622, 0.000452, -1.078241, 1.0f,
0.648395, 0.000452, -0.970391, 1.0f,
0.648395, -0.000452, -0.970391, 1.0f,
0.648395, 0.000452, -0.970391, 1.0f,
0.825250, 0.000452, -0.825250, 1.0f,
0.825250, -0.000452, -0.825250, 1.0f,
0.825250, 0.000452, -0.825250, 1.0f,
0.970391, 0.000452, -0.648394, 1.0f,
0.970391, -0.000452, -0.648394, 1.0f,
0.970391, 0.000452, -0.648394, 1.0f,
1.078241, 0.000452, -0.446622, 1.0f,
1.078241, -0.000452, -0.446622, 1.0f,
1.078241, 0.000452, -0.446622, 1.0f,
1.144654, 0.000452, -0.227686, 1.0f,
1.144654, -0.000452, -0.227686, 1.0f,
1.144654, 0.000452, -0.227686, 1.0f,
1.167079, 0.000452, 0.000000, 1.0f,
1.167079, -0.000452, -0.000000, 1.0f,
1.167079, 0.000452, 0.000000, 1.0f,
1.144654, 0.000452, 0.227686, 1.0f,
1.144654, -0.000452, 0.227686, 1.0f,
1.144654, 0.000452, 0.227686, 1.0f,
1.078241, 0.000452, 0.446622, 1.0f,
1.078241, -0.000452, 0.446622, 1.0f,
1.078241, 0.000452, 0.446622, 1.0f,
0.970391, 0.000452, 0.648394, 1.0f,
0.970391, -0.000452, 0.648394, 1.0f,
0.970391, 0.000452, 0.648394, 1.0f,
0.825250, 0.000452, 0.825250, 1.0f,
0.825250, -0.000452, 0.825250, 1.0f,
0.825250, 0.000452, 0.825250, 1.0f,
0.648394, 0.000452, 0.970391, 1.0f,
0.648394, -0.000452, 0.970391, 1.0f,
0.648394, 0.000452, 0.970391, 1.0f,
0.446622, 0.000452, 1.078241, 1.0f,
0.446622, -0.000452, 1.078241, 1.0f,
0.446622, 0.000452, 1.078241, 1.0f,
0.227686, 0.000452, 1.144654, 1.0f,
0.227686, -0.000452, 1.144654, 1.0f,
0.227686, 0.000452, 1.144654, 1.0f,
0.000000, 0.000452, 1.167079, 1.0f,
0.000000, -0.000452, 1.167079, 1.0f,
0.000000, 0.000452, 1.167079, 1.0f,
-0.227686, 0.000452, 1.144654, 1.0f,
-0.227686, -0.000452, 1.144654, 1.0f,
-0.227686, 0.000452, 1.144654, 1.0f,
-0.446622, 0.000452, 1.078241, 1.0f,
-0.446622, -0.000452, 1.078241, 1.0f,
-0.446622, 0.000452, 1.078241, 1.0f,
-0.648395, 0.000452, 0.970391, 1.0f,
-0.648395, -0.000452, 0.970391, 1.0f,
-0.648395, 0.000452, 0.970391, 1.0f,
-0.825250, 0.000452, 0.825249, 1.0f,
-0.825250, -0.000452, 0.825249, 1.0f,
-0.825250, 0.000452, 0.825249, 1.0f,
-0.970391, 0.000452, 0.648394, 1.0f,
-0.970391, -0.000452, 0.648394, 1.0f,
-0.970391, 0.000452, 0.648394, 1.0f,
-1.078241, 0.000452, 0.446621, 1.0f,
-1.078241, -0.000452, 0.446621, 1.0f,
-1.078241, 0.000452, 0.446621, 1.0f,
-1.144654, 0.000452, 0.227685, 1.0f,
-1.144654, -0.000452, 0.227685, 1.0f,
-1.144654, 0.000452, 0.227685, 1.0f,
-1.167079, 0.000452, -0.000001, 1.0f,
-1.167079, -0.000452, -0.000001, 1.0f,
-1.167079, 0.000452, -0.000001, 1.0f,
-1.144654, 0.000452, -0.227687, 1.0f,
-1.144654, -0.000452, -0.227687, 1.0f,
-1.144654, 0.000452, -0.227687, 1.0f,
-1.078240, 0.000452, -0.446623, 1.0f,
-1.078240, -0.000452, -0.446623, 1.0f,
-1.078240, 0.000452, -0.446623, 1.0f,
-0.970390, 0.000452, -0.648396, 1.0f,
-0.970390, -0.000452, -0.648396, 1.0f,
-0.970390, 0.000452, -0.648396, 1.0f,
-0.825249, 0.000452, -0.825251, 1.0f,
-0.825249, -0.000452, -0.825251, 1.0f,
-0.825249, 0.000452, -0.825251, 1.0f,
-0.648393, 0.000452, -0.970392, 1.0f,
-0.648393, -0.000452, -0.970392, 1.0f,
-0.648393, 0.000452, -0.970392, 1.0f,
-0.446620, 0.000452, -1.078241, 1.0f,
-1.078240, -0.000452, -0.446623, 1.0f,
1.078241, -0.000452, 0.446622, 1.0f,
-0.446622, -0.000452, 1.078241, 1.0f,
-0.446620, -0.000452, -1.078241, 1.0f,
-0.446620, 0.000452, -1.078241, 1.0f,
-0.227684, 0.000452, -1.144655, 1.0f,
-0.227684, -0.000452, -1.144655, 1.0f,
-0.227684, 0.000452, -1.144655, 1.0f,
0.000000, 0.000452, -1.167079, 1.0f,
1.144654, 0.000452, -0.227686, 1.0f,
-1.144654, 0.000452, 0.227685, 1.0f,
0.227686, 0.000452, 1.144654, 1.0f,
0.000000, -0.000452, -1.167079, 1.0f,
0.227686, 0.000452, -1.144654, 1.0f,
0.227686, -0.000452, -1.144654, 1.0f,
0.227686, -0.000452, -1.144654, 1.0f,
0.446622, 0.000452, -1.078241, 1.0f,
0.446622, -0.000452, -1.078241, 1.0f,
0.446622, -0.000452, -1.078241, 1.0f,
0.648395, 0.000452, -0.970391, 1.0f,
0.648395, -0.000452, -0.970391, 1.0f,
0.648395, -0.000452, -0.970391, 1.0f,
0.825250, 0.000452, -0.825250, 1.0f,
0.825250, -0.000452, -0.825250, 1.0f,
0.825250, -0.000452, -0.825250, 1.0f,
0.970391, 0.000452, -0.648394, 1.0f,
0.970391, -0.000452, -0.648394, 1.0f,
0.970391, -0.000452, -0.648394, 1.0f,
1.078241, 0.000452, -0.446622, 1.0f,
1.078241, -0.000452, -0.446622, 1.0f,
1.078241, -0.000452, -0.446622, 1.0f,
1.144654, 0.000452, -0.227686, 1.0f,
1.144654, -0.000452, -0.227686, 1.0f,
1.144654, -0.000452, -0.227686, 1.0f,
1.167079, 0.000452, 0.000000, 1.0f,
1.167079, -0.000452, -0.000000, 1.0f,
1.167079, -0.000452, -0.000000, 1.0f,
1.144654, 0.000452, 0.227686, 1.0f,
1.144654, -0.000452, 0.227686, 1.0f,
1.144654, -0.000452, 0.227686, 1.0f,
1.078241, 0.000452, 0.446622, 1.0f,
1.078241, -0.000452, 0.446622, 1.0f,
1.078241, -0.000452, 0.446622, 1.0f,
0.970391, 0.000452, 0.648394, 1.0f,
0.970391, -0.000452, 0.648394, 1.0f,
0.970391, -0.000452, 0.648394, 1.0f,
0.825250, 0.000452, 0.825250, 1.0f,
0.825250, -0.000452, 0.825250, 1.0f,
0.825250, -0.000452, 0.825250, 1.0f,
0.648394, 0.000452, 0.970391, 1.0f,
0.648394, -0.000452, 0.970391, 1.0f,
0.648394, -0.000452, 0.970391, 1.0f,
0.446622, 0.000452, 1.078241, 1.0f,
0.446622, -0.000452, 1.078241, 1.0f,
0.446622, -0.000452, 1.078241, 1.0f,
0.227686, 0.000452, 1.144654, 1.0f,
0.227686, -0.000452, 1.144654, 1.0f,
0.227686, -0.000452, 1.144654, 1.0f,
0.000000, 0.000452, 1.167079, 1.0f,
0.000000, -0.000452, 1.167079, 1.0f,
0.000000, -0.000452, 1.167079, 1.0f,
-0.227686, 0.000452, 1.144654, 1.0f,
-0.227686, -0.000452, 1.144654, 1.0f,
-0.227686, -0.000452, 1.144654, 1.0f,
-0.446622, 0.000452, 1.078241, 1.0f,
-0.446622, -0.000452, 1.078241, 1.0f,
-0.446622, -0.000452, 1.078241, 1.0f,
-0.648395, 0.000452, 0.970391, 1.0f,
-0.648395, -0.000452, 0.970391, 1.0f,
-0.648395, -0.000452, 0.970391, 1.0f,
-0.825250, 0.000452, 0.825249, 1.0f,
-0.825250, -0.000452, 0.825249, 1.0f,
-0.825250, -0.000452, 0.825249, 1.0f,
-0.970391, 0.000452, 0.648394, 1.0f,
-0.970391, -0.000452, 0.648394, 1.0f,
-0.970391, -0.000452, 0.648394, 1.0f,
-1.078241, 0.000452, 0.446621, 1.0f,
-1.078241, -0.000452, 0.446621, 1.0f,
-1.078241, -0.000452, 0.446621, 1.0f,
-1.144654, 0.000452, 0.227685, 1.0f,
-1.144654, -0.000452, 0.227685, 1.0f,
-1.144654, -0.000452, 0.227685, 1.0f,
-1.167079, 0.000452, -0.000001, 1.0f,
-1.167079, -0.000452, -0.000001, 1.0f,
-1.167079, -0.000452, -0.000001, 1.0f,
-1.144654, 0.000452, -0.227687, 1.0f,
-1.144654, -0.000452, -0.227687, 1.0f,
-1.144654, -0.000452, -0.227687, 1.0f,
-1.078240, 0.000452, -0.446623, 1.0f,
-1.078240, -0.000452, -0.446623, 1.0f,
-1.078240, -0.000452, -0.446623, 1.0f,
-0.970390, 0.000452, -0.648396, 1.0f,
-0.970390, -0.000452, -0.648396, 1.0f,
-0.970390, -0.000452, -0.648396, 1.0f,
-0.825249, 0.000452, -0.825251, 1.0f,
-0.825249, -0.000452, -0.825251, 1.0f,
-0.825249, -0.000452, -0.825251, 1.0f,
-0.648393, 0.000452, -0.970392, 1.0f,
-0.648393, -0.000452, -0.970392, 1.0f,
-0.648393, -0.000452, -0.970392, 1.0f,
-0.446620, 0.000452, -1.078241, 1.0f,
-0.446620, -0.000452, -1.078241, 1.0f,
0.446622, -0.000452, -1.078241, 1.0f,
0.000000, -0.000452, -1.167079, 1.0f,
0.227686, -0.000452, -1.144654, 1.0f,
0.000000, -0.000452, -1.167079, 1.0f,
0.446622, -0.000452, -1.078241, 1.0f,
-0.227684, -0.000452, -1.144655, 1.0f,
-0.227684, -0.000452, -1.144655, 1.0f,
0.446622, -0.000452, -1.078241, 1.0f,
-0.446620, -0.000452, -1.078241, 1.0f,
-0.446620, -0.000452, -1.078241, 1.0f,
-0.825249, -0.000452, -0.825251, 1.0f,
-0.648393, -0.000452, -0.970392, 1.0f,
-0.825249, -0.000452, -0.825251, 1.0f,
-1.078240, -0.000452, -0.446623, 1.0f,
-0.970390, -0.000452, -0.648396, 1.0f,
-1.078240, -0.000452, -0.446623, 1.0f,
-1.167079, -0.000452, -0.000001, 1.0f,
-1.144654, -0.000452, -0.227687, 1.0f,
-1.167079, -0.000452, -0.000001, 1.0f,
-1.078240, -0.000452, -0.446623, 1.0f,
-1.144654, -0.000452, 0.227685, 1.0f,
-1.144654, -0.000452, 0.227685, 1.0f,
-1.078240, -0.000452, -0.446623, 1.0f,
-1.078241, -0.000452, 0.446621, 1.0f,
-1.078241, -0.000452, 0.446621, 1.0f,
-0.446622, -0.000452, 1.078241, 1.0f,
-0.970391, -0.000452, 0.648394, 1.0f,
-0.970391, -0.000452, 0.648394, 1.0f,
-0.446622, -0.000452, 1.078241, 1.0f,
-0.825250, -0.000452, 0.825249, 1.0f,
-0.825250, -0.000452, 0.825249, 1.0f,
-0.446622, -0.000452, 1.078241, 1.0f,
-0.648395, -0.000452, 0.970391, 1.0f,
-0.446622, -0.000452, 1.078241, 1.0f,
0.000000, -0.000452, 1.167079, 1.0f,
-0.227686, -0.000452, 1.144654, 1.0f,
0.000000, -0.000452, 1.167079, 1.0f,
0.446622, -0.000452, 1.078241, 1.0f,
0.227686, -0.000452, 1.144654, 1.0f,
0.446622, -0.000452, 1.078241, 1.0f,
0.825250, -0.000452, 0.825250, 1.0f,
0.648394, -0.000452, 0.970391, 1.0f,
0.825250, -0.000452, 0.825250, 1.0f,
1.078241, -0.000452, 0.446622, 1.0f,
0.970391, -0.000452, 0.648394, 1.0f,
1.078241, -0.000452, 0.446622, 1.0f,
1.167079, -0.000452, -0.000000, 1.0f,
1.144654, -0.000452, 0.227686, 1.0f,
1.167079, -0.000452, -0.000000, 1.0f,
1.078241, -0.000452, 0.446622, 1.0f,
1.144654, -0.000452, -0.227686, 1.0f,
1.144654, -0.000452, -0.227686, 1.0f,
1.078241, -0.000452, 0.446622, 1.0f,
1.078241, -0.000452, -0.446622, 1.0f,
1.078241, -0.000452, -0.446622, 1.0f,
0.825250, -0.000452, -0.825250, 1.0f,
0.970391, -0.000452, -0.648394, 1.0f,
0.825250, -0.000452, -0.825250, 1.0f,
0.446622, -0.000452, -1.078241, 1.0f,
0.648395, -0.000452, -0.970391, 1.0f,
-0.446620, -0.000452, -1.078241, 1.0f,
0.446622, -0.000452, -1.078241, 1.0f,
-0.825249, -0.000452, -0.825251, 1.0f,
-0.825249, -0.000452, -0.825251, 1.0f,
0.446622, -0.000452, -1.078241, 1.0f,
-1.078240, -0.000452, -0.446623, 1.0f,
-0.446622, -0.000452, 1.078241, 1.0f,
1.078241, -0.000452, 0.446622, 1.0f,
0.000000, -0.000452, 1.167079, 1.0f,
0.000000, -0.000452, 1.167079, 1.0f,
1.078241, -0.000452, 0.446622, 1.0f,
0.446622, -0.000452, 1.078241, 1.0f,
0.446622, -0.000452, 1.078241, 1.0f,
1.078241, -0.000452, 0.446622, 1.0f,
0.825250, -0.000452, 0.825250, 1.0f,
1.078241, -0.000452, -0.446622, 1.0f,
1.078241, -0.000452, 0.446622, 1.0f,
0.825250, -0.000452, -0.825250, 1.0f,
0.825250, -0.000452, -0.825250, 1.0f,
1.078241, -0.000452, 0.446622, 1.0f,
0.446622, -0.000452, -1.078241, 1.0f,
-1.078240, -0.000452, -0.446623, 1.0f,
-0.446622, -0.000452, 1.078241, 1.0f,
-1.078241, -0.000452, 0.446621, 1.0f,
0.446622, -0.000452, -1.078241, 1.0f,
1.078241, -0.000452, 0.446622, 1.0f,
-1.078240, -0.000452, -0.446623, 1.0f,
-0.446620, -0.000452, -1.078241, 1.0f,
-0.227684, 0.000452, -1.144655, 1.0f,
-0.227684, -0.000452, -1.144655, 1.0f,
-0.227684, -0.000452, -1.144655, 1.0f,
0.000000, 0.000452, -1.167079, 1.0f,
0.000000, -0.000452, -1.167079, 1.0f,
-0.227684, 0.000452, -1.144655, 1.0f,
0.227686, 0.000452, -1.144654, 1.0f,
0.000000, 0.000452, -1.167079, 1.0f,
0.227686, 0.000452, -1.144654, 1.0f,
0.648395, 0.000452, -0.970391, 1.0f,
0.446622, 0.000452, -1.078241, 1.0f,
0.648395, 0.000452, -0.970391, 1.0f,
0.970391, 0.000452, -0.648394, 1.0f,
0.825250, 0.000452, -0.825250, 1.0f,
0.970391, 0.000452, -0.648394, 1.0f,
0.648395, 0.000452, -0.970391, 1.0f,
1.078241, 0.000452, -0.446622, 1.0f,
1.078241, 0.000452, -0.446622, 1.0f,
0.648395, 0.000452, -0.970391, 1.0f,
1.144654, 0.000452, -0.227686, 1.0f,
1.144654, 0.000452, -0.227686, 1.0f,
1.144654, 0.000452, 0.227686, 1.0f,
1.167079, 0.000452, 0.000000, 1.0f,
1.144654, 0.000452, 0.227686, 1.0f,
1.144654, 0.000452, -0.227686, 1.0f,
1.078241, 0.000452, 0.446622, 1.0f,
1.078241, 0.000452, 0.446622, 1.0f,
1.144654, 0.000452, -0.227686, 1.0f,
0.970391, 0.000452, 0.648394, 1.0f,
0.970391, 0.000452, 0.648394, 1.0f,
0.227686, 0.000452, 1.144654, 1.0f,
0.825250, 0.000452, 0.825250, 1.0f,
0.825250, 0.000452, 0.825250, 1.0f,
0.227686, 0.000452, 1.144654, 1.0f,
0.648394, 0.000452, 0.970391, 1.0f,
0.648394, 0.000452, 0.970391, 1.0f,
0.227686, 0.000452, 1.144654, 1.0f,
0.446622, 0.000452, 1.078241, 1.0f,
0.227686, 0.000452, 1.144654, 1.0f,
-0.227686, 0.000452, 1.144654, 1.0f,
0.000000, 0.000452, 1.167079, 1.0f,
-0.227686, 0.000452, 1.144654, 1.0f,
-0.648395, 0.000452, 0.970391, 1.0f,
-0.446622, 0.000452, 1.078241, 1.0f,
-0.648395, 0.000452, 0.970391, 1.0f,
-0.970391, 0.000452, 0.648394, 1.0f,
-0.825250, 0.000452, 0.825249, 1.0f,
-0.970391, 0.000452, 0.648394, 1.0f,
-1.144654, 0.000452, 0.227685, 1.0f,
-1.078241, 0.000452, 0.446621, 1.0f,
-1.144654, 0.000452, 0.227685, 1.0f,
-1.144654, 0.000452, -0.227687, 1.0f,
-1.167079, 0.000452, -0.000001, 1.0f,
-1.144654, 0.000452, -0.227687, 1.0f,
-0.970390, 0.000452, -0.648396, 1.0f,
-1.078240, 0.000452, -0.446623, 1.0f,
-0.970390, 0.000452, -0.648396, 1.0f,
-0.227684, 0.000452, -1.144655, 1.0f,
-0.825249, 0.000452, -0.825251, 1.0f,
-0.825249, 0.000452, -0.825251, 1.0f,
-0.227684, 0.000452, -1.144655, 1.0f,
-0.648393, 0.000452, -0.970392, 1.0f,
-0.648393, 0.000452, -0.970392, 1.0f,
-0.227684, 0.000452, -1.144655, 1.0f,
-0.446620, 0.000452, -1.078241, 1.0f,
-0.227684, 0.000452, -1.144655, 1.0f,
0.648395, 0.000452, -0.970391, 1.0f,
0.227686, 0.000452, -1.144654, 1.0f,
0.227686, 0.000452, 1.144654, 1.0f,
-1.144654, 0.000452, 0.227685, 1.0f,
-0.227686, 0.000452, 1.144654, 1.0f,
-0.227686, 0.000452, 1.144654, 1.0f,
-1.144654, 0.000452, 0.227685, 1.0f,
-0.648395, 0.000452, 0.970391, 1.0f,
-0.648395, 0.000452, 0.970391, 1.0f,
-1.144654, 0.000452, 0.227685, 1.0f,
-0.970391, 0.000452, 0.648394, 1.0f,
-1.144654, 0.000452, 0.227685, 1.0f,
-0.227684, 0.000452, -1.144655, 1.0f,
-1.144654, 0.000452, -0.227687, 1.0f,
-1.144654, 0.000452, -0.227687, 1.0f,
-0.227684, 0.000452, -1.144655, 1.0f,
-0.970390, 0.000452, -0.648396, 1.0f,
-0.227684, 0.000452, -1.144655, 1.0f,
1.144654, 0.000452, -0.227686, 1.0f,
0.648395, 0.000452, -0.970391, 1.0f,
1.144654, 0.000452, -0.227686, 1.0f,
0.227686, 0.000452, 1.144654, 1.0f,
0.970391, 0.000452, 0.648394, 1.0f,
-0.227684, 0.000452, -1.144655, 1.0f,
-1.144654, 0.000452, 0.227685, 1.0f,
1.144654, 0.000452, -0.227686, 1.0f};
		float vertexNormals[] = {0.0980, 0.0000, -0.9952, 0.0f,
0.0980, 0.0000, -0.9952, 0.0f,
0.0980, 0.0000, -0.9952, 0.0f,
0.2903, 0.0000, -0.9569, 0.0f,
0.2903, 0.0000, -0.9569, 0.0f,
0.2903, 0.0000, -0.9569, 0.0f,
0.4714, 0.0000, -0.8819, 0.0f,
0.4714, 0.0000, -0.8819, 0.0f,
0.4714, 0.0000, -0.8819, 0.0f,
0.6344, 0.0000, -0.7730, 0.0f,
0.6344, 0.0000, -0.7730, 0.0f,
0.6344, 0.0000, -0.7730, 0.0f,
0.7730, 0.0000, -0.6344, 0.0f,
0.7730, 0.0000, -0.6344, 0.0f,
0.7730, 0.0000, -0.6344, 0.0f,
0.8819, 0.0000, -0.4714, 0.0f,
0.8819, 0.0000, -0.4714, 0.0f,
0.8819, 0.0000, -0.4714, 0.0f,
0.9569, 0.0000, -0.2903, 0.0f,
0.9569, 0.0000, -0.2903, 0.0f,
0.9569, 0.0000, -0.2903, 0.0f,
0.9952, 0.0000, -0.0980, 0.0f,
0.9952, 0.0000, -0.0980, 0.0f,
0.9952, 0.0000, -0.0980, 0.0f,
0.9952, 0.0000, 0.0980, 0.0f,
0.9952, 0.0000, 0.0980, 0.0f,
0.9952, 0.0000, 0.0980, 0.0f,
0.9569, 0.0000, 0.2903, 0.0f,
0.9569, 0.0000, 0.2903, 0.0f,
0.9569, 0.0000, 0.2903, 0.0f,
0.8819, 0.0000, 0.4714, 0.0f,
0.8819, 0.0000, 0.4714, 0.0f,
0.8819, 0.0000, 0.4714, 0.0f,
0.7730, 0.0000, 0.6344, 0.0f,
0.7730, 0.0000, 0.6344, 0.0f,
0.7730, 0.0000, 0.6344, 0.0f,
0.6344, 0.0000, 0.7730, 0.0f,
0.6344, 0.0000, 0.7730, 0.0f,
0.6344, 0.0000, 0.7730, 0.0f,
0.4714, 0.0000, 0.8819, 0.0f,
0.4714, 0.0000, 0.8819, 0.0f,
0.4714, 0.0000, 0.8819, 0.0f,
0.2903, 0.0000, 0.9569, 0.0f,
0.2903, 0.0000, 0.9569, 0.0f,
0.2903, 0.0000, 0.9569, 0.0f,
0.0980, 0.0000, 0.9952, 0.0f,
0.0980, 0.0000, 0.9952, 0.0f,
0.0980, 0.0000, 0.9952, 0.0f,
-0.0980, 0.0000, 0.9952, 0.0f,
-0.0980, 0.0000, 0.9952, 0.0f,
-0.0980, 0.0000, 0.9952, 0.0f,
-0.2903, 0.0000, 0.9569, 0.0f,
-0.2903, 0.0000, 0.9569, 0.0f,
-0.2903, 0.0000, 0.9569, 0.0f,
-0.4714, 0.0000, 0.8819, 0.0f,
-0.4714, 0.0000, 0.8819, 0.0f,
-0.4714, 0.0000, 0.8819, 0.0f,
-0.6344, 0.0000, 0.7730, 0.0f,
-0.6344, 0.0000, 0.7730, 0.0f,
-0.6344, 0.0000, 0.7730, 0.0f,
-0.7730, 0.0000, 0.6344, 0.0f,
-0.7730, 0.0000, 0.6344, 0.0f,
-0.7730, 0.0000, 0.6344, 0.0f,
-0.8819, 0.0000, 0.4714, 0.0f,
-0.8819, 0.0000, 0.4714, 0.0f,
-0.8819, 0.0000, 0.4714, 0.0f,
-0.9569, 0.0000, 0.2903, 0.0f,
-0.9569, 0.0000, 0.2903, 0.0f,
-0.9569, 0.0000, 0.2903, 0.0f,
-0.9952, -0.0000, 0.0980, 0.0f,
-0.9952, -0.0000, 0.0980, 0.0f,
-0.9952, -0.0000, 0.0980, 0.0f,
-0.9952, 0.0000, -0.0980, 0.0f,
-0.9952, 0.0000, -0.0980, 0.0f,
-0.9952, 0.0000, -0.0980, 0.0f,
-0.9569, 0.0000, -0.2903, 0.0f,
-0.9569, 0.0000, -0.2903, 0.0f,
-0.9569, 0.0000, -0.2903, 0.0f,
-0.8819, 0.0000, -0.4714, 0.0f,
-0.8819, 0.0000, -0.4714, 0.0f,
-0.8819, 0.0000, -0.4714, 0.0f,
-0.7730, 0.0000, -0.6344, 0.0f,
-0.7730, 0.0000, -0.6344, 0.0f,
-0.7730, 0.0000, -0.6344, 0.0f,
-0.6344, 0.0000, -0.7730, 0.0f,
-0.6344, 0.0000, -0.7730, 0.0f,
-0.6344, 0.0000, -0.7730, 0.0f,
-0.4714, 0.0000, -0.8819, 0.0f,
-0.4714, 0.0000, -0.8819, 0.0f,
-0.4714, 0.0000, -0.8819, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.2903, 0.0000, -0.9569, 0.0f,
-0.2903, 0.0000, -0.9569, 0.0f,
-0.2903, 0.0000, -0.9569, 0.0f,
-0.0980, 0.0000, -0.9952, 0.0f,
-0.0980, 0.0000, -0.9952, 0.0f,
-0.0980, 0.0000, -0.9952, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0980, 0.0000, -0.9952, 0.0f,
0.0980, 0.0000, -0.9952, 0.0f,
0.0980, 0.0000, -0.9952, 0.0f,
0.2903, 0.0000, -0.9569, 0.0f,
0.2903, 0.0000, -0.9569, 0.0f,
0.2903, 0.0000, -0.9569, 0.0f,
0.4714, 0.0000, -0.8819, 0.0f,
0.4714, 0.0000, -0.8819, 0.0f,
0.4714, 0.0000, -0.8819, 0.0f,
0.6344, 0.0000, -0.7730, 0.0f,
0.6344, 0.0000, -0.7730, 0.0f,
0.6344, 0.0000, -0.7730, 0.0f,
0.7730, 0.0000, -0.6344, 0.0f,
0.7730, 0.0000, -0.6344, 0.0f,
0.7730, 0.0000, -0.6344, 0.0f,
0.8819, 0.0000, -0.4714, 0.0f,
0.8819, 0.0000, -0.4714, 0.0f,
0.8819, 0.0000, -0.4714, 0.0f,
0.9569, 0.0000, -0.2903, 0.0f,
0.9569, 0.0000, -0.2903, 0.0f,
0.9569, 0.0000, -0.2903, 0.0f,
0.9952, 0.0000, -0.0980, 0.0f,
0.9952, 0.0000, -0.0980, 0.0f,
0.9952, 0.0000, -0.0980, 0.0f,
0.9952, 0.0000, 0.0980, 0.0f,
0.9952, 0.0000, 0.0980, 0.0f,
0.9952, 0.0000, 0.0980, 0.0f,
0.9569, 0.0000, 0.2903, 0.0f,
0.9569, 0.0000, 0.2903, 0.0f,
0.9569, 0.0000, 0.2903, 0.0f,
0.8819, 0.0000, 0.4714, 0.0f,
0.8819, 0.0000, 0.4714, 0.0f,
0.8819, 0.0000, 0.4714, 0.0f,
0.7730, 0.0000, 0.6344, 0.0f,
0.7730, 0.0000, 0.6344, 0.0f,
0.7730, 0.0000, 0.6344, 0.0f,
0.6344, 0.0000, 0.7730, 0.0f,
0.6344, 0.0000, 0.7730, 0.0f,
0.6344, 0.0000, 0.7730, 0.0f,
0.4714, 0.0000, 0.8819, 0.0f,
0.4714, 0.0000, 0.8819, 0.0f,
0.4714, 0.0000, 0.8819, 0.0f,
0.2903, 0.0000, 0.9569, 0.0f,
0.2903, 0.0000, 0.9569, 0.0f,
0.2903, 0.0000, 0.9569, 0.0f,
0.0980, 0.0000, 0.9952, 0.0f,
0.0980, 0.0000, 0.9952, 0.0f,
0.0980, 0.0000, 0.9952, 0.0f,
-0.0980, 0.0000, 0.9952, 0.0f,
-0.0980, 0.0000, 0.9952, 0.0f,
-0.0980, 0.0000, 0.9952, 0.0f,
-0.2903, 0.0000, 0.9569, 0.0f,
-0.2903, 0.0000, 0.9569, 0.0f,
-0.2903, 0.0000, 0.9569, 0.0f,
-0.4714, 0.0000, 0.8819, 0.0f,
-0.4714, 0.0000, 0.8819, 0.0f,
-0.4714, 0.0000, 0.8819, 0.0f,
-0.6344, 0.0000, 0.7730, 0.0f,
-0.6344, 0.0000, 0.7730, 0.0f,
-0.6344, 0.0000, 0.7730, 0.0f,
-0.7730, 0.0000, 0.6344, 0.0f,
-0.7730, 0.0000, 0.6344, 0.0f,
-0.7730, 0.0000, 0.6344, 0.0f,
-0.8819, 0.0000, 0.4714, 0.0f,
-0.8819, 0.0000, 0.4714, 0.0f,
-0.8819, 0.0000, 0.4714, 0.0f,
-0.9569, 0.0000, 0.2903, 0.0f,
-0.9569, 0.0000, 0.2903, 0.0f,
-0.9569, 0.0000, 0.2903, 0.0f,
-0.9952, -0.0000, 0.0980, 0.0f,
-0.9952, -0.0000, 0.0980, 0.0f,
-0.9952, -0.0000, 0.0980, 0.0f,
-0.9952, 0.0000, -0.0980, 0.0f,
-0.9952, 0.0000, -0.0980, 0.0f,
-0.9952, 0.0000, -0.0980, 0.0f,
-0.9569, 0.0000, -0.2903, 0.0f,
-0.9569, 0.0000, -0.2903, 0.0f,
-0.9569, 0.0000, -0.2903, 0.0f,
-0.8819, 0.0000, -0.4714, 0.0f,
-0.8819, 0.0000, -0.4714, 0.0f,
-0.8819, 0.0000, -0.4714, 0.0f,
-0.7730, 0.0000, -0.6344, 0.0f,
-0.7730, 0.0000, -0.6344, 0.0f,
-0.7730, 0.0000, -0.6344, 0.0f,
-0.6344, 0.0000, -0.7730, 0.0f,
-0.6344, 0.0000, -0.7730, 0.0f,
-0.6344, 0.0000, -0.7730, 0.0f,
-0.4714, 0.0000, -0.8819, 0.0f,
-0.4714, 0.0000, -0.8819, 0.0f,
-0.4714, 0.0000, -0.8819, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.0000, -1.0000, -0.0000, 0.0f,
-0.2903, 0.0000, -0.9569, 0.0f,
-0.2903, 0.0000, -0.9569, 0.0f,
-0.2903, 0.0000, -0.9569, 0.0f,
-0.0980, 0.0000, -0.9952, 0.0f,
-0.0980, 0.0000, -0.9952, 0.0f,
-0.0980, 0.0000, -0.9952, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f,
0.0000, 1.0000, 0.0000, 0.0f}; ;
			float texCoords[] = {1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
0.990393, 0.597545,
0.009607, 0.402455,
0.597545, 0.009607,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
1.000000, 0.000000,
0.000000, 0.000000,
0.000000, 1.000000,
0.990393, 0.597545,
0.009607, 0.402455,
0.597545, 0.009607,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
0.402456, 0.990393,
0.597545, 0.990393,
0.500000, 1.000000,
0.597545, 0.990393,
0.402456, 0.990393,
0.691342, 0.961940,
0.691342, 0.961940,
0.402456, 0.990393,
0.777785, 0.915735,
0.777785, 0.915735,
0.915735, 0.777785,
0.853553, 0.853553,
0.915735, 0.777785,
0.990393, 0.597545,
0.961940, 0.691342,
0.990393, 0.597545,
0.990393, 0.402455,
1.000000, 0.500000,
0.990393, 0.402455,
0.990393, 0.597545,
0.961940, 0.308658,
0.961940, 0.308658,
0.990393, 0.597545,
0.915735, 0.222215,
0.915735, 0.222215,
0.597545, 0.009607,
0.853553, 0.146447,
0.853553, 0.146447,
0.597545, 0.009607,
0.777785, 0.084265,
0.777785, 0.084265,
0.597545, 0.009607,
0.691342, 0.038060,
0.597545, 0.009607,
0.402455, 0.009607,
0.500000, 0.000000,
0.402455, 0.009607,
0.222215, 0.084265,
0.308658, 0.038060,
0.222215, 0.084265,
0.084265, 0.222215,
0.146446, 0.146447,
0.084265, 0.222215,
0.009607, 0.402455,
0.038060, 0.308659,
0.009607, 0.402455,
0.009607, 0.597546,
0.000000, 0.500000,
0.009607, 0.597546,
0.009607, 0.402455,
0.038060, 0.691342,
0.038060, 0.691342,
0.009607, 0.402455,
0.084266, 0.777786,
0.084266, 0.777786,
0.222215, 0.915735,
0.146447, 0.853554,
0.222215, 0.915735,
0.402456, 0.990393,
0.308659, 0.961940,
0.777785, 0.915735,
0.402456, 0.990393,
0.915735, 0.777785,
0.915735, 0.777785,
0.402456, 0.990393,
0.990393, 0.597545,
0.597545, 0.009607,
0.009607, 0.402455,
0.402455, 0.009607,
0.402455, 0.009607,
0.009607, 0.402455,
0.222215, 0.084265,
0.222215, 0.084265,
0.009607, 0.402455,
0.084265, 0.222215,
0.084266, 0.777786,
0.009607, 0.402455,
0.222215, 0.915735,
0.222215, 0.915735,
0.009607, 0.402455,
0.402456, 0.990393,
0.990393, 0.597545,
0.597545, 0.009607,
0.915735, 0.222215,
0.402456, 0.990393,
0.009607, 0.402455,
0.990393, 0.597545,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
1.000000, 0.000000,
0.000000, 1.000000,
1.000000, 1.000000,
0.402456, 0.990393,
0.597545, 0.990393,
0.500000, 1.000000,
0.597545, 0.990393,
0.777785, 0.915735,
0.691342, 0.961940,
0.777785, 0.915735,
0.915735, 0.777785,
0.853553, 0.853553,
0.915735, 0.777785,
0.777785, 0.915735,
0.961940, 0.691342,
0.961940, 0.691342,
0.777785, 0.915735,
0.990393, 0.597545,
0.990393, 0.597545,
0.990393, 0.402455,
1.000000, 0.500000,
0.990393, 0.402455,
0.990393, 0.597545,
0.961940, 0.308658,
0.961940, 0.308658,
0.990393, 0.597545,
0.915735, 0.222215,
0.915735, 0.222215,
0.597545, 0.009607,
0.853553, 0.146447,
0.853553, 0.146447,
0.597545, 0.009607,
0.777785, 0.084265,
0.777785, 0.084265,
0.597545, 0.009607,
0.691342, 0.038060,
0.597545, 0.009607,
0.402455, 0.009607,
0.500000, 0.000000,
0.402455, 0.009607,
0.222215, 0.084265,
0.308658, 0.038060,
0.222215, 0.084265,
0.084265, 0.222215,
0.146446, 0.146447,
0.084265, 0.222215,
0.009607, 0.402455,
0.038060, 0.308659,
0.009607, 0.402455,
0.009607, 0.597546,
0.000000, 0.500000,
0.009607, 0.597546,
0.084266, 0.777786,
0.038060, 0.691342,
0.084266, 0.777786,
0.402456, 0.990393,
0.146447, 0.853554,
0.146447, 0.853554,
0.402456, 0.990393,
0.222215, 0.915735,
0.222215, 0.915735,
0.402456, 0.990393,
0.308659, 0.961940,
0.402456, 0.990393,
0.777785, 0.915735,
0.597545, 0.990393,
0.597545, 0.009607,
0.009607, 0.402455,
0.402455, 0.009607,
0.402455, 0.009607,
0.009607, 0.402455,
0.222215, 0.084265,
0.222215, 0.084265,
0.009607, 0.402455,
0.084265, 0.222215,
0.009607, 0.402455,
0.402456, 0.990393,
0.009607, 0.597546,
0.009607, 0.597546,
0.402456, 0.990393,
0.084266, 0.777786,
0.402456, 0.990393,
0.990393, 0.597545,
0.777785, 0.915735,
0.990393, 0.597545,
0.597545, 0.009607,
0.915735, 0.222215,
0.402456, 0.990393,
0.009607, 0.402455,
0.990393, 0.597545};
		}