#include <iostream>
#include<string>
 

using namespace std;

int main()

    
        
        
      {
    int choicemain;
    do
    {
        system("cls");
        cout << "\t CALCULATOR \n";
        cout << "\t____________\n";
        cout << "\tby Jenish Gohil.\n\n\n";





        cout << "1-ADDITION\n";
        cout << "2-SUBSTRACTION\n";
        cout << "3-MULTIPLICATION\n";
        cout << "4-DIVITION\n";
        cout << "5-QUIT\n";
        cout << "Enter your Choice:-";
        cin >> choicemain;

    
            

            if (choicemain == 1)
            {
                char choiceadd;
                int  num, resultadd = 0, val;
                do
                {
                    system("cls");
                    cout << "\tCALCULATOR\n";
                    cout << "\tADDITION \n\n";
                    cout << "Enetr the no of value want to add:- ";
                    cin >> num;

                    for (int i = 1; i <= num; i++)
                    {
                        cout << "VALUE" << i << endl;
                        cin >> val;
                        resultadd = val + resultadd;
                    }

                    cout << "Your addition is" << resultadd << endl;
                    cout << "Do you want to do another (Y/N)";
                    cin >> choiceadd;
                } while (choiceadd == 'y'|| choiceadd=='Y');

            }
            if (choicemain == 2)
            {
                char choicesub;
                int val1, val2;
                do
                {
                    system("cls");
                    cout << "\tCALCULATOR\n";
                    cout << "\tSUBSTRACTION \n\n";
                    cout << "Enter the value1:";
                    cin >> val1;
                    cout << "Enter the value2:";
                    cin >> val2;
                    cout << "Your result substraction  is " << val1 - val2 << endl;
                    cout << "Do you want another Substraction(Y/N)";
                    cin >> choicesub;
                } while (choicesub == 'y' || choicesub == 'Y');

            }
                if (choicemain==3)
                {
                    char choicemul;
                    int numul, valmul, resultmul=1;
                        
                       
                    do
                    {
                        system("cls");
                        cout << "\tCALCULATOR\n";
                        cout << "\tMULTIPLICATION \n\n";
                        cout << "Enetr the no of value want to multiply:- ";
                        cin >> numul;

                        for (int j = 1; j <= numul; j++)
                        {
                            cout << "VALUE" << j << endl;
                            cin >> valmul;
                            resultmul = valmul * resultmul;
                        }

                        cout << "Your Multiplication is" << resultmul<< endl;
                        cout << "Do you want to do another (Y/N)";
                        cin >> choicemul;
                    } while (choicemul=='y'||choicemul=='Y');
                }
                if (choicemain==4)
                {
                    char choicediv;
                    int val1, val2;
                    do
                    {
                        system("cls");
                        cout << "\tCALCULATOR\n";
                        cout << "\tDIVISION \n\n";
                        cout << "Enter the value1:";
                        cin >> val1;
                        cout << "Enter the value2:";
                        cin >> val2;
                        cout << "Your result division  is " << val1 / val2 << endl;
                        cout << "Do you want another Dividion(Y/N)";
                        cin >> choicediv;
                    } while (choicediv == 'y' || choicediv == 'Y');
                }
                
            

    } while (choicemain != 5);
    {

    }
      }
