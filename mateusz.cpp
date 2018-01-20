void mateuszf(){
//Losowanie randomowych liczb - rzut kostką 6 ścienną za pomocą funkcji rand c++
srand( time( NULL ) );
//zmienne
int suma=0;
int ilrz=0;
int rzut=0;
//Podaj liczbę rzutów kostką
cout << "Podaj liczę rzutów kostką: ";
cin >> ilrz;
//Pętla losowania
for (int i=0;i<=ilrz;i++){
rzut=rand()%6+1;
cout<<i<<" losowanie: "<<rzut;
//Suma
suma=suma+rzut;
}
cout<<"Suma: "<< ilrz<<" rzutów wynosi: "<<suma<<endl;
}

