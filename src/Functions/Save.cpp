#include "../functions.h"

string Save(int Num)
{
    cout << "Spaces will not count \nEnter your name: ";
    string a;
    cin >> a;
    cout << a;
    int j;
    ifstream outs, load;
    ofstream save, allnamein;
    string PerRes;
    if (Num < 2.5) {
        allnamein.open("NumName.forge");
        cout << " Saving... " << endl;
        outs.open("stat.forge");
        outs >> j;
        outs.close();
        load.open("score.forge");
        load >> PerRes;
        save.open("score.forge");
        if (Num == 1) {
            save << a << ":" << j;
        }
        if (Num == 2) {
            save << PerRes << "\n" << a << ":" << j;
        }
        Num++;
        allnamein << Num;
        allnamein.close();
        save.close();
        cout << "Saving complete" << endl;
        return "SaveSuccess";
    } else {
        cout << "\nNot enough space for save" << endl;
        cout << "Clear all data y/n" << endl;
        string rewrite;
        cin >> rewrite;
        if (rewrite == "y") {
            ofstream rest, clear;
            clear.open("score.forge");
            rest.open("NumName.forge");
            rest << 1;
            clear << "No Data";
            clear.close();
            rest.close();
            cout << "Cleared\nSave again" << endl;
            return "MemoryClear";
        } else
            cout << "Cancel" << endl;
        return "Cancel";
    }
}
