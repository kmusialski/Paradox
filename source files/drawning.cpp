#include "Drawning.h"


void counting(int iLiczba, int tab[], int ile,int& counter )
{

   //if( ile <= 0 ) // ile liczb do losowania, jezeli sie skoncza to false
    int i = 0;
    do
    {
        if( tab[ i ] == iLiczba ){ // sprawdzenie czy dany element juz wystapil
            counter++;
            tab[i] = NULL; // zastapienie powtorzenoego elemetu zerowyum znakiem
        }
        i++;
    } while( i < ile );
}


int wylosuj()
{
    return( rand() % 365 ) + 1;
}

int DRAW::cinInt()
{
    int countPercent;
    int trials = 20;
    srand( time( NULL ) );
    for (int i =0; i < trials; i++){
    int elements = 25;
    int wylosowane[ elements ];
    int wylosowanych = 0;
    int counter = 0;
    do
    {
        int liczba = wylosuj();
     //   cout<<liczba<<" ";
        counting(liczba,wylosowane,wylosowanych,counter);

            wylosowane[ wylosowanych ] = liczba;
            wylosowanych++;

    } while( wylosowanych < elements );

    wylosowanych = 0;
 //  do
  // {
   //   cout << wylosowane[ wylosowanych ]<<" ";
    //   wylosowanych++;
   //    cout<<" ";
  // } while( wylosowanych < elements );

    cout<<endl;
    cout<<"ilosc powtorzen"<<endl;
    percent(countPercent,counter,trials);
    }

    return 0;
    }

void percent(int& countPercent,int& counter, int& trials){

if (counter > 0){
    countPercent++;
}
if
cout<<countPercent/trials

}

