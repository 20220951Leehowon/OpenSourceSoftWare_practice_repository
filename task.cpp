#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    //Declaration
    string gender;
    int height;
    int weight;
    int std_weight;
    weight = 0;
    //Input
    cout << "Enter the your gender: " << endl;
    cin >> gender;
    cout << "Enter the your height: " << endl;
    cin >> height;
    //Processes
    if (gender == "male");
    {
        weight = height * height * 22;
    }
    weight = height * height * 21;
    return weight;
    //Output
    cout << "your std_weight is: " << weight << endl;
}