/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Batiment.cpp
 * Author: baptiste
 * 
 * Created on 25 novembre 2016, 18:24
 */

#include <iostream>

#include "Batiment.h"

Batiment::Batiment(string nom_, string description_, int cout_) : nom(nom_), niveau(1), description(description_), cout_amelioration(cout_)
{}

Batiment::Batiment(const Batiment& orig) {
}

Batiment::~Batiment() {
}

string Batiment::getNom(){
    return nom;
}

string Batiment::getDescription() {
    return description;
}

int Batiment::getNiveau() {
    return niveau;
}

int Batiment::getCout_amelioration() {
    return cout_amelioration;
}


void Batiment::affiche() {
    cout << getNom() << " : " << getDescription() << endl;
    cout << "Niveau : " << getNiveau() << endl;
    cout << "Amélioration : " << getCout_amelioration() << " pièces d'or." << endl;
}




