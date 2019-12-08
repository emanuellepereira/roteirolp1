#include <iostream>
#include <string>
#include "Data.h"

using namespace std;

int main()
{
    int dia, mes, ano;

    cin >> dia >> mes >> ano;

    Data A(dia, mes, ano);

    cout << A.getMesExtenso() << endl;
    cout << A.isBissexto() << endl;
    cout << A.getdia() << endl;

    if(mes<10){
        cout << "0" << A.getmes() << endl;
    }if(ano<100){
        cout << "00" << A.getano() << endl;
    }else if(ano<10){
        cout << "000" << A.getano() << endl;
    }else if(ano<1000){
        cout << "0" << A.getano() << endl;
    }else{
        cout << A.getano() << endl;
    }
    return 0;
}
