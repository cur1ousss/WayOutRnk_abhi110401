#include<iostream>
using namespace std;
int main(){

int numofqueires;
cin>>numofqueires;
int location[numofqueires][3];

//int catA,catB,Mouse;


for(int step=0;step<numofqueires;step++){    
    for(int term=0;term<3;term++){
       cin>>location[step][term];
}
}

int catA,catB,mouse;
for(int step=0;step<numofqueires;step++){


    catA=location[step][0];
    catB=location[step][1];
    mouse=location[step][2];

    if(abs(catA-mouse)>abs(mouse-catB)){
        cout<<"Cat B"<<endl;
    }
    else if(abs(catA-mouse)<abs(mouse-catB)){
        cout<<"Cat A"<<endl;
    }
    else if(abs(catA-mouse)==abs(mouse-catB)){
        cout<<"Mouse C"<<endl;
    }
}




    return 0;
}