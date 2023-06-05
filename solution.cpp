#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n, a, b, c;
    cin >> n; // number of visits
    cin >> a; //  distance between Rabbit's and Owl's houses
    cin >> b; // distance between Rabbit's and Eeyore's houses
    cin >> c; // distance between Owl's and Eeyore's houses
    n--;
    int distance = 0;
    char house = 'r';
    while (n--)
    {
        if (house == 'r')
        {
            if (a < b)
            {
                house = 'o';
                distance += a;
            }
            else
            {
                house = 'e';
                distance += b;
            }
        }
        else if (house == 'o')
        {
            if (a < c)
            {
                house = 'r';
                distance += a;
            }
            else
            {
                house = 'e';
                distance += c;
            }
        }
        else
        {
            if (b < c)
            {
                distance += b;
                house = 'r';
            }
            else
            {
                house = 'o';
                distance += c;
            }
        }
    }
    cout << distance << endl;
    return 0;
}
