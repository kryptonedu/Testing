struct Auto{
    int serijski_br;
    char proizvodac[35];
  
  
    char model[35];
    int godina_proiz;
    Auto *sljedeci;
  
  
    Auto *prethodni;
};

Auto *aut=new Auto;

void PushS(int ser_br,char proiz[],char mod[],int god_pro,int unos_pod){
  
  
    if(unos_pod==1) 
      aut->sljedeci=NULL;
    if(!aut->sljedeci){
       zadnji=zadnji->sljedeci;
       
      
      
       novi=new Auto;
       zadnji->prethodni=zadnji;
       novi->sljedeci=NULL;
       zadnji->sljedeci=novi;
      
      
      

      
      
      
       strcpy(novi->proizvodac,proiz);
       strcpy(novi->model,mod);
      
       novi->godina_proiz=god_pro;
       }
  else{
  Auto *novi,*sljedeci;
  sljedeci=aut->sljedeci;
