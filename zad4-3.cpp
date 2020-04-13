#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    fstream file("sygnaly.txt");
    if(file)
    {
        for (int i = 0; i < 1000; i++)
        {
            string line;
            file >> line;

            bool conditionCheck = true;

            for (int j = 0; j < (line.length() - 1); j++)
            {
                for (int k = (j + 1); k < line.length(); k++)
                {
                    if (abs(line[j] - line[k]) > 10)
                    {
                        conditionCheck = false;
                        break;
                    }
                }
            }

            if (conditionCheck)
            {
                cout << line << endl;
            }
        }

        file.close();
    }
    else
    {
        cout << "ERROR!";
    }

    return 0;
}
