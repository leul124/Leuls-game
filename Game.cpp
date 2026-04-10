#include <iostream>
#include <limits>
using namespace std;

// Fixed function
void pressentertocontinue() {
    cout << "\nPress Enter to continue...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

int main() {
    int health = 100;
    int potions = 2;
    int choice;

    cout << "Welcome to Shadow of the Lost City!" << endl;
    cout << "You are a lone adventurer searching for a lost ancient city.\n";

    pressentertocontinue();

    cout << "Legends say it holds a powerful artifact—but it’s guarded by danger.\n";
    pressentertocontinue();

    cout << "Your goal:\nSurvive\nMake smart choices\nReach the final chamber\n";
    pressentertocontinue();

    cout << "Your health: " << health << "\nPotions: " << potions << endl;

    // LEVEL 1
    cout << "\nYou arrive at a dark forest.\n";
    cout << "1. Enter forest\n2. Follow river\n";

    cin >> choice;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while (choice != 1 && choice != 2) {
        cout << "Enter 1 or 2: ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    if (choice == 1) {
        cout << "\nA wild beast attacks!\n";
        cout << "You fight and win, but take damage.\n";
        health -= 40;
        cout << "Health: " << health << endl;
    }
    else {
        cout << "\nYou find a potion but get hurt.\n";
        health -= 20;
        potions += 1;
        cout << "Health: " << health << "\nPotions: " << potions << endl;

        cout << "You use a potion and heal.\n";
        health = 100;
    }

    pressentertocontinue();

    // LEVEL 2
    cout << "\nYou enter a dark cave.\n";
    cout << "1. Move quietly\n2. Run inside\n";

    cin >> choice;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    while (choice != 1 && choice != 2) {
        cout << "Enter 1 or 2: ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    if (choice == 1) {
        cout << "\nYou avoid danger but hit a trap.\n";
        potions--;
        health = 100;
    }
    else {
        cout << "\nA guardian attacks!\n";
        health -= 60;
        cout << "Health: " << health << endl;

        cout << "You use a potion to heal.\n";
        potions--;
        health = 100;
    }

    pressentertocontinue();

    // FINAL LEVEL
    cout << "\nYou reach the lost city...\n";
    cout << "A Shadow Guardian appears!\n";

    health -= 70;

    if (potions > 0) {
        cout << "You use your last potion!\n";
        health = 100;
        potions--;

        cout << "\nYou defeat the Shadow Guardian!\n";
        cout << "You are now a legend!\n";
    }
    else {
        cout << "\nYou have no potions...\n";
        cout << "You were defeated.\nGAME OVER\n";
    }

    return 0;
}