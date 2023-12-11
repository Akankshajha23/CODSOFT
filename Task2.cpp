                                                      //TASK2: TO CREATE A SIMPLE CALCULATOR

#include <iostream>
using namespace std;

int main()
{
    int choice;
    do{
    cout << "                                 || SIMPLE CALCULATOR ||                     \n" << endl;
    
        
    

        cout << "Enter the choice accordingly:" << endl;
        cout << "1: add two numbers " << endl;
        cout << "2: subtract two numbers " << endl;
        cout << "3: product of two numbers " << endl;
        cout << "4: division of two numbers " << endl;
        cout << "5: to exit" << endl;
        int num1,num2;
        cout << "Enter first number:" << endl;
        cin >> num1;
        cout << "Enter second number:" << endl;
        cin >> num2;
        
        cout<<"Enter Your Choice:"<<endl;
        cin>>choice;
        

        

        switch (choice)
        {
        case 1:
        {
            cout << "Addition of " << num1 << " and " << num2 << " is: " << num1 + num2 << endl;
            break;
        }
        case 2:
        {
            cout << "Subtraction of " << num1 << " and " << num2 << " is:" << num1 - num2 << endl;
            break;
        }
        case 3:
        {
            cout << "Product of " << num1 << " and " << num2 << " is:" << num1 * num2 << endl;
            break;
        }
        case 4:
        {
            cout << "Division of" << num1 << " and " << num2 << " is:" << num1 / num2 << endl;
            break;
        }
        case 5:
        {
            cout << "Exit!" << endl;
            break;
        }
        default:
        {
            cout << "Invalid Choice!" << endl;
            break;
        }
        }
    }while(choice!=5);
   
        return 0;
}