#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

class DigitalClock {
private:
    int hour, min, sec;

public:
    DigitalClock() {
        hour = min = sec = 0;
    }

    void getUserInput() {
        cout << setw(70) << "*Enter Current time*\n";
        cout << "HH- "; cin >> hour;
        cout << "MM- "; cin >> min;
        cout << "SS- "; cin >> sec;
    }

    void displayClock() {
        while (true) {
            system("cls");
            cout << "\n\n\n\n~~~~~~~~~" << "~~~~~~~~~~~~~~~~~~~~~" << "~~~~~~~~~~~~~~~~~~"
                 << "Current Time = " << hour << ":" << min << ":" << sec
                 << "Hrs~~~~~~~~~~~~~~~~~~" << "~~~~~~~~~~~~~~~~~~~~~" << "~~~~~~~~~";
            Sleep(1000);

            sec++;
            if (sec == 60) {
                sec = 0;
                min++;
                if (min == 60) {
                    min = 0;
                    hour++;
                    if (hour == 24) {
                        hour = 0;
                    }
                }
            }
        }
    }
};

int main() {
    DigitalClock clock;
    clock.getUserInput();
    clock.displayClock();
    return 0;
}

