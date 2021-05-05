#include <iostream>

using namespace std;

int main() {

    float m1, b1, m2, b2, x, y;

    cout << "Ingrese la pendiente de su primera recta (m1): ";
    cin >> m1;
    cout << "Ingrese la ordendada de origen de la primera recta (b1): ";
    cin >> b1;


    cout << "\nIngrese la pendiente de su segunda recta (m2): ";
    cin >> m2;
    cout << "Ingrese la ordendada de origen de su segunda recta (b2): ";
    cin >> b2;

        //esto no tiene ingerencia en el funcionamiento//
    if (b1 < 0) {
        cout << "\nSu primera recta es: y = " << m1 << "X + (" << b1 << ")";
    }
    else {
        cout << "\nSu primera recta es: y = " << m1 << "X + " << b1;
    }
    if (b2 < 0) {
        cout << "\nSu segunda recta es: y = " << m2 << "X + (" << b2 << ")";
    }
    else {
        cout << "\nSu segunda recta es: y = " << m2 << "X + " << b2;
    }
        //---//

    if (m1 == m2){
        cout << "\n\nTienen la misma Pendiente, por lo cual no tienen interseccion. Son paralelas\n";
        cout <<"\nFin del programa\n";
        return 0;
    }


    else{
        //formulas para calcular la pendiente//
        x = (b2 + (b1 * (- 1))) / (m1 + (m2 * (-1)));
        y = (m2 * x) + b2;
        cout << "\n\nLos puntos de Interseccion son: (" << x << " , " << y << ")\n";

        cout <<"\nFin del programa\n";

        return 0;
    }


}
