
    using namespace std;

    #include<iostream>
    #include<conio.h>
    void Referenc(int&);

    int main()
    {
        int No = 10;

        cout<< No << end1;

        Reference(No);

        cout<< No << end1;

        getch();
        return 0;
    }

    void Reference(int &Ref)
    {
        cout << "Inside Function ....."<< end1;
        Ref++;
    }
