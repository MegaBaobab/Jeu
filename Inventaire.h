/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Inventaire.h
 * Author: baptiste
 *
 * Created on 29 novembre 2016, 10:25
 */
#include <string>
#include "Equipement.h"
#include <iostream>
#include <list>

#ifndef INVENTAIRE_H
#define INVENTAIRE_H

class Inventaire {
public:
    Inventaire();
    Inventaire(const Inventaire& orig);
    virtual ~Inventaire();
    
    void ajouterEqipements(Equipement *e);
    void afficheInventaire(bool filtres[7]);
    
private:
    list<Equipement*> equipements;
    
    
};

#endif /* INVENTAIRE_H */

