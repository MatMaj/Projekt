#include <cstdio>
#include <iostream>
#include <cstdlib.h>
#include <time.h>
#include "mateusz.cpp"
using namespace std;
void mateuszf();
int main(){

setlocale(LC_ALL,"");

int wybor=0;
cout<<"=======MENU======="<<endl;
cout<<"1.Suma rzutów kostką"<<endl;
cout<<"2.Wybor 2"<<endl;
cout<<"3.Wybor 3"<<endl;
cout<<"4.Wybor 4"<<endl<<endl;
cout << "Wybierz pozycję z menu: ";
cin >> wybor;

switch(wybor){
case 1:
	mateuszf();
	break;
case 2:
	break;
case 3:
	break;
case 4:
	break;
}
system("pause");
return 0;
}
