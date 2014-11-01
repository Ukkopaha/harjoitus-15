/*********************************************
* Paulus Linna
* IIA14SB
*
* Teht�v�kuvaus:
*
*	T�SS� TEHT�V�SS� ON K�YTETT�V� C-kielen primitiivisi� merkkitaulukoita!
*
*	Tee ohjelma, joka kysyy k�ytt�j�lt� 17 merkki�
*	pitk�n merkkijonon (ei v�lily�ntej�).
*	a) Ohjelma tulostaa merkkijonon k��nteisess� j�rjestyksess� n�yt�lle
*	(tulostus tyyppi� "cout << mjono1[4];" jne)
*	b) Ohjelma k��nt�� annetun merkkijonon toiseen
*	merkkijonoon ja tulostaa sen n�yt�lle
*	(tulostus tyyppi� "cout << mjono2;")
*	c) merkkijono voi olla kuinka pitk�
*	tahansa (max 100 kirjainta).
*	Sy�tetyn merkkijonon pituutta ei saa
*	laskea mill��n kirjastofunktiolla
*	(esim. lenght tms.) Ohjelma
*	tutkii onko annettu merkkijono
*	palindromi ja ilmoittaa sen k�ytt�j�lle.
*	V�lily�nnit jonossa ovat sallittuja.
*	
*	K�ytt�j� sy�tt�� jonon: ABC_Kissa_kavelee
*	ohjelma tulostaa: eelevak_assiK_CBA
*
* P�iv�m��r�: 23.10.2014
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