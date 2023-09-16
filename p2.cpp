#include <iostream>
#include <process.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

class pro
{
public:
    int x = qty * mprise;
    char no[14];
    int date, mprise, kh, qty;
    int rate, billno, pay;
    string name, namem, namel, mobile;
    void alldata()

    {

        cout << "\nWELLCOME TO  SHOP ";
        cout << " \n Enter Customer Name :\n";
        cin >> name >> namem >> namel;
        cout << "\n Enter Customer Mobile NO.:" << endl;
        cin >> no;
        cout << "  \t " << endl;
        while (kh != 5)
        {
            cout << "WHAT YOU WAMT TO BUY OR YOU WANT TO BUY AGAIN:"
                 << "\n";
            cout << "[1] MOBILE " << endl;
            cout << "[2] COMPUTER" << endl;
            cout << "[3]  SPEAKER" << endl;
            cout << "[4] LAPTOP " << endl;
            cout << "[5] exit" << endl;
            cout << "" << endl;
            cin >> kh;
            switch (kh)
            {
            case 1:
                cout << "ENTER THE NAME OF MOBILE AND PRISE" << endl;
                cin >> mobile >> mprise;
                cout << "ENTER THE QTY OF PRODUCT" << endl;
                cin >> qty;
                cout << "ENTER THE BILL NO.:" << endl;
                cin >> billno;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;

                cout << " ############  ############# \n";
                cout << "              Karwand Road,\n";
                cout << "              Shirpur : 425427\n";
                cout << "              Mob:000000000\n";
                cout << "              GSTI:27AESF8888J1ZP\n";
                cout << "              BILL NO.:" << billno << "\n";
                cout << " DATE :" << __DATE__ << "         TIME :" << __TIME__ << "\n";
                cout << " Name :" << name << " " << namem << " " << namel << "\n";
                cout << " Ph.No.:" << no << "              POS: Maharashtra" << endl;
                cout << "_________________________________________________" << endl;
                cout << "                                                               " << endl;
                cout << " ITEM          QTY      RATE            TOTAL " << endl;
                cout << "__________________________________________________" << endl;
                cout << "                                               " << endl;
                cout << mobile << "  \t\t" << qty << "\t" << mprise << "\t\t" << qty * mprise << endl;
                cout << "__________________________________________________" << endl;
                cout << "                                               " << endl;
                cout << " ITEN / QTY :" << qty << "        \t      Total :" << qty * mprise << endl;
                cout << "                                               " << endl;
                cout << "                                       NET :" << qty * mprise << endl;
                cout << "__________________________________________________" << endl;
                cout << " MODE OF PAYMENTS : Cash                    " << qty * mprise << endl;
                cout << "__________________________________________________" << endl;
                cout << "                                               " << endl;
                cout << " Declaration :" << endl;
                cout << " we declare that this invoice showa the actual" << endl;
                cout << " price of the goods described & that all" << endl;
                cout << " particulars are true & correct" << endl;
                cout << "                                                   " << endl;
                cout << " TERMS :- No Cash Refund" << endl;
                cout << " * Exchange within 2 days " << endl;
                cout << " * No Exchange on Saturday & Sunday" << endl;
                cout << " * No Exchange Without Barcode and invoice" << endl;
                cout << "                                                   " << endl;
                cout << "!!!!!!! THANK YOU... VISIT AGAIN...!!!!!!" << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;

                break;
            case 2:
                cout << "ENTER THE NAME OF COMPUTER AND PRISE" << endl;
                cin >> mobile >> mprise;
                cout << "ENTER THE QTY OF PRODUCT" << endl;
                cin >> qty;
                cout << "ENTER THE BILL NO.:" << endl;
                cin >> billno;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;

                cout << " ############ SHREE ANAND CREATION ############# \n";
                cout << "              Karwand Road,\n";
                cout << "              Shirpur : 425427\n";
                cout << "              Mob:000000000\n";
                cout << "              GSTI:27AESF8888J1ZP\n";
                cout << "              BILL NO.:" << billno << "\n";
                cout << " DATE :" << __DATE__ << "         TIME :" << __TIME__ << "\n";
                cout << " Name :" << name << " " << namem << " " << namel << "\n";
                cout << " Ph.No.:" << no << "              POS: Maharashtra" << endl;
                cout << "_________________________________________________" << endl;
                cout << "                                                               " << endl;
                cout << " ITEM          QTY      RATE            TOTAL " << endl;
                cout << "__________________________________________________" << endl;
                cout << "                                               " << endl;
                cout << mobile << "  \t\t" << qty << "\t" << mprise << "\t\t" << qty * mprise << endl;
                cout << "__________________________________________________" << endl;
                cout << "                                               " << endl;
                cout << " ITEN / QTY :" << qty << "        \t      Total :" << qty * mprise << endl;
                cout << "                                               " << endl;
                cout << "                                       NET :" << qty * mprise << endl;
                cout << "__________________________________________________" << endl;
                cout << " MODE OF PAYMENTS : Cash                    " << qty * mprise << endl;
                cout << "__________________________________________________" << endl;
                cout << "                                               " << endl;
                cout << " Declaration :" << endl;
                cout << " we declare that this invoice showa the actual" << endl;
                cout << " price of the goods described & that all" << endl;
                cout << " particulars are true & correct" << endl;
                cout << "                                                   " << endl;
                cout << " TERMS :- No Cash Refund" << endl;
                cout << " * Exchange within 2 days " << endl;
                cout << " * No Exchange on Saturday & Sunday" << endl;
                cout << " * No Exchange Without Barcode and invoice" << endl;
                cout << "                                                   " << endl;
                cout << "!!!!!!! THANK YOU... VISIT AGAIN...!!!!!!" << endl;
                                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;

                break;
            case 3:
                cout << "ENTER THE NAME OF SPEAKER AND PRISE" << endl;
                cin >> mobile >> mprise;
                cout << "ENTER THE QTY OF PRODUCT" << endl;
                cin >> qty;
                cout << "ENTER THE BILL NO.:" << endl;
                cin >> billno;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;

                cout << " ############ SHREE ANAND CREATION ############# \n";
                cout << "              Karwand Road,\n";
                cout << "              Shirpur : 425427\n";
                cout << "              Mob:000000000\n";
                cout << "              GSTI:27AESF8888J1ZP\n";
                cout << "              BILL NO.:" << billno << "\n";
                cout << " DATE :" << __DATE__ << "         TIME :" << __TIME__ << "\n";
                cout << " Name :" << name << " " << namem << " " << namel << "\n";
                cout << " Ph.No.:" << no << "              POS: Maharashtra" << endl;
                cout << "_________________________________________________" << endl;
                cout << "                                                               " << endl;
                cout << " ITEM          QTY      RATE            TOTAL " << endl;
                cout << "__________________________________________________" << endl;
                cout << "                                               " << endl;
                cout << mobile << "  \t\t" << qty << "\t" << mprise << "\t\t" << qty * mprise << endl;
                cout << "__________________________________________________" << endl;
                cout << "                                               " << endl;
                cout << " ITEN / QTY :" << qty << "        \t      Total :" << qty * mprise << endl;
                cout << "                                               " << endl;
                cout << "                                       NET :" << qty * mprise << endl;
                cout << "__________________________________________________" << endl;
                cout << " MODE OF PAYMENTS : Cash                    " << qty * mprise << endl;
                cout << "__________________________________________________" << endl;
                cout << "                                               " << endl;
                cout << " Declaration :" << endl;
                cout << " we declare that this invoice showa the actual" << endl;
                cout << " price of the goods described & that all" << endl;
                cout << " particulars are true & correct" << endl;
                cout << "                                                   " << endl;
                cout << " TERMS :- No Cash Refund" << endl;
                cout << " * Exchange within 2 days " << endl;
                cout << " * No Exchange on Saturday & Sunday" << endl;
                cout << " * No Exchange Without Barcode and invoice" << endl;
                cout << "                                                   " << endl;
                cout << "!!!!!!! THANK YOU... VISIT AGAIN...!!!!!!" << endl;
                                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;

                break;
            case 4:
                cout << "ENTER THE NAME OF LAPTOP AND PRISE" << endl;
                cin >> mobile >> mprise;
                cout << "ENTER THE QTY OF PRODUCT" << endl;
                cin >> qty;
                cout << "ENTER THE BILL NO.:" << endl;
                cin >> billno;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;

                cout << " ############ SHREE ANAND CREATION ############# \n";
                cout << "              Karwand Road,\n";
                cout << "              Shirpur : 425427\n";
                cout << "              Mob:000000000\n";
                cout << "              GSTI:27AESF8888J1ZP\n";
                cout << "              BILL NO.:" << billno << "\n";
                cout << " DATE :" << __DATE__ << "         TIME :" << __TIME__ << "\n";
                cout << " Name :" << name << " " << namem << " " << namel << "\n";
                cout << " Ph.No.:" << no << "              POS: Maharashtra" << endl;
                cout << "_________________________________________________" << endl;
                cout << "                                                               " << endl;
                cout << " ITEM          QTY      RATE            TOTAL " << endl;
                cout << "__________________________________________________" << endl;
                cout << "                                               " << endl;
                cout << mobile << "  \t\t" << qty << "\t" << mprise << "\t\t" << qty * mprise << endl;
                cout << "__________________________________________________" << endl;
                cout << "                                               " << endl;
                cout << " ITEN / QTY :" << qty << "        \t      Total :" << qty * mprise << endl;
                cout << "                                               " << endl;
                cout << "                                       NET :" << qty * mprise << endl;
                cout << "__________________________________________________" << endl;
                cout << " MODE OF PAYMENTS : Cash                    " << qty * mprise << endl;
                cout << "__________________________________________________" << endl;
                cout << "                                               " << endl;
                cout << " Declaration :" << endl;
                cout << " we declare that this invoice showa the actual" << endl;
                cout << " price of the goods described & that all" << endl;
                cout << " particulars are true & correct" << endl;
                cout << "                                                   " << endl;
                cout << " TERMS :- No Cash Refund" << endl;
                cout << " * Exchange within 2 days " << endl;
                cout << " * No Exchange on Saturday & Sunday" << endl;
                cout << " * No Exchange Without Barcode and invoice" << endl;
                cout << "                                                   " << endl;
                cout << "!!!!!!! THANK YOU... VISIT AGAIN...!!!!!!" << endl;
                                cout << "                                               " << endl;
                cout << "                                               " << endl;
                cout << "                                               " << endl;

                break;
            }
        }
        cout << "________________________________" << endl
             << endl;
        cout << "# H A V E  A  N I C E  D A Y ! #" << endl;
        cout << "________________________________" << endl
             << endl;
    }
};
int main()
{
    int a;
    cout << "ENTER THE PASSWORD :" << endl;
    cin >> a;
    if (a == 12345)
    {

        pro p1;
        p1.alldata();
    }
    else
    {
        cout << "YOU ENTERD WRONG PASSWORD !" << endl;
        cout << "________________________________" << endl
             << endl;
        cout << "# H A V E  A  N I C E  D A Y ! #" << endl;
        cout << "________________________________" << endl
             << endl;
    }

    return 0;
}