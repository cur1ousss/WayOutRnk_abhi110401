#include<iostream>
using namespace std;
int main(){

int testcases;
cin>>testcases;
int arrCaseCycles[testcases];
for(int i=0;i<testcases;i++){
cin>>arrCaseCycles[i];
}

int intialHeight=1;
for(int i=0;i<testcases;i++){
cout<<"\n entered for loop";
//cout<<"\narrcaseCycles print "<<arrCaseCycles[i]<<" >> ** at i is "<<i;
    
    if(arrCaseCycles[i]%2==0){
        cout<<"\n entered even cycles";
        int prevH=intialHeight;
        int nextH=0;
       
        for(int i=1;i<=arrCaseCycles[i]/2;i++){
            cout<<"\n loop pass start "<<i;
          nextH=2*prevH+1;
          prevH=nextH;
          cout<<"\n loop pass complete "<<i;
           }

        cout<<"\n asnwer is "<<nextH;
    }
    else if(arrCaseCycles[i]%2!=0 && arrCaseCycles[i]!=1){
        cout<<"\n entered odd cycles";

    }
    else if(arrCaseCycles[i]==0){
        cout<<"\n entered zero cycles";
        cout<<intialHeight;
    }
    else if(arrCaseCycles[i]==1){
        cout<<"\n entered case 1";
        cout<<2*intialHeight;
    }
}


    return 0;
}

/*
http://ideone.com/Cr3msH

http://ideone.com/syTOxz

same code above compiled and run but different asnwers fixde in 2 categories 
WHY?????????S
*/