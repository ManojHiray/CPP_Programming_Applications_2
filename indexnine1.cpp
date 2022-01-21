#include<iostream>
using namespace std;

int main()
{
    int No = 4; //no of applications running
    int App[] = {1,2,3,4};
    int Alt_tab = 3;

    int Temp = App[Alt_tab - 1];
    int i = 0;

    for(i = (Alt_tab - 1); i > 0; i--)
    {
        App[i] = App[i-1];
    }
    App[0] = Temp;

    for(i = 0; i < No; i++)
    {
        cout<<App[i]<<",";
    }

    return 0;
}