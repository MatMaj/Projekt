#include <cstdio>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "mateusz.cpp"
#include "krystian.cpp"
#include "plik.cpp"
#include "data.cpp"
using namespace std;
void mateuszf();
void graigord();
void liczlos();
void data();
int main(){

setlocale(LC_ALL,"");

int wybor=0;
cout<<"=======MENU======="<<endl;
cout<<"1.Suma rzutów kostką"<<endl;
cout<<"2.Wyświetlenie znaku"<<endl;
cout<<"3.Ile liczb podzielnych przez 2, 3 i 5"<<endl;
cout<<"4.Wyświetla datę i godzinę"<<endl<<endl;
cout << "Wybierz pozycję z menu: ";
cin >> wybor;

switch(wybor){
case 1:
	mateuszf();
	break;
case 2:
	graigord();
	break;
case 3:
	liczlos();
	break;
case 4:
	data();
	break;
}
system("pause");
return 0;
}
