#include "patient.h"
#include <iostream>
using namespace std;

// Constructeur
Patient::Patient(string nom, string prenom, int age, string maladie, int num_cham)
    : Personne(nom, prenom, age) {
    this->maladie = maladie;
    this->num_cham = num_cham;
}

// Setters
void Patient::setmaladie(string maladie) {
    this->maladie = maladie;
}

void Patient::setnum_cham(int num_cham) {
    this->num_cham = num_cham;
}

// Getters
string Patient::getmaladie() {
    return maladie;
}

int Patient::getnum_cham() {
    return num_cham;
}

void Patient::affiche_infos() {
    Personne::affiche_infos();
    cout << "Maladie : " << maladie << ", Numero de chambre : " << num_cham << endl;
}
