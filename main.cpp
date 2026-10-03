#include <iostream>
#include <string>
using namespace std;

struct Meeting
{
    string name;
    int start;
    int end;
};

int main()
{
    Meeting m[50];
    int n = 0;
    char choice;

    cout << "============================================\n";
    cout << "   MEETING SCHEDULE CONFLICT DETECTION\n";
    cout << "============================================\n";

    // Enter meetings
    do
    {
        cout << "\nEnter details for Meeting " << n + 1 << ":\n";

        cout << "Meeting name: ";
        cin.ignore();
        getline(cin, m[n].name);

        cout << "Start time (24-hour format): ";
        cin >> m[n].start;

        cout << "End time (24-hour format): ";
        cin >> m[n].end;

        n++;

        cout << "\nDo you want to enter another meeting? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    // Display meetings
    cout << "\n============================================\n";
    cout << "             MEETING SCHEDULE\n";
    cout << "============================================\n";

    for (int i = 0; i < n; i++)
    {
        cout << m[i].name << " : "
             << m[i].start << " - "
             << m[i].end << endl;
    }

    // Check conflicts
    cout << "\n============================================\n";
    cout << "             CONFLICT DETECTION\n";
    cout << "============================================\n";

    bool conflict = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (m[i].start < m[j].end &&
                m[j].start < m[i].end)
            {
                cout << "Conflict found between \""
                     << m[i].name << "\" and \""
                     << m[j].name << "\"\n";

                conflict = true;
            }
        }
    }

    if (!conflict)
    {
        cout << "No conflicts found.\n";
    }

    return 0;
}