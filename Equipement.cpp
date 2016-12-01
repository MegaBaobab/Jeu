/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Equipement.cpp
 * Author: baptiste
 * 
 * Created on 26 novembre 2016, 11:06
 */

#include "Equipement.h"

Equipement::Equipement(string nom_, int niveau_) : nom(nom_), niveau(niveau_){
}

Equipement::Equipement(const Equipement& orig) {
}

Equipement::~Equipement() {
}

string Equipement::getNom() const {
    return nom;
}

int Equipement::getNiveau() const {
    return niveau;
}

