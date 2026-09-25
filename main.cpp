#include <iostream>
#include <string>
#include <windows.h>

int main() {

    // source : https://stackoverflow.com/questions/10882277/properly-print-utf8-characters-in-windows-console
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string numero_compte = ""; // Exemple de numéro de compte : 1234567
    std::string nom_utilisateur = ""; // Exemple de nom utilisateur : Bourgin

    std::cout << "Quel est votre numéro de compte ?" << std::endl;
    std::cin >> numero_compte;
    std::cout << "Quel est votre nom de famille ?" << std::endl;
    std::cin >> nom_utilisateur;

    float argent_compte_bancaire = 1000.00f; // J'ai choisit un float plutôt qu'un double pour gagner de l'espace mémoire
    std::cout << "Solde de votre compte CHF : " << argent_compte_bancaire << std::endl;

    const float taux_change = 1.024f; // J'ai choisit un float plutôt qu'un double pour gagner de l'espace mémoire
    std::cout << "Taux de change : 1 CHF = " << taux_change << "Euro" << std::endl;

    const float frais_operation = 5.00f;

    std::cout << "Entrez la somme souhaitée en Euro : ";

    float somme_demande_euro = 0.0f;
    std::cin >> somme_demande_euro;

    float somme_demande_chf = somme_demande_euro / taux_change;
    argent_compte_bancaire -= (frais_operation + somme_demande_chf);

    const int longeur_bordure = 30;
    const std::string bordure = "+" + std::string(longeur_bordure, '-') + "+";
    const char mur = '|';

    // Source pour le std::string(x,' ') : https://stackoverflow.com/questions/166630/how-can-i-repeat-a-string-a-variable-number-of-times-in-c

    std::cout << bordure  << std::endl;
    std::cout << mur << std::endl;
    std::cout << mur << " " << nom_utilisateur << std::endl;
    std::cout << mur << std::endl;
    std::cout << mur << " " << numero_compte << std::endl;
    std::cout << mur << std::endl;
    std::cout << mur << " Somme Euro" + std::string(11, ' ') + " : "<< somme_demande_euro << std::endl;
    std::cout << mur << " 1 CHF en Euro" + std::string(8, ' ') + " : " << taux_change << std::endl;
    std::cout << mur << std::endl;
    std::cout << mur << " " << "Somme CHF " + std::string(11, ' ') + " : " << somme_demande_chf << std::endl;
    std::cout << mur << " " << "Frais" + std::string(16, ' ') + " : " << frais_operation << std::endl;
    std::cout << mur << std::endl;
    std::cout << mur << " " << "Solde compte" + std::string(9, ' ') + " : " << argent_compte_bancaire << std::endl;
    std::cout << mur << std::endl;
    std::cout << bordure << std::endl;

    return 0;
}