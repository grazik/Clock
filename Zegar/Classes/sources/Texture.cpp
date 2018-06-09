#include "Classes/headers/Texture.h"

Texture::Texture(std::string path) {
	handler = Graphics::readTexture(path);
}