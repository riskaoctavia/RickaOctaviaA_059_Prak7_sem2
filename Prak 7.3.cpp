#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

struct Tumpukan
    {

    char isi[25];
    int atas;

    }T;

void push (char x){
    if(T.atas==25){

        cout<<"Tumpukan sudah penuh";
        getch();
    }else{

        T.atas=T.atas+1;
       T.isi[T.atas]=x;
    }
}
char pop(){
    char hasil;
    if(T.atas == 0){
    cout<<"Tumpukan sudah kosong";
      hasil = ' ';
   }
   else{
    hasil = T.isi[T.atas];
      T.atas = T.atas - 1;
   }
   return hasil;
}

int main()
{
    int i;
    char kalimat[25];
    system("CLS");
    T.atas=0;

    cout<<"Kalimat : ";cin.getline(kalimat,sizeof(kalimat));

    system("CLS");
    cout<<"kalimat asli : "<<kalimat;

     for(i=0; i<strlen(kalimat); i++)
      {
        push(kalimat[i]);
      }
    cout<<"\nHasil Setelah dibalik : ";

    for(i=0; i<strlen(kalimat); i++)
    {
        cout<<pop();
    }
    cout<<endl;

    return 0;
    printf("development @riska.oct");
}

