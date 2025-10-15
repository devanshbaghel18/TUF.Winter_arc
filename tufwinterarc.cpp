#include <iostream>
#include <vector>
using namespace std;

int main(){
//  for(int i = 1; i <= 5; i++) {
//         for(int j = 1; j <= 5; j++) {  
//             cout << "*";
//         }
//         cout << endl;  
//     }

// cout<<endl;

//     for(int i = 1; i <= 5; i++) {      
//         for(int j = 1; j <= i; j++) {     
//             cout << "*";
//         }
//         cout << endl;                     
//     }
// cout<<endl;
//     for(int i = 1; i <= 5; i++) {        
//         for(int j = 1; j <= i; j++) {        
//             cout << j;
//         }
//         cout << endl;                         
//     }
// cout<<endl;

//     for(int i = 1; i <= 5; i++) {        
//         for(int j = 1; j <= i; j++) {      
//             cout << i;
//         }
//         cout << endl;                       
//     }
//     cout<<endl;

//     for(int i=50;i<6;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
//     cout<<endl;

    
//      for(int i=5;i>=0;i--){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//      } 
//     int a=4;
//     int d=1;
//      for(int i=0;i<5;i++){
        
//         for(int j=0;j<a;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<d;j++){
//             cout<<"*";
//         }
//         for(int j=0;j<a;j++){
//             cout<<" ";
//         }
//         a--;
//         d=d+2;
//         cout<<endl;
         
//      }
//      cout<<endl;

    //  int a=9;
    //  int b=0;
    //  for(int i=0;i<5;i++){
    //     for(int j=0;j<b;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<a;j++){
    //         cout<<"*";
    //     }
    //     for(int j=0;j<b;j++){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    //     a=a-2;
    //     b++;
    //  }


    // int a=1;
    // int b=4;
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<b;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<a;j++){
    //         cout<<"*";
    //     }
    //     for(int j=0;j<b;j++){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    //     a=a+2;
    //     b--;
    // }
    // a=9;
    // b=0;
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<b;j++){
    //         cout<<' ';
    //     }
    //     for(int j=0;j<a;j++){
    //         cout<<"*";
    //     }
    //     for(int j=0;j<b;j++){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    //     a=a-2;
    //     b++;
    // }





//    for(int i=0;i<5;i++){
//     for(int j=0;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
//    }
//    for(int i=4;i>=0;i--){
//     for(int j=0;j<=i;j++){
//         cout<<"*";
//     }cout<<endl;
//    }




// int a=1;
// for(int i=0;i<5;i++){
//     for(int j=0;j<=i;j++){
//         cout<<a<<" ";
//         if(a==0){
//             a=1;
//             continue;
//         }
//         if(a==1){
//             a=0;
//             continue;
//         }
//     }
//     cout<<endl;
// }


// int a=1;
// int b=5;
// for(int i=0;i<4;i++){
//     for(int j=1;j<a;j++){
//         cout<<j;
//     }
//     for(int j=0;j<=b;j++){
//         cout<<" ";
//     }
//     for(int j=a;j>0;j--){
//         cout<<j;
//     }
//     cout<<endl;
//     a++;
//     b=b-2;
// }


// int count =1;
// for(int i=0;i<5;i++){
//     for(int j=0;j<=i;j++){
//       cout<<count<<" ";
//       count++;
//     }
//     cout<<endl;
// }


// for(int i=0;i<5;i++){
//     int a=65;
//     for(int j=0;j<=i;j++){
//         char d= char(a);
//         cout<<d;
//         a++;
//     }
//     cout<<endl;
// }

// for(int i=4;i>=0;i--){
//     int a=65;
//     for(int j=i;j>=0;j--){
//         char d= char(a);
//         cout<<d;
//         a++;
//     }
//     cout<<endl;
// }

// int a=65;
// for(int i=0;i<5;i++){
//     for(int j=0;j<=i;j++){
//         char d= char(a);
//         cout<<d;
//     }
//     a++;
//     cout<<endl;
// }

// int a=1;
// int b=3;
// for(int i=0;i<4;i++){
//     int z=65;
//     for(int j=0;j<b;j++){
//         cout<<" ";
//     }
//     for(int j=0;j<a;j++){
//         if(j>a/2){
//         z=z-2;
//         char d=char(z);
//         z++;
//     cout<<d;}
//         else{
//         char d=char(z);
//         z++;
//         cout<<d;
//         }
        
//     }
//     for(int j=0;j<b;j++){
//         cout<<" ";
//     }
//     cout<<endl;
//     b--;
//     a=a+2;
//     z++;

// }

// for(int i=0;i<5;i++){
//     int a=69;
//     for(int j=a-i;j<=a;j++){
//         char d=char(j);
//         cout<<d<<" ";
//     }
//     cout<<endl;
// }

int b=8;
int a=1;
for(int i=0;i<5;i++){
    for(int j=0;j<a;j++){
        cout<<"*";
    }
    for(int j=0;j<b;j++){
        cout<<" ";
    }
    for(int j=0;j<a;j++){
        cout<<"*";
    }
    cout<<endl;
    b=b-2;
    a++;
}
b=2;
a=4;
for(int i=0;i<4;i++){
    for(int j=0;j<a;j++){
        cout<<"*";
    }
    for(int j=0;j<b;j++){
        cout<<" ";
    }
    for(int j=0;j<a;j++){
        cout<<"*";
    }
    a--;
    b=b+2;
    cout<<endl;
}


}


