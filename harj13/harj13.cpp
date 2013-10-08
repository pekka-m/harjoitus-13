/*********************************************************************
Tehtävä: HARJOITUS 13
Tekijä: Pekka Melgin
PVM: 8.10.2013
Kuvaus:
Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
yhdistää nimet yhdeksi merkkijonoksi ja tulostaa ne
lopuksi naytölle.


a) Kayta cstring-kirjastoa (C:n merkkitaulukot)
tehdäksesi merkkijonojen yhdistämisen
b) Kayta string-kirjastoa (C++:n merkkijonot)
tehdäksesi merkkijonojen yhdistämisen  TEE, JOS ON AIKAA

Esimerkki
Anna etunimi: Aku
Anna sukunimi: Ankka
Nimesi oli: Aku Ankka
*********************************************************************/
#include <iostream>
#include <string.h>
using namespace std; 
int main() 
{
	char etunimi[20];
	char sukunimi[20];
	char kokonimi[40];
	cout << "Anna etunimi: ";
	cin >> ws >> etunimi, 20;
	cout << "Anna sukunimi: ";
	cin >> ws >> sukunimi, 20;
	strcpy_s (kokonimi, etunimi);
	strcat_s (kokonimi, " ");
	strcat_s (kokonimi, sukunimi);
	cout << "Nimesi oli: " <<kokonimi <<endl;
	
}