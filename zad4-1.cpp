#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    fstream file("sygnaly.txt");
    if(file)
    {
        string lines[1000];
        for(int i = 0; i < 1000; i ++)
        { 
            string line;
            file >> line;
            lines[i] = line;
        }

        for (int j = 39; j < 1000; j += 40)
        {
            cout << lines[j][9];
        }

        file.close();
    }
    else
    {
        cout << "ERROR!";
    }
    return 0;
}
