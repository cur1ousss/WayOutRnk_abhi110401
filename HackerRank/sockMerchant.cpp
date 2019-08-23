#include<iostream>
using namespace std;
int main(){


int totalsocks;
cin>>totalsocks;
int sock[totalsocks];
for(int i=0;i<totalsocks;i++){
    cin>>sock[i];
}

int copy[totalsocks];
for(int i=0;i<totalsocks;i++){
    copy[i]=sock[i];
}

int totalPairs=0;
int count=0;


for(int step=0;step<totalsocks;step++){
int start=copy[step];
    count=0;
    for(int term=0;term<totalsocks;term++){

        if(start!=0){

        if(copy[term]==start){
            
            cout<<"\n start is "<<start;
            cout<<"\n index is "<<term;
            count++;
            copy[term]=0;

          /*  if(count==1){
               continue;
            }
            else if(count>1){
         }*/
        }
        }

    }
            totalPairs+=(count/2);
        
        if(count!=0){

        cout<<"\n \t\tcount is "<<count;

        }
}
cout<<"\n\n";
cout<<"'\n totalpairs are "<<totalPairs;
cout<<"\n\n";
    return 0;
}