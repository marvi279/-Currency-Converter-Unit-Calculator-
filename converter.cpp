#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int getvalid(){
    int choice;

    //User input
    while (true){
        cout << "\n Enter your choice: " ;
        cin >> choice ;
        if (choice > 0 && choice <= 4 ){
            break;
        }
        else if (cin.fail()){
            cin.clear();              // Clear error state
            cin.ignore(1000, '\n');   // Discard invalid input
            cout<< "invalid input. Enter a number" ;
        }
        else{
            cout<< "invalid input. Enter a number" ;
        }
    }
    return choice ;
}

int amount(){
    double figure;

    while (true){
        cout << "\n Enter your amount: " ;
        cin >> figure ;
        if (cin.fail()){
            cin.clear();              // Clear error state
            cin.ignore(1000, '\n');   // Discard invalid input
            cout<< "invalid input. Enter a number" ;
        }
        else{
            break ;
        }
    }
    return figure ;

}
int main ()
{
    int choice;
    double cedis,dollars,euros,cm, inches, celcius, fahrenheit;

    //Home Menu
    cout << "Welcome to Converter Program ";
    cout << "\n 1. Currency Converter \n 2. Unit Converter \n 3. Exit " ;
    cout << fixed << setprecision(2);
    
    choice = getvalid();
    // User choice
    if (choice == 1){
        cout << "\n Choose Conversion: " ;
        cout << "\n 1. USD to GHS \n 2. GHS to USD \n 3. EUR to GHS \n 4. GHS to EUR" ;
        choice = getvalid();
        if (choice ==1){
            cout << " Dollars to cedis Conversion: "; 
            dollars = amount();
            cedis = dollars * 10.40;
            cout << "\n The exchange of USD " <<dollars <<" in cedis is GHS "<<cedis;
        }
        else if (choice == 2){
            cout << " Cedis to Dollars Conversion: "; 
            cedis = amount();
            dollars = cedis / 10.40;
            cout << "\n The exchange of GHS " <<cedis <<" in dollars is USD "<<dollars;
            
        }
        else if (choice == 3){
            cout << " Euros to Cedis Conversion: ";
            euros = amount();
            cedis = euros * 12.23;
            cout << "\n The exchange of EUR " <<euros <<" in cedis is GHS "<<cedis;
        }
        else if (choice == 4){
            cout << " Cedis to Euros Conversion: ";
            cedis = amount();
            euros = cedis / 12.23;
            cout << "\n The exchange of GHS " <<cedis <<" in euros is EUR "<<euros;
        }



        
    }

    else if (choice == 2){
        cout<< "\n Choose Unit Conversion: ";
        cout<<"\n 1. Centimetres to inches \n 2. Inches to Centimetres \n 3. Celcius to Fahrenheit \n 4. Fahrenheit to Celcius" ;
        choice = getvalid();

        if (choice ==1){
            cout << " Centimetres to inches Conversion: ";
            cm = amount();
            inches = cm / 2.54;
            cout << cm << " cm in inches is "<<inches;
        }
        else if (choice == 2){
            cout << " Inches to Centimetres Conversion: ";
            inches = amount();
            cm = inches / 2.54;
            cout << inches << " inches in centimetres is "<<cm;
            
        }
        else if (choice == 3){
            cout << " Celcius to Fahrenheit Conversion: ";
            celcius = amount();
            fahrenheit  = (celcius * (9.0/5)) + 32;
            cout <<celcius <<" degrees of celcius is  " <<fahrenheit <<" degrees of fahrenheit ";
        }
        else if (choice == 4){
            cout << " Fahrenheit to Celius Conversion: ";
            fahrenheit = amount();
            celcius = (fahrenheit - 32 )/(9.0/5);
            cout << fahrenheit<<" degrees of fahrenheit  is  " << celcius <<" degrees of celcius ";
        }

    }
    else {
        return 0;
    }

    
    
    return 1 ;
}