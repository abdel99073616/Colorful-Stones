#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100],s1[100];
    int i,p = 0,c = 0,j;
    cin >> s >> s1;
    for(i = 0; i < strlen(s); i++)
    {
        for(j = p; j < strlen(s1); j++)
        {
            if(s[i] == s1[j])
            {
                c++;
                p++;
                break;
            }
            p++;
        }
        if(j == strlen(s1))break;
    }
    cout << c + 1 << endl;
}
