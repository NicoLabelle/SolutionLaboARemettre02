// But : Calcule le montant qu’un individu devra débourser pour faire un voyage dans une automobile louée
// Nom : Nicola Labelle
// Date : 2020-09-16

// Pour "cin" et "cout"
#include <iostream>

// Fonction principale
int main()
{
	// Pour les accents
	setlocale(LC_ALL, "");

	// Déclaration des variables
	float kilometre;
	float prixKilometre;
	float jour;
	float prixJour;
	float prixEssence;

	// L'utilisateur doit entrer le nombre kilomètre à parcourir
	std::cout << "Veuillez entrer le nombre de kilomètre à parcourir : ";
	// Le programme intègre la valeur entrée par l'utilisatur dans la variable <kilometre>
	std::cin >> kilometre;

	// L'utilisateur doit entrer le nombre de jour que son voyage durera
	std::cout << "Veuillez entrer la durée de votre voyage (en jour) : ";
	// Le programme intègre la valeur entrée par l'utilisatur dans la variable <jour>
	std::cin >> jour;

	// Le programme calcule le prix de l'essence par rapport au nombre de kilomètre entré pas l'utilisateur
	prixEssence = (((kilometre / 100) * 7.6) * 1.25);
	// Le programme calcule le coût de location par rapport au nombre de jour entré pas l'utilisateur
	prixJour = (jour * 45.00);

	// Le programme vérifie si le kilométrage à parcourir sera supérieur au nombre 
	// de kilomètres gratuits alloués par jour de location
	if (kilometre > (jour * 250))
	{
		// Le programme calcule les frais de kilométrage dépassant la limite gratuite allouée
		prixKilometre = ((kilometre - (jour * 250)) * 0.05);
	}
	else
	{
		// Le programme n'a détecté aucun frais de kilométrage dépassant la limite gratuite allouée
		prixKilometre = 0;
	}

	// Informe l'utilisateur du coût de son vayage
	std::cout << "Le coût de votre voyage sera de : " << prixEssence + prixJour + prixKilometre << "$.";

	// Indique que le programme s'est exécuté sans erreur
	return 0;
}

// Plan de tests
/*
	kilometre(s)		jour(s)			Résultat attendu
	----------- 		------			----------------
	10					1				45.95$
	360					1				84.70$
	867					7				397.37$
	3679				5				695.96$
	3658				9				822.91$
*/