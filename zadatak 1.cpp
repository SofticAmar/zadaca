#include <iostream>

using namespace std;

int main()
{
    int mjesec;

    cout <<"Unesite broj mjeseca:" <<endl;
    cin >>mjesec;

    if(mjesec == 1){
        cout << "Januar, Godisnje doba kojem mjesec pripada je zima" <<endl;

    }
    else if (mjesec == 2){

        cout <<"Februar, Godisnje doba kojem mjesec pripada je zima "  <<endl;

    }
    else if (mjesec == 3 ){

        cout <<"Mart, Godisnje doba kojem mjesec pripada je proljece" <<" ako je datum 20.mart ili kasnije " <<endl;

    }
    else if (mjesec == 4 ){

        cout << "April,Godisnje doba kojem mjesec pripada je proljece "  <<endl;


    }
    else if (mjesec == 5 ){

        cout << "Maj,Godisnje doba kojem mjesec pripada je proljece "  <<endl;

    }
    else if (mjesec == 6){
        cout <<"Juni,Godisnje doba kojem mjesec pripada je ljeto " <<" ako je datum 21.juni ili kasnije" <<endl;

    }
    else if (mjesec == 7){

        cout <<"Juli,Godisnje doba kojem mjesec pripada je ljeto "  <<endl;


    }
     else if (mjesec == 8){

        cout << "August,Godisnje doba kojem mjesec pripada je ljeto "  <<endl;

     }
     else if (mjesec == 9){

        cout << "Septembar,Godisnje doba kojem mjesec pripada je jesen " << "ako je datum 22.septembar ili kanije"  <<endl;

     }
     else if (mjesec == 10 ){

        cout << "Oktobar,Godisnje doba kojem mjesec pripada je jesen "  <<endl;

     }
     else if (mjesec == 11){

        cout << "Novembar,Godisnje doba kojem mjesec pripada je jesen "  <<endl;
     }
     else if (mjesec == 12){

        cout << "Decembar,Godisnje doba kojem mjesec pripada je zima " <<"ako je datum 21.decmebar ili kasnije " <<endl;
     }
      else {
       cout <<"Mjecec nije validan" <<endl;

      }












    return 0;
}




