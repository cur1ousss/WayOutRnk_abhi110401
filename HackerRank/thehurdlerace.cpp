#include<iostream>
using namespace std;
int main(){

int totalHurdles;
cin>>totalHurdles;
int aukat;
cin>>aukat;

int hurdlearray[totalHurdles];
for(int i=0;i<totalHurdles;i++){
cin>>hurdlearray[i];
}
int swap=0;
for(int i=0;i<totalHurdles;i++){
    for(int j=0;j<totalHurdles-1;j++){
        if(hurdlearray[j]<hurdlearray[j+1]){
            swap=hurdlearray[j];
            hurdlearray[j]=hurdlearray[j+1];
            hurdlearray[j+1]=swap;
        }
    }
}

int max=hurdlearray[0];
if(aukat!=0 && totalHurdles!=0){

if(aukat>=max){
    cout<<0;
}
else{
cout<<max-aukat;

}
}
    return 0;
}