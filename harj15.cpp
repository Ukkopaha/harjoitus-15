/*********************************************
* Paulus Linna
* IIA14SB
*
* Tehtäväkuvaus:
*
*	TäSSä TEHTÄVÄSSÄ ON KÄYTETTÄVÄ C-kielen primitiivisiä merkkitaulukoita!
*
*	Tee ohjelma, joka kysyy käyttäjältä 17 merkkiä
*	pitkän merkkijonon (ei välilyäntejä).
*	a) Ohjelma tulostaa merkkijonon käänteisessä järjestyksessä näytälle
*	(tulostus tyyppiä "cout << mjono1[4];" jne)
*	b) Ohjelma kääntää annetun merkkijonon toiseen
*	merkkijonoon ja tulostaa sen näytälle
*	(tulostus tyyppiä "cout << mjono2;")
*	c) merkkijono voi olla kuinka pitkä
*	tahansa (max 100 kirjainta).
*	Syätetyn merkkijonon pituutta ei saa
*	laskea millään kirjastofunktiolla
*	(esim. lenght tms.) Ohjelma
*	tutkii onko annettu merkkijono
*	palindromi ja ilmoittaa sen käyttäjälle.
*	Välilyännit jonossa ovat sallittuja.
*	
*	Käyttäjä syättää jonon: ABC_Kissa_kavelee
*	ohjelma tulostaa: eelevak_assiK_CBA
*
* Päivämäärä: 23.10.2014
* Versio 1.0
**************************************************/
#include <iostream>
#include <cstring>
using namespace std;
void main()
{
	char mjono1[99+1];
	char mjono2[99+1];
	int ind2 = 0;
	int mpituus = 0;

	cout << "Anna pitka merkkijono (ei valilyonteja): ";
	cin.get(mjono1, 100);
	cout << "Syote: " << mjono1 << endl;
	
	/* a)
		do
		{
			cout << mjono[ind];
			ind--;
		} while (ind >= 0);*/

	/*do b)
	{
		mjono2[ind2] = mjono1[ind];
		ind--;
		ind2++;

	} while (ind2 <= 16);*/
	
	//for (; mjono1[mpituus] != 0; mpituus++);
	while (mjono1[mpituus] != 0){
		mpituus++;
	}

	cout << "Pituus: " << mpituus << endl;
	mjono2[mpituus] = 0;
	mpituus--;

	do{
		mjono2[ind2] = mjono1[mpituus];
		mpituus--;
		ind2++;
	} while (mpituus >= 0);
	
	cout << mjono2 << endl;

	if (strcmp(mjono1, mjono2) == 0){
		cout << "Teksti on palindromi" << endl;
	}
	else { cout << "Teksti ei ole palindromi" << endl; }


}