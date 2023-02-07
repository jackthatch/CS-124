#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


int main(void) {

    ifstream infile;
    ofstream outfile;
    float temperature;
    float farenheit;
    float kelvin;
    
    infile.open("/Users/JacksonThatcher/Desktop/CSFiles/temps.txt");
    outfile.open("/Users/JacksonThatcher/Desktop/CSFiles/table.txt");
    
    if (!infile) {       // Check if the file was opened successfully
        cout << "Errors: Could not open input file to read" << endl;
        return 2;
    } else {
        cout << "Input File Opened" << endl;
    }
    
    if (!outfile) {       // Check if the file was opened successfully
        cout << "Errors: Could not open output file" << endl;
        return 3;
    } else {
        cout << "Output File Opened" << endl;
    }
    
    cout << fixed << left;
    cout << setw(15) << "\nCelsius" << setw(15) << "Farenheit" << setw(15) << "Kelvin" << endl;
    
    
    while (!infile.eof()) {
        
        infile >> temperature;
        
        farenheit = 9.0/5.0 * temperature + 32.0;
        kelvin = temperature + 273.15;
        
        cout << setw(15) << setprecision(1) << temperature << setw(15) << setprecision(2) << farenheit << setw(15) << setprecision(2) << kelvin << endl;
    }
    
    infile.close();
    return 0;
}
