#include <iostream>
#include <windows.h>
#include <vector>

using namespace std;

typedef enum Rank{one, two, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace};
typedef enum suit{spade, diamond, heart, club};

class Card{
private:
    Rank m_Rank;
    suit m_Suit;
    bool m_IsFaceUp;
public:
    Card(){}

    int GetValue(){
    return m_Rank;
    }

    void Flip(){
        if(m_IsFaceUp){
            m_IsFaceUp = false;
        }else{
            m_IsFaceUp = true;
        }
    }
};

class Hand{
private:
    vector<Card*> m_Cards;

public:
    Hand(){}

    void addCard(Card* pCard){
        m_Cards.push_back(pCard);
    }

    void Clear(){
        m_Cards.clear();
    }

    int GetTotal(){
        int total = 0;
        for(int i = 0 ; i < m_Cards.size(); i++){
            total += m_Cards[i]->GetValue();
        }
    }
};

class GenericPlayer{
protected:
    string m_Name;
public:
    GenericPlayer(){}

    virtual bool IsHitting() const = 0;

    bool IsBoosted() const{
    }

    void Bust()const{
    }
};

class Player: public GenericPlayer{
public:
    Player(){}

    virtual bool IsHitting() const{
    }

    void Win()const{
    }

    void Lose()const{
    }

    void Push()const{
    }

};

class House{
public:
    House(){}

    virtual bool IsHitting() const{
    }

    void FlipFirstCard(){
    }
};

class Deck{
public:
    Deck(){}

    void Populate(){
    }

    void Shuffle(){
    }

    void Deal (Hand& aHand){
    }

    void AddItionalCards (GenericPlayer& aGenericPlayer){
    }
} ;

class Game: public Player{
private:
    Deck m_Deck;
    House m_House;
    vector<Player> m_Player;
public:
    Game(vector<string> n_names){
        for(int i = 0; i < n_names.size(); i++){
            //GenericPlayer.m_Name = n_names[i];
            //m_Player.size() = n_names.size();
            //Player(name)[i] = n_names[i];
        }
    }

    void Play(){
    }

};

int main()
{
    cout << "\t\tWelcome to Blackjack!\n\n";

    int numPlayers = 0;
    while (numPlayers < 1 || numPlayers > 7)
    {
        cout << "How many players? (1 - 7): ";
        cin >> numPlayers;
    }

    vector<string> names;
    string name;

    for (int i = 0; i < numPlayers; ++i)
    {
        cout << "Enter player name: ";
        cin >> name;
        names.push_back(name);
    }
    cout << endl;

    // игровой цикл
    Game aGame(names);
    char again = 'y';
    while (again != 'n' && again != 'N')
    {
        aGame.Play();
        cout << "\nDo you want to play again? (Y/N): ";
        cin >> again;
    }



    system ("Pause");
    return 0;
}
