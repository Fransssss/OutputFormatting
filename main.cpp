// Title : Output-Formatting-Manipulator
// Purpose : Practice using different manipulator from (iomanip) library
// Enjoy the process - Practice makes Perfect

#include <iostream>
#include <iomanip>               // enable to manipulate

using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::fixed;
using std::scientific;
using std::setprecision;
using std::setw;
using std::setfill;
using std::left;
using std::right;

int main() {
    const double numToDivide = 99.9;
    double num = 0.0;
    double result ;

    cout << endl << right << setw(45) << "| Output-Formatting |" << endl;
    cout << "Input number to multiply by " << numToDivide << endl;
    cout << "Your input :\t"; cin >> num;
    result = numToDivide * num;

    cout << fixed;   // try to reset previous effect manipulator
    // Fixed
    cout << "\n[Fixed]\nResult before fixed: " << result  << endl;
    cout << "Result after fixed: " << fixed << result << endl << endl;

    cout << fixed;   // try to reset previous effect manipulator
    // scientific
    cout << "[Scientific]\nResult before scientific: " << result << endl;
    cout << "Result after scientific: " << scientific << result << endl << endl;

    cout << fixed;  // try to reset previous effect manipulator
    // Set-precision
    cout << "[Set-Precision]\nResult before setprecision: " << result << endl;
    cout << "Result after setprecision(2): " << setprecision(2) << result << endl << endl;

    cout << fixed;   // try to reset previous effect manipulator
    // Fixed - Set-precision
    cout << "[Fixed-SetPrecision]\nResult before fixed-setprecision: " << result << endl;
    cout << "After fixed-setprecision(3): " << fixed << setprecision(3) << result << endl << endl;
    cout << fixed;

    cout << setfill('=') << setw(80) << " " << endl << endl;
    cout << setfill(' ');  // try to reset/defaul the '=' sign
    string wordToManipulate;
    cout << " Enter a word to manipulate: " << endl;
    cout << " Your input : "; cin >> wordToManipulate;
    cout << endl;

    //setw(n);
    cout << " Input before manipulation -setw(3): [ \"" << wordToManipulate << "\""  << endl;
    cout << " Input after manipulation  -setw(8): [ \"" << setw(8) << wordToManipulate << "\""  << endl << endl;    // number '8' is just prompt, we can use any number we want

    //setfill(*) - setw(n);
    cout << " Input before setfill(*) -setw(8): " << wordToManipulate << endl;
    cout << " Input after setfill(*)  -setw(10):  " << setfill('*') << setw(10) << wordToManipulate << endl;
    cout << setfill(' ');

    // left & right alignment
    cout << " Input with  left alignment - setw(10): [" << left << setw(10) << wordToManipulate << " ]" << endl;
    cout << " Input with right alignment - setw(10): [" << right << setw(10) <<wordToManipulate << " ]" << endl;
    return 0;
}
