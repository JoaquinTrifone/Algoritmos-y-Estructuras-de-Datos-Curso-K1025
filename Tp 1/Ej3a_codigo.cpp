#include <iostream>

using namespace std;

int main()
{
    float velmet,velkm;
    cout << "Ingrese su velocidad: ";
    cin >> velkm;
    velmet = (velkm*1000)/(3600);
    cout <<"\nLa conversion a mts/s es: "<< velmet;

    cout << "\n\nFin del Programa\n\n";
    return 0;
}
