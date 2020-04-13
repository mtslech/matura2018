#include <iostream>
#include <fstream>
#include <vector>
#include <map>

using namespace std;

int main()
{

    fstream file("sygnaly.txt");
    if(file)
    {
        int sum = 0;
        string word;

        for(int i = 0; i < 1000; i ++)
        {
            map <char, int> counter;
            string line;
            file >> line;

            for(int j = 0; j < line.size(); j++)
            {
                counter[line[j]]++;
            }
            if(counter.size() > sum)
            {
                sum = counter.size();
                word = line;
            }

        }

        cout << "wyraz: "<< word << endl <<"ilosc roznych znakow: " << sum;
        file.close();
    }
    else
    {
        cout << "ERROR!";
    }
    return 0;
}
