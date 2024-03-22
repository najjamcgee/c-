#include <iostream>
using namespace std;
int main (){
    int num1;
    int num2;

    cout << "Please enter a number between 1 through 10: ";
    cin >> num1;
    cout << "Please enter a number between 1 through 10: ";
    cin >> num2;

    // using swith statement
    string num1_roman;
    switch(num1)
    {
        case 1: 
        {
            num1_roman = to_string(num1);
            num1_roman = "I";
            cout << "I" << endl;
            break;
        }

        case 2: 
        {
            num1_roman = to_string(num1);
            num1_roman = "II";
            cout << "II" << endl;
            break;
        }

        case 3: 
        {
            num1_roman = to_string(num1);
            num1_roman = "III";
            cout << "III" << endl;
            break;
        }

        case 4: 
        {
            num1_roman = to_string(num1);
            num1_roman = "IV";
            cout << "IV" << endl;
            break;
        }

        case 5: 
        {
            num1_roman = to_string(num1);
            num1_roman = "V";
            cout << "V" << endl;
            break;
        }

        case 6:
        { 
            num1_roman = to_string(num1);
            num1_roman = "VI";
            cout << "VI" << endl;
            break;
        }

        case 7: 
        {
            num1_roman = to_string(num1);
            num1_roman = "VII";
            cout << "VII" << endl;
            break;
        }

        case 8: 
        {
            num1_roman = to_string(num1);
            num1_roman = "VIII";
            cout << "VIII" << endl;
            break;
        }
        case 9: 
        {
            num1_roman = to_string(num1);
            num1_roman = "IX";
            cout << "IX" << endl;
            break;
        }
        
        case 10: 
        {
            num1_roman = to_string(num1);
            num1_roman = "X";
            cout << "X" << endl;
            break;
        }
    }
        string num2_roman;
     switch(num2)
    {
        case 1:
        {
            num2_roman = to_string(num2);
            num2_roman = "I";
            cout << "I" << endl;
            break;
        }
        case 2: 
        {
            num2_roman = to_string(num2);
            num2_roman = "II";
            cout << "II" << endl;
            break;
        }

        case 3: 
        {
            num2_roman = to_string(num2);
            num2_roman = "III";
            cout << "III" << endl;
            break;
        }

        case 4: 
        {
            num2_roman = to_string(num2);
            num2_roman = "IV";
            cout << "IV" << endl;
            break;
        }

        case 5: 
        {
            num2_roman = to_string(num2);
            num2_roman = "V";
            cout << "V" << endl;
            break;
        }

        case 6:
        { 
            num2_roman = to_string(num2);
            num2_roman = "VI";
            cout << "VI" << endl;
            break;
        }

        case 7: 
        {
            num2_roman = to_string(num2);
            num2_roman = "VII";
            cout << "VII" << endl;
            break;
        }

        case 8: 
        {
            num2_roman = to_string(num2);
            num2_roman = "VIII";
            cout << "VIII" << endl;
            break;
        }
        case 9: 
        {
            num2_roman = to_string(num2);
            num2_roman = "IX";
            cout << "IX" << endl;
            break;
        }
        
        case 10: 
        {
            num2_roman = to_string(num2);
            num2_roman = "X";
            cout << "X" << endl;
            break;
        }
    }
    //calculating sum
    int sum;
    sum = num1 + num2;
    string sum_roman;
    switch(sum)
    {
        case 1: cout << num1_roman << "+" << num2_roman << "=" << "I" << endl;
        break;

        case 2: cout << num1_roman << " + " << num2_roman << " = " << "II" << endl;
        break;

        case 3: cout << num1_roman << " + " << num2_roman << " = " <<  "III" << endl;
        break;

        case 4: cout << num1_roman << " + " << num2_roman << " = " << "IV" << endl;     
        break;

        case 5: cout << num1_roman << " + " << num2_roman << " = " << "V" << endl;
        break;

        case 6: cout << num1_roman << " + " << num2_roman << " = " << "VI" << endl;
        break;

        case 7: cout << num1_roman << " + " << num2_roman << " = " << "VII" << endl;
        break;

        case 8: cout << num1_roman << " + " << num2_roman << " = " << "VIII" << endl;
        break;

        case 9: cout << num1_roman << " + " << num2_roman << " = " << "IX" << endl;
        break;

        case 10: cout << num1_roman << " + " << num2_roman << " = " << "X" << endl;
        break;

        case 11: cout << num1_roman << " + " << num2_roman << " = " << "XI" << endl;
        break;

        case 12: cout << num1_roman << " + " << num2_roman << " = " << "XII" << endl;
        break;

        case 13: cout << num1_roman << " + " << num2_roman << " = " << "XIII" << endl;
        break;

        case 14: cout << num1_roman << " + " << num2_roman << " = " << "XIV" << endl;
        break;

        case 15: cout << num1_roman << " + " << num2_roman << " = " << "XV" << endl;
        break;

        case 16: cout << num1_roman << " + " << num2_roman << " = " << "XVI" << endl;
        break;

        case 17: cout << num1_roman << " + " << num2_roman << " = " << "XVII" << endl;
        break;

        case 18: cout << num1_roman << " + " << num2_roman << " = " << "XVIII" << endl;
        break;

        case 19: cout << num1_roman << " + " << num2_roman << " = " << "XIX" << endl;
        break;

        case 20: cout << num1_roman << " + " << num2_roman << " = " << "XX" << endl;
        break;
    }
}