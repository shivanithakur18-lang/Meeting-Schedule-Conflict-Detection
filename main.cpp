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
    int n;

    cout << "MEETING SCHEDULE CONFLICT DETECTION SYSTEM\n";
    cout << "--------------------------------------------\n";

    cout << "Enter number of meetings: ";
    cin >> n;

    Meeting m[50];

    // Input meeting details
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for Meeting " << i + 1 << endl;

        cout << "Meeting name: ";
        cin >> m[i].name;

        cout << "Start time (24-hour format): ";
        cin >> m[i].start;

        cout << "End time (24-hour format): ";
        cin >> m[i].end;
    }

    cout << "\n\nMEETING SCHEDULE\n";
    cout << "----------------\n";

    for (int i = 0; i < n; i++)
    {
        cout << m[i].name << " : "
             << m[i].start << " - "
             << m[i].end << endl;
    }

    // Check conflicts
    cout << "\nCONFLICT DETECTION\n";
    cout << "------------------\n";

    bool conflict = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (m[i].start < m[j].end &&
                m[j].start < m[i].end)
            {
                cout << "Conflict found between "
                     << m[i].name << " and "
                     << m[j].name << endl;

                conflict = true;
            }
        }
    }

    if (conflict == false)
    {
        cout << "No conflicts found. All meetings are scheduled properly.\n";
    }

    return 0;
}