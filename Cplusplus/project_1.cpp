#include<iostream>

void exchange_num(*a,*b);

int main(){
    int a,b;
    exchange_num(&a,&b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}

void exchange_num(int *a,int *b){
  *a +=*b;
  *b = *a-*b;
  *a -=*b;

}
