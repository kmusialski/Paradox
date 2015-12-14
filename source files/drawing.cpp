#include "Draw.h"



int czyBylaWylosowana( int iLiczba, int tab[], int ile,int counter )
{
    if( ile <= 0 ) // ile liczb do losowania, jezeli sie skoncza to false
        return counter;

    int i = 0;

    do
    {
        if( tab[ i ] == iLiczba ){
            counter = counter +1;
        }

        i++;
    } while( i < ile );

    return counter;

}

int wylosuj()
{
    return( rand() % 10 ) + 1;
}

int DRAW::cinInt()
{
    srand( time( NULL ) );
    int iter();
    int counter = 0;
    for (int i =0; i < 3; i++){

    int wylosowane[ 5 ];
    int wylosowanych = 0;

    do
    {
        int liczba = wylosuj();
        czyBylaWylosowana( liczba, wylosowane, wylosowanych,counter ) ;

            wylosowane[ wylosowanych ] = liczba;
            wylosowanych++;

    } while( wylosowanych < 5 );

    wylosowanych = 0;
   do
   {
      cout << wylosowane[ wylosowanych ]<<" ";
       wylosowanych++;
   } while( wylosowanych < 5 );

    cout<<endl;
   cout<<"ilosc powtorzen"<<endl;
    cout<<counter<<endl;
    counter = 0;
    }
    return 0;
    }



