#include <iostream>

using namespace std;

#define caso 1
int main()

{
    char election;
    while(true)
    {

        cout << "chose the exercise you want to run \n X to end the program\n: ";
        cin >> election;
        if ( election ==  '1')
        {
            char letra;
            cout << "selecciona una letra" << endl;
            cin >> letra;
        }
        else if  ( election=='2' )
        {

        }
        else if ((election=='x')||(election=='X'))
        {

        }
        else
        {
            cout <<'entrada invalida'<< endl;
        }
    }
}
