#include "Plano.h"


Plano::Plano(vec3 p1, vec3 p2, vec3 p3, float r, float g, float b) {
	vec3 p1p2 = p1 - p2;
	vec3 p1p3 = p1 - p3;
	vec3 abc = cross(p1p2, p1p3);
	this->a = abc.x;
	this->b = abc.y;
	this->c = abc.z;
	this->d = -(a * p1.x + b * p1.y + c * p1.z);

	this->r = r;
	this->g = g;
	this->b = b;
	this->difusa = 1;
	this->especular = 1;
	this->ambiente = 1;
}
