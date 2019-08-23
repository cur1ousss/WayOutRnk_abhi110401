#include<iostream>
using namespace std;
int main(){

unsigned int games=0;
cin>>games;
unsigned long int scores[games];
// since not inputted array therfore itself assumed garvage vaues and given
    // random outiput of icnreasedcount and decreasdecount  
        ///?????can use as random number generator??
for(unsigned int i=0;i<games;i++){
    cin>>scores[i];
}
unsigned long int bestrecord=scores[0];
unsigned long int worserecord=scores[0];

/*
cout<<"\n record is "<<bestrecord;
cout<<"\n\n";
for(int i=0;i<games;i++){
    cout<<" "<<scores[i];
}
*/
int worseBreakCount=0;
int bestBreakCount=0;
for(unsigned int i=1;i<games;i++){
if(scores[i]<worserecord){
    worserecord=scores[i];
    worseBreakCount++;
    //cout<<"\n worse broke at index "<<i;
}
else if(scores[i]>bestrecord){
    bestrecord=scores[i];
    bestBreakCount++; 
  //  cout<<"\n best broke at index "<<i;
}
else if(scores[i]==bestrecord || scores[i]==worserecord){
     continue;   
    }
}
//cout<<"\n\n";
cout<<bestBreakCount<<" "<<worseBreakCount;

//cout<<"\n\n";
    return 0;
}