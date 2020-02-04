#include<iostream>
using namespace std;

int main()
{
    int i,j,databit[5], hammingcode[7];
    string parity;
    int p1,p2,p3;
    p1=p2=p3=NULL;

    //input databit
    cout << "data bit:\n";
    for(i=4; i>0; i--)
    {
        cout << "D" << i << ": ";
        cin >> databit[i];
    }
    for(i=4; i>0; i--)
    {
        cout << "D" << i << ": ";
        cout << databit[i] << "\t";
    }

    l:
    cout << "\nwhat type of parity? (even/odd)" << endl;
    cin >> parity;

    if(parity == "even")
    {
        i=4;
        for(j=7;j>0;j--)
        {
            if(j==4)
            {
                hammingcode[j] = p3;
            }
            else if(j==2)
            {
                hammingcode[j] = p2;
            }
            else if(j==1)
            {
                hammingcode[j] = p1;
            }
            else
            {
                hammingcode[j] = databit[i];
                i--;
            }
        }

        int c1,c2,c3;
        c1=c2=c3=0;
        for(i=7;i>0;i--)
        {
            if(i==1 || i==3 || i==5 || i==7)
            {
                if(hammingcode[i] == 1)
                {
                    c1++;
                }
            }
            else if(i==2 || i==3 || i==6 || i==7)
            {
                if(hammingcode[i] == 1)
                {
                    c2++;
                }
            }
            else if(i==4 || i==5 || i==6 || i==7)
            {
                if(hammingcode[i] == 1)
                {
                    c3++;
                }
            }
        }

        if(c1%2==0)
        {
            p1 = 0;
            hammingcode[1] = p1;
        }
        else
        {
            p1 = 1;
            hammingcode[1] = p1;
        }

        if(c2%2==0)
        {
            p2 = 0;
            hammingcode[2] = p2;
        }
        else
        {
            p2 = 1;
            hammingcode[2] = p2;
        }

        if(c3%2==0)
        {
            p3 = 0;
            hammingcode[4] = p3;
        }
        else
        {
            p3 = 1;
            hammingcode[4] = p3;
        }

        for(j=7;j>0;j--)
        {
            cout << hammingcode[j] << "\t";
        }

    }
    else if(parity == "odd")
    {
        i=4;
        for(j=7;j>0;j--)
        {
            if(j==4)
            {
                hammingcode[j] = p3;
            }
            else if(j==2)
            {
                hammingcode[j] = p2;
            }
            else if(j==1)
            {
                hammingcode[j] = p1;
            }
            else
            {
                hammingcode[j] = databit[i];
                i--;
            }
        }

        int c1,c2,c3;
        c1=c2=c3=0;
        for(i=7;i>0;i--)
        {
            if(i==1 || i==3 || i==5 || i==7)
            {
                if(hammingcode[i] == 1)
                {
                    c1++;
                }
            }
            else if(i==2 || i==3 || i==6 || i==7)
            {
                if(hammingcode[i] == 1)
                {
                    c2++;
                }
            }
            else if(i==4 || i==5 || i==6 || i==7)
            {
                if(hammingcode[i] == 1)
                {
                    c3++;
                }
            }
        }

        if(c1%2==0)
        {
            p1 = 1;
            hammingcode[1] = p1;
        }
        else
        {
            p1 = 0;
            hammingcode[1] = p1;
        }

        if(c2%2==0)
        {
            p2 = 1;
            hammingcode[2] = p2;
        }
        else
        {
            p2 = 0;
            hammingcode[2] = p2;
        }

        if(c3%2==0)
        {
            p3 = 1;
            hammingcode[4] = p3;
        }
        else
        {
            p3 = 0;
            hammingcode[4] = p3;
        }

        for(j=7;j>0;j--)
        {
            cout << hammingcode[j] << "\t";
        }

    }
    else
    {
        cout << "try again\n";
        goto l;
    }


    return 0;
}
