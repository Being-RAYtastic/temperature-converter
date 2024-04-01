#include <iostream>
using namespace std;



float celsius_to_fahrenheit(float celsiusVal) {
    float fahrenheitVal = (celsiusVal * 9)/5 + 32;
    return fahrenheitVal;
}

float fahrenheit_to_celsius(float fahrenheitVal) {
    float celsiusVal = (fahrenheitVal - 32) * 5 / 9;
    return celsiusVal;
}

float celsius_to_kelvin(float celsiusVal) {
    float kelvinVal = celsiusVal + 273.15;
    return kelvinVal;
}

float fahrenheit_to_kelvin(float fahrenheitVal) {
    float celsiusVal = fahrenheit_to_celsius(fahrenheitVal);
    float kelvinVal = celsius_to_kelvin(celsiusVal);
    return kelvinVal;
}

float kelvin_to_celsius(float kelvinVal) {
    float celsiusVal = kelvinVal - 273.15;
    return celsiusVal;
}

float kelvin_to_fahrenheit(float kelvinVal) {
    float celsiusVal = kelvin_to_celsius(kelvinVal);
    float fahrenheitVal = celsius_to_fahrenheit(celsiusVal);
    return fahrenheitVal;    
}

int main() {
    int unitToConvert;
    int value;
    enum temperatureUnit {Celsius, Fahrenheit, Kelvin};

    cout << "Which unit would you like to convert: " << endl;
    cout << "Celsius --> 0  " <<endl;
    cout << "Fahrenheit --> 1   " <<endl;
    cout << "Kelvin --> 2  " <<endl;

    cout << "Answer: ";
    cin >> unitToConvert;

    cout << "Enter Value: ";
    cin >> value;
    
    cout << "\n \n";

    switch (unitToConvert) {
        char convertTo;

        case 0:
            cout << "In Which unit would you convert "<< value << " degree Celsius to: " << endl;
            cout << "Fahrenheit --> f" << endl;
            cout << "Kelvin --> k" << endl;
            
            cout << "Answer: ";
            cin>>convertTo;
            cout << "\n";
            
            if(convertTo == 'f') {
                cout << celsius_to_fahrenheit(value) << endl;
            }

            else if (convertTo == 'k') {
                cout << celsius_to_kelvin(value) << endl;
            }

            else {
                cout << "Invalid Input" << endl;
            }
            break;

        case 1:
            cout << "In Which unit would you convert "<< value << " degree Fahrenheit to: " << endl;
            cout << "Celsius --> c" << endl;
            cout << "Kelvin --> k" << endl;

            cout << "Answer: ";
            cin>>convertTo;
            cout << "\n";
            
            if(convertTo == 'c') {
                cout << fahrenheit_to_celsius(value) << endl;
            }

            else if (convertTo == 'k') {
                cout << fahrenheit_to_kelvin(value) << endl;
            }

            else {
                cout << "Invalid Input" << endl;
            }    


            break;
        
        case 2:
            cout << "In Which unit would you convert "<< value << " Kelvin to: " << endl;
            cout << "Celsius --> c" << endl;
            cout << "Fahrenheit --> f" << endl;

            cout << "Answer: ";
            cin>>convertTo;
            cout << "\n";
            
            if(convertTo == 'c') {
                cout << kelvin_to_celsius(value) << endl;
            }

            else if (convertTo == 'k') {
                cout << kelvin_to_fahrenheit(value) << endl;
            }

            else {
                cout << "Invalid Input" << endl;
            }    


            break;
        default:
            cout << "Invalid Input" << endl;
            break;
    }


    return 0;
}
