/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Armure.cpp
 * Author: baptiste
 * 
 * Created on 26 novembre 2016, 11:14
 */

#include "Armure.h"
#include <iostream>

Armure::Armure(string nom_, TypeArmure type_, int niveau_, int ptsArmure_): Equipement(nom_, niveau_), type(type_), ptsArmure(ptsArmure_) {
}

Armure::Armure(const Armure& orig) : Equipement(orig){
}

Armure::~Armure() {
}

int Armure::getPtsArmure() const{
    return ptsArmure;
}

TypeArmure Armure::getType() const{
    return type;
}

string Armure::getTypeS() const {
    switch(type){
        case(TypeArmure::Casque):
            return "Casque";
            break;
        case(TypeArmure::Epaules):
            return "Epaules";
            break;
        case(TypeArmure::Torse):
            return "Torse";
            break;
        case(TypeArmure::Gants):
            return "Gants";
            break;
        case(TypeArmure::Jambes):
            return "Jambes";
            break;
        case(TypeArmure::Bottes):
            return "Bottes";
            break;
            
    }
}


void Armure::affiche() const {
    cout << getTypeS() << " : " << getNom() << " | niveau " << getNiveau() << " | " << getPtsArmure() << " points d'armure" << endl;
} 





