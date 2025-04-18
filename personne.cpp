#include "personne.h"
#include <iostream>
using namespace std;

 //constructeur
 Personne::Personne(string nom,string prenom,int age){
     this -> nom = nom;
     this -> prenom = prenom;
     if (age <= 0){
        cout << "l'age doit etre superieur a 0" << endl;
     }else{
        this -> age = age;
     }
 }

 //setters
 void Personne::setnom(string nom){
    this -> nom = nom;
 }

 void Personne::setprenom(string prenom) {
    this -> prenom = prenom;
 }

 void Personne::setage(int age){
    if (age <= 0){
        cout << "l'age doit etre superieur a 0" << endl;
    }else{
        this -> age = age;
    }
 }

 //getter
 string Personne::getnom(){
    return nom;
 }

 string Personne::getprenom(){
    return prenom;
 }

 int Personne::getage(){
    return age;
 };

void Personne::se_presenter() {
    cout << "Je suis " << nom << " " << prenom << ", j'ai " << age << " ans." << endl;
}

void Personne::affiche_infos() {
    cout << "nom : " << nom << ", prenom : " << prenom << ", age : " << age << endl;
}
