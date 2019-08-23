#include<iostream>
using namespace std;
int main(){

unsigned long int starthouse;
cin>>starthouse;
unsigned long int endhouse;
cin>>endhouse;
unsigned long int appletree;
cin>>appletree;
unsigned long int orangetree;
cin>>orangetree;
unsigned long int noofapples;
cin>>noofapples;
unsigned long int nooforange;
cin>>nooforange;


int countapples=0;
int countorange=0;
signed long int locapples[noofapples];
for(int i=0;i<noofapples;i++){
cin>>locapples[i];
locapples[i]+=appletree;
if(locapples[i]>=starthouse && locapples[i]<=endhouse){
    countapples++;
}    
}
signed long int locorange[nooforange];
for(int i=0;i<nooforange;i++){
cin>>locorange[i];    
locorange[i]+=orangetree;
if(locorange[i]>=starthouse && locorange[i]<=endhouse){
    countorange++;
}    
}
cout<<countapples<<endl;
cout<<countorange;


    return 0;
}