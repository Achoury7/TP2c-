#include <iostream>
#include <string.h>
#include "cvec3dgit34.h"
#include <stdlib.h>



//Creation constructeur
CVect3D::CVect3D(const n_u)
{
	this->n_u = a.n_u;
	this->n_v = b.n_u;
	this->n_w = c.n_u;

};



//Creation constructeur de copie
float CVect3D::getU()const
{
	return n_u;
}

float CVect3D::getV()const
{
	return n_v;
}

float CVect3D::getW()const
{
	return n_w;
}


void CVect3D::setU1(float n_u)
{
	this->n_u = n_u;
}


void CVect3D::setV1(float n_v)
{
	this->n_v = n_v;
}

void CVect3D::setW1(float n_W)
{
	this->n_w = n_w;
}


void CVect3D::setU2(float n_uu)
{
	this->n_uu = n_uu;
}


void CVect3D::setV2(float n_vv)
{
	this->n_vv = n_vv;
}

void CVect3D::setW2(float n_ww)
{
	this->n_ww = n_ww;
}


//Ajout d'operations usuelles sur un vecteur quelqu'conque
void CVect3D::setW(float n_z){

this->(n_u + n_v) + (n_v + n_w) * (n_u + n_w) = n_z;

}

void CVect3D::setW(float n_zz){

	this->(n_uu + n_vv) + (n_vv + n_ww) * (n_uu + n_ww) = n_zz;

}


//methode amie indépendande coincide3d,
//on teste pour savoir si les deux vecteurs sont identiques
bool CVect3D::coincidence3d(CVect3D) {


		if n_z = n_zz

			return true;

		else

			return false;

}

//Methode affiche
void afficheLog(CVect3D) {

	printf("Valeur du vecteur U : %d", n_s);
	printf("Valeur du vecteur V : %d", n_t);
	printf("Valeur du vecteur W : %d", n_t);

}}