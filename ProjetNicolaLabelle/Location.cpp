// But : Calcule le montant qu�un individu devra d�bourser pour faire un voyage dans une automobile lou�e
// Nom : Nicola Labelle
// Date : 2020-09-16

// Pour "cin" et "cout"
#include <iostream>

// Fonction principale
int main()
{
	// Pour les accents
	setlocale(LC_ALL, "");

	// D�claration des variables
	float kilometre;
	float prixKilometre;
	float jour;
	float prixJour;
	float prixEssence;

	// L'utilisateur doit entrer le nombre kilom�tre � parcourir
	std::cout << "Veuillez entrer le nombre de kilom�tre � parcourir : ";
	// Le programme int�gre la valeur entr�e par l'utilisatur dans la variable <kilometre>
	std::cin >> kilometre;

	// L'utilisateur doit entrer le nombre de jour que son voyage durera
	std::cout << "Veuillez entrer la dur�e de votre voyage (en jour) : ";
	// Le programme int�gre la valeur entr�e par l'utilisatur dans la variable <jour>
	std::cin >> jour;

	// Le programme calcule le prix de l'essence par rapport au nombre de kilom�tre entr� pas l'utilisateur
	prixEssence = (((kilometre / 100) * 7.6) * 1.25);
	// Le programme calcule le co�t de location par rapport au nombre de jour entr� pas l'utilisateur
	prixJour = (jour * 45.00);

	// Le programme v�rifie si le kilom�trage � parcourir sera sup�rieur au nombre 
	// de kilom�tres gratuits allou�s par jour de location
	if (kilometre > (jour * 250))
	{
		// Le programme calcule les frais de kilom�trage d�passant la limite gratuite allou�e
		prixKilometre = ((kilometre - (jour * 250)) * 0.05);
	}
	else
	{
		// Le programme n'a d�tect� aucun frais de kilom�trage d�passant la limite gratuite allou�e
		prixKilometre = 0;
	}

	// Informe l'utilisateur du co�t de son vayage
	std::cout << "Le co�t de votre voyage sera de : " << prixEssence + prixJour + prixKilometre << "$.";

	// Indique que le programme s'est ex�cut� sans erreur
	return 0;
}

// Plan de tests
/*
	kilometre(s)		jour(s)			R�sultat attendu
	----------- 		------			----------------
	10					1				45.95$
	360					1				84.70$
	867					7				397.37$
	3679				5				695.96$
	3658				9				822.91$
*/