#include "Data.h"
#include <iostream>
#include <string>

Data::Data(int d, int m, int a)
{
    dia = d;
    mes = m;
    ano = a;

    if(dia<0 || dia>31){
       dia = 1;
       mes = 1;
       ano = 1;
    }
    if(mes<0 || mes>12){
       dia = 1;
       mes = 1;
       ano = 1;    }
    if(ano<0 || ano>2020){
       dia = 1;
       mes = 1;
       ano = 1;    }
}

Data::~Data()
{
   dia = 0;
   mes = 0;
   ano = 0;
}

int Data::Compara(Data x)
{
        if(x.dia == dia && x.mes == mes && x.ano == ano){
            return 0;
        }else if(x.ano < ano){
            return 1;
        }else if(x.ano == ano && x.mes < mes){
            return 1;
        }else if(x.ano == ano && x.mes == mes && x.dia < dia){
            return 1;
        }else{
            return -1;
        }
}

string Data::getMesExtenso(){

    if(mes==1){
        return "janeiro";
    }else if(mes==2){
        return "fevereiro";
    }else if(mes==3){
        return "marco";
    }else if(mes==4){
        return "abril";
    }else if(mes==5){
        return "maio";
    }else if(mes==6){
        return "junho";
    }else if(mes==7){
        return "julho";
    }else if(mes==8){
        return "agosto";
    }else if(mes==9){
        return "setembro";
    }else if(mes==10){
        return "outubro";
    }else if(mes==11){
        return "novembro";
    }else if(mes==12){
        return "dezembro";
    }
}

bool Data::isBissexto(){

    if(ano % 4 == 0 && ano % 100 != 0){
        return 1;
    }else{
        return 0;
    }

}
void Data:: setData(int dia, int mes, int ano){

    this -> dia = dia;
    this -> mes = mes;
    this -> ano = ano;

}
int Data:: getdia(){
    return dia;
}
int Data:: getmes(){
    return mes;
}
int Data:: getano(){
    return ano;
}
