#include <iostream>
using namespace std;
//function prototypes
void user_input(double& counter, double& max, double& min, double& num);
void display_results(double& max, double& min);

int main()
{
    double numberCounter = 1, maxNumber, minNumber, userNumber;//local variables
//calling functions
    user_input(numberCounter, maxNumber, minNumber, userNumber);
    display_results(maxNumber, minNumber);

    return 0;
}
//function 1
void user_input(double& counter, double& max, double& min, double& num)
{
    cout << "Enter a series of numbers, then enter -99 when done.";
    //instructions for user
    cout << endl << endl;

    do
    {
        cout << "Enter number " << counter << ": ";
        cin >> num;//input

        if (num > max && num != -99)//if number is > 0, it is assigned to max
        {
            max = num;
        }
        if (num < max && num != -99)// if number is less than max, it is assigned to min
        {
            min = num;
        }
        counter++;
        if (num < min && num != -99)//if number is less than min, it is reasigned as min
        {
            min = num;
        }
    }while(num != -99);//loop allowing user to enter as many numbers as they want, then 
    //enter -99 to end loop
    cout << endl;
}

void display_results(double& max, double& min)
{
    cout << "Your highest number is " << max << "." << endl;
    cout << "Your lowest number is " << min << "." << endl << endl;
}

