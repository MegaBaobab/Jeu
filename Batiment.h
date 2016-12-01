/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Batiment.h
 * Author: baptiste
 *
 * Created on 25 novembre 2016, 18:24
 */

#include <string>

#ifndef BATIMENT_H
#define BATIMENT_H

using namespace std;

class Batiment {
public:
    Batiment(string nom_, string description_, int cout_);
    Batiment(const Batiment& orig);
    virtual ~Batiment();
    string getNom();
    string getDescription();
    int getNiveau();
    int getCout_amelioration();
    void affiche();
    
    
private:
    string nom;
    string description;
    int niveau;
    int cout_amelioration;
};

#endif /* BATIMENT_H */

