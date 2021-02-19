// Remove all characters except alphabets
// #include <iostream>
// using namespace std;

// int main()
// {
//     string line;
//     string temp = " ";

//     cout << "Enter a string: " << endl;
//     getline(cin, line);

//     for (int i = 0; i < line.length(); ++i)
//     {
//         if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
//         {
//             temp = temp + line[i];
//         }

//         line = temp;

//         cout << "Output String: " << line;
//         return 0;
//     }
// }

// 2nd method using c style string
#include <iostream>
using namespace std;

int main()
{
    char line[100], alphabetString[100];
    int j = 0;
    cout << "Enter a string: ";
    cin.getline(line, 100);
    // \o is used for line terminating character
    for (int i = 0; line[i] != '\0'; ++i)
    {
        if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
        {
            alphabetString[j++] = line[i];
        }
    }
    alphabetString[j] = '\0';

    cout
        << "Output String: " << alphabetString;
    return 0;
}
