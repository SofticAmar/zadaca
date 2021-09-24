#include <iostream>

using namespace std;

int main()
{
    int godina_rodjenja;
    int mjesec_rodjenja;
    int godina=2021;
    int mjesec=9;

    cout <<"Unesite mjesec i godinu rodjenja."<<endl;
    cin >>mjesec_rodjenja>>godina_rodjenja;
    if(mjesec_rodjenja ==12)
    {
        cout <<"Imate" <<godina - godina_rodjenja -1 <<"godina i"<<mjesec +2<<"mjeseci."<<endl;
    }
    else if (mjesec_rodjenja ==10)
    {
        cout <<"Imate" <<godina - godina_rodjenja -1<<"godina i"<<mjesec +2<<"mjeseci."<<endl;
    }
     else{
        cout<<"Imate"<<godina - godina_rodjenja <<"godina i"<<mjesec - mjesec_rodjenja<<"mjeseci"<<endl;
     }














































    return 0;

}
