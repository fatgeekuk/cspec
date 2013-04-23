#include "../headers/vectors.h"

vec3 *vec3Set(double x, double y, double z, vec3 *A){
	A->x = x;
	A->y = y;
	A->z = z;
	return A;
};

int vec3Equal(vec3 *a, vec3 *b){
	if (a->x != b->x) return 0;
	if (a->y != b->y) return 0;
	if (a->z != b->z) return 0;
	return -1;
};

vec3 *vec3Add(vec3 *a, vec3 *b, vec3 *c){
	c->x = a->x + b->x;
	c->y = a->y + b->y;
	c->z = a->z + b->z;
	return c;
};

vec3 *vec3Sub(vec3 *a, vec3 *b, vec3 *c){
	c->x = a->x - b->x;
	c->y = a->y - b->y;
	c->z = a->z - b->z;
	return c;
};

vec3 *vec3Scale(double s, vec3 *a, vec3 *b){
	b->x = s * a->x;
	b->y = s * a->y;
	b->z = s * a->z;
	return b;
}