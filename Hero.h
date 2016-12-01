/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hero.h
 * Author: baptiste
 *
 * Created on 26 novembre 2016, 10:41
 */
#include "Personnage.h"
#include "Armure.h"

using namespace std;

#ifndef HERO_H
#define HERO_H

class Hero : public Personnage {
public:
    Hero(string nom_, int pdv_);
    Hero(const Hero& orig);
    virtual ~Hero();
    
    Equipement* Equiper(Equipement* equipement);
    
    Armure* getCasque();
    Armure* getEpaules();
    Armure* getTorse();
    Armure* getGants();
    Armure* getJambes();
    Armure* getBottes();
    
    void setCasque(Armure* casque_);
    void setEpaules(Armure* epaules_);
    void setTorse(Armure* torse_);
    void setGants(Armure* gants_);
    void setJambes(Armure* jambes_);
    void setBottes(Armure* bottes_);
    
private:
    Armure *casque;
    Armure *epaules;
    Armure *torse;
    Armure *gants;
    Armure *jambes;
    Armure *bottes;
};

#endif /* HERO_H */

