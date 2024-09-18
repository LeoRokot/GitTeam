#include <iostream>
#include "funcs.h"

using namespace std;

    int main()
    {

        int count; // переменная для выбора в switch
        double a, b; // переменные для хранения операндов
        cout << "Vvedite pervoe chislo: ";
        cin >> a;
        cout << "Vvedite vtoroe chislo: ";
        cin >> b;
        cout << "Vibirite deistvie: 1 +; 2 -; 3 *; 4 : ";
        cin >> count;
        switch (count) // начало оператора switch
        {
        case 1:
        {
		cout << MySum(a,b) << endl;
            break;
        }
        case 2:
        {
		cout << MySub(a,b) << endl;
            break;
        }
        case 3:
        {

            break;
        }
        case 4:
        {

            break;
        }
        default: // если count равно любому другому значению
            cout << "Nepravilniy vod" << endl;
        }
        system("pause");
        return 0;
    }
