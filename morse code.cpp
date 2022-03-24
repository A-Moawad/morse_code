#include <iostream>
#include <string>
using namespace std;

string morseEncode(char x)
{
    switch (x)
    {
        case 'a':
            return ".- ";
        case 'b':
            return "-... ";
        case 'c':
            return "-.-. ";
        case 'd':
            return "-.. ";
        case 'e':
            return ".";
        case 'f':
            return "..-. ";
        case 'g':
            return "--. ";
        case 'h':
            return ".... ";
        case 'i':
            return ".. ";
        case 'j':
            return ".--- ";
        case 'k':
            return "-.- ";
        case 'l':
            return ".-.. ";
        case 'm':
            return "-- ";
        case 'n':
            return "-. ";
        case 'o':
            return "--- ";
        case 'p':
            return ".--. ";
        case 'q':
            return "--.- ";
        case 'r':
            return ".-. ";
        case 's':
            return "... ";
        case 't':
            return "- ";
        case 'u':
            return "..- ";
        case 'v':
            return "...- ";
        case 'w':
            return ".-- ";
        case 'x':
            return "-..- ";
        case 'y':
            return "-.-- ";
        case 'z':
            return "--.. ";
        case ' ' :
            return "   ";
        default:
            cout << "Found invalid character: " << x << ' '<< endl;
            exit(0);
    }
}

void morseCode(string s)
{

    for (int i = 0; s[i]; i++)
        cout << morseEncode(s[i]);
    cout << endl;
}


