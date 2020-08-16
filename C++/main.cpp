#include <iostream>

using namespace std;

int main()
{
    // Variables
    string name, q1, q2, q3, q4;
    int score;

    // It Dont Work In C++, Gives Text like ΓûêΓûêΓûêΓûêΓûêΓûêΓòùΓûæΓûæΓ in output

    // cout << "██████╗░░█████╗░██████╗░██╗░░██╗░██╗░░░░░░░██╗███████╗██████╗░" << endl;
    // cout << "██╔══██╗██╔══██╗██╔══██╗██║░██╔╝░██║░░██╗░░██║██╔════╝██╔══██╗" << endl;
    // cout << "██║░░██║███████║██████╔╝█████═╝░░╚██╗████╗██╔╝█████╗░░██████╦╝" << endl;
    // cout << "██║░░██║██╔══██║██╔══██╗██╔═██╗░░░████╔═████║░██╔══╝░░██╔══██╗" << endl;
    // cout << "██████╔╝██║░░██║██║░░██║██║░╚██╗░░╚██╔╝░╚██╔╝░███████╗██████╦╝" << endl;
    // cout << "╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝░░░╚═╝░░░╚═╝░░╚══════╝╚═════╝░" << endl;

    cout << "Enter Your Name :- ";
    getline(cin, name);

    cout << "\nWelcome " << name << " To DarkWeb Quiz" << endl;

    cout << "\n1 - What I Like Most Python or Go :- ";
    getline(cin, q1);

    if (q1 == "python")
    {
        cout << "Correct Answer!" << endl;
        score++;
    }
    else
    {
        cout << "Incorrect Answer" << endl;
    }

    cout << "2 - What Will I Choose In Study and Programming :- ";
    getline(cin, q2);

    if (q2 == "study")
    {
        cout << "Correct Answer!" << endl;
        score++;
    }
    else
    {
        cout << "Incorrect Answer" << endl;
    }

    cout << "3 - Which Color I Like The Most Red or Blue :- ";
    getline(cin, q2);

    if (q2 == "red")
    {
        cout << "Correct Answer!" << endl;
        score++;
    }
    else
    {
        cout << "Incorrect Answer" << endl;
    }

    cout << "4 - What Will I Choose in Iphone and Android :- ";
    getline(cin, q2);

    if (q2 == "iphone")
    {
        cout << "Correct Answer!" << endl;
        score++;
    }
    else
    {
        cout << "Incorrect Answer" << endl;
    }

    cout << "\nThanks " << name << ", For Playing. You Scored " << score << " Points";
    return 0;
}