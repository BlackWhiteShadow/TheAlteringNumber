/* 
TheAlteringNumber.cpp : Given an integer num, implement a function that returns true is num is an Alternating number, or false if it's not.
*/

#include <iostream>
#include <vector>

using namespace std;

bool isAlternating(int num) 
{
    int x;
    vector<int> n;
    bool isChanging = true;
    do
    {
        x = num % 10;
        n.push_back(x);
        num /= 10;
    } while (num);

 
    for (int i = 1; i < n.size(); i++)
    {
        if (n[i] % 2 == 0 && n[i - 1] % 2 == 1 )
            continue;
        else if (n[i] % 2 == 1 && n[i - 1] % 2 == 2)
            continue;
        else
        {
            isChanging = false;
            break;
        }
    }
    return isChanging;
}

int main()
{
    int x;
    cin >> x;
    cout << isAlternating(x);
}

