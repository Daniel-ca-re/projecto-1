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
            cout << "selecciona una letra\n: ";
            cin >> letra;
            int num = int(letra);
            if ((64<num && num<91)||(96<num && num<123))
            {
                if (num==65||num==69||num==73||num==79||num==85||
                    num==97||num==101||num==105||num==111||num==117)
                {
                    cout <<letra<<" es una vocal"<< endl;
                }
                else
                {
                    cout <<letra<<" es una consonante"<< endl;
                }
            }
            else
            {
                cout << "no es una letra\n";
            }
        }
        else if  ( election=='2' )
        {

        }
        else if ((election=='x')||(election=='X'))
        {
            break;
        }
        else
        {
            cout <<"entrada invalida"<< endl;
        }
    }
}
