#include<iostream>
#include<iomanip>
using namespace std;

void plusMinus(float ratioplus,float ratiominus,float ratiozero){
    cout<<fixed<<setprecision(6)<<ratioplus;
      cout<<fixed<<setprecision(6)<<ratiominus;
        cout<<fixed<<setprecision(6)<<ratiozero;
}
int main(){

float ratioplus=0;
float ratiominus=0;
float ratiozero=0;
float countplus=0;
float countminus=0;
float countzero=0;
int len;
cin>>len;
float arr[len];
for(int i=0;i<len;i++){
cin>>arr[i];
}

for(int i=0;i<len;i++){

    if(arr[i]==0){
        countzero++;
    }
    else if(arr[i]>0)
        countplus++;

     else if(arr[i]<0)
        countminus++;   
}

ratioplus=countplus/len;
ratiominus=countminus/len;
ratiozero=countzero/len;

plusMinus(ratioplus,ratiominus,ratiozero);
    return 0;
}