// Driver's code
int main()
{
    int choice;
    string s;
    cout<<"\t\tMORSE CODE\n";
    cout<<"  please press 1 incase of (english to morse)\n";
    cout<<"  press 2 incase of (morse to english) :\n";
    cin>>choice;
    if (choice==1) {
        cout << "Please enter a sentence to transfere to morse code : ";
        cin.ignore(10000,'\n');
        getline(cin, s);
        morseCode(s);
    }
    else if(choice==2) {
        cout << "Please enter a morse code to convert to english: ";   //.- .... -- . -..   -- --- .... .- -- . -..
        //A    h   m  e d     m  o    h   a  m  e  d
        cin.ignore(10000, '\n');
        getline(cin,s);
        for (int i = 0; s[i]!='0'; i++) {

            if (s[i] == '.' &&s[i+1]== '-' &&s[i+2] == ' ') {
                if(s[i]=='.'&&s[i+1]=='-'&&s[i+2]==' '&&s[i+3]==' '&&s[i+4]==' ') {
                    cout << "A ";
                    i+=4;
                }
                else if(s[i]=='.'&&s[i+1]=='-'&&s[i+2]==' ') {
                    cout << "A";
                    i+=2;
                }
            }

            else if (s[i]=='-'&&s[i+1]=='.'&&s[i+2]=='.'&&s[i+3]=='.'&&s[i+4]==' ') {
                if(s[i]=='-'&&s[i+1]=='.'&&s[i+2]=='.'&&s[i+3]=='.'&&s[i+4]==' '&&s[i+5]==' '&&s[i+6]==' ') {
                    cout << "B ";
                    i+=6;
                }
                else if(s[i]=='-'&&s[i+1]=='.'&&s[i+2]=='.'&&s[i+3]=='.'&&s[i+4]==' ') {
                    cout << "B";
                    i+=4;
                }
            }

            else if (s[i]=='-'&&s[i+1]=='.'&&s[i+2]=='-'&&s[i+3]=='.'&&s[i+4]==' ') {
                if(s[i]=='-'&&s[i+1]=='.'&&s[i+2]=='-'&&s[i+3]=='.'&&s[i+4]==' '&&s[i+5]==' '&&s[i+6]==' ') {
                    cout << "C ";
                    i+=6;
                }
                else if(s[i]=='-'&&s[i+1]=='.'&&s[i+2]=='-'&&s[i+3]=='.'&&s[i+4]==' ') {
                    cout << "C";
                    i+=4;
                }
            }

            else if (s[i]=='-'&&s[i+1]=='.'&&s[i+2]=='.'&&s[i+3]==' ') {
                if(s[i]=='-'&&s[i+1]=='.'&&s[i+2]=='.'&&s[i+3]==' '&&s[i+4]==' '&&s[i+5]==' ') {
                    cout << "D ";
                    i+=5;
                }
                else if(s[i]=='-'&&s[i+1]=='.'&&s[i+2]=='.'&&s[i+3]==' ') {
                    cout << "D";
                    i+=3;
                }
            }

            else if (s[i]=='.'&&s[i+1]==' ') {
                if(s[i]=='.'&&s[i+1]==' '&&s[i+2]==' '&&s[i+3]==' ') {
                    cout << "E ";
                    i+=3;
                }
                else if(s[i]=='.'&&s[i+1]==' ') {
                    cout << "E";
                    i+=1;
                }
            }

            else if (s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='-'&&s[i+3]=='.'&&s[i+4]==' ') {
                if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '-' && s[i + 3] == '.' && s[i + 4] == ' ' &&s[i + 5] == ' ' && s[i + 6] == ' ') {
                    cout << "F ";
                    i += 6;
                } else if (s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '-' && s[i + 3] == '.' && s[i + 4] == ' ') {
                    cout << "F";
                    i+=4;
                }
            }

            else if (s[i]=='-'&&s[i+1]=='-'&&s[i+2]=='.'&&s[i+3]==' ') {
                if(s[i]=='-'&&s[i+1]=='-'&&s[i+2]=='.'&&s[i+3]==' '&&s[i+4]==' '&&s[i+5]==' ') {
                    cout << "G ";
                    i+=5;
                }
                else if(s[i]=='-'&&s[i+1]=='-'&&s[i+2]=='.'&&s[i+3]==' ') {
                    cout << "G";
                    i+=3;
                }
            }

            else if (s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='.'&&s[i+3]=='.'&&s[i+4]==' ') {
                if(s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='.'&&s[i+3]=='.'&&s[i+4]==' '&&s[i+5]==' '&&s[i+6]==' ') {
                    cout << "H ";
                    i+=6;
                }
                else if(s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='.'&&s[i+3]=='.'&&s[i+4]==' ') {
                    cout << "H";
                    i+=4;
                }
            }

            else if (s[i]=='.'&&s[i+1]=='.'&&s[i+2]==' ') {
                if(s[i]=='.'&&s[i+1]=='.'&&s[i+2]==' '&&s[i+3]==' '&&s[i+3]==' ') {
                    cout << "I ";
                    i+=3;
                }
                else if(s[i]=='.'&&s[i+1]=='.'&&s[i+2]==' ') {
                    cout << "I";
                    i+=2;
                }
            }


            else if (s[i]=='.'&&s[i+1]=='-'&&s[i+2]=='-'&&s[i+3]=='-'&&s[i+4]==' ') {
                if(s[i]=='.'&&s[i+1]=='-'&&s[i+2]=='-'&&s[i+3]=='-'&&s[i+4]==' '&&s[i+5]==' '&&s[i+6]==' ') {
                    cout << "J ";
                    i+=6;
                }
                else if(s[i]=='.'&&s[i+1]=='-'&&s[i+2]=='-'&&s[i+3]=='-'&&s[i+4]==' ') {
                    cout << "J";
                    i+=4;
                }
            }

            else if (s[i]=='-'&&s[i+1]=='.'&&s[i+2]=='-'&&s[i+3]==' ') {
                if(s[i]=='-'&&s[i+1]=='.'&&s[i+2]=='-'&&s[i+3]==' '&&s[i+4]==' '&&s[i+5]==' ') {
                    cout << "K ";
                    i+=5;
                }
                else if(s[i]=='-'&&s[i+1]=='.'&&s[i+2]=='-'&&s[i+3]==' ') {
                    cout << "K";
                    i+=3;
                }
            }

            else if (s[i]=='.'&&s[i+1]=='-'&&s[i+2]=='.'&&s[i+3]=='.'&&s[i+4]==' ') {
                if(s[i]=='.'&&s[i+1]=='-'&&s[i+2]=='.'&&s[i+3]=='.'&&s[i+4]==' '&&s[i+5]==' '&&s[i+6]==' ') {
                    cout << "L ";
                    i+=6;
                }
                else if(s[i]=='.'&&s[i+1]=='-'&&s[i+2]=='.'&&s[i+3]=='.'&&s[i+4]==' ') {
                    cout << "L";
                    i+=4;
                }
            }

            else if (s[i]=='-'&&s[i+1]=='-'&&s[i+2]==' ') {
                if (s[i] == '-' && s[i + 1] == '-' && s[i + 2] == ' ' && s[i + 3] == ' ' && s[i + 4] == ' ') {
                    cout << "M ";
                    i+=4;
                }
                else if (s[i] == '-' && s[i + 1] == '-' && s[i + 2] == ' ') {
                    cout << "M";
                    i+=2;
                }
            }

            else if (s[i]=='-'&&s[i+1]=='.'&&s[i+2]==' ') {
                if(s[i]=='-'&&s[i+1]=='.'&&s[i+2]==' '&&s[i+3]==' '&&s[i+4]==' ') {
                    cout << "N ";
                    i+=4;
                }
                else if(s[i]=='-'&&s[i+1]=='.'&&s[i+2]==' ') {
                    cout << "N";
                    i+=2;
                }
            }

            else if (s[i]=='-'&&s[i+1]=='-'&&s[i+2]=='-'&&s[i+3]==' ') {
                if(s[i]=='-'&&s[i+1]=='-'&&s[i+2]=='-'&&s[i+3]==' '&&s[i+4]==' '&&s[i+5]==' ') {
                    cout << "O ";
                    i+=5;
                }
                else if(s[i]=='-'&&s[i+1]=='-'&&s[i+2]=='-'&&s[i+3]==' ') {
                    cout << "O";
                    i+=3;
                }
            }

            else if (s[i]=='.'&&s[i+1]=='-'&&s[i+2]=='-'&&s[i+3]=='.'&&s[i+4]==' ') {
                if(s[i]=='.'&&s[i+1]=='-'&&s[i+2]=='-'&&s[i+3]=='.'&&s[i+4]==' '&&s[i+5]==' '&&s[i+6]==' ') {
                    cout << "P ";
                    i+=6;
                }
                else if(s[i]=='.'&&s[i+1]=='-'&&s[i+2]=='-'&&s[i+3]=='.'&&s[i+4]==' ') {
                    cout << "P";
                    i+=4;
                }
            }

            else if (s[i]=='-'&&s[i+1]=='-'&&s[i+2]=='.'&&s[i+3]=='-'&&s[i+4]==' ') {
                if(s[i]=='-'&&s[i+1]=='-'&&s[i+2]=='.'&&s[i+3]=='-'&&s[i+4]==' '&&s[i+5]==' '&&s[i+6]==' ') {
                    cout << "Q ";
                    i+=6;
                }
                else if(s[i]=='-'&&s[i+1]=='-'&&s[i+2]=='.'&&s[i+3]=='-'&&s[i+4]==' ') {
                    cout << "Q";
                    i+=4;
                }
            }

            else if (s[i]=='.'&&s[i+1]=='-'&&s[i+2]=='.'&&s[i+3]==' ') {
                if(s[i]=='.'&&s[i+1]=='-'&&s[i+2]=='.'&&s[i+3]==' '&&s[i+4]==' '&&s[i+5]==' ') {
                    cout << "R ";
                    i+=5;
                }
                else if(s[i]=='.'&&s[i+1]=='-'&&s[i+2]=='.'&&s[i+3]==' ') {
                    cout << "R";
                    i+=3;
                }
            }

            else if (s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='.'&&s[i+3]==' ') {
                if(s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='.'&&s[i+3]==' '&&s[i+4]==' '&&s[i+5]==' ') {
                    cout << "S ";
                    i+=5;
                }
                else if(s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='.'&&s[i+3]==' ') {
                    cout << "S";
                    i+=3;
                }
            }

            else if (s[i]=='-'&&s[i+1]==' ') {
                if(s[i]=='-'&&s[i+1]==' '&&s[i+2]==' '&&s[i+3]==' ') {
                    cout << "T ";
                    i+=3;
                }
                else if(s[i]=='-'&&s[i+1]==' ') {
                    cout << "T";
                    i+=1;
                }
            }

            else if (s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='-'&&s[i+3]==' ') {
                if(s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='-'&&s[i+3]==' '&&s[i+4]==' '&&s[i+5]==' ') {
                    cout << "U ";
                    i+=5;
                }
                else if(s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='-'&&s[i+3]==' ') {
                    cout << "U";
                    i+=3;
                }
            }

            else if (s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='.'&&s[i+3]=='-'&&s[i+4]==' ') {
                if(s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='.'&&s[i+3]=='-'&&s[i+4]==' '&&s[i+5]==' '&&s[i+6]==' ') {
                    cout << "V ";
                    i+=6;
                }
                else if(s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='.'&&s[i+3]=='-'&&s[i+4]==' ') {
                    cout << "V";
                    i+=4;
                }
            }

            else if (s[i]=='.'&&s[i+1]=='-'&&s[i+2]=='-'&&s[i+3]==' ') {
                if(s[i]=='.'&&s[i+1]=='-'&&s[i+2]=='-'&&s[i+3]==' '&&s[i+4]==' '&&s[i+5]==' ') {
                    cout << "W ";
                    i+=5;
                }
                else if(s[i]=='.'&&s[i+1]=='-'&&s[i+2]=='-'&&s[i+3]==' ') {
                    cout << "W";
                    i+=3;
                }
            }

            else if (s[i]=='-'&&s[i+1]=='.'&&s[i+2]=='.'&&s[i+3]=='-'&&s[i+4]==' ') {
                if(s[i]=='-'&&s[i+1]=='.'&&s[i+2]=='.'&&s[i+3]=='-'&&s[i+4]==' '&&s[i+5]==' '&&s[i+6]==' ') {
                    cout << "X ";
                    i+=6;
                }
                else if(s[i]=='-'&&s[i+1]=='.'&&s[i+2]=='.'&&s[i+3]=='-'&&s[i+4]==' ') {
                    cout << "X";
                    i+=4;
                }
            }

            else if (s[i]=='-'&&s[i+1]=='.'&&s[i+2]=='-'&&s[i+3]=='-'&&s[i+4]==' ') {
                if(s[i]=='-'&&s[i+1]=='.'&&s[i+2]=='-'&&s[i+3]=='-'&&s[i+4]==' '&&s[i+5]==' '&&s[i+6]==' ') {
                    cout << "Y ";
                    i+=6;
                }
                else if(s[i]=='-'&&s[i+1]=='.'&&s[i+2]=='-'&&s[i+3]=='-'&&s[i+4]==' ') {
                    cout << "Y";
                    i+=4;
                }
            }

            else if (s[i]=='-'&&s[i+1]=='-'&&s[i+2]=='.'&&s[i+3]=='.'&&s[i+4]==' ') {
                if(s[i]=='-'&&s[i+1]=='-'&&s[i+2]=='.'&&s[i+3]=='.'&&s[i+4]==' '&&s[i+5]==' '&&s[i+6]==' ') {
                    cout << "Z ";
                    i+=6;
                }
                else if(s[i]=='-'&&s[i+1]=='-'&&s[i+2]=='.'&&s[i+3]=='.'&&s[i+4]==' ') {
                    cout << "Z";
                    i+=4;
                }
            }




        }
    }
    else
        cout<<"wrong input";
}