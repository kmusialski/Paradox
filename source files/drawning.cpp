#include "Drawning.h"
int counter = 0;


void counting(int iLiczba, int tab[], int ile )
{

   //if( ile <= 0 ) // ile liczb do losowania, jezeli sie skoncza to false
    int i = 0;

    do
    {
        if( tab[ i ] == iLiczba ){
             counter = counter++;

        }
        i++;
    } while( i < ile );
}

int wylosuj()
{
    return( rand() % 8 ) + 1;
}

int DRAW::cinInt()
{

    srand( time( NULL ) );
    for (int i =0; i < 1; i++){
    int elements = 8;
    int wylosowane[ elements ];
    int wylosowanych = 0;

    do
    {
        int liczba = wylosuj();
        counting(liczba,wylosowane,wylosowanych);
      //  counting( licznik,liczba, wylosowane, wylosowanych ) ;

            wylosowane[ wylosowanych ] = liczba;
            wylosowanych++;

    } while( wylosowanych < elements );

    wylosowanych = 0;
   do
   {
      cout << wylosowane[ wylosowanych ]<<" ";
       wylosowanych++;
       cout<<" ";
   } while( wylosowanych < elements );

    cout<<endl;
    cout<<"ilosc powtorzen"<<endl;
    cout<<counter<<endl;
    }

    return 0;
    }
