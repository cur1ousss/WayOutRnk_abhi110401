// or instead of array use of all multiples can check immediate neighbours 
// using -1-2-3-4-5 since given mulitple of 5 thereofer till -5 and feasible

#include<iostream>
using namespace std;
int main(){
int len;
cin>>len;
    int grade[len];
    for(int i=0;i<len;i++){
        cin>>grade[i];
    }
    int finalgrade; 


int multipleof5[13];
int x=0;
for(int i=8;i<=20,x<13;i++){
    multipleof5[x]=5*i;
    x++;
}

int nearestMultiple=0;

for(int i=0;i<len;i++){
    if(grade[i]<38){
      goto priting;
    }
    else if(grade[i]>=38 && grade[i]<=100){

        for(int j=0;j<13;j++){

            if(grade[i]<=multipleof5[j]){

                nearestMultiple=multipleof5[j];
                goto labeldown;

            }

        }

        labeldown:
        if((nearestMultiple-grade[i])<3){
            grade[i]=nearestMultiple;
        }
        else{
            grade[i]=grade[i];
        }
    }
    priting:
    cout<<grade[i]<<endl;
    //cout<<"\n printg final grade  "<<grade[i];
}

    return 0;
}