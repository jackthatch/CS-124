#include <iostream>
#include <iomanip>

using namespace std;

int main (void) {

    float count;
    float total;
    float average;
    float curr;
    float low = 100;

    do {
        
        cout << "Please enter a number, if you are finished then enter -1: ";
        cin >> curr;
        cout << curr << endl;

        if (curr < low and curr != -1) {
            
            low = curr;
        }

        if (curr != -1) {
            
            total += curr;
            count ++;
        }
        

    } while (curr != -1);

    cout << "\nDropped Grade: " << low << endl;
    
    total -= low;
    
    cout << "Average: " << setprecision(4) << total / (count - 1) << endl << endl; 

    system("pause");
    return 0;
}