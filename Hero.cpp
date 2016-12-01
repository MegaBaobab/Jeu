/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hero.cpp
 * Author: baptiste
 * 
 * Created on 26 novembre 2016, 10:41
 */
//, casque(NULL), epaules(NULL), torse(NULL), gants(NULL), jambes(NULL), bottes(NULL)
#include "Hero.h"
#include "Arme.h"
#include <typeinfo>
#include <iostream>

Hero::Hero(string nom_, int pdv_) : Personnage(nom_, pdv_){
    
}

Hero::Hero(const Hero& orig) : Personnage(orig) {
}

Hero::~Hero() {
}

Equipement* Hero::Equiper(Equipement* equipement) {
    Equipement *equip;
    if(typeid(equipement) == typeid(Arme)){
        // équiper la nouvelle arme et retourner l'ancienne
    }
    else {
        Armure *armure_temp = dynamic_cast<Armure*>(equipement);
        if (armure_temp == NULL) cout << "NULL" << endl;
        TypeArmure t = armure_temp->getType();
        switch(t){
            case(TypeArmure::Casque):
                equip = getCasque();
                setCasque(armure_temp);
                break;
            case(TypeArmure::Epaules):
                equip = getEpaules();
                setEpaules(armure_temp);
                break;
            case(TypeArmure::Torse):
                equip = getTorse();
                setTorse(armure_temp);
                break;
            case(TypeArmure::Gants):
                equip = getGants();
                setGants(armure_temp);
                break;
            case(TypeArmure::Jambes):
                equip = getJambes();
                setJambes(armure_temp);
                break;
            case(TypeArmure::Bottes):
                equip = getBottes();
                setBottes(armure_temp);
                break;
        }
        return equip; // A tester (pointeur ?)
    }
    
}





/////////////Getter/Setter///////////////////

Armure* Hero::getCasque() {
    return casque;
}

Armure* Hero::getEpaules() {
    return epaules;
}

Armure* Hero::getTorse() {
    return torse;
}

Armure* Hero::getGants() {
    return gants;
}

Armure* Hero::getJambes() {
    return jambes;
}

Armure*Hero::getBottes() {
    return bottes;
}

void Hero::setCasque(Armure* casque_) {
    if (casque_->getType() == TypeArmure::Casque){
        casque = casque_;
    }
}

void Hero::setEpaules(Armure* epaules_) {
    if (epaules_->getType() == TypeArmure::Epaules){
        epaules = epaules_;
    }
}

void Hero::setTorse(Armure* torse_) {
    if (torse_->getType() == TypeArmure::Torse){
        torse = torse_;
    }
}

void Hero::setGants(Armure* gants_) {
    if (gants_->getType() == TypeArmure::Gants){
       gants = gants_;
    }
}

void Hero::setJambes(Armure* jambes_) {
    if (jambes_->getType() == TypeArmure::Jambes){
        jambes = jambes_;
    }
}

void Hero::setBottes(Armure* bottes_) {
    if(bottes_->getType() == TypeArmure::Bottes){
        bottes = bottes_;
    }
}
