/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Equipement.h
 * Author: baptiste
 *
 * Created on 26 novembre 2016, 11:06
 */

#include <string>

using namespace std;

#ifndef EQUIPEMENT_H
#define EQUIPEMENT_H

class Equipement {
public:
    Equipement(string nom_, int niveau_);
    Equipement(const Equipement& orig);
    virtual ~Equipement();
    string getNom() const;
    int getNiveau() const;
    
private:
    string nom;
    int niveau;

};

#endif /* EQUIPEMENT_H */

