#include <iostream>

using namespace std;

int main()
{
    int h;
    string pictrute;
    cout << "Enter height 2-9: ";
    cin >> h;
    if (h <= 2 || h >= 9)
        return 1;
    for(int i = 0; i < h - 1; ++i)
    {
        for (int j = 0; j < 3; ++j)
            for(int k = 0; k < 2 * h + 1; ++k)
                if(h - i == k || h + i == k)
                    pictrute += "*";
                else pictrute += " ";
        pictrute += "\n";
    }
    for(int i = 0; i < 3; ++i) 
    {
        pictrute += " ";
        for(int j = 0; j < 2 * h - 1; ++j)
            pictrute += "*";
        pictrute += " ";
    }
    pictrute += "\n";
    cout << pictrute;

    return 0;

}
