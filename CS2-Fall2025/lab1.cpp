#include <iostream>
using namespace std;

int const NUM_OF_PLAYERS = 12;

struct Player
{
    string playerName;
    int playerNumber;
    int playerScore;
};

Player playerList[NUM_OF_PLAYERS];
void enterPlayerData();
void displayPlayerData();
void showHighestScorer();
void showTotalScore();

void enterPlayerData(){
    for(int i = 0; i < NUM_OF_PLAYERS; i++){
        cout << "Enter player " << (i + 1) << "'s name: ";
        cin >> playerList[i].playerName;
        cout << "Enter player " << (i + 1) << "'s number: ";
        cin >> playerList[i].playerNumber;
        while (playerList[i].playerNumber < 0)
            {
                cout << "Enter player " << (i + 1) << "'s number(Enter only positive digits): ";
                cin >> playerList[i].playerNumber;
            }
        cout << "Enter player " << (i + 1) << "'s score: ";
        cin >> playerList[i].playerScore;
        while (playerList[i].playerScore < 0)
        {
            cout << "Enter player " << (i + 1) << "'s score(Enter only positive digits): ";
            cin >> playerList[i].playerScore;
        }
    }
    }

void displayPlayerData(){
    cout << "Player Data:\n";
    for(int i = 0; i < NUM_OF_PLAYERS; i++){
        cout << "Name: " << playerList[i].playerName 
             << "\tNumber: " << playerList[i].playerNumber 
             << "\tScore: " << playerList[i].playerScore << endl;
    }
}

void showHighestScorer(){
    int highestScoreIndex = 0;
    for(int i = 1; i < NUM_OF_PLAYERS; i++){
        if(playerList[i].playerScore > playerList[highestScoreIndex].playerScore){
            highestScoreIndex = i;
        }
    }
    cout << "Highest Scorer:\n";
    cout << "Name: " << playerList[highestScoreIndex].playerName 
         << "\tNumber: " << playerList[highestScoreIndex].playerNumber 
         << "\tScore: " << playerList[highestScoreIndex].playerScore << endl;
}

void showTotalScore(){
    int totalScore = 0;
    for(int i = 0; i < NUM_OF_PLAYERS; i++){
        totalScore += playerList[i].playerScore;
    }
    cout << "Total Score of all players: " << totalScore << endl;
}


int main(){
    enterPlayerData();
    displayPlayerData();
    showHighestScorer();
    showTotalScore();
        return 0;
}
