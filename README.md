# OOP-HOMEWORK-1
Fakultet elektrotehinike Tuzla - Objektno orijentirano programiranje 



## 1 Napomena

U svim problemima koji slijede nije dozvoljena upotreba C nizova (koristiti
std::vector), a komunikacija sa standardnim ulazom i izlazom dozvoljena
je samo preko objekatacinicout. Nije dozvoljeno koriˇstenje komandi i
funkcija koje dosad nisu koriˇstene na predavanjima ili vjeˇzbama. Dozvo-
ljena je upotreba komandibreakicontinueza kontrolu petlje.

Rok za zavrˇsetak zada ́ce je 12.11.2017.

## 2 Problem 1

Napisati program koji uˇcitava listu rijeˇci, zatim ih sortira po duˇzini rijeˇci i na
kraju ispisuje sortiranu listu uokvirenu sa karakterom*na naˇcin prikazan
niˇze. Prekid unosa treba da se desi ukoliko korisnik unese karakter ’.’ ili
proslijedi signal za kraj unosa (Ctrl+Z za Windows, Ctrl+D za Linux):
Primjer poziva programa i outputa:

root@moby:/fax/zadaca1# ./p
Unesite listu rijeci:
prva
druga
treca
prijestolonasljednik
.
************************
* prijestolonasljednik *
* druga *
* treca *
* prva *
************************

## 3 Problem 2

Napisati program za izvlaˇcenje brojeva lota. Program od korisnika traˇzi da
unese ukupan broj kuglica koje uˇcestvuju u izvlaˇcenju kao i broj kuglica
koje ́ce biti izvuˇcene. Za nasumiˇcno generiranje broja tipaintu intervalu
[0, RAND_MAX]koristiti funkcijurand()iz zaglavlja<cstdlib>(na poˇcetku
programa upisati sljede ́cu liniju kodasrand(time(NULL));kako bi funkcija
randsvaki put kada se program pozove generirala novu sekvecu random


```
brojeva). Program treba da ispiˇse brojeve izvuˇcenih kuglica u sekvenci kako
su izvuˇcene kao i u sortiranoj sekveci.
Primjer pozivanja programa:
```
```
Unesite ukupan broj kuglica: 36
Unesite broj kuglica za izvlacenje: 6
Izvuceno Sortirano
33 4
24 11
26 23
11 24
4 26
23 33
```
```
Primjer koristenja rand funkcije:
```
#include<iostream>

```
int daj random broj ( int max) {
// + 1 ukljucuje i broj max u
// i n t e r v a l k o j i ce vracati nasa funkcija.
return rand () % (max + 1) ;
}
```
```
int main () {
srand ( time (NULL) ) ;
```
```
int random = daj randombroj (36) ;
```
```
std : : cout<<random<< std : : endl ;
```
```
return 1;
}
```
