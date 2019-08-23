
// https://hr-testcases-us-east-1.s3.amazonaws.com/23074/input04.txt?AWSAccessKeyId=AKIAJ4WZFDFQTZRGO3QA&Expires=1565524808&Signature=0HfmCoV4fD9BMWxncEklh5%2BCgZE%3D&response-content-type=text%2Fplain
// some soltuio https://www.hackerrank.com/challenges/birthday-cake-candles/forum/comments/587802
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
ios_base::sync_with_stdio(false);
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








/*
int main(){
int totalcandl;
cin>>totalcandl;
int heights[totalcandl];

for( int i=0;i<totalcandl;i++){
    cin>>heights[i];
}

int totalOff=0;
int countrepeat=0;
int largest=0;
int swap=0;

for( int step=0;step<totalcandl-1;step++){
    if(heights[step]<heights[step+1]){
        largest=heights[step+1];
    }
    else if(heights[step]>heights[step+1]){
        largest=heights[step];
     }
    if((largest==heights[step]) || (largest==heights[step+1])){
        countrepeat++;
   //     cout<<"\n\npritning repaet" <<countrepeat;
    }
    
}
//int largest=heights[0];



if(countrepeat>0)
totalOff=countrepeat-1;

else
{
    totalOff=1;
}


cout<<totalOff;



    return 0;
}

//********************************************************************



/*
int main(){

int totalcandl;
cin>>totalcandl;
int heights[totalcandl];
for( int i=0;i<totalcandl;i++){
    cin>>heights[i];
}

int totalOff=0;
int countrepeat=0;

int swap=0;
for( int step=0;step<totalcandl;step++){
    for( int term=0;term<totalcandl-1;term++){

        if(heights[term]<heights[term+1]){
            swap=heights[term];
            heights[term]=heights[term+1];
            heights[term+1]=swap;
        }

    }


 
}
int largest=heights[0];

for(int i=0;i<totalcandl/2;i++){ // can try redyce complexity by halving 
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



//birthdayCakeCandles(heights,totalcandl);


    return 0;
}
********************************************************************




//
void birthdayCakeCandles(unsigned long int heights[],unsigned long int totalcandl){

// getting time limit exceeded since while searchig the greatest 
// has to go till end whjich is inefficent
//instread sort in descendig order to overcome problem    

int totalOff=0;
int rept=0;
int countrepeat=0;

int swap=10000;
for(unsigned long int step=0;step<totalcandl;step++){
    for(unsigned long int term=0;term<totalcandl-1;term++){

        if(heights[term]<heights[term+1]){
            swap=heights[term];
            heights[term]=heights[term+1];
            heights[term+1]=swap;
        }

    }

}

unsigned long int largest=heights[0];

for(int i=0;i<totalcandl;i++){
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

unsigned long int totalcandl;
cin>>totalcandl;
unsigned long int heights[totalcandl];
for(unsigned int i=0;i<totalcandl;i++){
    cin>>heights[i];
}

birthdayCakeCandles(heights,totalcandl);


    return 0;
}
*/