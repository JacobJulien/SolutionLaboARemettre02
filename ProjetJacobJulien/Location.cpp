//but : Écrire un programme pour calculer le montant qu'un individu devra débourser pour faire un voyage dans une antomobile louée. L'algorithme tient compte du kilométrage
//		 parcouru et de la durée du voyage qui sont soumises par le requérant.

/* Coût de la location: 45$ par jour et comprend 250 kilomêtre gratuits par jour
	Le véhicule consomme 7.6 litres aux 100 km.
	1 litre d'essence coûte 1.25$
	0./05$ du kilomètre est exigé pour chaque kilomètre supplémentaire (plus de 250km)
	*/
	

//date : 2020/09/15
//Auteur: Jacob Julien

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");
	//Initialisation des variables utilisées.
	int kiloP;
	int nJour;
	int location; 
	float essence; 

	//Message de bienvenue, et le programme demande les informations dont le programme a besoins.
	location = 45;
	essence = 1.25;
	//nombre virgule ne fonctionne pas, solution prochainement ;

	std::cout << "Bienvenue. Veuillez entrer le nombre de kilomètre parcouru : ";
	std::cin >> kiloP;
		std::cout << "Veuillez à présent entrer le nombre de jour soumis par le réquérant :"; 
		std::cin >> nJour;

		std::cout << location + essence << "TEST";











			return 0;

}