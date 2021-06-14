#pragma once
#include "../glm-0.9.9.8/glm-0.9.9.8/glm/glm.hpp"
using namespace glm;

class Camara
{
public:
	Camara(vec3 posicion, vec3 arriba, vec3 adelante, float fov_vertical, float fov_horizontal, float distanciaCamaraPantalla);
	~Camara();

	vec3 posicion; //punto de posicion de la camara

	vec3 arriba;
	vec3 adelante;
	vec3 derecha;

	float fov_vertical;
	float fov_horizontal;
	float distanciaCamaraPantalla;
};

