#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <string>

using namespace std;
class Data
{
    public:
        Data();
        Data(int d, int m, int a);
        int dia;
        int mes;
        int ano;
        virtual ~Data();
        int Compara(Data x);
        string getMesExtenso();
        bool isBissexto();
        void setData(int dia, int mes, int ano);
        int getdia();
        int getmes();
        int getano();
    protected:

    private:
};

#endif // DATA_H

