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
        if ((election=='x')||(election=='X'))
        {
            break;
        }
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
            int divent(int dividido, int divisor);
            int peso;
            cout <<"ingrese el valor de un billete\n: ";
            cin >> peso ;
            int monedas[10]={50000,20000,10000,5000,2000,1000,500,200,100,50};
            int c=0;
            while( c < 10 )
            {
                cout << monedas[c] << " = " <<divent(peso,monedas[c])<<endl;
                peso=peso%monedas[c++];

            }
            cout << "sobrante = " << peso <<endl;


        }
        else if (election=='3' )
        {
            int mes;
            cout <<"ingrese el mes:"<<endl;
            cin >> mes;
            if ((0<mes) && (mes<13))
            {
                int dia;
                cout <<"ingrerse dia:"<<endl;
                cin >> (dia);
                switch(mes)
                {
                    case(1):
                    {
                        if(dia<31)
                        {
                            cout << dia <<'/'<<mes<<" es una fecha valida"<<endl;
                            break;
                        }
                        else
                        {
                            cout <<"fecha invalida"<<endl;
                            break;
                        }
                    }
                    case(2):
                    {
                        if(dia<28)
                        {
                            cout << dia <<'/'<<mes<<" es una fecha valida"<<endl;
                            break;
                        }
                        else if(dia==29)
                        {
                            cout << dia <<'/'<<mes<<" podria ser una fecha valida"<<endl;
                            break;
                        }
                        else
                        {
                            cout <<"fecha invalida"<<endl;
                            break;
                        }
                    }
                    case(3):
                    {
                        if(dia<31)
                        {
                            cout << dia <<'/'<<mes<<" es una fecha valida"<<endl;
                            break;
                        }
                        else
                        {
                            cout <<"fecha invalida"<<endl;
                            break;
                        }
                        }
                    case(4):
                    {
                        if(dia<30)
                        {
                            cout << dia <<'/'<<mes<<" es una fecha valida"<<endl;
                            break;
                        }
                        else
                        {
                            cout <<"fecha invalida"<<endl;
                            break;
                        }
                    }
                    case(5):
                    {
                        if(dia<31)
                        {
                            cout << dia <<'/'<<mes<<" es una fecha valida"<<endl;
                            break;
                        }
                        else
                        {
                            cout <<"fecha invalida"<<endl;
                            break;
                        }
                    }
                    case(6):
                    {
                        if(dia<30)
                        {
                            cout << dia <<'/'<<mes<<" es una fecha valida"<<endl;
                            break;
                        }
                        else
                        {
                            cout <<"fecha invalida"<<endl;
                            break;
                        }
                    }
                    case(7):
                    {
                        if(dia<31)
                        {
                            cout << dia <<'/'<<mes<<" es una fecha valida"<<endl;
                            break;
                        }
                        else
                        {
                            cout <<"fecha invalida"<<endl;
                            break;
                        }
                    }
                    case(8):
                    {
                        if(dia<31)
                        {
                            cout << dia <<'/'<<mes<<" es una fecha valida"<<endl;
                            break;
                        }
                        else
                        {
                            cout <<"fecha invalida"<<endl;
                            break;
                        }
                    }
                    case(9):
                    {
                        if(dia<30)
                        {
                            cout << dia <<'/'<<mes<<" es una fecha valida"<<endl;
                            break;
                        }
                        else
                        {
                            cout <<"fecha invalida"<<endl;
                            break;
                        }
                    }
                    case(10):
                    {
                        if(dia<31)
                        {
                            cout << dia <<'/'<<mes<<" es una fecha valida"<<endl;
                            break;
                        }
                        else
                        {
                            cout <<"fecha invalida"<<endl;
                            break;
                        }
                    }
                    case(11):
                    {
                        if(dia<30)
                        {
                            cout << dia <<'/'<<mes<<" es una fecha valida"<<endl;
                            break;
                        }
                        else
                        {
                            cout <<"fecha invalida"<<endl;
                            break;
                        }
                    }
                    case(12):
                    {
                        if(dia<31)
                        {
                            cout << dia <<'/'<<mes<<" es una fecha valida"<<endl;
                            break;
                        }
                        else
                        {
                            cout <<"fecha invalida"<<endl;
                            break;
                        }
                    }


                }
            }
        }

        else
        {
            cout <<"entrada invalida"<< endl;
        }
    }
}
int divent(int dividido, int divisor)
{
    return (( dividido - (dividido%divisor) )/divisor);
}
