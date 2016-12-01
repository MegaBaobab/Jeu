/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Arme.cpp
 * Author: baptiste
 * 
 * Created on 26 novembre 2016, 11:21
 */

#include "Arme.h"

Arme::Arme(string nom_, int niveau_, int degat_) : Equipement(nom_, niveau_), degat(degat_) {
}

Arme::Arme(const Arme& orig) : Equipement(orig){
}

Arme::~Arme() {
}

int Arme::getDegat() const{
    return degat;
}

void Arme::setDegat(int degat_) {
    degat = degat_;
}

