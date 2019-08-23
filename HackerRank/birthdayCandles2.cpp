#include<iostream>
#include <bits/stdc++.h>
using namespace std;
//
void birthdayCakeCandles(unsigned long long int heights[],unsigned long long int totalcandl){

// getting time limit exceeded since while searchig the greatest 
// has to go till end whjich is inefficent
//instread sort in descendig order to overcome problem    

int totalOff=0;
//int rept=0;
int countrepeat=0;

unsigned long long int swap=10000;
for(unsigned long long int step=0;step<totalcandl;step++){
    for(unsigned long long int term=0;term<totalcandl-1;term++){

        if(heights[term]<heights[term+1]){
            swap=heights[term];
            heights[term]=heights[term+1];
            heights[term+1]=swap;
        }

    }

}

unsigned long long int largest=heights[0];

for(unsigned long long int i=0;i<totalcandl;i++){
    if(largest==heights[i]){
        countrepeat++;
       // cout<<"found repaer";
    }
       
}

if(countrepeat>0)
totalOff=countrepeat;

else
{
    totalOff=1;
}


cout<<totalOff;



}
int main(){
ios_base::sync_with_stdio(false);   // used for fast inpu output
    cin.tie(NULL);
unsigned long long int totalcandl;
cin>>totalcandl;
unsigned long long int heights[totalcandl];
for(unsigned long long int i=0;i<totalcandl;i++){
    cin>>heights[i];
}

birthdayCakeCandles(heights,totalcandl);


    return 0;
}