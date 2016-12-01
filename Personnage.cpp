/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Personnage.cpp
 * Author: baptiste
 * 
 * Created on 25 novembre 2016, 22:50
 */

#include "Personnage.h"

Personnage::Personnage(string nom_, int pdv_) : nom(nom_), pdv(pdv_) {
}

Personnage::Personnage(const Personnage& orig) {
}

Personnage::~Personnage() {
}

string Personnage::getNom() {
    return nom;
}

int Personnage::getPdv() {
    return pdv;
}


