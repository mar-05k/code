#include <iostream>
using namespace std;
int main(){
    cout<<"Welcome to my calculator!\n";
    int choice;
    cout<<"Please choose what would you like to do"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cin>>choice;
    float result;
    switch(choice){
        case 1 :
    cout<<"Enter 2 numbers\n";
        float num1, num2;
        cin>>num1;
        cout<<"+\n";
        
        cin>>num2;
        result = num1 + num2;
        cout<<"=\n"<<result<<endl;
        break;
        case 2 :
       cout<<"Enter 2 numbers\n"; 
        float num3, num4;
        cin>>num3;
        cout<<"-\n";
      
        cin>>num4;
        
        result = num3 - num4;
        cout<<"=\n"<<result<<endl;
        break;
        case 3 :
        cout<<"Enter 2 numbers\n";
        float num5, num6;
        cin>>num5;
        cout<<"*\n";
       
        cin>>num6;
        result = num5 * num6;
        cout<<"=\n"<<result<<endl;
        break;
        case 4:
         cout<<"Enter 2 numbers\n";
        float num7, num8;
        cin>>num7;
        cout<<"/\n";
        
        cin>>num8;
        
        result = num7 / num8;
        cout<<"=\n"<<result<<endl;
        break;
        default :
        cout<<"Invalid choice!";
    }

}