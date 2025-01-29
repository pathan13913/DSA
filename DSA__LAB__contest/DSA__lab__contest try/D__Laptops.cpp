#include <iostream>
using namespace std;

struct Laptop
{
    int price;
    int quality;
};

int main()
{
    int n;
    cin >> n;
    Laptop lap[n];
    int heightQuality = -999999;
    int heightPrice= -999999;
    int idx = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> lap[i].price >> lap[i].quality;

        if (heightQuality < lap[i].quality)
        {
            heightQuality = lap[i].quality;
            idx = i;
        }
         if (heightPrice < lap[i].price)
        {
            heightPrice = lap[i].price;
        }
    }


    if (heightPrice > lap[idx].price)
    {
        cout << "Happy Alex";
    }
    else
    {
        cout << "Poor Alex";
    }
}