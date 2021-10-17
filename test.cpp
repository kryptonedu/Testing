#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;

struct Auto{
    int serijski_br;
    char proizvodac[35];
    char model[35];

};

Auto *aut=new Auto;

void PushS(int ser_br,char proiz[],char mod[],int god_pro,int unos_pod){
    if(unos_pod==1) 
      aut->sljedeci=NULL;
    if(!aut->sljedeci){
    Auto *novi,*zadnji;
    zadnji = aut;
       while(zadnji->sljedeci)

       
       novi=new Auto;
       zadnji->prethodni=zadnji;
       novi->sljedeci=NULL;

       strcpy(novi->model,mod);
       novi->godina_proiz=god_pro;
       }
  else{
  Auto *novi,*sljedeci;
  sljedeci=aut->sljedeci
  novi=new Auto;
novi->sljedeci=sljedeci;
  aut->sljedeci=novi;  sljedeci->pretodni=novi;
  novi->serii_br=ser_br;
  strcpy(novi->provodac,proiz);
  strcpy(novi->model,mod);
  novi->godina_proiz=god_pro;
  }
}

void TopS_c_ispis(int broj){

while(lista){
cout<<"-------------------"<<endl;  
cout << lista->proizodac<<endl;           
cout << lista->seriki_br<<endl; 
cout << lista->moel<<endl; 
cout << lista->goda_proiz<<endl;
lista=lista->sljedeci;
      }
