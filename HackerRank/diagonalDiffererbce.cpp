#include<iostream>
using namespace std;

void diagonalDifference(int ans){
cout<<ans;
}

int main(){

int mtxlen;
cin>>mtxlen;

int matrix[mtxlen][mtxlen];

for(int i=0;i<mtxlen;i++){

    for(int j=0;j<mtxlen;j++){
        cin>>matrix[i][j];
    }
}

int ans;

cout<<"\n\n pritng matrix\n";

for(int i=0;i<mtxlen;i++){

    for(int j=0;j<mtxlen;j++){
        cout<<" "<<matrix[i][j];
    }
    cout<<"\n";
}
int rightsum=0;
cout<<"\n priting right diagonal\n";
for(int i=0;i<mtxlen;i++){

    for(int j=0;j<mtxlen;j++){

        if(i==j){
            rightsum=rightsum+matrix[i][j];
                cout<<" "<<matrix[i][j];
        }
    }
    cout<<"\n";
}

cout<<"\n rightsum usum "<<rightsum;

int leftsum=0;
int tmp=0;
cout<<"\n priting LEFt diagonal\n";
for(int i=0;i<mtxlen;i++){

   // cout<<"\n value of i at entering loop "<<i;
    cout<<"\n"<<matrix[i][mtxlen-i-1];// matrix out of bonds therefore 
                                    // must put -1 in mtxlen-i-1
    leftsum=leftsum+matrix[i][mtxlen-i-1];
    //cout<<"\n value of i at exintg loop "<<i;

   // cout<<"\n value of mtxlen at exintg loop "<<mtxlen;
    
    //cout<<"\n value of mtxlen - i at exintg loop "<<(mtxlen-i);

    // PRINTING values at line =s helpful in debugging
}
cout<<"\n lefts usum "<<leftsum;
ans=abs(rightsum-leftsum);
cout<<"\n\n";
diagonalDifference(ans);



    return 0;
}

/*
EROOR***************************************************************************
<error-type> matrix[]
>>array has incomplete element type 'int []'

#include<iostream>
using namespace std;

void diagonalDifference(int mtxlen,int matrix[][]){

}

int main(){

int mtxlen;
cin>>mtxlen;

int matrix[mtxlen][mtxlen];

for(int i=0;i<mtxlen;i++){

    for(int j=0;j<mtxlen;j++){
        cin>>matrix[i][j];
    }
}




diagonalDifference(mtxlen,matrix);




    return 0;
}



 */