/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Personnage.h
 * Author: baptiste
 *
 * Created on 25 novembre 2016, 22:50
 */

#include <string>

using namespace std;

#ifndef PERSONNAGE_H
#define PERSONNAGE_H

class Personnage {
protected:
    Personnage(string nom_, int pdv_);
    Personnage(const Personnage& orig);
    virtual ~Personnage();
   
public:
    string getNom();
    int getPdv();

private:
    string nom;
    int pdv;
};

#endif /* PERSONNAGE_H */

