/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Armure.h
 * Author: baptiste
 *
 * Created on 26 novembre 2016, 11:14
 */

#include "Equipement.h"

using namespace std;

#ifndef ARMURE_H
#define ARMURE_H

enum class TypeArmure
     {
          Casque,
          Epaules,
          Torse,
          Gants,
          Jambes,
          Bottes             
     };


class Armure : public Equipement{
public:
    Armure(string nom_, TypeArmure type_, int niveau_, int ptsArmure_);
    Armure(const Armure& orig);
    virtual ~Armure();
    int getPtsArmure() const;
    TypeArmure getType() const;
    string getTypeS() const;
    void affiche() const;
    
private:
    int ptsArmure;
    TypeArmure type;

};

#endif /* ARMURE_H */

