//but : Écrire un programme pour calculer le montant qu'un individu devra débourser pour faire un voyage dans une automobile louée. L'algorithme tient compte du kilométrage
//		 parcouru et de la durée du voyage qui sont soumises par le requérant.

/*  Coût de la location: 45$ par jour et comprend 250 kilomêtre gratuits PAR jour
	Le véhicule consomme 7.6 litres aux 100 km.
	1 litre d'essence coûte 1.25$
	0.05$ du kilomètre est exigé pour chaque kilomètre supplémentaire (plus de 250km)


	DONC
	si louée pendant 4 jours, 760 kilomètre
	4 * 45 + 760 / 100 * 7.6 * 1.25 = 252.20$

	si kiloP / nJour <= 250, alors, pas de frais supplémentaire pour le kilométrage. 
	si kiloP / nJour > 250, alors, kiloP - nJour * 250  = x kiloP * 0.05 = x$
	*/
	

//date : 2020/09/15
//Auteur: Jacob Julien

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");
	//Initialisation des variables utilisées.
	float kiloP;
	int nJour;
	int location;
	float essence;
	float resultat;


	//Message de bienvenue, et le programme demande les informations dont le programme a besoins.
	location = 45;
	essence = 0.095;
	//nombre a virgule fonctionne maintenant

	std::cout << "Bienvenue." << std::endl << "Veuillez entrer le nombre de kilomètre parcouru (TOTAL) :";
	std::cin >> kiloP;
	std::cout << "Veuillez à présent entrer le nombre de jour soumis par le réquérant :";
	std::cin >> nJour;

		std::cout << std::endl;
	
		//il faut que le nombre de jours soit au moins 1 ou plus grand qu'un. C'est un int car nombre entier. Le réquérant peut ne pas utiliser l'auto en faire une décoration.
		//Si il était impératif pour lui de rouler avec, alors kiloP > 0 && serait mis dans le if. (SANS LE OU ÉGAL À 0) 
	if (kiloP >= 0 && nJour >= 1)
	{
		 if( kiloP / nJour <= 250)
		{
			 std::cout << "Le total sera de : " << (nJour * location) + (kiloP * essence)<<"$" << std::endl << std::endl << std::endl ;
		

		}

		 else
		 {
			 resultat = (nJour * location) + (kiloP * essence) + (kiloP - nJour * 250 * 0.05);
				 std::cout << "Le total sera de : " << resultat <<"$" <<  std::endl << std::endl << std::endl;
		 }
	}	
		
	// si l'utilisateur ne donne pas de bonnes informations tels des nombre négatif, car on ne peux pas rouler -6 kilomètre ou louer une voiture -3 jours. 
	else
			{
			std::cout << "Les informations entrées ne correspondent pas à des nombres positifs ou plus grand que 0." << std::endl << std::endl << std::endl;
			}		

	
	return 0;
}


/*
si l'utilisateur entre les informations suivante;

kilomètre		nombre de jours			total
		652				5					286.94$
		0				0					ERREUR
		0				2					90$
		100				0					ERREUR
		-2				5					ERREUR
		2				-5					ERREUR
		15000			30					17 400$
		2000			30					1 540$
		12345			21					14 200.275$  ---­> donne 14 200.3 (données perdu?)

*/		