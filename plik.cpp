void liczlos(){     
        setlocale(LC_ALL, \"\");
    int tablica[10];
    int dwa = 0;
    int trzy = 0;
    int piec = 0;

    cout << \"Wylosowane liczby: \" << endl;

    for (int i = 0; i < 10; i++)
    {
        tablica[i] = rand();
        cout << tablica[i] << endl;

        if (tablica[i] % 2 == 0)
        {
            if (tablica[i] % 3 == 0)
            {
                trzy++;
            }
            else {
            dwa++;
                 }
        }
            else if (tablica[i] % 5 == 0)
            {
            piec++;
            }
    }
   
    cout << endl;
    cout << \"Ilość liczb podzielnych przez dwa: \" << dwa << endl;
    cout << \"Ilość liczb podzielnych przez trzy: \" << trzy << endl;
    cout << \"Ilość liczb podzielnych przez piec: \" << piec << endl;    
}
