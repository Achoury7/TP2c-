#pragma once
#include "cvec3dgit34.cpp"
#include <stdlib.h>
#include <iostream>
#include <string.h>

//Creation de la classe CVect3D
class CVect3D {

	float  n_u, n_v, n_w

private:
	CVect3D(float n_u, float n_v, float n_w) ;

	friend bool CVect3D::coincidence3d(CVect3D);

};

//Creation constantes membres u , v et w
CVect3D(const n_u);
CVect3D(const n_v);
CVect3D(const n_w);


void afficheLog()const;
