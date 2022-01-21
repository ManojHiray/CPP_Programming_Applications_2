#include<iostream>
using namespace std;

int main()
{
    int mat[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int fr = 0, lr = 3, fc = 0, lc = 3;
    string move = "right";

    while(fr <= lr && fc <= lc)
    {
        if(move == "right")
        {
            for(int i = fc; i <= lc; i++)
            {
                cout<<mat[fr][i]<<" ";
            }
            fr++;
            move = "down";
        }
        else if(move == "down")
        {
            for(int i = fr; i <= lr; i++)
            {
                cout<<mat[i][lc]<<" ";
            }
            lc--;
            move = "left";
        }
        else if(move == "left")
        {
            for(int i = lc; i >= fc; i--)
            {
                cout<<mat[lr][i]<<" ";
            }
            lr--;
            move = "up";
        }
        else if(move == "up")
        {
            for(int i = lr; i >= fr; i--)
            {
                cout<<mat[i][fc]<<" ";
            }
            fc++;
            move = "right";
        }
    }
    return 0;
}