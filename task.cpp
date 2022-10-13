#include <iostream>
#include <algorithm>
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
        weight = height * height * 2299;
    }
    weight = height * height * 2105;
    return weight;
    //Output
    cout << "your std_weight is: " << weight << endl;

    //코드 짜본 후기: 어라 왜 값이 안나오는거지???
}