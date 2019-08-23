#include<iostream>
using namespace std;
int main(){
    cout<<"\n\n";
int gridsize=4;
int begining=0;
for(int step=0;step<gridsize;step++){
    for(int term=0;term<gridsize;term++){
        if(step==1 && term!=(begining+(gridsize-1))/2){       // hour glass mid=(min+max)/2
            cout<<" *";
        }
        else{
             cout<<" "<<term;
          }
    }
    cout<<"\n";
}

cout<<"\n\n";
    return 0;
}