#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 1e7 + 2;

int hexadecimalToDecimal(string hexVal)
{
    int len = hexVal.length();

    // Initializing base value to 1, i.e 16^0
    int base = 1;

    int dec_val = 0;

    // Extracting characters as digits from last
    // character
    for (int i = len - 1; i >= 0; i--)
    {
        // if character lies in '0'-'9', converting
        // it to integral 0-9 by subtracting 48 from
        // ASCII value
        if (hexVal[i] >= '0' && hexVal[i] <= '9')
        {
            dec_val += (hexVal[i] - 48) * base;

            // incrementing base by power
            base = base * 16;
        }

        // if character lies in 'A'-'F' , converting
        // it to integral 10 - 15 by subtracting 55
        // from ASCII value
        else if (hexVal[i] >= 'A' && hexVal[i] <= 'F')
        {
            dec_val += (hexVal[i] - 55) * base;

            // incrementing base by power
            base = base * 16;
        }
    }
    return dec_val;
}
string decToHexa(int n)
{
    // char array to store hexadecimal number
    char hexaDeciNum[100];

    // counter for hexadecimal number array
    int i = 0;
    while (n != 0)
    {
        // temporary variable to store remainder
        int temp = 0;

        // storing remainder in temp variable.
        temp = n % 16;

        // check if temp < 10
        if (temp < 10)
        {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else
        {
            hexaDeciNum[i] = temp + 55;
            i++;
        }

        n = n / 16;
    }
    string hex;
    int count = 0;
    for (int j = i - 1; j >= 0; j--)
    {

        hex.push_back(hexaDeciNum[j]);
        count++;
    }

    return hex;
}

char ele_decoded(int x, long key, int ele_no)
{
    //cout<<"--enco--"<<x<<endl;
    ele_no = ele_no % 7;

    /* cout<<"ele-"<<ele_no<<" ";
    cout<<"keyB-"<<key<<" "; */
    key = key + ele_no;

    //cout<<"keyA-"<<key<<" ";
    x ^= key;
    return (char)x;
}
string decryption(string s, long key)
{
    string result;
    if (s[0] == 'R' && s[1] == 'x' && s[2] == '_')
    {

        string check = decToHexa(key + 32);
        int l = check.length();
        int sl = s.length();
        //cout<<"l-"<<l<<endl;

        int ele_no = 0;

        for (int i = 3; i < sl; i = i + l)
        {
            ele_no++;
            string r;
            for (int j = i; j <= i + l - 1; j++)
            {
                r.push_back(s[j]);
            }

            int x = hexadecimalToDecimal(r); //here x is encoded;

            char c = ele_decoded(x, key, ele_no);
            result.push_back(c);
        }
    }
    else
    {
        cout << "invalid" << endl;
    }

    return result;
}
string secure(string s)
{
    int x = s.length();

    int y = x / 2 - 2;

    for (int i = 3; i < y; i = i + 2)
    {

        char c = s[i];
        s[i] = s[x - i];
        s[x - i] = c;
    }

    return s;
}
int ele_encode(char c, long key, int ele_no)
{
    ele_no = ele_no % 7;

    /* cout << "ele-" << ele_no << " ";
   cout << "keyB-" << key << " "; */
    key = key + ele_no;
    //cout << "keyA-" << key << " ";
    int x;

    x = c;
    x ^= key;
    return x;
}

string encryption(string c, long key)
{
    int i;
    string v = "Rx_";

    int v_count = 0;
    i = c.length();

    for (int j = 0; j < i; j++)
    {
        char x = c[j];

        int encoded = ele_encode(x, key, j + 1);

        //cout<<"--enco--"<<encoded<<endl;
        string hex = decToHexa(encoded);

        v = v + hex;
    }

    return v;
}

int main()
{

    /*
    //highly secured decryption
     string s=secure(encription("TANMAYA IS A PROGRAMMER!", 0));
    cout << secure(encription("TANMAYA IS A PROGRAMMER!", 0))<<endl;;

    cout<<decreption(secure(s), 0)<<endl; */



    //encryption
    int key = 145;

    string s = encryption("TANMAYA IS A PROGRAMMER!", key);

    cout << "after encript\n\n"
         << s <<"\n\n"<< endl;

    cout << decryption(s, key) << endl;

    return 0;
}