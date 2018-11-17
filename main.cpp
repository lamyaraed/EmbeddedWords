/// name: Lamya Raed Aly
/// ID: 20170399

#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;
void EmbeddedWords (string word2);
int main()
{
    string word;
    cout << "your word is : ";
    cin >> word;
    EmbeddedWords(word);
    return 0;
}

void EmbeddedWords (string word2)
{
    int n=word2.length();
    string test1;
    ifstream infile;
    infile.open("dictionary.txt");
    string word1;
    infile >> word1;
    for (int i=0; i<n; i++)
    {
        test1=test1+word2[i];
        if (test1==word1)
        {
            cout<<word1<<endl;
        }
        else
            while (infile.good())
            {
                infile >> word1;
                if (test1==word1)
                    cout << word1 << endl;
            }
    }
    test1=test1.substr(1);
    EmbeddedWords(test1);
}
