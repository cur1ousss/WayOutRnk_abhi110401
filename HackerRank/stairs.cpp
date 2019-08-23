#include<iostream>
using namespace std;
int main(){
int len;
cin>>len;
for(int i=1;i<=len;i++){


for(int space=len;space>i;space--){

    cout<<" ";
}
for(int j=1;j<=i;j++){

      cout<<"#";          // in fact by elimintaing the space here was able to achieve this pattern
                              //      cout<<" "<<j earlier
                                //    cout<<j         now this code
                                  //  so in a way diretly realted paaterns 
}
    cout<<"\n";

}

    return 0;
}