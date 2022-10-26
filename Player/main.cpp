#include<iostream>
using namespace std;

class Player //DO NOT change the class name
{
private:
    int playerID;
    string playerName;
    int playedMatches;
    int playerScore;

public:
    int getPlayerID() {
        return playerID;
    }
    string getPlayerName() {
        return playerName;
    }
    int getPlayedMatches() {
        return playedMatches;
    }
    int getPlayerScore() {
        return playerScore;
    }

    //Implement a parameterized constructor for 3 arguments - playerID, playerName and playerScore.
    Player(int playerID, string playerName, int playerScore) {
        this->playerID = playerID;

        this->playerName = playerName;

        this->playerScore = playerScore;
    }
    //Implement a parameterized constructor for 4 arguments - playerID, playerName,playedMatches and playerScore.
    Player(int playerID, string playerName, int playedMatches, int playerScore) {
        this->playerID = playerID;

        this->playerName = playerName;

        this->playedMatches = playedMatches;

        this->playerScore = playerScore;
    }

    void displayThreeArgument()
    {
        cout << "Player ID. : " << getPlayerID() << endl;
        cout << "Player Name : " << getPlayerName() << endl;
        cout << "Player Score : "<< getPlayerScore() << endl;
    }


    void displayFourArgument()
    {
        cout << "Player ID. : " << getPlayerID() << endl;
        cout << "Player Name : " << getPlayerName() << endl;
        cout << "Played Matches : " << getPlayedMatches() << endl;
        cout << "Player Score : "<< getPlayerScore() << endl;
    }

    ~Player() {
        cout << "Destructor Called" << endl;
    }
};

int main(){
    Player p1(1001, "John", 130);
    p1.displayThreeArgument();
    Player p2(1002, "Raj", 100, 5000);
    p2.displayFourArgument();

    return 0;
}
