/**
    C++
    2012
**/

#include <iostream>
using namespace std;

double calcPipValue(double e, double k, double v, double f);

int main()
{
    double einheit;
    double kurs;
    double volumen;
    double fremdw;
    double result;

    cout << "Pip-Einheit: ";
    cin >> einheit;
    cout << endl;

    cout << "Aktueller Kurs: ";
    cin >> kurs;
    cout << endl;

    cout << "Volumen (1.00 entspricht 100.000 Lot): ";
    cin >> volumen;
    cout << endl;

    cout << "Fremdwaehrung? Sonst 0." << endl;
    cin >> fremdw;
    cout << endl;

    result = calcPipValue(einheit, kurs, volumen, fremdw);

    cout << "Der Wert von 1 Pip betraegt " << result << " der Basiswaehrung." << endl;
    cout << endl;
    cout << "[ENTER] zum Beenden druecken..." << endl;

    cin.ignore();
    cin.get();

    return 0;
}

double calcPipValue(double e, double k, double v, double f)
{
    double l = v*100000; //Tatsächliches Lot (Volumen*100.000)

    if(f != 0)
    {
        return e/k*l*f;
    }
    else
    {
        return e/k*l;
    }
}
