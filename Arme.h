/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Arme.h
 * Author: baptiste
 *
 * Created on 26 novembre 2016, 11:21
 */

#include "Equipement.h"
#include <string>

using namespace std;

#ifndef ARME_H
#define ARME_H

class Arme : public Equipement{
public:
    Arme(string nom_, int niveau, int degat_);
    Arme(const Arme& orig);
    virtual ~Arme();
    int getDegat() const;
    void setDegat(int degat_);
    
private:
    int degat;

};

#endif /* ARME_H */

