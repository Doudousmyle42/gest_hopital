#include "medecin.h"
#include <iostream>
using namespace std;

 //constructeur

 Medecin::Medecin(string nom, string prenom, int age, string specialite, int salaire)
    : Personne(nom, prenom, age) {
    this->specialite = specialite;
    this->salaire = salaire;
}
 /*Medecin::Medecin(string nom, string prenom, int age, string specialite, int salaire) {
    this->nom = nom;
    this->prenom = prenom;

    if (age <= 0) {
        cout << "l'age doit etre superieur a 0" << endl;
    } else {
        this->age = age;
    }

    this->specialite = specialite;
    this->salaire = salaire;
}*/
 //setters
 void Medecin::setspecialite(string specialite){
    this -> specialite = specialite;
 }

 void Medecin::setsalaire(int salaire) {
    this -> salaire = salaire;
 }

 //getters
  string Medecin::getspecialite(){
    return specialite;
 }



void Medecin::affiche_infos() {
    Personne::affiche_infos();
    cout << "Specialite : " << specialite << ", Salaire : " << salaire << endl;
}
