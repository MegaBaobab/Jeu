/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Inventaire.cpp
 * Author: baptiste
 * 
 * Created on 29 novembre 2016, 10:25
 */

#include "Inventaire.h"
#include "Armure.h"
#include "typeinfo"
#include "Arme.h"

using namespace std;

Inventaire::Inventaire() {
}

Inventaire::Inventaire(const Inventaire& orig) {
}

Inventaire::~Inventaire() {
}

void Inventaire::ajouterEqipements(Equipement *e) {
//    cout << e->getNom() << endl;
    equipements.push_back(e);
//    cout << equipements.front()->getNom() << endl;
}

void Inventaire::afficheInventaire(bool filtres[7]) { // A améliorer
    // indicateur de filtre
    int f = 0;    
    
    // itérateur sur le premier élément de la cible
    list<Equipement*>::iterator it = equipements.begin();
    
    //tant que l'on est pas arrivé à la fin de la liste
    while(it != equipements.end()){
    
        
        // l'équipement est une armure
        Armure *armure_temp = dynamic_cast<Armure*>(*it);
        if(armure_temp != NULL){
            switch(armure_temp->getType()){
                case TypeArmure::Casque:
                    f = 1;
                    break;
                case TypeArmure::Epaules:
                    f = 2;
                    break;
                case TypeArmure::Torse:
                    f = 3;
                    break;
                case TypeArmure::Gants:
                    f = 4;
                    break;
                case TypeArmure::Jambes:
                    f = 5;
                    break;
                case TypeArmure::Bottes:
                    f = 6;
                    break;
            }
            
            if(filtres[f]) armure_temp->affiche();
        }
        
        // l'équipement est une arme
        else {
        Arme *arme_temp = dynamic_cast<Arme*>(*it);
            cout << "Arme";
        }
        
        it++; // élément suivant
    }
}



