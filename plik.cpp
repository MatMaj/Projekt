void liczlos(){     
 setlocale(LC_ALL, \"\");
    int tablica[10];
    int dwa[10];
    int trzy[10];
    int piec[10];
    int j = 0;
    for (int i = 0; i < 10; i++)
    {
        tablica[i] = rand();
        cout << tablica[i] << endl;

        if (tablica[i] % 2 == 0)
        {
            if (tablica[i] % 3 == 0)
            {
            trzy[j] = trzy[j] + 1;
            j++;
            }
            else {
            dwa[j]= dwa[j] + 1;
            j++;
                }
        }
            else if (tablica[i] % 5 == 0)
            {
            piec[j] = dwa[j] + 1;
            j++;
            }
}
