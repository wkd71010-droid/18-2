#include <iostream>
#include <string>
#include "Player.h"
#include "Warrior.h"
#include "Magician.h"
#include "Archer.h"
#include "Thief.h"
#include "Monster.h"
#include "slime.h"

using namespace std;

int main() {

    string jobs[] = { "Warrior", "Magician", "Archer", "Thief" };
    string nickname;
    int menu = 0;
    int job_choice = 0;

    Player* player = nullptr;
    Monster* monster = nullptr;

    cout << "Enter your nickname: ";
    cin >> nickname;
    cout << "Welcome, " << nickname << endl;

    while (true) {

        cout << "\n========= MENU =========" << endl;
        cout << "1. Go TO Fight" << endl;
        cout << "2. Change Job" << endl;
        cout << "3. Your stat" << endl;
        cout << "4. Exit" << endl;
        cout << "Select: ";
        cin >> menu;
        cout << "=========================" << endl;

        switch (menu) {

        case 1:
        {
            if (player == nullptr) {
                cout << "You have not chosen a job yet." << endl;
                break;

            }

            cout << "\n===== Battle Start =====" << endl;

            Monster* monster = new Slime("Slime");

            while (!player->isDead() && !monster->isDead()) {
                
                if (player->getSpeed() >= monster->getSpeed()) {
                    cout << "Player turn." << endl;

                    player->attack(monster);
                    monster->printMonsterStatus();

                if (monster->isDead()) {
                        cout << "Monster id Dead!" << endl;
                        break;
                }
                    cout << "\nPress any key: ";
                    cin.ignore();
                    cin.get();

                    cout << "\nMonster Turn" << endl;
                    monster->attack(player);
                    player->printPlayerStatus();

                    cout << "\nPress any key: ";
                    cin.ignore();
                    cin.get();


                    if (player->isDead()) {
                        cout << "GAME OVER..." << endl;
                        return 0;
                }
            }
                else {

                    cout << "\nMonster turn!" << endl;
                    monster->attack(player);
                    player->printPlayerStatus();

                    if (player->isDead()) {
                        cout << "GAME OVER..." << endl;
                        return 0;
                    }

                    cout << "\nPress any key: ";
                    cin.ignore();
                    cin.get();

                    cout << "\nPlayer turn!" << endl;
                    player->attack(monster);
                    monster->printMonsterStatus();

                    cout << "\nPress any key: ";
                    cin.ignore();
                    cin.get();

                    if (monster->isDead()) {
                        cout << "Monster is Dead!" << endl;
                        break;
                    }
                }

        }
                delete monster;

            cout << "====== Battle End ======\n" << endl;

            break;
        }
            

        case 2:
            cout << "\n<Change Job>" << endl;
            cout << "=========================" << endl;
            cout << "Choose your job." << endl;
            cout << endl;

            for (int i = 0; i < 4; i++) {
                cout << (i + 1) << ". " << jobs[i] << endl;
            }

            cout << "Select: ";
            cin >> job_choice;

            if (player != nullptr) {
                delete player;
                player = nullptr;
            }

            switch (job_choice) {

            case 1:
                player = new Warrior(nickname);
                break;

            case 2:
                player = new Magician(nickname);
                break;

            case 3:
                player = new Archer(nickname);
                break;

            case 4:
                player = new Thief(nickname);

            default:
                cout << "Invalid input." << endl;
                break;
            }

            if (player != nullptr) {
                cout << "\nJob changed successfully." << endl;
                cout << endl;
                player->printPlayerStatus();
            }

            break;

        case 3:
            if (player == nullptr) {
                cout << "You have not chosen a job yet." << endl;
            }
            else {
                player->printPlayerStatus();
            }
            break;
            
        case 4:
            cout << "Exiting the game." << endl;
            delete player;
            delete monster;
            player = nullptr;
            return 0;

        default:
            cout << "Invalid menu selection." << endl;
            break;
        }
    }
}