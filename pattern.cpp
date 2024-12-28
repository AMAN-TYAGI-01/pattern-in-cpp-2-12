#include<iostream>
using namespace std;
int main(){

    for(int r=1;r<=5;r++){
        for(int c=1;c<=r;c++){
            cout<<"*";
       
         }
       
  cout<<endl; }
  

for(int r=1;r<=5;r++){
    for(int c=1;c<=5;c++){
        if(c>=r){
            cout<<"*";
        }
        else{cout<<" ";}
} 
cout<<endl; 

}


for(int r=1;r<=5;r++){
    for(int c=1;c<=5;c++){
        if(c>=6-r){
            cout<<"*";
        }
      else{
        cout<<" ";
    } 
    }
    
     cout<<endl;

}


for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        if(j<=6-i){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}


for(int i=1;i<=5;i++){
    for(int j=1;j<=9;j++){
        if(j>=6-i&&j<=4+i){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
        
    }
    cout<<endl;
}
}