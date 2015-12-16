#include "Drawning.h"

void counting(int iLiczba, int tab[], int ile,int& counter )
{

    //if( ile <= 0 ) // ile liczb do losowania, jezeli sie skoncza to false
    int i = 0;
    do
    {
        if( tab[ i ] == iLiczba )  // sprawdzenie czy dany element juz wystapil
        {
            counter++;
            tab[i] = NULL; // zastapienie powtorzenoego elemetu zerowyum znakiem
        }
        i++;
    }
    while( i < ile );
}
int wylosuj()
{
    return( rand() % 365 ) + 1;
}

int DRAW::cinInt()
{
    int countPercent = 0;
    int trials = 10000;
    srand( time( NULL ) );
    for (int i =0; i < trials; i++)
    {
        int elements = 23;
        int wylosowane[ elements ];
        int wylosowanych = 0;
        int counter = 0;
        do
        {
            int liczba = wylosuj();
            counting(liczba,wylosowane,wylosowanych,counter);

            wylosowane[ wylosowanych ] = liczba;
            wylosowanych++;
        }
        while( wylosowanych < elements );


        if (counter > 0)
        {
            countPercent++;
        }
    }
    cout<<"ilosc powtorzen"<<endl;
    cout<<((float)countPercent/(float)trials)*100<<"%"<<endl;
    return 0;
}


