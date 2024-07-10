#include <iostream>
#include "./stack/stack.cpp"
#include "./queue/queue.cpp"
#include <limits> 

using namespace std;

int main() {
    int option, Order;
    bool running = true;

    while (running) {
        cout << "1. Ordenar Pilas" << endl;
        cout << "2. Ordenar Colas" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> option;

        //Condicion en caso de que el usario ingrese una opcion distinta entre 1 y 3
        if (cin.fail() || option < 1 || option > 3) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Opcion no valida. Por favor, intente nuevamente." << endl;
            continue;
        }

        //Ciclo para la decision seleccionada por el usuario
        switch (option) {
            case 1: {
                stack<int> myStack;
                int value;

                cout << "Ingrese los numeros para la pila (finalice con una letra para cerrar la pila): " << endl;
                while (cin >> value) {
                    myStack.push(value);
                }
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "Seleccione el orden (1. Ascendente, 2. Descendente): ";
                cin >> Order;

                if (Order == 1) {
                    myStack.stackAsc();
                    cout << "Pila ordenada: " << endl;
                    myStack.print();
                } else if (Order == 2) {
                    myStack.stackDesc();
                    cout << "Pila ordenada: " << endl;
                    myStack.print();
                } else {
                    cout << "Opcion invalida" << endl;
                }
                break;
            }
            case 2: {
                Queue<int> myQueue;
                int value;

                cout << "Ingrese los numeros para la cola (finalice con una letra): " << endl;
                while (cin >> value) {
                    myQueue.push(value);
                }
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "Seleccione el orden (1. Ascendente, 2. Descendente): ";
                cin >> Order;

                if (Order == 1) {
                    myQueue.queueAsc();
                    cout << "Cola ordenada: " << endl;
                    myQueue.print();
                } else if (Order == 2) {
                    myQueue.queueDesc();
                    cout << "Cola ordenada: " << endl;
                    myQueue.print();
                } else {
                    cout << "Opcion invalida" << endl;
                }
                break;
            }
            case 3:
                running = false;
                break;
            default:
                cout << "Opcion no valida. Por favor, intente nuevamente." << endl;
                break;
        }
    }

    return 0;
}
