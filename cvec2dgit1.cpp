#include <iostream>
#include <string.h>
#include "cvec2dgit1.h"
#include <stdlib.h>



//Creation constructeur
CVect2D::CVect2D(const n_u)
{
	this->n_u = a.n_u;
	this->n_v = b.n_u;

};



//Creation constructeur de copie
float CVect2D::getU()const
{
	return n_u;
}

float CVect2D::getV()const
{
	return n_v;
}


void CVect2D::setU1(float n_u)
{
	this->n_u = n_u;
}


void CVect2D::setV1(float n_v)
{
	this->n_v = n_v;
}

void CVect2D::setU2(float n_uu)
{
	this->n_uu = n_uu;
}


void CVect2D::setV2(float n_vv)
{
	this->n_vv = n_vv;
}


//Ajout d'operations usuelles sur un vecteur quelqu'conque
void CVect2D::setW(float n_w)
	this->(n_u + n_v) + (n_uu + n_vv) = n_w;
}

void CVect2D::setR(float n_r)
this->(n_u - n_v) - (n_uu - n_vv) = n_r;
}



void CVect2D::setS(float n_s)
this->(n_u * n_uu) + (n_v * n_vv) = n_s;

void CVect2D::setT(float n_t)
this->(n_uuu* n_uuuu) + (n_vvv * n_vvvv) = n_t;
}

//methode amie indépendande coincide2d,
//on teste pour savoir si les deux vecteurs sont identiques
bool CVect2D::coincidence2d(CVect2D) {

	n_s = (n_u * n_uu) + (n_v * n_vv) 
	n_t = (n_uuu * n_uuuu) + (n_vvv * n_vvvv)
	
		if n_s = n_t

		return true;

	else

		return false;

}

//Methode affiche
void afficheLog(CVect2D) {

	printf("Valeur du vecteur U : %d", n_s);
	printf("Valeur du vecteur V : %d", n_t);


}

////-------////
//Version 2


CVect2D::~CVect2D()
{
	std::cout << n_u << std::endl;
	
 else
		
	cout << n_v << endl;

}



void CVect2D::afficheLog(float n_s) 
{
	cout << n_s << endl;
}

void CVect2D::afficheLog(float n_t)
{
	cout << n_t << endl;
}