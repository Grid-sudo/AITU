#include <iostream>
using namespace std;
int main(){
    int hour{}, minutes{}, seconds{};
    char colon1, colon2;
    cin >> hour >> colon1 >> minutes >> colon2 >> seconds;
    
    int max_hour{23},max_minutes{59}, max_seconds{59};
    if(hour > max_hour or  minutes > max_minutes or seconds > max_seconds){
        cout << "invalid time" << endl;
    }else if(hour == 23 and minutes == 59 and seconds == 59){
        hour = 0;
        minutes = 0;
        seconds = 0;
        cout << hour << ":" << minutes << ":" << seconds << endl;
    }else{
        if(seconds >= 0 and seconds < 59){
            ++seconds;
            cout << hour << ":" << minutes << ":" << seconds << endl;
        }else if(seconds == 59){
                if(minutes >= 0 and minutes < 59){
                    ++minutes;
                    seconds = 0;
                    cout << hour << ":" << minutes << ":" << seconds << endl;
                }else if(minutes == 59){
                    minutes = 0;
                    seconds = 0;
                    ++hour;
                    cout << hour << ":" << minutes << ":" << seconds << endl;
                }
            }else{
                cout << "invalid time" << endl;
            }
        }
    }
