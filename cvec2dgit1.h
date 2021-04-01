#pragma once
#include "cvec2dgit1.cpp"
#include <stdlib.h>
#include <iostream>
#include <string.h>

//Creation de la classe CVect2D
class CVect2D {

	float  n_u, n_v;

private:
	CVect2D(float n_u, float n_v);

	friend bool CVect2D::coincidence2d(CVect2D);

};

//Creation constantes membres u et v
CVect2D(const n_u);
CVect2D(const n_v)

void afficheLog()const;

////////-----/////
//Version 2

class CVect2D {

	float  n_u, n_v;

public:
	CVect2D(float n_u, float n_v);

	friend bool CVect2D::coincidence2d(CVect2D);

};