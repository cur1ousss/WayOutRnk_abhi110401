#include<iostream>
using namespace std;
int main(){

long int totalitems;
cin>>totalitems;
int indexNoteat;
cin>>indexNoteat;

long int bill[totalitems];
for(long int i=0;i<totalitems;i++){
    cin>>bill[i];
}

long int innocentAmt;
cin>>innocentAmt;

long int sum=0;
for(long int i=0;i<totalitems;i++){

    if(i!=indexNoteat){
        sum+=bill[i];
    }
    else{
        continue;
    }
}
long int finalbill=sum/2;

if(innocentAmt==finalbill){
    cout<<"Bon Appetit";
    
}
else{
        cout<<abs(finalbill-innocentAmt);
    }
    return 0;
}