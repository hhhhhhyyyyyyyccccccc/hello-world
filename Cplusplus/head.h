#include<iostream>


void exchange(int *a,int *b){
*a+=*b;
*b=*a-*b;
*a=*a-*b;
}

void cout_tw(int a){
    int i,num[8];
    for(i=0;i<8;i++){
        num[i]=a%2;
        a=a/2; 
    }
    for(i=7;i=0;i--){
    cout<<num[i];
    }

}

