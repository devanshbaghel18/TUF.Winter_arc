#include <iostream>
#include <vector>
using namespace std;

int main(){
 for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {  
            cout << "*";
        }
        cout << endl;  
    }

cout<<endl;

    for(int i = 1; i <= 5; i++) {      
        for(int j = 1; j <= i; j++) {     
            cout << "*";
        }
        cout << endl;                     
    }
cout<<endl;
    for(int i = 1; i <= 5; i++) {        
        for(int j = 1; j <= i; j++) {        
            cout << j;
        }
        cout << endl;                         
    }
cout<<endl;

    for(int i = 1; i <= 5; i++) {        
        for(int j = 1; j <= i; j++) {      
            cout << i;
        }
        cout << endl;                       
    }
    cout<<endl;

    for(int i=50;i<6;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    cout<<endl;

    
     for(int i=5;i>=0;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
     }
}


