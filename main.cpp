// Exercise 1 - SOLUTIONS           February 2022

#include <iostream>
#include <string>
#include <iomanip>
#include<float.h>
#include <map>

using namespace std;

void question1();       // function prototypes
void question2();
void question3();
void question4();
void question5();
void question6();
void question7();
void question8();
void question9();
void question10();
void question11();
void question12();


void question1() {
    string fName, lName;
    cout << "Please enter your first name: " << endl;
    getline(cin, fName);
    cout << "Please enter your second name: " << endl;
    getline(cin, lName);
    cout << lName << ", " << fName << endl;

}

void question2() {
    int age;
    cout << "Please enter your age:" << endl;
    cin >> age;     // assuming user will enter a valid integer value
    if (age < 0) {
        cout << "Invalid age" << endl;
    } else if (age < 18) {
        cout << "You are a child!" << endl;
    } else if (age < 65) {
        cout << "You are an adult!" << endl;
    } else {
        cout << "You are a senior citizen!" << endl;
    }
}

void question3() {
    int choice;
    cout << "Please enter\n1. for Question 1" << endl;
    cout << "2. for Question 2" << endl;
    cin >> choice;
    cin.ignore(1000, '\n');
    switch (choice) {
        case 1:
            cout << "Calling question1()\n";
            question1();
            break;
        case 2:
            cout << "Calling question2()\n";
            question2();
            break;
    }
}

void question4() {
    for (int i = 1; i <= 10; i++) {
        cout << left << setw(3) << i << " * " << setw(3) << i << " = " << (i * i) << endl;
    }
}

void question5() {
    cout << "Square (width = 5; height=5)" << endl;
    for (int y = 0; y < 5; y++) {
        for (int x = 0; x < 5; x++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n\nRectangle (width = 5; height=10)" << endl;
    for (int y = 0; y < 5; y++) {
        for (int x = 0; x < 10; x++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << "\n\nTriangle (height=5)" << endl;
    for (int y = 0; y < 5; y++) {
        for (int x = 0; x < 5 - (y + 1); x++) {
            cout << " ";
        }
        for (int x = 0; x < (y * 2) + 1; x++) {
            cout << "*";
        }
        cout << endl;
    }
}

void question6() {
    char c = CHAR_MAX; // -128 to +127  (is 256 different characters) max is  0x7f (binary 0111_1111)
    int i = INT_MAX;    // 4-byte, (binary: leading 0, followed by 31 ones)
    double d = DBL_MAX; // defined in "float.h"
    cout << (int) c << endl; // cast to int; output the char c as an integer value
    cout << c << endl;  // output the ASCII character corresponding to the max (11111111) or 0xFF
    cout << i << endl;
    cout << d << endl;

    unsigned char uc = UCHAR_MAX; // 0-255;  (binary 1111_1111);
    cout << (int) uc << endl;

}

void question7() {
    char c = CHAR_MAX;
    int i = INT_MAX;
    double d = DBL_MAX;
    cout << "char   sizeof(c) = " << sizeof(c) << endl;
    cout << "int    sizeof(i) = " << sizeof(i) << endl;
    cout << "double sizeof(d) = " << sizeof(d) << endl;
}

void question8() {
    for (int y = 0; y < 5; y++) {
        for (int x = 0; x < 5; x++) {
            cout << "*";
        }
        cout << "\t";
        for (int x = 0; x < 10; x++) {
            cout << "*";
        }
        cout << "\t";   // tab character
        for (int x = 0; x < 5 - (y + 1); x++) {
            cout << " ";
        }
        for (int x = 0; x < (y * 2) + 1; x++) {
            cout << "*";
        }
        cout << endl;   // move to new line
    }
}

void question9() {
    int sqH = 15, recH = 10, triH = 5;

    int max = sqH > recH ? (sqH > triH ? sqH : (recH > triH ? recH : triH)) : triH;

    for (int y = 0; y < max; y++) {
        if (y >= (max - sqH)) {
            for (int x = 0; x < sqH; x++) {
                cout << "*";
            }
        } else {
            cout << string(5, ' ');
        }
        cout << "\t";
        if (y >= (max - recH)) {
            for (int x = 0; x < 10; x++) {
                cout << "*";
            }
        } else {
            cout << string(10, ' ');
        }
        cout << "\t";
        if (y >= (max - triH)) {
            int start = max - triH;
            for (int x = 0; x < triH - ((y - start) + 1); x++) {
                cout << " ";
            }
            for (int x = 0; x < ((y - start) * 2) + 1; x++) {
                cout << "*";
            }
        }
        cout << endl;
    }
}

void question10() {
    string msg;
    cout << "Please enter a message to frame" << endl;
    getline(cin, msg);
    string::size_type stringLength = msg.size();
    string top(stringLength + 4, '*');  // declare a string called 'top', and initialize it
    cout << top << endl;
    cout << "* " << msg << " *" << endl;
    cout << top << endl;
}

void question11() {
    string msgs[] = {"Roses are Red,", "Violets are Blue,",
                     "Sugar is sweet,", "and so are you and you and you ..."};

    string::size_type longestLength = msgs[0].size();  // start with first one as longest

    for (int i = 1; i < 4; i++) {
        if (longestLength < msgs[i].size()) {
            longestLength = msgs[i].size();
        }
    }
    string top(longestLength + 4, '*');
    cout << top << endl;
    for (string s: msgs) {
        string padd(longestLength - s.size(), ' ');
        cout << "* " << s << padd << " *" << endl;
    }
    cout << top << endl;
}

void question12() {
    string msgs[] = {"Roses are Red,", "Violets are Blue,",
                     "Sugar is sweet,", "and so are you and you and you ..."};
    string::size_type longestLength = msgs[0].size();
    for (int i = 1; i < 4; i++) {
        if (longestLength < msgs[i].size()) {
            longestLength = msgs[i].size();
        }
    }

    cout << "Left Aligned " << endl;
    string top(longestLength + 4, '*');
    cout << top << endl;
    for (string s: msgs) {
        string padd(longestLength - s.size(), ' ');
        cout << "* " << s << padd << " *" << endl;
    }
    cout << top << endl;
    cout << "\n\n";
    cout << "Right Aligned " << endl;
    cout << top << endl;
    for (string s: msgs) {
        string pad(longestLength - s.size(), ' ');
        cout << "* " << pad << s << " *" << endl;
    }
    cout << top << endl;
    cout << "\n\n";
    cout << "Center Aligned " << endl;
    cout << top << endl;
    for (string s: msgs) {
        string::size_type diff = longestLength - s.size();
        string padL(diff / 2, ' ');
        string padR(diff - padL.size(), ' ');

        cout << "* " << padL << s << padR << " *" << endl;
    }
    cout << top << endl;
}


typedef void(*questionPtr)(void);

int main() {
    std::map<int, questionPtr> functions;  // don't worry about understanding this code yet.
    functions[1] = question1;
    functions[2] = question2;
    functions[3] = question3;
    functions[4] = question4;
    functions[5] = question5;
    functions[6] = question6;
    functions[7] = question7;
    functions[8] = question8;
    functions[9] = question9;
    functions[10] = question10;
    functions[11] = question11;
    functions[12] = question12;
    int choice;
    do {
        cout << "Please select a question to view, -1 to exit " << endl;

        cin >> choice;
        cin.ignore(1000, '\n');
        if (functions.find(choice) != functions.end()) {
            functions[choice]();
        } else if (choice != -1) {
            cout << "Function not found" << endl;
        }

    } while (choice != -1);

    return 0;
}
