//but : �crire un programme pour calculer le montant qu'un individu devra d�bourser pour faire un voyage dans une antomobile lou�e. L'algorithme tient compte du kilom�trage
//		 parcouru et de la dur�e du voyage qui sont soumises par le requ�rant.

/* Co�t de la location: 45$ par jour et comprend 250 kilom�tre gratuits par jour
	Le v�hicule consomme 7.6 litres aux 100 km.
	1 litre d'essence co�te 1.25$
	0./05$ du kilom�tre est exig� pour chaque kilom�tre suppl�mentaire (plus de 250km)
	*/
	

//date : 2020/09/15
//Auteur: Jacob Julien

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");
	//Initialisation des variables utilis�es.
	int kiloP;
	int nJour;
	int location; 
	float essence; 

	//Message de bienvenue, et le programme demande les informations dont le programme a besoins.
	location = 45;
	essence = 1.25;
	//nombre virgule ne fonctionne pas, solution prochainement ;

	std::cout << "Bienvenue. Veuillez entrer le nombre de kilom�tre parcouru : ";
	std::cin >> kiloP;
		std::cout << "Veuillez � pr�sent entrer le nombre de jour soumis par le r�qu�rant :"; 
		std::cin >> nJour;

		std::cout << location + essence << "TEST";











			return 0;

}