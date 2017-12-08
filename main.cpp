//Program that converts length from feet and inches to meters and centimeters.
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void input(double& input1, double& input2);
//Precondition: feet and inches are non-negative integers.
//Postcondition: The values of feet and inches are set equal to the
//user's input values.

void convertLength(double& feet, double inches, double& meters, double& centimeters);
//Converts length to meters and centimeters.

void output(double output1, double output2, char& output3);
//Outputs the equivalent length obtained by user input in meters and centimeters.

//void clearScreen(); //Clears console screen.

int main()
{
    double m, cM, f, i;
    char ans;

    do
    {
        input(f,i);
        convertLength(f, i, m, cM);
        output(m, cM, ans);

        if(ans == 'y' || ans == 'Y')
            cout<<"\n\n";
    }while(ans == 'y' || ans == 'Y');

    return 0;
}

void input(double& input1, double& input2)
{
    char a;
    cout<<"Enter in length in feet and inches: ";
    cin>>input1>>a>>input2;
    cout<<endl;
}

void convertLength(double& feet, double inches, double& meters, double& centimeters)
{
    if (inches < 12)
    {
        feet+=(inches/12);
        meters = 0.3048*feet;
        centimeters = 100*meters;
    }
    else
    {
        feet+=1;
        meters = 0.3048*feet;
        centimeters = 100*meters;
    }
}

void output(double output1, double output2, char& output3)
{
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);

    cout<<output1<<" meters\n\n";
    cout<<output2<<" centimeters\n\n";
    cout<<"Start over? (y/n): ";
    cin>>output3;
}

/*
   void clearScreen()
   {
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
   }
   */
