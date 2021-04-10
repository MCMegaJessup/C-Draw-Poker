#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <numeric>
using namespace std;


vector<vector<int>>deck
{
    {2,1},
    {3,1},
    {4,1},
    {5,1},
    {6,1},
    {7,1},
    {8,1},
    {9,1},
    {10,1},
    {11,1},
    {12,1},
    {13,1},
    {14,1},
    {2,2},
    {3,2},
    {4,2},
    {5,2},
    {6,2},
    {7,2},
    {8,2},
    {9,2},
    {10,2},
    {11,2},
    {12,2},
    {13,2},
    {14,2},
    {2,3},
    {3,3},
    {4,3},
    {5,3},
    {6,3},
    {7,3},
    {8,3},
    {9,3},
    {10,3},
    {11,3},
    {12,3},
    {13,3},
    {14,3},
    {2,4},
    {3,4},
    {4,4},
    {5,4},
    {6,4},
    {7,4},
    {8,4},
    {9,4},
    {10,4},
    {11,4},
    {12,4},
    {13,4},
    {14,4}
};

vector<vector<int>> diamonds
        {
            {2,1},
            {3,1},
            {4,1},
            {5,1},
            {6,1},
            {7,1},
            {8,1},
            {9,1},
            {10,1},
            {11,1},
            {12,1},
            {13,1},
            {14,1}
        };
vector<vector<int>> clubs
        {
            {2,2},
            {3,2},
            {4,2},
            {5,2},
            {6,2},
            {7,2},
            {8,2},
            {9,2},
            {10,2},
            {11,2},
            {12,2},
            {13,2},
            {14,2}
        };
vector<vector<int>> hearts
        {
            {2,3},
            {3,3},
            {4,3},
            {5,3},
            {6,3},
            {7,3},
            {8,3},
            {9,3},
            {10,3},
            {11,3},
            {12,3},
            {13,3},
            {14,3}
        };
vector<vector<int>> spades
        {
            {2,4},
            {3,4},
            {4,4},
            {5,4},
            {6,4},
            {7,4},
            {8,4},
            {9,4},
            {10,4},
            {11,4},
            {12,4},
            {13,4},
            {14,4}
        };

vector<vector<int>> user_hand{};
vector<int> user_hand_vals{};
vector<int> user_hand_suits{};
vector<string> user_cards
{
  "card1",
  "card2",
  "card3",
  "card4",
  "card5"
};

vector<vector<int>> npc_hand{};
vector<int> npc_hand_vals{};
vector<int> npc_hand_suits{};
vector<string> npc_cards
{
  "card1",
  "card2",
  "card3",
  "card4",
  "card5"
};



// DEALER'S SECRET CARDS
string hidden_hand =
{
"         D E A L E R          \n"
" ___   ___   ___   ___   ___  \n"
"|   | |   | |   | |   | |   | \n"
"|___| |___| |___| |___| |___| \n"
};


//--------------------------------------------------------------------------------------------------------------------------------------------//
//                                            CARD ART MIDDLE PART                                                                            //
//      diamonds
     string twodiamonds =
    {
        "|2d | "
    };
    string threediamonds =
    {
        "|3d | "
    };
    string fourdiamonds =
    {
        "|4d | "
    };
    string fivediamonds =
    {
        "|5d | "
    };
    string sixdiamonds =
    {
        "|6d | "
    };
    string sevendiamonds =
    {
        "|7d | "
    };
    string eightdiamonds =
    {
        "|8d | "
    };
    string ninediamonds =
    {
        "|9d | "
    };
    string tendiamonds =
    {
        "|10d| "
    };
    string jackdiamonds =
    {
        "|Jd | "
    };
    string queendiamonds =
    {
        "|Qd | "
    };
    string kingdiamonds =
    {
        "|Kd | "
    };
    string acediamonds =
    {
        "|Ad | "
    };

//      clubs
    string twoclubs =
    {
        "|2c | "
    };
    string threeclubs =
    {
        "|3c | "
    };
    string fourclubs =
    {
        "|4c | "
    };
    string fiveclubs =
    {
        "|5c | "
    };
    string sixclubs =
    {
        "|6c | "
    };
    string sevenclubs =
    {
        "|7c | "
    };
    string eightclubs =
    {
        "|8c | "
    };
    string nineclubs =
    {
        "|9c | "
    };
    string tenclubs =
    {
        "|10c| "
    };
    string jackclubs =
    {
        "|Jc | "
    };
    string queenclubs =
    {
        "|Qc | "
    };
    string kingclubs =
    {
        "|Kc | "
    };
    string aceclubs =
    {
        "|Ac | "
    };

//      hearts
     string twohearts =
    {
        "|2h | "
    };
    string threehearts =
    {
        "|3h | "
    };
    string fourhearts =
    {
        "|4h | "
    };
    string fivehearts =
    {
        "|5h | "
    };
    string sixhearts =
    {
        "|6h | "
    };
    string sevenhearts =
    {
        "|7h | "
    };
    string eighthearts =
    {
        "|8h | "
    };
    string ninehearts =
    {
        "|9h | "
    };
    string tenhearts =
    {
        "|10h| "
    };
    string jackhearts =
    {
        "|Jh | "
    };
    string queenhearts =
    {
        "|Qh | "
    };
    string kinghearts =
    {
        "|Kh | "
    };
    string acehearts =
    {
        "|Ah | "
    };

//      spades
    string twospades =
    {
        "|2s | "
    };
    string threespades =
    {
        "|3s | "
    };
    string fourspades =
    {
        "|4s | "
    };
    string fivespades =
    {
        "|5s | "
    };
    string sixspades =
    {
        "|6s | "
    };
    string sevenspades =
    {
        "|7s | "
    };
    string eightspades =
    {
        "|8s | "
    };
    string ninespades =
    {
        "|9s | "
    };
    string tenspades =
    {
        "|10s| "
    };
    string jackspades =
    {
        "|Js | "
    };
    string queenspades =
    {
        "|Qs | "
    };
    string kingspades =
    {
        "|Ks | "
    };
    string acespades =
    {
        "|As | "
    };

    string user_cardtops =
    {
        " ___   ___   ___   ___   ___  \n"
    };

    string user_cardbottoms =
    {
        "\n|___| |___| |___| |___| |___| \n"
    };

//--------------------------------------------------------------------------------------------------------------------------------------------//




void deal_in()
{
cout << "\n" << hidden_hand << "\n\n\n";

//draws a random card, places it in hand vector, deletes card, repeats until hand has 5 cards
    while (user_hand.size() < 5){
    int RandIndex = rand() % deck.size();
    int RandCardVal = deck[RandIndex][0];
    int RandSuit = deck[RandIndex][1];

    vector<int> v2 = {RandCardVal, RandSuit};
    user_hand.push_back(v2);
    deck.erase (deck.begin()+RandIndex);
    };


    while (npc_hand.size() < 5){
    int RandIndex = rand() % deck.size();
    int RandCardVal = deck[RandIndex][0];
    int RandSuit = deck[RandIndex][1];

    vector<int> v2 = {RandCardVal, RandSuit};
    npc_hand.push_back(v2);
    deck.erase (deck.begin()+RandIndex);
    };

}

void discard()
{
vector<int> card_exchange{};
cout << "\n" << "Draw a new card? (Enter one card number at a time. Finish by inputting a 9.) ";
int input;
bool gimme = false;
while ((card_exchange.size() < 5) && (gimme == false))
{
  cin >> input;
  if ((input == 1) || (input == 2) || (input == 3) || (input == 4) || (input == 5))
  {
    card_exchange.push_back(input);

    //this will ensure duplicate entries are not counted
    sort(card_exchange.begin(),card_exchange.end());
    vector<int>::iterator crit;
    crit = unique(card_exchange.begin(), card_exchange.end());
    card_exchange.resize(distance(card_exchange.begin(),crit));

    cout << "Another? ";
  };
  if (input == 9)
  {
    gimme=true;
  };
  if ((input !=9) && ((input >= 6 ) || (input <= 0)))
  {
    cout << "invalid entry" << "\n";
  };

  //prevents non-ints from endlessly-looping error response
  if(!cin)
  {
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  };
};

//delete cards from hand by index
for (int i = 0; i < card_exchange.size(); i++)
{
    int indextopurge;
    indextopurge = card_exchange[i]-1;
    user_hand.erase (user_hand.begin()+indextopurge);
    /*for (int j = 0; j < user_hand.size(); j++)
    {
        cout << user_hand[j][0];
    };*/

};
//re-deal
while (user_hand.size() < 5)
{
    int RandIndex = rand() % deck.size();
    int RandCardVal = deck[RandIndex][0];
    int RandSuit = deck[RandIndex][1];
    vector<int> v2 = {RandCardVal, RandSuit};
    user_hand.push_back(v2);
    deck.erase (deck.begin()+RandIndex);
};
}


void evaluate_hands()
{
//extracts card value column to new vector
//for user
for (int i = 0; i < user_hand.size(); i++)
{
    //cout << diamonds[i][0] << " ";
    user_hand_vals.push_back(user_hand[i][0]);
};
//extracts card suit column to new vector
for (int i = 0; i < user_hand.size(); i++)
{
    //cout << diamonds[i][0] << " ";
    user_hand_suits.push_back(user_hand[i][1]);
};

//extracts card value column to new vector
//for opponent
for (int i = 0; i < npc_hand.size(); i++)
{
    npc_hand_vals.push_back(npc_hand[i][0]);
};
//extracts card suit column to new vector
for (int i = 0; i < npc_hand.size(); i++)
{
    npc_hand_suits.push_back(npc_hand[i][1]);
};


//evaluating user hand
int user_high_card = *max_element(user_hand_vals.begin(), user_hand_vals.end());
int user_low_card = *min_element(user_hand_vals.begin(), user_hand_vals.end());
int npc_high_card = *max_element(npc_hand_vals.begin(), npc_hand_vals.end());
int npc_low_card = *min_element(npc_hand_vals.begin(), npc_hand_vals.end());
vector<int>npc_hand_score{};
vector<int>user_hand_score{};
bool user_flush;
bool npc_flush;
bool evaluate=true;
while (evaluate=true)
{
if (equal(user_hand_suits.begin() + 1, user_hand_suits.end(), user_hand_suits.begin()))
{
    bool user_flush = true;
}
else
{
    bool user_flush = false;
}

//royal flush
if ((user_high_card==14) && (user_high_card - user_low_card == 4) && (equal(user_hand_suits.begin() + 1, user_hand_suits.end(), user_hand_suits.begin())))
{
    user_hand_score.push_back(10);
};
//straight flush
if ((user_high_card!=14) && (user_high_card - user_low_card == 4) && (equal(user_hand_suits.begin() + 1, user_hand_suits.end(), user_hand_suits.begin())))
{
    user_hand_score.push_back(9);
};
//flush
if ((equal(user_hand_suits.begin() + 1, user_hand_suits.end(), user_hand_suits.begin())) && (user_high_card - user_low_card != 4))
{
    user_hand_score.push_back(6);
};
//straight
if ((user_high_card - user_low_card == 4) && !(equal(user_hand_suits.begin() + 1, user_hand_suits.end(), user_hand_suits.begin())))
{
    user_hand_score.push_back (5);
};

//These are more involved, so put at end in hopes of shortening processing time.

//2kind=4 mode1
//2pair=3 mode2 if there are two 2s
//3kind=3 mode1 if there is one 3
//4kind=2 mode1

//find out how many unique card values in hand
vector<int>my_vals_sorted{};
my_vals_sorted = user_hand_vals;
sort(my_vals_sorted.begin(),my_vals_sorted.end());
vector<int>::iterator it;
it = unique(my_vals_sorted.begin(), my_vals_sorted.end());
my_vals_sorted.resize(distance(my_vals_sorted.begin(),it));

//two of a kind
if (my_vals_sorted.size()==4)
{
    user_hand_score.push_back(2);
}
//full house
//2 unique cards AND the sum of all cards is equal to the sum of the high/low card times 3 plus the other times 2 - if this doesn't work, will need to improvise a value-counting method
else if ((my_vals_sorted.size()==2) && (((user_high_card*3+user_low_card*2)==(accumulate(user_hand_vals.begin(),user_hand_vals.end(),0))) || ((user_high_card*2+user_low_card*3)==(accumulate(user_hand_vals.begin(),user_hand_vals.end(),0)))))
{
  user_hand_score.push_back(7);
}
//four of a kind
//"and not" set of conditions redundant for the sake of safety - test would work without it if placed after full house test
else if (my_vals_sorted.size()==2 && !(((user_high_card*3+user_low_card*2)==(accumulate(user_hand_vals.begin(),user_hand_vals.end(),0))) || ((user_high_card*2+user_low_card*3)==(accumulate(user_hand_vals.begin(),user_hand_vals.end(),0)))))
{
    user_hand_score.push_back(8);
}

//two pair or three of a kind
else if (my_vals_sorted.size()==3)
{
int numtwos = count(user_hand_vals.begin(), user_hand_vals.end(), 2);
int numthrees = count(user_hand_vals.begin(), user_hand_vals.end(), 3);
int numfours = count(user_hand_vals.begin(), user_hand_vals.end(), 4);
int numfives = count(user_hand_vals.begin(), user_hand_vals.end(), 5);
int numsixes = count(user_hand_vals.begin(), user_hand_vals.end(), 6);
int numsevens = count(user_hand_vals.begin(), user_hand_vals.end(), 7);
int numeights = count(user_hand_vals.begin(), user_hand_vals.end(), 8);
int numnines = count(user_hand_vals.begin(), user_hand_vals.end(), 9);
int numtens = count(user_hand_vals.begin(), user_hand_vals.end(), 10);
int numjacks = count(user_hand_vals.begin(), user_hand_vals.end(), 11);
int numqueens = count(user_hand_vals.begin(), user_hand_vals.end(), 12);
int numkings = count(user_hand_vals.begin(), user_hand_vals.end(), 13);
int numaces = count(user_hand_vals.begin(), user_hand_vals.end(), 14);

vector<int>distribution{numtwos,numthrees,numfours,numfives,numsixes,numsevens,numeights,numnines,numtens,numjacks,numqueens,numkings,numaces};

int modality = count(distribution.begin(), distribution.end(), 2);

//two pair
if (modality==2)
    {
        user_hand_score.push_back(3);
    }
//three of a kind
    else
    {
        user_hand_score.push_back(4);
    };
};
//high card (assumes all other hands properly discredited)
user_hand_score.push_back(1);



//All the same code
//but for npc
if (equal(npc_hand_suits.begin() + 1, npc_hand_suits.end(), npc_hand_suits.begin()))
{
    bool npc_flush = true;
}
else
{
    bool npc_flush = false;
}


//royal flush
if ((npc_high_card==14) && (npc_high_card - npc_low_card == 4) && (equal(npc_hand_suits.begin() + 1, npc_hand_suits.end(), npc_hand_suits.begin())))
{
    npc_hand_score.push_back(10);
};
//straight flush
if ((npc_high_card!=14) && (npc_high_card - npc_low_card == 4) && (equal(npc_hand_suits.begin() + 1, npc_hand_suits.end(), npc_hand_suits.begin())))
{
    npc_hand_score.push_back(9);
};
//flush
if ((equal(npc_hand_suits.begin() + 1, npc_hand_suits.end(), npc_hand_suits.begin())) && (npc_high_card - npc_low_card != 4))
{
    npc_hand_score.push_back(6);
};
//straight
if ((npc_high_card - npc_low_card == 4) && !(equal(npc_hand_suits.begin() + 1, npc_hand_suits.end(), npc_hand_suits.begin())))
{
    npc_hand_score.push_back (5);
};

//These are more involved, so put at end in hopes of shortening processing time.

//2kind=4 mode1
//2pair=3 mode2 if there are two 2s
//4kind=2 mode1
//3kind=3 mode1 if there is one 3

//find out how many unique card values in hand
vector<int>their_vals_sorted{};
their_vals_sorted = npc_hand_vals;
sort(their_vals_sorted.begin(),their_vals_sorted.end());
vector<int>::iterator shit;
shit = unique(their_vals_sorted.begin(), their_vals_sorted.end());
their_vals_sorted.resize(distance(their_vals_sorted.begin(),shit));

//two of a kind
if (their_vals_sorted.size()==4)
{
    npc_hand_score.push_back(2);
}
//full house
else if ((their_vals_sorted.size()==2) && (((npc_high_card*3+npc_low_card*2)==(accumulate(npc_hand_vals.begin(),npc_hand_vals.end(),0))) || ((npc_high_card*2+npc_low_card*3)==(accumulate(npc_hand_vals.begin(),npc_hand_vals.end(),0)))))
{
    npc_hand_score.push_back(7);
}
//four of a kind
else if (their_vals_sorted.size()==2 && !(((npc_high_card*3+npc_low_card*2)==(accumulate(npc_hand_vals.begin(),npc_hand_vals.end(),0))) || ((npc_high_card*2+npc_low_card*3)==(accumulate(npc_hand_vals.begin(),npc_hand_vals.end(),0)))))
{
    npc_hand_score.push_back(8);
}

//two pair or three of a kind
else if (their_vals_sorted.size()==3)
{
int numtwos = count(npc_hand_vals.begin(), npc_hand_vals.end(), 2);
int numthrees = count(npc_hand_vals.begin(), npc_hand_vals.end(), 3);
int numfours = count(npc_hand_vals.begin(), npc_hand_vals.end(), 4);
int numfives = count(npc_hand_vals.begin(), npc_hand_vals.end(), 5);
int numsixes = count(npc_hand_vals.begin(), npc_hand_vals.end(), 6);
int numsevens = count(npc_hand_vals.begin(), npc_hand_vals.end(), 7);
int numeights = count(npc_hand_vals.begin(), npc_hand_vals.end(), 8);
int numnines = count(npc_hand_vals.begin(), npc_hand_vals.end(), 9);
int numtens = count(npc_hand_vals.begin(), npc_hand_vals.end(), 10);
int numjacks = count(npc_hand_vals.begin(), npc_hand_vals.end(), 11);
int numqueens = count(npc_hand_vals.begin(), npc_hand_vals.end(), 12);
int numkings = count(npc_hand_vals.begin(), npc_hand_vals.end(), 13);
int numaces = count(npc_hand_vals.begin(), npc_hand_vals.end(), 14);

vector<int>distribution{numtwos,numthrees,numfours,numfives,numsixes,numsevens,numeights,numnines,numtens,numjacks,numqueens,numkings,numaces};

int modality = count(distribution.begin(), distribution.end(), 2);
//two pair
if (modality==2)
    {
        npc_hand_score.push_back(3);
    }
//three of a kind
    else
    {
        npc_hand_score.push_back(4);
    };
};
//high card (assumes all other hands properly discredited)
npc_hand_score.push_back(1);


break;

};


//final message
if (user_hand_score < npc_hand_score)
{
    cout << "\n\n  Y O U   L O S E !! \n\n";
}
else if (user_hand_score > npc_hand_score)
{
    cout << "\n\n  Y O U   W I N !! \n\n";
}
//redundant, but writing it this way just to make sure errors with scoring are noticed
else if (user_hand_score == npc_hand_score)
{
    if (user_high_card < npc_high_card)
    {
        cout << "\n\n  Y O U   L O S E !! \n\n";
    }
    else if (user_high_card > npc_high_card)
    {
        cout << "\n\n  Y O U   W I N !! \n\n";
    }
    else
    {
        cout << "\n\n  D R A W !! \n\n";
    };
};

user_hand.erase (user_hand.begin(),user_hand.end());
npc_hand.erase (npc_hand.begin(),npc_hand.end());

}

void getsuit()
{
    string sname;
    cout << "Enter suit: \n";
    cin >> sname;
    if(sname == "diamonds"){
        for (int i = 0; i < diamonds.size(); i++)
            {
                for (int j = 0; j < diamonds[i].size(); j++)
                {
                    cout << diamonds[i][j] << " ";
                }
                cout << endl;
            }}
        else if(sname == "clubs"){
            for (int i = 0; i < clubs.size(); i++)
                {
                    for (int j = 0; j < clubs[i].size(); j++)
                    {
                        cout << clubs[i][j] << " ";
                    }
                    cout << endl;
                }}
        else if (sname == "hearts"){
            for (int i = 0; i < hearts.size(); i++)
                {
                    for (int j = 0; j < hearts[i].size(); j++)
                    {
                        cout << hearts[i][j] << " ";
                    }
                    cout << endl;
                }}
        else if (sname == "spades"){
            for (int i = 0; i < spades.size(); i++)
                {
                    for (int j = 0; j < spades[i].size(); j++)
                    {
                        cout << spades[i][j] << " ";
                    }
                    cout << endl;
                }}
        else {
            cout << "Invalid suit";
        }
    }



void print_userhand()
{
//this is way too much code, there's got to be a cleaner method

    cout <<  "         P L A Y E R \n" << user_cardtops;

//user_cards vector was an experiment and I didn't feel like deleting all that code

//middle art for the diamonds card 1

                if ((user_hand[0][0]== 2) && (user_hand[0][1]== 1))
                {
                 user_cards[0] = "two of diamonds";
                 cout << twodiamonds;
                }

                if ((user_hand[0][0]== 3) && (user_hand[0][1]== 1))
                {
                 user_cards[0] = "three of diamonds";
                 cout << threediamonds;
                }

                if ((user_hand[0][0]== 4) && (user_hand[0][1]== 1))
                {
                 user_cards[0] = "four of diamonds";
                 cout << fourdiamonds;
                }

                if ((user_hand[0][0]== 5) && (user_hand[0][1]== 1))
                {
                 user_cards[0] = "five of diamonds";
                 cout << fivediamonds;
                }

                if ((user_hand[0][0]== 6) && (user_hand[0][1]== 1))
                {
                 user_cards[0] = "six of diamonds";
                 cout << sixdiamonds;
                }

                if ((user_hand[0][0]== 7) && (user_hand[0][1]== 1))
                {
                 user_cards[0] = "seven of diamonds";
                 cout << sevendiamonds;
                }

                if ((user_hand[0][0]== 8) && (user_hand[0][1]== 1))
                {
                 user_cards[0] = "eight of diamonds";
                 cout << eightdiamonds;
                }

                if ((user_hand[0][0]== 9) && (user_hand[0][1]== 1))
                {
                 user_cards[0] = "nine of diamonds";
                 cout << ninediamonds;
                }

                if ((user_hand[0][0]== 10) && (user_hand[0][1]== 1))
                {
                 user_cards[0] = "ten of diamonds";
                 cout << tendiamonds;
                }

                if ((user_hand[0][0]== 11) && (user_hand[0][1]== 1))
                {
                 user_cards[0] = "jack of diamonds";
                 cout << jackdiamonds;
                }

                if ((user_hand[0][0]== 12) && (user_hand[0][1]== 1))
                {
                 user_cards[0] = "queen of diamonds";
                 cout << queendiamonds;
                }

                if ((user_hand[0][0]== 13) && (user_hand[0][1]== 1))
                {
                 user_cards[0] = "king of diamonds";
                 cout << kingdiamonds;
                }

                if ((user_hand[0][0]== 14) && (user_hand[0][1]== 1))
                {
                 user_cards[0] = "ace of diamonds";
                 cout << acediamonds;
                }

//middle art for the clubs

                if ((user_hand[0][0]== 2) && (user_hand[0][1]== 2))
                {
                 user_cards[0] = "two of clubs";
                 cout << twoclubs;
                }

                if ((user_hand[0][0]== 3) && (user_hand[0][1]== 2))
                {
                 user_cards[0] = "three of clubs";
                 cout << threeclubs;
                }

                if ((user_hand[0][0]== 4) && (user_hand[0][1]== 2))
                {
                 user_cards[0] = "four of clubs";
                 cout << fourclubs;
                }

                if ((user_hand[0][0]== 5) && (user_hand[0][1]== 2))
                {
                 user_cards[0] = "five of clubs";
                 cout << fiveclubs;
                }

                if ((user_hand[0][0]== 6) && (user_hand[0][1]== 2))
                {
                 user_cards[0] = "six of clubs";
                 cout << sixclubs;
                }

                if ((user_hand[0][0]== 7) && (user_hand[0][1]== 2))
                {
                 user_cards[0] = "seven of clubs";
                 cout << sevenclubs;
                }

                if ((user_hand[0][0]== 8) && (user_hand[0][1]== 2))
                {
                 user_cards[0] = "eight of clubs";
                 cout << eightclubs;
                }

                if ((user_hand[0][0]== 9) && (user_hand[0][1]== 2))
                {
                 user_cards[0] = "nine of clubs";
                 cout << nineclubs;
                }

                if ((user_hand[0][0]== 10) && (user_hand[0][1]== 2))
                {
                 user_cards[0] = "ten of clubs";
                 cout << tenclubs;
                }

                if ((user_hand[0][0]== 11) && (user_hand[0][1]== 2))
                {
                 user_cards[0] = "jack of clubs";
                 cout << jackclubs;
                }

                if ((user_hand[0][0]== 12) && (user_hand[0][1]== 2))
                {
                 user_cards[0] = "queen of clubs";
                 cout << queenclubs;
                }

                if ((user_hand[0][0]== 13) && (user_hand[0][1]== 2))
                {
                 user_cards[0] = "king of clubs";
                 cout << kingclubs;
                }

                if ((user_hand[0][0]== 14) && (user_hand[0][1]== 2))
                {
                 user_cards[0] = "ace of clubs";
                 cout << aceclubs;
                }

//middle art for the hearts

                if ((user_hand[0][0]== 2) && (user_hand[0][1]== 3))
                {
                 user_cards[0] = "two of hearts";
                 cout << twohearts;
                }

                if ((user_hand[0][0]== 3) && (user_hand[0][1]== 3))
                {
                 user_cards[0] = "three of hearts";
                 cout << threehearts;
                }

                if ((user_hand[0][0]== 4) && (user_hand[0][1]== 3))
                {
                 user_cards[0] = "four of hearts";
                 cout << fourhearts;
                }

                if ((user_hand[0][0]== 5) && (user_hand[0][1]== 3))
                {
                 user_cards[0] = "five of hearts";
                 cout << fivehearts;
                }

                if ((user_hand[0][0]== 6) && (user_hand[0][1]== 3))
                {
                 user_cards[0] = "six of hearts";
                 cout << sixhearts;
                }

                if ((user_hand[0][0]== 7) && (user_hand[0][1]== 3))
                {
                 user_cards[0] = "seven of hearts";
                 cout << sevenhearts;
                }

                if ((user_hand[0][0]== 8) && (user_hand[0][1]== 3))
                {
                 user_cards[0] = "eight of hearts";
                 cout << eighthearts;
                }

                if ((user_hand[0][0]== 9) && (user_hand[0][1]== 3))
                {
                 user_cards[0] = "nine of hearts";
                 cout << ninehearts;
                }

                if ((user_hand[0][0]== 10) && (user_hand[0][1]== 3))
                {
                 user_cards[0] = "ten of hearts";
                 cout << tenhearts;
                }

                if ((user_hand[0][0]== 11) && (user_hand[0][1]== 3))
                {
                 user_cards[0] = "jack of hearts";
                 cout << jackhearts;
                }

                if ((user_hand[0][0]== 12) && (user_hand[0][1]== 3))
                {
                 user_cards[0] = "queen of hearts";
                 cout << queenhearts;
                }

                if ((user_hand[0][0]== 13) && (user_hand[0][1]== 3))
                {
                 user_cards[0] = "king of hearts";
                 cout << kinghearts;
                }

                if ((user_hand[0][0]== 14) && (user_hand[0][1]== 3))
                {
                 user_cards[0] = "ace of hearts";
                 cout << acehearts;
                }

//middle art for the spades

                if ((user_hand[0][0]== 2) && (user_hand[0][1]== 4))
                {
                 user_cards[0] = "two of spades";
                 cout << twospades;
                }

                if ((user_hand[0][0]== 3) && (user_hand[0][1]== 4))
                {
                 user_cards[0] = "three of spades";
                 cout << threespades;
                }

                if ((user_hand[0][0]== 4) && (user_hand[0][1]== 4))
                {
                 user_cards[0] = "four of spades";
                 cout << fourspades;
                }

                if ((user_hand[0][0]== 5) && (user_hand[0][1]== 4))
                {
                 user_cards[0] = "five of spades";
                 cout << fivespades;
                }

                if ((user_hand[0][0]== 6) && (user_hand[0][1]== 4))
                {
                 user_cards[0] = "six of spades";
                 cout << sixspades;
                }

                if ((user_hand[0][0]== 7) && (user_hand[0][1]== 4))
                {
                 user_cards[0] = "seven of spades";
                 cout << sevenspades;
                }

                if ((user_hand[0][0]== 8) && (user_hand[0][1]== 4))
                {
                 user_cards[0] = "eight of spades";
                 cout << eightspades;
                }

                if ((user_hand[0][0]== 9) && (user_hand[0][1]== 4))
                {
                 user_cards[0] = "nine of spades";
                 cout << ninespades;
                }

                if ((user_hand[0][0]== 10) && (user_hand[0][1]== 4))
                {
                 user_cards[0] = "ten of spades";
                 cout << tenspades;
                }

                if ((user_hand[0][0]== 11) && (user_hand[0][1]== 4))
                {
                 user_cards[0] = "jack of spades";
                 cout << jackspades;
                }

                if ((user_hand[0][0]== 12) && (user_hand[0][1]== 4))
                {
                 user_cards[0] = "queen of spades";
                 cout << queenspades;
                }

                if ((user_hand[0][0]== 13) && (user_hand[0][1]== 4))
                {
                 user_cards[0] = "king of spades";
                 cout << kingspades;
                }

                if ((user_hand[0][0]== 14) && (user_hand[0][1]== 4))
                {
                 user_cards[0] = "ace of spades";
                 cout << acespades;
                }


///////// --------------------------------  CARD 2  ----------------------------------------//////////////


//middle art for the diamonds

                if ((user_hand[1][0]== 2) && (user_hand[1][1]== 1))
                {
                 user_cards[1] = "two of diamonds";
                 cout << twodiamonds;
                }

                if ((user_hand[1][0]== 3) && (user_hand[1][1]== 1))
                {
                 user_cards[1] = "three of diamonds";
                 cout << threediamonds;
                }

                if ((user_hand[1][0]== 4) && (user_hand[1][1]== 1))
                {
                 user_cards[1] = "four of diamonds";
                 cout << fourdiamonds;
                }

                if ((user_hand[1][0]== 5) && (user_hand[1][1]== 1))
                {
                 user_cards[1] = "five of diamonds";
                 cout << fivediamonds;
                }

                if ((user_hand[1][0]== 6) && (user_hand[1][1]== 1))
                {
                 user_cards[1] = "six of diamonds";
                 cout << sixdiamonds;
                }

                if ((user_hand[1][0]== 7) && (user_hand[1][1]== 1))
                {
                 user_cards[1] = "seven of diamonds";
                 cout << sevendiamonds;
                }

                if ((user_hand[1][0]== 8) && (user_hand[1][1]== 1))
                {
                 user_cards[1] = "eight of diamonds";
                 cout << eightdiamonds;
                }

                if ((user_hand[1][0]== 9) && (user_hand[1][1]== 1))
                {
                 user_cards[1] = "nine of diamonds";
                 cout << ninediamonds;
                }

                if ((user_hand[1][0]== 10) && (user_hand[1][1]== 1))
                {
                 user_cards[1] = "ten of diamonds";
                 cout << tendiamonds;
                }

                if ((user_hand[1][0]== 11) && (user_hand[1][1]== 1))
                {
                 user_cards[1] = "jack of diamonds";
                 cout << jackdiamonds;
                }

                if ((user_hand[1][0]== 12) && (user_hand[1][1]== 1))
                {
                 user_cards[1] = "queen of diamonds";
                 cout << queendiamonds;
                }

                if ((user_hand[1][0]== 13) && (user_hand[1][1]== 1))
                {
                 user_cards[1] = "king of diamonds";
                 cout << kingdiamonds;
                }

                if ((user_hand[1][0]== 14) && (user_hand[1][1]== 1))
                {
                 user_cards[1] = "ace of diamonds";
                 cout << acediamonds;
                }

//middle art for the clubs

                if ((user_hand[1][0]== 2) && (user_hand[1][1]== 2))
                {
                 user_cards[1] = "two of clubs";
                 cout << twoclubs;
                }

                if ((user_hand[1][0]== 3) && (user_hand[1][1]== 2))
                {
                 user_cards[1] = "three of clubs";
                 cout << threeclubs;
                }

                if ((user_hand[1][0]== 4) && (user_hand[1][1]== 2))
                {
                 user_cards[1] = "four of clubs";
                 cout << fourclubs;
                }

                if ((user_hand[1][0]== 5) && (user_hand[1][1]== 2))
                {
                 user_cards[1] = "five of clubs";
                 cout << fiveclubs;
                }

                if ((user_hand[1][0]== 6) && (user_hand[1][1]== 2))
                {
                 user_cards[1] = "six of clubs";
                 cout << sixclubs;
                }

                if ((user_hand[1][0]== 7) && (user_hand[1][1]== 2))
                {
                 user_cards[1] = "seven of clubs";
                 cout << sevenclubs;
                }

                if ((user_hand[1][0]== 8) && (user_hand[1][1]== 2))
                {
                 user_cards[1] = "eight of clubs";
                 cout << eightclubs;
                }

                if ((user_hand[1][0]== 9) && (user_hand[1][1]== 2))
                {
                 user_cards[1] = "nine of clubs";
                 cout << nineclubs;
                }

                if ((user_hand[1][0]== 10) && (user_hand[1][1]== 2))
                {
                 user_cards[1] = "ten of clubs";
                 cout << tenclubs;
                }

                if ((user_hand[1][0]== 11) && (user_hand[1][1]== 2))
                {
                 user_cards[1] = "jack of clubs";
                 cout << jackclubs;
                }

                if ((user_hand[1][0]== 12) && (user_hand[1][1]== 2))
                {
                 user_cards[1] = "queen of clubs";
                 cout << queenclubs;
                }

                if ((user_hand[1][0]== 13) && (user_hand[1][1]== 2))
                {
                 user_cards[1] = "king of clubs";
                 cout << kingclubs;
                }

                if ((user_hand[1][0]== 14) && (user_hand[1][1]== 2))
                {
                 user_cards[1] = "ace of clubs";
                 cout << aceclubs;
                }

//middle art for the hearts

                if ((user_hand[1][0]== 2) && (user_hand[1][1]== 3))
                {
                 user_cards[1] = "two of hearts";
                 cout << twohearts;
                }

                if ((user_hand[1][0]== 3) && (user_hand[1][1]== 3))
                {
                 user_cards[1] = "three of hearts";
                 cout << threehearts;
                }

                if ((user_hand[1][0]== 4) && (user_hand[1][1]== 3))
                {
                 user_cards[1] = "four of hearts";
                 cout << fourhearts;
                }

                if ((user_hand[1][0]== 5) && (user_hand[1][1]== 3))
                {
                 user_cards[1] = "five of hearts";
                 cout << fivehearts;
                }

                if ((user_hand[1][0]== 6) && (user_hand[1][1]== 3))
                {
                 user_cards[1] = "six of hearts";
                 cout << sixhearts;
                }

                if ((user_hand[1][0]== 7) && (user_hand[1][1]== 3))
                {
                 user_cards[1] = "seven of hearts";
                 cout << sevenhearts;
                }

                if ((user_hand[1][0]== 8) && (user_hand[1][1]== 3))
                {
                 user_cards[1] = "eight of hearts";
                 cout << eighthearts;
                }

                if ((user_hand[1][0]== 9) && (user_hand[1][1]== 3))
                {
                 user_cards[1] = "nine of hearts";
                 cout << ninehearts;
                }

                if ((user_hand[1][0]== 10) && (user_hand[1][1]== 3))
                {
                 user_cards[1] = "ten of hearts";
                 cout << tenhearts;
                }

                if ((user_hand[1][0]== 11) && (user_hand[1][1]== 3))
                {
                 user_cards[1] = "jack of hearts";
                 cout << jackhearts;
                }

                if ((user_hand[1][0]== 12) && (user_hand[1][1]== 3))
                {
                 user_cards[1] = "queen of hearts";
                 cout << queenhearts;
                }

                if ((user_hand[1][0]== 13) && (user_hand[1][1]== 3))
                {
                 user_cards[1] = "king of hearts";
                 cout << kinghearts;
                }

                if ((user_hand[1][0]== 14) && (user_hand[1][1]== 3))
                {
                 user_cards[1] = "ace of hearts";
                 cout << acehearts;
                }

//middle art for the spades

                if ((user_hand[1][0]== 2) && (user_hand[1][1]== 4))
                {
                 user_cards[1] = "two of spades";
                 cout << twospades;
                }

                if ((user_hand[1][0]== 3) && (user_hand[1][1]== 4))
                {
                 user_cards[1] = "three of spades";
                 cout << threespades;
                }

                if ((user_hand[1][0]== 4) && (user_hand[1][1]== 4))
                {
                 user_cards[1] = "four of spades";
                 cout << fourspades;
                }

                if ((user_hand[1][0]== 5) && (user_hand[1][1]== 4))
                {
                 user_cards[1] = "five of spades";
                 cout << fivespades;
                }

                if ((user_hand[1][0]== 6) && (user_hand[1][1]== 4))
                {
                 user_cards[1] = "six of spades";
                 cout << sixspades;
                }

                if ((user_hand[1][0]== 7) && (user_hand[1][1]== 4))
                {
                 user_cards[1] = "seven of spades";
                 cout << sevenspades;
                }

                if ((user_hand[1][0]== 8) && (user_hand[1][1]== 4))
                {
                 user_cards[1] = "eight of spades";
                 cout << eightspades;
                }

                if ((user_hand[1][0]== 9) && (user_hand[1][1]== 4))
                {
                 user_cards[1] = "nine of spades";
                 cout << ninespades;
                }

                if ((user_hand[1][0]== 10) && (user_hand[1][1]== 4))
                {
                 user_cards[1] = "ten of spades";
                 cout << tenspades;
                }

                if ((user_hand[1][0]== 11) && (user_hand[1][1]== 4))
                {
                 user_cards[1] = "jack of spades";
                 cout << jackspades;
                }

                if ((user_hand[1][0]== 12) && (user_hand[1][1]== 4))
                {
                 user_cards[1] = "queen of spades";
                 cout << queenspades;
                }

                if ((user_hand[1][0]== 13) && (user_hand[1][1]== 4))
                {
                 user_cards[1] = "king of spades";
                 cout << kingspades;
                }

                if ((user_hand[1][0]== 14) && (user_hand[1][1]== 4))
                {
                 user_cards[1] = "ace of spades";
                 cout << acespades;
                }

///////// --------------------------------  CARD 3  ----------------------------------------//////////////


//middle art for the diamonds

                if ((user_hand[2][0]== 2) && (user_hand[2][1]== 1))
                {
                 user_cards[2] = "two of diamonds";
                 cout << twodiamonds;
                }

                if ((user_hand[2][0]== 3) && (user_hand[2][1]== 1))
                {
                 user_cards[2] = "three of diamonds";
                 cout << threediamonds;
                }

                if ((user_hand[2][0]== 4) && (user_hand[2][1]== 1))
                {
                 user_cards[2] = "four of diamonds";
                 cout << fourdiamonds;
                }

                if ((user_hand[2][0]== 5) && (user_hand[2][1]== 1))
                {
                 user_cards[2] = "five of diamonds";
                 cout << fivediamonds;
                }

                if ((user_hand[2][0]== 6) && (user_hand[2][1]== 1))
                {
                 user_cards[2] = "six of diamonds";
                 cout << sixdiamonds;
                }

                if ((user_hand[2][0]== 7) && (user_hand[2][1]== 1))
                {
                 user_cards[2] = "seven of diamonds";
                 cout << sevendiamonds;
                }

                if ((user_hand[2][0]== 8) && (user_hand[2][1]== 1))
                {
                 user_cards[2] = "eight of diamonds";
                 cout << eightdiamonds;
                }

                if ((user_hand[2][0]== 9) && (user_hand[2][1]== 1))
                {
                 user_cards[2] = "nine of diamonds";
                 cout << ninediamonds;
                }

                if ((user_hand[2][0]== 10) && (user_hand[2][1]== 1))
                {
                 user_cards[2] = "ten of diamonds";
                 cout << tendiamonds;
                }

                if ((user_hand[2][0]== 11) && (user_hand[2][1]== 1))
                {
                 user_cards[2] = "jack of diamonds";
                 cout << jackdiamonds;
                }

                if ((user_hand[2][0]== 12) && (user_hand[2][1]== 1))
                {
                 user_cards[2] = "queen of diamonds";
                 cout << queendiamonds;
                }

                if ((user_hand[2][0]== 13) && (user_hand[2][1]== 1))
                {
                 user_cards[2] = "king of diamonds";
                 cout << kingdiamonds;
                }

                if ((user_hand[2][0]== 14) && (user_hand[2][1]== 1))
                {
                 user_cards[2] = "ace of diamonds";
                 cout << acediamonds;
                }

//middle art for the clubs

                if ((user_hand[2][0]== 2) && (user_hand[2][1]== 2))
                {
                 user_cards[2] = "two of clubs";
                 cout << twoclubs;
                }

                if ((user_hand[2][0]== 3) && (user_hand[2][1]== 2))
                {
                 user_cards[2] = "three of clubs";
                 cout << threeclubs;
                }

                if ((user_hand[2][0]== 4) && (user_hand[2][1]== 2))
                {
                 user_cards[2] = "four of clubs";
                 cout << fourclubs;
                }

                if ((user_hand[2][0]== 5) && (user_hand[2][1]== 2))
                {
                 user_cards[2] = "five of clubs";
                 cout << fiveclubs;
                }

                if ((user_hand[2][0]== 6) && (user_hand[2][1]== 2))
                {
                 user_cards[2] = "six of clubs";
                 cout << sixclubs;
                }

                if ((user_hand[2][0]== 7) && (user_hand[2][1]== 2))
                {
                 user_cards[2] = "seven of clubs";
                 cout << sevenclubs;
                }

                if ((user_hand[2][0]== 8) && (user_hand[2][1]== 2))
                {
                 user_cards[2] = "eight of clubs";
                 cout << eightclubs;
                }

                if ((user_hand[2][0]== 9) && (user_hand[2][1]== 2))
                {
                 user_cards[2] = "nine of clubs";
                 cout << nineclubs;
                }

                if ((user_hand[2][0]== 10) && (user_hand[2][1]== 2))
                {
                 user_cards[2] = "ten of clubs";
                 cout << tenclubs;
                }

                if ((user_hand[2][0]== 11) && (user_hand[2][1]== 2))
                {
                 user_cards[2] = "jack of clubs";
                 cout << jackclubs;
                }

                if ((user_hand[2][0]== 12) && (user_hand[2][1]== 2))
                {
                 user_cards[2] = "queen of clubs";
                 cout << queenclubs;
                }

                if ((user_hand[2][0]== 13) && (user_hand[2][1]== 2))
                {
                 user_cards[2] = "king of clubs";
                 cout << kingclubs;
                }

                if ((user_hand[2][0]== 14) && (user_hand[2][1]== 2))
                {
                 user_cards[2] = "ace of clubs";
                 cout << aceclubs;
                }

//middle art for the hearts

                if ((user_hand[2][0]== 2) && (user_hand[2][1]== 3))
                {
                 user_cards[2] = "two of hearts";
                 cout << twohearts;
                }

                if ((user_hand[2][0]== 3) && (user_hand[2][1]== 3))
                {
                 user_cards[2] = "three of hearts";
                 cout << threehearts;
                }

                if ((user_hand[2][0]== 4) && (user_hand[2][1]== 3))
                {
                 user_cards[2] = "four of hearts";
                 cout << fourhearts;
                }

                if ((user_hand[2][0]== 5) && (user_hand[2][1]== 3))
                {
                 user_cards[2] = "five of hearts";
                 cout << fivehearts;
                }

                if ((user_hand[2][0]== 6) && (user_hand[2][1]== 3))
                {
                 user_cards[2] = "six of hearts";
                 cout << sixhearts;
                }

                if ((user_hand[2][0]== 7) && (user_hand[2][1]== 3))
                {
                 user_cards[2] = "seven of hearts";
                 cout << sevenhearts;
                }

                if ((user_hand[2][0]== 8) && (user_hand[2][1]== 3))
                {
                 user_cards[2] = "eight of hearts";
                 cout << eighthearts;
                }

                if ((user_hand[2][0]== 9) && (user_hand[2][1]== 3))
                {
                 user_cards[2] = "nine of hearts";
                 cout << ninehearts;
                }

                if ((user_hand[2][0]== 10) && (user_hand[2][1]== 3))
                {
                 user_cards[2] = "ten of hearts";
                 cout << tenhearts;
                }

                if ((user_hand[2][0]== 11) && (user_hand[2][1]== 3))
                {
                 user_cards[2] = "jack of hearts";
                 cout << jackhearts;
                }

                if ((user_hand[2][0]== 12) && (user_hand[2][1]== 3))
                {
                 user_cards[2] = "queen of hearts";
                 cout << queenhearts;
                }

                if ((user_hand[2][0]== 13) && (user_hand[2][1]== 3))
                {
                 user_cards[2] = "king of hearts";
                 cout << kinghearts;
                }

                if ((user_hand[2][0]== 14) && (user_hand[2][1]== 3))
                {
                 user_cards[2] = "ace of hearts";
                 cout << acehearts;
                }

//middle art for the spades

                if ((user_hand[2][0]== 2) && (user_hand[2][1]== 4))
                {
                 user_cards[2] = "two of spades";
                 cout << twospades;
                }

                if ((user_hand[2][0]== 3) && (user_hand[2][1]== 4))
                {
                 user_cards[2] = "three of spades";
                 cout << threespades;
                }

                if ((user_hand[2][0]== 4) && (user_hand[2][1]== 4))
                {
                 user_cards[2] = "four of spades";
                 cout << fourspades;
                }

                if ((user_hand[2][0]== 5) && (user_hand[2][1]== 4))
                {
                 user_cards[2] = "five of spades";
                 cout << fivespades;
                }

                if ((user_hand[2][0]== 6) && (user_hand[2][1]== 4))
                {
                 user_cards[2] = "six of spades";
                 cout << sixspades;
                }

                if ((user_hand[2][0]== 7) && (user_hand[2][1]== 4))
                {
                 user_cards[2] = "seven of spades";
                 cout << sevenspades;
                }

                if ((user_hand[2][0]== 8) && (user_hand[2][1]== 4))
                {
                 user_cards[2] = "eight of spades";
                 cout << eightspades;
                }

                if ((user_hand[2][0]== 9) && (user_hand[2][1]== 4))
                {
                 user_cards[2] = "nine of spades";
                 cout << ninespades;
                }

                if ((user_hand[2][0]== 10) && (user_hand[2][1]== 4))
                {
                 user_cards[2] = "ten of spades";
                 cout << tenspades;
                }

                if ((user_hand[2][0]== 11) && (user_hand[2][1]== 4))
                {
                 user_cards[2] = "jack of spades";
                 cout << jackspades;
                }

                if ((user_hand[2][0]== 12) && (user_hand[2][1]== 4))
                {
                 user_cards[2] = "queen of spades";
                 cout << queenspades;
                }

                if ((user_hand[2][0]== 13) && (user_hand[2][1]== 4))
                {
                 user_cards[2] = "king of spades";
                 cout << kingspades;
                }

                if ((user_hand[2][0]== 14) && (user_hand[2][1]== 4))
                {
                 user_cards[2] = "ace of spades";
                 cout << acespades;
                }


///////// --------------------------------  CARD 4  ----------------------------------------//////////////


//middle art for the diamonds

                if ((user_hand[3][0]== 2) && (user_hand[3][1]== 1))
                {
                 user_cards[3] = "two of diamonds";
                 cout << twodiamonds;
                }

                if ((user_hand[3][0]== 3) && (user_hand[3][1]== 1))
                {
                 user_cards[3] = "three of diamonds";
                 cout << threediamonds;
                }

                if ((user_hand[3][0]== 4) && (user_hand[3][1]== 1))
                {
                 user_cards[3] = "four of diamonds";
                 cout << fourdiamonds;
                }

                if ((user_hand[3][0]== 5) && (user_hand[3][1]== 1))
                {
                 user_cards[3] = "five of diamonds";
                 cout << fivediamonds;
                }

                if ((user_hand[3][0]== 6) && (user_hand[3][1]== 1))
                {
                 user_cards[3] = "six of diamonds";
                 cout << sixdiamonds;
                }

                if ((user_hand[3][0]== 7) && (user_hand[3][1]== 1))
                {
                 user_cards[3] = "seven of diamonds";
                 cout << sevendiamonds;
                }

                if ((user_hand[3][0]== 8) && (user_hand[3][1]== 1))
                {
                 user_cards[3] = "eight of diamonds";
                 cout << eightdiamonds;
                }

                if ((user_hand[3][0]== 9) && (user_hand[3][1]== 1))
                {
                 user_cards[3] = "nine of diamonds";
                 cout << ninediamonds;
                }

                if ((user_hand[3][0]== 10) && (user_hand[3][1]== 1))
                {
                 user_cards[3] = "ten of diamonds";
                 cout << tendiamonds;
                }

                if ((user_hand[3][0]== 11) && (user_hand[3][1]== 1))
                {
                 user_cards[3] = "jack of diamonds";
                 cout << jackdiamonds;
                }

                if ((user_hand[3][0]== 12) && (user_hand[3][1]== 1))
                {
                 user_cards[3] = "queen of diamonds";
                 cout << queendiamonds;
                }

                if ((user_hand[3][0]== 13) && (user_hand[3][1]== 1))
                {
                 user_cards[3] = "king of diamonds";
                 cout << kingdiamonds;
                }

                if ((user_hand[3][0]== 14) && (user_hand[3][1]== 1))
                {
                 user_cards[3] = "ace of diamonds";
                 cout << acediamonds;
                }

//middle art for the clubs

                if ((user_hand[3][0]== 2) && (user_hand[3][1]== 2))
                {
                 user_cards[3] = "two of clubs";
                 cout << twoclubs;
                }

                if ((user_hand[3][0]== 3) && (user_hand[3][1]== 2))
                {
                 user_cards[3] = "three of clubs";
                 cout << threeclubs;
                }

                if ((user_hand[3][0]== 4) && (user_hand[3][1]== 2))
                {
                 user_cards[3] = "four of clubs";
                 cout << fourclubs;
                }

                if ((user_hand[3][0]== 5) && (user_hand[3][1]== 2))
                {
                 user_cards[3] = "five of clubs";
                 cout << fiveclubs;
                }

                if ((user_hand[3][0]== 6) && (user_hand[3][1]== 2))
                {
                 user_cards[3] = "six of clubs";
                 cout << sixclubs;
                }

                if ((user_hand[3][0]== 7) && (user_hand[3][1]== 2))
                {
                 user_cards[3] = "seven of clubs";
                 cout << sevenclubs;
                }

                if ((user_hand[3][0]== 8) && (user_hand[3][1]== 2))
                {
                 user_cards[3] = "eight of clubs";
                 cout << eightclubs;
                }

                if ((user_hand[3][0]== 9) && (user_hand[3][1]== 2))
                {
                 user_cards[3] = "nine of clubs";
                 cout << nineclubs;
                }

                if ((user_hand[3][0]== 10) && (user_hand[3][1]== 2))
                {
                 user_cards[3] = "ten of clubs";
                 cout << tenclubs;
                }

                if ((user_hand[3][0]== 11) && (user_hand[3][1]== 2))
                {
                 user_cards[3] = "jack of clubs";
                 cout << jackclubs;
                }

                if ((user_hand[3][0]== 12) && (user_hand[3][1]== 2))
                {
                 user_cards[3] = "queen of clubs";
                 cout << queenclubs;
                }

                if ((user_hand[3][0]== 13) && (user_hand[3][1]== 2))
                {
                 user_cards[3] = "king of clubs";
                 cout << kingclubs;
                }

                if ((user_hand[3][0]== 14) && (user_hand[3][1]== 2))
                {
                 user_cards[3] = "ace of clubs";
                 cout << aceclubs;
                }

//middle art for the hearts

                if ((user_hand[3][0]== 2) && (user_hand[3][1]== 3))
                {
                 user_cards[3] = "two of hearts";
                 cout << twohearts;
                }

                if ((user_hand[3][0]== 3) && (user_hand[3][1]== 3))
                {
                 user_cards[3] = "three of hearts";
                 cout << threehearts;
                }

                if ((user_hand[3][0]== 4) && (user_hand[3][1]== 3))
                {
                 user_cards[3] = "four of hearts";
                 cout << fourhearts;
                }

                if ((user_hand[3][0]== 5) && (user_hand[3][1]== 3))
                {
                 user_cards[3] = "five of hearts";
                 cout << fivehearts;
                }

                if ((user_hand[3][0]== 6) && (user_hand[3][1]== 3))
                {
                 user_cards[3] = "six of hearts";
                 cout << sixhearts;
                }

                if ((user_hand[3][0]== 7) && (user_hand[3][1]== 3))
                {
                 user_cards[3] = "seven of hearts";
                 cout << sevenhearts;
                }

                if ((user_hand[3][0]== 8) && (user_hand[3][1]== 3))
                {
                 user_cards[3] = "eight of hearts";
                 cout << eighthearts;
                }

                if ((user_hand[3][0]== 9) && (user_hand[3][1]== 3))
                {
                 user_cards[3] = "nine of hearts";
                 cout << ninehearts;
                }

                if ((user_hand[3][0]== 10) && (user_hand[3][1]== 3))
                {
                 user_cards[3] = "ten of hearts";
                 cout << tenhearts;
                }

                if ((user_hand[3][0]== 11) && (user_hand[3][1]== 3))
                {
                 user_cards[3] = "jack of hearts";
                 cout << jackhearts;
                }

                if ((user_hand[3][0]== 12) && (user_hand[3][1]== 3))
                {
                 user_cards[3] = "queen of hearts";
                 cout << queenhearts;
                }

                if ((user_hand[3][0]== 13) && (user_hand[3][1]== 3))
                {
                 user_cards[3] = "king of hearts";
                 cout << kinghearts;
                }

                if ((user_hand[3][0]== 14) && (user_hand[3][1]== 3))
                {
                 user_cards[3] = "ace of hearts";
                 cout << acehearts;
                }

//middle art for the spades

                if ((user_hand[3][0]== 2) && (user_hand[3][1]== 4))
                {
                 user_cards[3] = "two of spades";
                 cout << twospades;
                }

                if ((user_hand[3][0]== 3) && (user_hand[3][1]== 4))
                {
                 user_cards[3] = "three of spades";
                 cout << threespades;
                }

                if ((user_hand[3][0]== 4) && (user_hand[3][1]== 4))
                {
                 user_cards[3] = "four of spades";
                 cout << fourspades;
                }

                if ((user_hand[3][0]== 5) && (user_hand[3][1]== 4))
                {
                 user_cards[3] = "five of spades";
                 cout << fivespades;
                }

                if ((user_hand[3][0]== 6) && (user_hand[3][1]== 4))
                {
                 user_cards[3] = "six of spades";
                 cout << sixspades;
                }

                if ((user_hand[3][0]== 7) && (user_hand[3][1]== 4))
                {
                 user_cards[3] = "seven of spades";
                 cout << sevenspades;
                }

                if ((user_hand[3][0]== 8) && (user_hand[3][1]== 4))
                {
                 user_cards[3] = "eight of spades";
                 cout << eightspades;
                }

                if ((user_hand[3][0]== 9) && (user_hand[3][1]== 4))
                {
                 user_cards[3] = "nine of spades";
                 cout << ninespades;
                }

                if ((user_hand[3][0]== 10) && (user_hand[3][1]== 4))
                {
                 user_cards[3] = "ten of spades";
                 cout << tenspades;
                }

                if ((user_hand[3][0]== 11) && (user_hand[3][1]== 4))
                {
                 user_cards[3] = "jack of spades";
                 cout << jackspades;
                }

                if ((user_hand[3][0]== 12) && (user_hand[3][1]== 4))
                {
                 user_cards[3] = "queen of spades";
                 cout << queenspades;
                }

                if ((user_hand[3][0]== 13) && (user_hand[3][1]== 4))
                {
                 user_cards[3] = "king of spades";
                 cout << kingspades;
                }

                if ((user_hand[3][0]== 14) && (user_hand[3][1]== 4))
                {
                 user_cards[3] = "ace of spades";
                 cout << acespades;
                }

///////// --------------------------------  CARD 5  ----------------------------------------//////////////


//middle art for the diamonds

                if ((user_hand[4][0]== 2) && (user_hand[4][1]== 1))
                {
                 user_cards[4] = "two of diamonds";
                 cout << twodiamonds;
                }

                if ((user_hand[4][0]== 3) && (user_hand[4][1]== 1))
                {
                 user_cards[4] = "three of diamonds";
                 cout << threediamonds;
                }

                if ((user_hand[4][0]== 4) && (user_hand[4][1]== 1))
                {
                 user_cards[4] = "four of diamonds";
                 cout << fourdiamonds;
                }

                if ((user_hand[4][0]== 5) && (user_hand[4][1]== 1))
                {
                 user_cards[4] = "five of diamonds";
                 cout << fivediamonds;
                }

                if ((user_hand[4][0]== 6) && (user_hand[4][1]== 1))
                {
                 user_cards[4] = "six of diamonds";
                 cout << sixdiamonds;
                }

                if ((user_hand[4][0]== 7) && (user_hand[4][1]== 1))
                {
                 user_cards[4] = "seven of diamonds";
                 cout << sevendiamonds;
                }

                if ((user_hand[4][0]== 8) && (user_hand[4][1]== 1))
                {
                 user_cards[4] = "eight of diamonds";
                 cout << eightdiamonds;
                }

                if ((user_hand[4][0]== 9) && (user_hand[4][1]== 1))
                {
                 user_cards[4] = "nine of diamonds";
                 cout << ninediamonds;
                }

                if ((user_hand[4][0]== 10) && (user_hand[4][1]== 1))
                {
                 user_cards[4] = "ten of diamonds";
                 cout << tendiamonds;
                }

                if ((user_hand[4][0]== 11) && (user_hand[4][1]== 1))
                {
                 user_cards[4] = "jack of diamonds";
                 cout << jackdiamonds;
                }

                if ((user_hand[4][0]== 12) && (user_hand[4][1]== 1))
                {
                 user_cards[4] = "queen of diamonds";
                 cout << queendiamonds;
                }

                if ((user_hand[4][0]== 13) && (user_hand[4][1]== 1))
                {
                 user_cards[4] = "king of diamonds";
                 cout << kingdiamonds;
                }

                if ((user_hand[4][0]== 14) && (user_hand[4][1]== 1))
                {
                 user_cards[4] = "ace of diamonds";
                 cout << acediamonds;
                }

//middle art for the clubs

                if ((user_hand[4][0]== 2) && (user_hand[4][1]== 2))
                {
                 user_cards[4] = "two of clubs";
                 cout << twoclubs;
                }

                if ((user_hand[4][0]== 3) && (user_hand[4][1]== 2))
                {
                 user_cards[4] = "three of clubs";
                 cout << threeclubs;
                }

                if ((user_hand[4][0]== 4) && (user_hand[4][1]== 2))
                {
                 user_cards[4] = "four of clubs";
                 cout << fourclubs;
                }

                if ((user_hand[4][0]== 5) && (user_hand[4][1]== 2))
                {
                 user_cards[4] = "five of clubs";
                 cout << fiveclubs;
                }

                if ((user_hand[4][0]== 6) && (user_hand[4][1]== 2))
                {
                 user_cards[4] = "six of clubs";
                 cout << sixclubs;
                }

                if ((user_hand[4][0]== 7) && (user_hand[4][1]== 2))
                {
                 user_cards[4] = "seven of clubs";
                 cout << sevenclubs;
                }

                if ((user_hand[4][0]== 8) && (user_hand[4][1]== 2))
                {
                 user_cards[4] = "eight of clubs";
                 cout << eightclubs;
                }

                if ((user_hand[4][0]== 9) && (user_hand[4][1]== 2))
                {
                 user_cards[4] = "nine of clubs";
                 cout << nineclubs;
                }

                if ((user_hand[4][0]== 10) && (user_hand[4][1]== 2))
                {
                 user_cards[4] = "ten of clubs";
                 cout << tenclubs;
                }

                if ((user_hand[4][0]== 11) && (user_hand[4][1]== 2))
                {
                 user_cards[4] = "jack of clubs";
                 cout << jackclubs;
                }

                if ((user_hand[4][0]== 12) && (user_hand[4][1]== 2))
                {
                 user_cards[4] = "queen of clubs";
                 cout << queenclubs;
                }

                if ((user_hand[4][0]== 13) && (user_hand[4][1]== 2))
                {
                 user_cards[4] = "king of clubs";
                 cout << kingclubs;
                }

                if ((user_hand[4][0]== 14) && (user_hand[4][1]== 2))
                {
                 user_cards[4] = "ace of clubs";
                 cout << aceclubs;
                }

//middle art for the hearts

                if ((user_hand[4][0]== 2) && (user_hand[4][1]== 3))
                {
                 user_cards[4] = "two of hearts";
                 cout << twohearts;
                }

                if ((user_hand[4][0]== 3) && (user_hand[4][1]== 3))
                {
                 user_cards[4] = "three of hearts";
                 cout << threehearts;
                }

                if ((user_hand[4][0]== 4) && (user_hand[4][1]== 3))
                {
                 user_cards[4] = "four of hearts";
                 cout << fourhearts;
                }

                if ((user_hand[4][0]== 5) && (user_hand[4][1]== 3))
                {
                 user_cards[4] = "five of hearts";
                 cout << fivehearts;
                }

                if ((user_hand[4][0]== 6) && (user_hand[4][1]== 3))
                {
                 user_cards[4] = "six of hearts";
                 cout << sixhearts;
                }

                if ((user_hand[4][0]== 7) && (user_hand[4][1]== 3))
                {
                 user_cards[4] = "seven of hearts";
                 cout << sevenhearts;
                }

                if ((user_hand[4][0]== 8) && (user_hand[4][1]== 3))
                {
                 user_cards[4] = "eight of hearts";
                 cout << eighthearts;
                }

                if ((user_hand[4][0]== 9) && (user_hand[4][1]== 3))
                {
                 user_cards[4] = "nine of hearts";
                 cout << ninehearts;
                }

                if ((user_hand[4][0]== 10) && (user_hand[4][1]== 3))
                {
                 user_cards[4] = "ten of hearts";
                 cout << tenhearts;
                }

                if ((user_hand[4][0]== 11) && (user_hand[4][1]== 3))
                {
                 user_cards[4] = "jack of hearts";
                 cout << jackhearts;
                }

                if ((user_hand[4][0]== 12) && (user_hand[4][1]== 3))
                {
                 user_cards[4] = "queen of hearts";
                 cout << queenhearts;
                }

                if ((user_hand[4][0]== 13) && (user_hand[4][1]== 3))
                {
                 user_cards[4] = "king of hearts";
                 cout << kinghearts;
                }

                if ((user_hand[4][0]== 14) && (user_hand[4][1]== 3))
                {
                 user_cards[4] = "ace of hearts";
                 cout << acehearts;
                }

//middle art for the spades

                if ((user_hand[4][0]== 2) && (user_hand[4][1]== 4))
                {
                 user_cards[4] = "two of spades";
                 cout << twospades;
                }

                if ((user_hand[4][0]== 3) && (user_hand[4][1]== 4))
                {
                 user_cards[4] = "three of spades";
                 cout << threespades;
                }

                if ((user_hand[4][0]== 4) && (user_hand[4][1]== 4))
                {
                 user_cards[4] = "four of spades";
                 cout << fourspades;
                }

                if ((user_hand[4][0]== 5) && (user_hand[4][1]== 4))
                {
                 user_cards[4] = "five of spades";
                 cout << fivespades;
                }

                if ((user_hand[4][0]== 6) && (user_hand[4][1]== 4))
                {
                 user_cards[4] = "six of spades";
                 cout << sixspades;
                }

                if ((user_hand[4][0]== 7) && (user_hand[4][1]== 4))
                {
                 user_cards[4] = "seven of spades";
                 cout << sevenspades;
                }

                if ((user_hand[4][0]== 8) && (user_hand[4][1]== 4))
                {
                 user_cards[4] = "eight of spades";
                 cout << eightspades;
                }

                if ((user_hand[4][0]== 9) && (user_hand[4][1]== 4))
                {
                 user_cards[4] = "nine of spades";
                 cout << ninespades;
                }

                if ((user_hand[4][0]== 10) && (user_hand[4][1]== 4))
                {
                 user_cards[4] = "ten of spades";
                 cout << tenspades;
                }

                if ((user_hand[4][0]== 11) && (user_hand[4][1]== 4))
                {
                 user_cards[4] = "jack of spades";
                 cout << jackspades;
                }

                if ((user_hand[4][0]== 12) && (user_hand[4][1]== 4))
                {
                 user_cards[4] = "queen of spades";
                 cout << queenspades;
                }

                if ((user_hand[4][0]== 13) && (user_hand[4][1]== 4))
                {
                 user_cards[4] = "king of spades";
                 cout << kingspades;
                }

                if ((user_hand[4][0]== 14) && (user_hand[4][1]== 4))
                {
                 user_cards[4] = "ace of spades";
                 cout << acespades;
                }



    cout << user_cardbottoms << "\n" << "  1     2     3     4     5   \n";
}
void print_npchand()
{
// The same code as print_userhand, repurposed!

    cout << "\n         D E A L E R \n" << user_cardtops;


//middle art for the diamonds card 1

                if ((npc_hand[0][0]== 2) && (npc_hand[0][1]== 1))
                {
                 npc_cards[0] = "two of diamonds";
                 cout << twodiamonds;
                }

                if ((npc_hand[0][0]== 3) && (npc_hand[0][1]== 1))
                {
                 npc_cards[0] = "three of diamonds";
                 cout << threediamonds;
                }

                if ((npc_hand[0][0]== 4) && (npc_hand[0][1]== 1))
                {
                 npc_cards[0] = "four of diamonds";
                 cout << fourdiamonds;
                }

                if ((npc_hand[0][0]== 5) && (npc_hand[0][1]== 1))
                {
                 npc_cards[0] = "five of diamonds";
                 cout << fivediamonds;
                }

                if ((npc_hand[0][0]== 6) && (npc_hand[0][1]== 1))
                {
                 npc_cards[0] = "six of diamonds";
                 cout << sixdiamonds;
                }

                if ((npc_hand[0][0]== 7) && (npc_hand[0][1]== 1))
                {
                 npc_cards[0] = "seven of diamonds";
                 cout << sevendiamonds;
                }

                if ((npc_hand[0][0]== 8) && (npc_hand[0][1]== 1))
                {
                 npc_cards[0] = "eight of diamonds";
                 cout << eightdiamonds;
                }

                if ((npc_hand[0][0]== 9) && (npc_hand[0][1]== 1))
                {
                 npc_cards[0] = "nine of diamonds";
                 cout << ninediamonds;
                }

                if ((npc_hand[0][0]== 10) && (npc_hand[0][1]== 1))
                {
                 npc_cards[0] = "ten of diamonds";
                 cout << tendiamonds;
                }

                if ((npc_hand[0][0]== 11) && (npc_hand[0][1]== 1))
                {
                 npc_cards[0] = "jack of diamonds";
                 cout << jackdiamonds;
                }

                if ((npc_hand[0][0]== 12) && (npc_hand[0][1]== 1))
                {
                 npc_cards[0] = "queen of diamonds";
                 cout << queendiamonds;
                }

                if ((npc_hand[0][0]== 13) && (npc_hand[0][1]== 1))
                {
                 npc_cards[0] = "king of diamonds";
                 cout << kingdiamonds;
                }

                if ((npc_hand[0][0]== 14) && (npc_hand[0][1]== 1))
                {
                 npc_cards[0] = "ace of diamonds";
                 cout << acediamonds;
                }

//middle art for the clubs

                if ((npc_hand[0][0]== 2) && (npc_hand[0][1]== 2))
                {
                 npc_cards[0] = "two of clubs";
                 cout << twoclubs;
                }

                if ((npc_hand[0][0]== 3) && (npc_hand[0][1]== 2))
                {
                 npc_cards[0] = "three of clubs";
                 cout << threeclubs;
                }

                if ((npc_hand[0][0]== 4) && (npc_hand[0][1]== 2))
                {
                 npc_cards[0] = "four of clubs";
                 cout << fourclubs;
                }

                if ((npc_hand[0][0]== 5) && (npc_hand[0][1]== 2))
                {
                 npc_cards[0] = "five of clubs";
                 cout << fiveclubs;
                }

                if ((npc_hand[0][0]== 6) && (npc_hand[0][1]== 2))
                {
                 npc_cards[0] = "six of clubs";
                 cout << sixclubs;
                }

                if ((npc_hand[0][0]== 7) && (npc_hand[0][1]== 2))
                {
                 npc_cards[0] = "seven of clubs";
                 cout << sevenclubs;
                }

                if ((npc_hand[0][0]== 8) && (npc_hand[0][1]== 2))
                {
                 npc_cards[0] = "eight of clubs";
                 cout << eightclubs;
                }

                if ((npc_hand[0][0]== 9) && (npc_hand[0][1]== 2))
                {
                 npc_cards[0] = "nine of clubs";
                 cout << nineclubs;
                }

                if ((npc_hand[0][0]== 10) && (npc_hand[0][1]== 2))
                {
                 npc_cards[0] = "ten of clubs";
                 cout << tenclubs;
                }

                if ((npc_hand[0][0]== 11) && (npc_hand[0][1]== 2))
                {
                 npc_cards[0] = "jack of clubs";
                 cout << jackclubs;
                }

                if ((npc_hand[0][0]== 12) && (npc_hand[0][1]== 2))
                {
                 npc_cards[0] = "queen of clubs";
                 cout << queenclubs;
                }

                if ((npc_hand[0][0]== 13) && (npc_hand[0][1]== 2))
                {
                 npc_cards[0] = "king of clubs";
                 cout << kingclubs;
                }

                if ((npc_hand[0][0]== 14) && (npc_hand[0][1]== 2))
                {
                 npc_cards[0] = "ace of clubs";
                 cout << aceclubs;
                }

//middle art for the hearts

                if ((npc_hand[0][0]== 2) && (npc_hand[0][1]== 3))
                {
                 npc_cards[0] = "two of hearts";
                 cout << twohearts;
                }

                if ((npc_hand[0][0]== 3) && (npc_hand[0][1]== 3))
                {
                 npc_cards[0] = "three of hearts";
                 cout << threehearts;
                }

                if ((npc_hand[0][0]== 4) && (npc_hand[0][1]== 3))
                {
                 npc_cards[0] = "four of hearts";
                 cout << fourhearts;
                }

                if ((npc_hand[0][0]== 5) && (npc_hand[0][1]== 3))
                {
                 npc_cards[0] = "five of hearts";
                 cout << fivehearts;
                }

                if ((npc_hand[0][0]== 6) && (npc_hand[0][1]== 3))
                {
                 npc_cards[0] = "six of hearts";
                 cout << sixhearts;
                }

                if ((npc_hand[0][0]== 7) && (npc_hand[0][1]== 3))
                {
                 npc_cards[0] = "seven of hearts";
                 cout << sevenhearts;
                }

                if ((npc_hand[0][0]== 8) && (npc_hand[0][1]== 3))
                {
                 npc_cards[0] = "eight of hearts";
                 cout << eighthearts;
                }

                if ((npc_hand[0][0]== 9) && (npc_hand[0][1]== 3))
                {
                 npc_cards[0] = "nine of hearts";
                 cout << ninehearts;
                }

                if ((npc_hand[0][0]== 10) && (npc_hand[0][1]== 3))
                {
                 npc_cards[0] = "ten of hearts";
                 cout << tenhearts;
                }

                if ((npc_hand[0][0]== 11) && (npc_hand[0][1]== 3))
                {
                 npc_cards[0] = "jack of hearts";
                 cout << jackhearts;
                }

                if ((npc_hand[0][0]== 12) && (npc_hand[0][1]== 3))
                {
                 npc_cards[0] = "queen of hearts";
                 cout << queenhearts;
                }

                if ((npc_hand[0][0]== 13) && (npc_hand[0][1]== 3))
                {
                 npc_cards[0] = "king of hearts";
                 cout << kinghearts;
                }

                if ((npc_hand[0][0]== 14) && (npc_hand[0][1]== 3))
                {
                 npc_cards[0] = "ace of hearts";
                 cout << acehearts;
                }

//middle art for the spades

                if ((npc_hand[0][0]== 2) && (npc_hand[0][1]== 4))
                {
                 npc_cards[0] = "two of spades";
                 cout << twospades;
                }

                if ((npc_hand[0][0]== 3) && (npc_hand[0][1]== 4))
                {
                 npc_cards[0] = "three of spades";
                 cout << threespades;
                }

                if ((npc_hand[0][0]== 4) && (npc_hand[0][1]== 4))
                {
                 npc_cards[0] = "four of spades";
                 cout << fourspades;
                }

                if ((npc_hand[0][0]== 5) && (npc_hand[0][1]== 4))
                {
                 npc_cards[0] = "five of spades";
                 cout << fivespades;
                }

                if ((npc_hand[0][0]== 6) && (npc_hand[0][1]== 4))
                {
                 npc_cards[0] = "six of spades";
                 cout << sixspades;
                }

                if ((npc_hand[0][0]== 7) && (npc_hand[0][1]== 4))
                {
                 npc_cards[0] = "seven of spades";
                 cout << sevenspades;
                }

                if ((npc_hand[0][0]== 8) && (npc_hand[0][1]== 4))
                {
                 npc_cards[0] = "eight of spades";
                 cout << eightspades;
                }

                if ((npc_hand[0][0]== 9) && (npc_hand[0][1]== 4))
                {
                 npc_cards[0] = "nine of spades";
                 cout << ninespades;
                }

                if ((npc_hand[0][0]== 10) && (npc_hand[0][1]== 4))
                {
                 npc_cards[0] = "ten of spades";
                 cout << tenspades;
                }

                if ((npc_hand[0][0]== 11) && (npc_hand[0][1]== 4))
                {
                 npc_cards[0] = "jack of spades";
                 cout << jackspades;
                }

                if ((npc_hand[0][0]== 12) && (npc_hand[0][1]== 4))
                {
                 npc_cards[0] = "queen of spades";
                 cout << queenspades;
                }

                if ((npc_hand[0][0]== 13) && (npc_hand[0][1]== 4))
                {
                 npc_cards[0] = "king of spades";
                 cout << kingspades;
                }

                if ((npc_hand[0][0]== 14) && (npc_hand[0][1]== 4))
                {
                 npc_cards[0] = "ace of spades";
                 cout << acespades;
                }


///////// --------------------------------  CARD 2  ----------------------------------------//////////////


//middle art for the diamonds

                if ((npc_hand[1][0]== 2) && (npc_hand[1][1]== 1))
                {
                 npc_cards[1] = "two of diamonds";
                 cout << twodiamonds;
                }

                if ((npc_hand[1][0]== 3) && (npc_hand[1][1]== 1))
                {
                 npc_cards[1] = "three of diamonds";
                 cout << threediamonds;
                }

                if ((npc_hand[1][0]== 4) && (npc_hand[1][1]== 1))
                {
                 npc_cards[1] = "four of diamonds";
                 cout << fourdiamonds;
                }

                if ((npc_hand[1][0]== 5) && (npc_hand[1][1]== 1))
                {
                 npc_cards[1] = "five of diamonds";
                 cout << fivediamonds;
                }

                if ((npc_hand[1][0]== 6) && (npc_hand[1][1]== 1))
                {
                 npc_cards[1] = "six of diamonds";
                 cout << sixdiamonds;
                }

                if ((npc_hand[1][0]== 7) && (npc_hand[1][1]== 1))
                {
                 npc_cards[1] = "seven of diamonds";
                 cout << sevendiamonds;
                }

                if ((npc_hand[1][0]== 8) && (npc_hand[1][1]== 1))
                {
                 npc_cards[1] = "eight of diamonds";
                 cout << eightdiamonds;
                }

                if ((npc_hand[1][0]== 9) && (npc_hand[1][1]== 1))
                {
                 npc_cards[1] = "nine of diamonds";
                 cout << ninediamonds;
                }

                if ((npc_hand[1][0]== 10) && (npc_hand[1][1]== 1))
                {
                 npc_cards[1] = "ten of diamonds";
                 cout << tendiamonds;
                }

                if ((npc_hand[1][0]== 11) && (npc_hand[1][1]== 1))
                {
                 npc_cards[1] = "jack of diamonds";
                 cout << jackdiamonds;
                }

                if ((npc_hand[1][0]== 12) && (npc_hand[1][1]== 1))
                {
                 npc_cards[1] = "queen of diamonds";
                 cout << queendiamonds;
                }

                if ((npc_hand[1][0]== 13) && (npc_hand[1][1]== 1))
                {
                 npc_cards[1] = "king of diamonds";
                 cout << kingdiamonds;
                }

                if ((npc_hand[1][0]== 14) && (npc_hand[1][1]== 1))
                {
                 npc_cards[1] = "ace of diamonds";
                 cout << acediamonds;
                }

//middle art for the clubs

                if ((npc_hand[1][0]== 2) && (npc_hand[1][1]== 2))
                {
                 npc_cards[1] = "two of clubs";
                 cout << twoclubs;
                }

                if ((npc_hand[1][0]== 3) && (npc_hand[1][1]== 2))
                {
                 npc_cards[1] = "three of clubs";
                 cout << threeclubs;
                }

                if ((npc_hand[1][0]== 4) && (npc_hand[1][1]== 2))
                {
                 npc_cards[1] = "four of clubs";
                 cout << fourclubs;
                }

                if ((npc_hand[1][0]== 5) && (npc_hand[1][1]== 2))
                {
                 npc_cards[1] = "five of clubs";
                 cout << fiveclubs;
                }

                if ((npc_hand[1][0]== 6) && (npc_hand[1][1]== 2))
                {
                 npc_cards[1] = "six of clubs";
                 cout << sixclubs;
                }

                if ((npc_hand[1][0]== 7) && (npc_hand[1][1]== 2))
                {
                 npc_cards[1] = "seven of clubs";
                 cout << sevenclubs;
                }

                if ((npc_hand[1][0]== 8) && (npc_hand[1][1]== 2))
                {
                 npc_cards[1] = "eight of clubs";
                 cout << eightclubs;
                }

                if ((npc_hand[1][0]== 9) && (npc_hand[1][1]== 2))
                {
                 npc_cards[1] = "nine of clubs";
                 cout << nineclubs;
                }

                if ((npc_hand[1][0]== 10) && (npc_hand[1][1]== 2))
                {
                 npc_cards[1] = "ten of clubs";
                 cout << tenclubs;
                }

                if ((npc_hand[1][0]== 11) && (npc_hand[1][1]== 2))
                {
                 npc_cards[1] = "jack of clubs";
                 cout << jackclubs;
                }

                if ((npc_hand[1][0]== 12) && (npc_hand[1][1]== 2))
                {
                 npc_cards[1] = "queen of clubs";
                 cout << queenclubs;
                }

                if ((npc_hand[1][0]== 13) && (npc_hand[1][1]== 2))
                {
                 npc_cards[1] = "king of clubs";
                 cout << kingclubs;
                }

                if ((npc_hand[1][0]== 14) && (npc_hand[1][1]== 2))
                {
                 npc_cards[1] = "ace of clubs";
                 cout << aceclubs;
                }

//middle art for the hearts

                if ((npc_hand[1][0]== 2) && (npc_hand[1][1]== 3))
                {
                 npc_cards[1] = "two of hearts";
                 cout << twohearts;
                }

                if ((npc_hand[1][0]== 3) && (npc_hand[1][1]== 3))
                {
                 npc_cards[1] = "three of hearts";
                 cout << threehearts;
                }

                if ((npc_hand[1][0]== 4) && (npc_hand[1][1]== 3))
                {
                 npc_cards[1] = "four of hearts";
                 cout << fourhearts;
                }

                if ((npc_hand[1][0]== 5) && (npc_hand[1][1]== 3))
                {
                 npc_cards[1] = "five of hearts";
                 cout << fivehearts;
                }

                if ((npc_hand[1][0]== 6) && (npc_hand[1][1]== 3))
                {
                 npc_cards[1] = "six of hearts";
                 cout << sixhearts;
                }

                if ((npc_hand[1][0]== 7) && (npc_hand[1][1]== 3))
                {
                 npc_cards[1] = "seven of hearts";
                 cout << sevenhearts;
                }

                if ((npc_hand[1][0]== 8) && (npc_hand[1][1]== 3))
                {
                 npc_cards[1] = "eight of hearts";
                 cout << eighthearts;
                }

                if ((npc_hand[1][0]== 9) && (npc_hand[1][1]== 3))
                {
                 npc_cards[1] = "nine of hearts";
                 cout << ninehearts;
                }

                if ((npc_hand[1][0]== 10) && (npc_hand[1][1]== 3))
                {
                 npc_cards[1] = "ten of hearts";
                 cout << tenhearts;
                }

                if ((npc_hand[1][0]== 11) && (npc_hand[1][1]== 3))
                {
                 npc_cards[1] = "jack of hearts";
                 cout << jackhearts;
                }

                if ((npc_hand[1][0]== 12) && (npc_hand[1][1]== 3))
                {
                 npc_cards[1] = "queen of hearts";
                 cout << queenhearts;
                }

                if ((npc_hand[1][0]== 13) && (npc_hand[1][1]== 3))
                {
                 npc_cards[1] = "king of hearts";
                 cout << kinghearts;
                }

                if ((npc_hand[1][0]== 14) && (npc_hand[1][1]== 3))
                {
                 npc_cards[1] = "ace of hearts";
                 cout << acehearts;
                }

//middle art for the spades

                if ((npc_hand[1][0]== 2) && (npc_hand[1][1]== 4))
                {
                 npc_cards[1] = "two of spades";
                 cout << twospades;
                }

                if ((npc_hand[1][0]== 3) && (npc_hand[1][1]== 4))
                {
                 npc_cards[1] = "three of spades";
                 cout << threespades;
                }

                if ((npc_hand[1][0]== 4) && (npc_hand[1][1]== 4))
                {
                 npc_cards[1] = "four of spades";
                 cout << fourspades;
                }

                if ((npc_hand[1][0]== 5) && (npc_hand[1][1]== 4))
                {
                 npc_cards[1] = "five of spades";
                 cout << fivespades;
                }

                if ((npc_hand[1][0]== 6) && (npc_hand[1][1]== 4))
                {
                 npc_cards[1] = "six of spades";
                 cout << sixspades;
                }

                if ((npc_hand[1][0]== 7) && (npc_hand[1][1]== 4))
                {
                 npc_cards[1] = "seven of spades";
                 cout << sevenspades;
                }

                if ((npc_hand[1][0]== 8) && (npc_hand[1][1]== 4))
                {
                 npc_cards[1] = "eight of spades";
                 cout << eightspades;
                }

                if ((npc_hand[1][0]== 9) && (npc_hand[1][1]== 4))
                {
                 npc_cards[1] = "nine of spades";
                 cout << ninespades;
                }

                if ((npc_hand[1][0]== 10) && (npc_hand[1][1]== 4))
                {
                 npc_cards[1] = "ten of spades";
                 cout << tenspades;
                }

                if ((npc_hand[1][0]== 11) && (npc_hand[1][1]== 4))
                {
                 npc_cards[1] = "jack of spades";
                 cout << jackspades;
                }

                if ((npc_hand[1][0]== 12) && (npc_hand[1][1]== 4))
                {
                 npc_cards[1] = "queen of spades";
                 cout << queenspades;
                }

                if ((npc_hand[1][0]== 13) && (npc_hand[1][1]== 4))
                {
                 npc_cards[1] = "king of spades";
                 cout << kingspades;
                }

                if ((npc_hand[1][0]== 14) && (npc_hand[1][1]== 4))
                {
                 npc_cards[1] = "ace of spades";
                 cout << acespades;
                }

///////// --------------------------------  CARD 3  ----------------------------------------//////////////


//middle art for the diamonds

                if ((npc_hand[2][0]== 2) && (npc_hand[2][1]== 1))
                {
                 npc_cards[2] = "two of diamonds";
                 cout << twodiamonds;
                }

                if ((npc_hand[2][0]== 3) && (npc_hand[2][1]== 1))
                {
                 npc_cards[2] = "three of diamonds";
                 cout << threediamonds;
                }

                if ((npc_hand[2][0]== 4) && (npc_hand[2][1]== 1))
                {
                 npc_cards[2] = "four of diamonds";
                 cout << fourdiamonds;
                }

                if ((npc_hand[2][0]== 5) && (npc_hand[2][1]== 1))
                {
                 npc_cards[2] = "five of diamonds";
                 cout << fivediamonds;
                }

                if ((npc_hand[2][0]== 6) && (npc_hand[2][1]== 1))
                {
                 npc_cards[2] = "six of diamonds";
                 cout << sixdiamonds;
                }

                if ((npc_hand[2][0]== 7) && (npc_hand[2][1]== 1))
                {
                 npc_cards[2] = "seven of diamonds";
                 cout << sevendiamonds;
                }

                if ((npc_hand[2][0]== 8) && (npc_hand[2][1]== 1))
                {
                 npc_cards[2] = "eight of diamonds";
                 cout << eightdiamonds;
                }

                if ((npc_hand[2][0]== 9) && (npc_hand[2][1]== 1))
                {
                 npc_cards[2] = "nine of diamonds";
                 cout << ninediamonds;
                }

                if ((npc_hand[2][0]== 10) && (npc_hand[2][1]== 1))
                {
                 npc_cards[2] = "ten of diamonds";
                 cout << tendiamonds;
                }

                if ((npc_hand[2][0]== 11) && (npc_hand[2][1]== 1))
                {
                 npc_cards[2] = "jack of diamonds";
                 cout << jackdiamonds;
                }

                if ((npc_hand[2][0]== 12) && (npc_hand[2][1]== 1))
                {
                 npc_cards[2] = "queen of diamonds";
                 cout << queendiamonds;
                }

                if ((npc_hand[2][0]== 13) && (npc_hand[2][1]== 1))
                {
                 npc_cards[2] = "king of diamonds";
                 cout << kingdiamonds;
                }

                if ((npc_hand[2][0]== 14) && (npc_hand[2][1]== 1))
                {
                 npc_cards[2] = "ace of diamonds";
                 cout << acediamonds;
                }

//middle art for the clubs

                if ((npc_hand[2][0]== 2) && (npc_hand[2][1]== 2))
                {
                 npc_cards[2] = "two of clubs";
                 cout << twoclubs;
                }

                if ((npc_hand[2][0]== 3) && (npc_hand[2][1]== 2))
                {
                 npc_cards[2] = "three of clubs";
                 cout << threeclubs;
                }

                if ((npc_hand[2][0]== 4) && (npc_hand[2][1]== 2))
                {
                 npc_cards[2] = "four of clubs";
                 cout << fourclubs;
                }

                if ((npc_hand[2][0]== 5) && (npc_hand[2][1]== 2))
                {
                 npc_cards[2] = "five of clubs";
                 cout << fiveclubs;
                }

                if ((npc_hand[2][0]== 6) && (npc_hand[2][1]== 2))
                {
                 npc_cards[2] = "six of clubs";
                 cout << sixclubs;
                }

                if ((npc_hand[2][0]== 7) && (npc_hand[2][1]== 2))
                {
                 npc_cards[2] = "seven of clubs";
                 cout << sevenclubs;
                }

                if ((npc_hand[2][0]== 8) && (npc_hand[2][1]== 2))
                {
                 npc_cards[2] = "eight of clubs";
                 cout << eightclubs;
                }

                if ((npc_hand[2][0]== 9) && (npc_hand[2][1]== 2))
                {
                 npc_cards[2] = "nine of clubs";
                 cout << nineclubs;
                }

                if ((npc_hand[2][0]== 10) && (npc_hand[2][1]== 2))
                {
                 npc_cards[2] = "ten of clubs";
                 cout << tenclubs;
                }

                if ((npc_hand[2][0]== 11) && (npc_hand[2][1]== 2))
                {
                 npc_cards[2] = "jack of clubs";
                 cout << jackclubs;
                }

                if ((npc_hand[2][0]== 12) && (npc_hand[2][1]== 2))
                {
                 npc_cards[2] = "queen of clubs";
                 cout << queenclubs;
                }

                if ((npc_hand[2][0]== 13) && (npc_hand[2][1]== 2))
                {
                 npc_cards[2] = "king of clubs";
                 cout << kingclubs;
                }

                if ((npc_hand[2][0]== 14) && (npc_hand[2][1]== 2))
                {
                 npc_cards[2] = "ace of clubs";
                 cout << aceclubs;
                }

//middle art for the hearts

                if ((npc_hand[2][0]== 2) && (npc_hand[2][1]== 3))
                {
                 npc_cards[2] = "two of hearts";
                 cout << twohearts;
                }

                if ((npc_hand[2][0]== 3) && (npc_hand[2][1]== 3))
                {
                 npc_cards[2] = "three of hearts";
                 cout << threehearts;
                }

                if ((npc_hand[2][0]== 4) && (npc_hand[2][1]== 3))
                {
                 npc_cards[2] = "four of hearts";
                 cout << fourhearts;
                }

                if ((npc_hand[2][0]== 5) && (npc_hand[2][1]== 3))
                {
                 npc_cards[2] = "five of hearts";
                 cout << fivehearts;
                }

                if ((npc_hand[2][0]== 6) && (npc_hand[2][1]== 3))
                {
                 npc_cards[2] = "six of hearts";
                 cout << sixhearts;
                }

                if ((npc_hand[2][0]== 7) && (npc_hand[2][1]== 3))
                {
                 npc_cards[2] = "seven of hearts";
                 cout << sevenhearts;
                }

                if ((npc_hand[2][0]== 8) && (npc_hand[2][1]== 3))
                {
                 npc_cards[2] = "eight of hearts";
                 cout << eighthearts;
                }

                if ((npc_hand[2][0]== 9) && (npc_hand[2][1]== 3))
                {
                 npc_cards[2] = "nine of hearts";
                 cout << ninehearts;
                }

                if ((npc_hand[2][0]== 10) && (npc_hand[2][1]== 3))
                {
                 npc_cards[2] = "ten of hearts";
                 cout << tenhearts;
                }

                if ((npc_hand[2][0]== 11) && (npc_hand[2][1]== 3))
                {
                 npc_cards[2] = "jack of hearts";
                 cout << jackhearts;
                }

                if ((npc_hand[2][0]== 12) && (npc_hand[2][1]== 3))
                {
                 npc_cards[2] = "queen of hearts";
                 cout << queenhearts;
                }

                if ((npc_hand[2][0]== 13) && (npc_hand[2][1]== 3))
                {
                 npc_cards[2] = "king of hearts";
                 cout << kinghearts;
                }

                if ((npc_hand[2][0]== 14) && (npc_hand[2][1]== 3))
                {
                 npc_cards[2] = "ace of hearts";
                 cout << acehearts;
                }

//middle art for the spades

                if ((npc_hand[2][0]== 2) && (npc_hand[2][1]== 4))
                {
                 npc_cards[2] = "two of spades";
                 cout << twospades;
                }

                if ((npc_hand[2][0]== 3) && (npc_hand[2][1]== 4))
                {
                 npc_cards[2] = "three of spades";
                 cout << threespades;
                }

                if ((npc_hand[2][0]== 4) && (npc_hand[2][1]== 4))
                {
                 npc_cards[2] = "four of spades";
                 cout << fourspades;
                }

                if ((npc_hand[2][0]== 5) && (npc_hand[2][1]== 4))
                {
                 npc_cards[2] = "five of spades";
                 cout << fivespades;
                }

                if ((npc_hand[2][0]== 6) && (npc_hand[2][1]== 4))
                {
                 npc_cards[2] = "six of spades";
                 cout << sixspades;
                }

                if ((npc_hand[2][0]== 7) && (npc_hand[2][1]== 4))
                {
                 npc_cards[2] = "seven of spades";
                 cout << sevenspades;
                }

                if ((npc_hand[2][0]== 8) && (npc_hand[2][1]== 4))
                {
                 npc_cards[2] = "eight of spades";
                 cout << eightspades;
                }

                if ((npc_hand[2][0]== 9) && (npc_hand[2][1]== 4))
                {
                 npc_cards[2] = "nine of spades";
                 cout << ninespades;
                }

                if ((npc_hand[2][0]== 10) && (npc_hand[2][1]== 4))
                {
                 npc_cards[2] = "ten of spades";
                 cout << tenspades;
                }

                if ((npc_hand[2][0]== 11) && (npc_hand[2][1]== 4))
                {
                 npc_cards[2] = "jack of spades";
                 cout << jackspades;
                }

                if ((npc_hand[2][0]== 12) && (npc_hand[2][1]== 4))
                {
                 npc_cards[2] = "queen of spades";
                 cout << queenspades;
                }

                if ((npc_hand[2][0]== 13) && (npc_hand[2][1]== 4))
                {
                 npc_cards[2] = "king of spades";
                 cout << kingspades;
                }

                if ((npc_hand[2][0]== 14) && (npc_hand[2][1]== 4))
                {
                 npc_cards[2] = "ace of spades";
                 cout << acespades;
                }


///////// --------------------------------  CARD 4  ----------------------------------------//////////////


//middle art for the diamonds

                if ((npc_hand[3][0]== 2) && (npc_hand[3][1]== 1))
                {
                 npc_cards[3] = "two of diamonds";
                 cout << twodiamonds;
                }

                if ((npc_hand[3][0]== 3) && (npc_hand[3][1]== 1))
                {
                 npc_cards[3] = "three of diamonds";
                 cout << threediamonds;
                }

                if ((npc_hand[3][0]== 4) && (npc_hand[3][1]== 1))
                {
                 npc_cards[3] = "four of diamonds";
                 cout << fourdiamonds;
                }

                if ((npc_hand[3][0]== 5) && (npc_hand[3][1]== 1))
                {
                 npc_cards[3] = "five of diamonds";
                 cout << fivediamonds;
                }

                if ((npc_hand[3][0]== 6) && (npc_hand[3][1]== 1))
                {
                 npc_cards[3] = "six of diamonds";
                 cout << sixdiamonds;
                }

                if ((npc_hand[3][0]== 7) && (npc_hand[3][1]== 1))
                {
                 npc_cards[3] = "seven of diamonds";
                 cout << sevendiamonds;
                }

                if ((npc_hand[3][0]== 8) && (npc_hand[3][1]== 1))
                {
                 npc_cards[3] = "eight of diamonds";
                 cout << eightdiamonds;
                }

                if ((npc_hand[3][0]== 9) && (npc_hand[3][1]== 1))
                {
                 npc_cards[3] = "nine of diamonds";
                 cout << ninediamonds;
                }

                if ((npc_hand[3][0]== 10) && (npc_hand[3][1]== 1))
                {
                 npc_cards[3] = "ten of diamonds";
                 cout << tendiamonds;
                }

                if ((npc_hand[3][0]== 11) && (npc_hand[3][1]== 1))
                {
                 npc_cards[3] = "jack of diamonds";
                 cout << jackdiamonds;
                }

                if ((npc_hand[3][0]== 12) && (npc_hand[3][1]== 1))
                {
                 npc_cards[3] = "queen of diamonds";
                 cout << queendiamonds;
                }

                if ((npc_hand[3][0]== 13) && (npc_hand[3][1]== 1))
                {
                 npc_cards[3] = "king of diamonds";
                 cout << kingdiamonds;
                }

                if ((npc_hand[3][0]== 14) && (npc_hand[3][1]== 1))
                {
                 npc_cards[3] = "ace of diamonds";
                 cout << acediamonds;
                }

//middle art for the clubs

                if ((npc_hand[3][0]== 2) && (npc_hand[3][1]== 2))
                {
                 npc_cards[3] = "two of clubs";
                 cout << twoclubs;
                }

                if ((npc_hand[3][0]== 3) && (npc_hand[3][1]== 2))
                {
                 npc_cards[3] = "three of clubs";
                 cout << threeclubs;
                }

                if ((npc_hand[3][0]== 4) && (npc_hand[3][1]== 2))
                {
                 npc_cards[3] = "four of clubs";
                 cout << fourclubs;
                }

                if ((npc_hand[3][0]== 5) && (npc_hand[3][1]== 2))
                {
                 npc_cards[3] = "five of clubs";
                 cout << fiveclubs;
                }

                if ((npc_hand[3][0]== 6) && (npc_hand[3][1]== 2))
                {
                 npc_cards[3] = "six of clubs";
                 cout << sixclubs;
                }

                if ((npc_hand[3][0]== 7) && (npc_hand[3][1]== 2))
                {
                 npc_cards[3] = "seven of clubs";
                 cout << sevenclubs;
                }

                if ((npc_hand[3][0]== 8) && (npc_hand[3][1]== 2))
                {
                 npc_cards[3] = "eight of clubs";
                 cout << eightclubs;
                }

                if ((npc_hand[3][0]== 9) && (npc_hand[3][1]== 2))
                {
                 npc_cards[3] = "nine of clubs";
                 cout << nineclubs;
                }

                if ((npc_hand[3][0]== 10) && (npc_hand[3][1]== 2))
                {
                 npc_cards[3] = "ten of clubs";
                 cout << tenclubs;
                }

                if ((npc_hand[3][0]== 11) && (npc_hand[3][1]== 2))
                {
                 npc_cards[3] = "jack of clubs";
                 cout << jackclubs;
                }

                if ((npc_hand[3][0]== 12) && (npc_hand[3][1]== 2))
                {
                 npc_cards[3] = "queen of clubs";
                 cout << queenclubs;
                }

                if ((npc_hand[3][0]== 13) && (npc_hand[3][1]== 2))
                {
                 npc_cards[3] = "king of clubs";
                 cout << kingclubs;
                }

                if ((npc_hand[3][0]== 14) && (npc_hand[3][1]== 2))
                {
                 npc_cards[3] = "ace of clubs";
                 cout << aceclubs;
                }

//middle art for the hearts

                if ((npc_hand[3][0]== 2) && (npc_hand[3][1]== 3))
                {
                 npc_cards[3] = "two of hearts";
                 cout << twohearts;
                }

                if ((npc_hand[3][0]== 3) && (npc_hand[3][1]== 3))
                {
                 npc_cards[3] = "three of hearts";
                 cout << threehearts;
                }

                if ((npc_hand[3][0]== 4) && (npc_hand[3][1]== 3))
                {
                 npc_cards[3] = "four of hearts";
                 cout << fourhearts;
                }

                if ((npc_hand[3][0]== 5) && (npc_hand[3][1]== 3))
                {
                 npc_cards[3] = "five of hearts";
                 cout << fivehearts;
                }

                if ((npc_hand[3][0]== 6) && (npc_hand[3][1]== 3))
                {
                 npc_cards[3] = "six of hearts";
                 cout << sixhearts;
                }

                if ((npc_hand[3][0]== 7) && (npc_hand[3][1]== 3))
                {
                 npc_cards[3] = "seven of hearts";
                 cout << sevenhearts;
                }

                if ((npc_hand[3][0]== 8) && (npc_hand[3][1]== 3))
                {
                 npc_cards[3] = "eight of hearts";
                 cout << eighthearts;
                }

                if ((npc_hand[3][0]== 9) && (npc_hand[3][1]== 3))
                {
                 npc_cards[3] = "nine of hearts";
                 cout << ninehearts;
                }

                if ((npc_hand[3][0]== 10) && (npc_hand[3][1]== 3))
                {
                 npc_cards[3] = "ten of hearts";
                 cout << tenhearts;
                }

                if ((npc_hand[3][0]== 11) && (npc_hand[3][1]== 3))
                {
                 npc_cards[3] = "jack of hearts";
                 cout << jackhearts;
                }

                if ((npc_hand[3][0]== 12) && (npc_hand[3][1]== 3))
                {
                 npc_cards[3] = "queen of hearts";
                 cout << queenhearts;
                }

                if ((npc_hand[3][0]== 13) && (npc_hand[3][1]== 3))
                {
                 npc_cards[3] = "king of hearts";
                 cout << kinghearts;
                }

                if ((npc_hand[3][0]== 14) && (npc_hand[3][1]== 3))
                {
                 npc_cards[3] = "ace of hearts";
                 cout << acehearts;
                }

//middle art for the spades

                if ((npc_hand[3][0]== 2) && (npc_hand[3][1]== 4))
                {
                 npc_cards[3] = "two of spades";
                 cout << twospades;
                }

                if ((npc_hand[3][0]== 3) && (npc_hand[3][1]== 4))
                {
                 npc_cards[3] = "three of spades";
                 cout << threespades;
                }

                if ((npc_hand[3][0]== 4) && (npc_hand[3][1]== 4))
                {
                 npc_cards[3] = "four of spades";
                 cout << fourspades;
                }

                if ((npc_hand[3][0]== 5) && (npc_hand[3][1]== 4))
                {
                 npc_cards[3] = "five of spades";
                 cout << fivespades;
                }

                if ((npc_hand[3][0]== 6) && (npc_hand[3][1]== 4))
                {
                 npc_cards[3] = "six of spades";
                 cout << sixspades;
                }

                if ((npc_hand[3][0]== 7) && (npc_hand[3][1]== 4))
                {
                 npc_cards[3] = "seven of spades";
                 cout << sevenspades;
                }

                if ((npc_hand[3][0]== 8) && (npc_hand[3][1]== 4))
                {
                 npc_cards[3] = "eight of spades";
                 cout << eightspades;
                }

                if ((npc_hand[3][0]== 9) && (npc_hand[3][1]== 4))
                {
                 npc_cards[3] = "nine of spades";
                 cout << ninespades;
                }

                if ((npc_hand[3][0]== 10) && (npc_hand[3][1]== 4))
                {
                 npc_cards[3] = "ten of spades";
                 cout << tenspades;
                }

                if ((npc_hand[3][0]== 11) && (npc_hand[3][1]== 4))
                {
                 npc_cards[3] = "jack of spades";
                 cout << jackspades;
                }

                if ((npc_hand[3][0]== 12) && (npc_hand[3][1]== 4))
                {
                 npc_cards[3] = "queen of spades";
                 cout << queenspades;
                }

                if ((npc_hand[3][0]== 13) && (npc_hand[3][1]== 4))
                {
                 npc_cards[3] = "king of spades";
                 cout << kingspades;
                }

                if ((npc_hand[3][0]== 14) && (npc_hand[3][1]== 4))
                {
                 npc_cards[3] = "ace of spades";
                 cout << acespades;
                }

///////// --------------------------------  CARD 5  ----------------------------------------//////////////


//middle art for the diamonds

                if ((npc_hand[4][0]== 2) && (npc_hand[4][1]== 1))
                {
                 npc_cards[4] = "two of diamonds";
                 cout << twodiamonds;
                }

                if ((npc_hand[4][0]== 3) && (npc_hand[4][1]== 1))
                {
                 npc_cards[4] = "three of diamonds";
                 cout << threediamonds;
                }

                if ((npc_hand[4][0]== 4) && (npc_hand[4][1]== 1))
                {
                 npc_cards[4] = "four of diamonds";
                 cout << fourdiamonds;
                }

                if ((npc_hand[4][0]== 5) && (npc_hand[4][1]== 1))
                {
                 npc_cards[4] = "five of diamonds";
                 cout << fivediamonds;
                }

                if ((npc_hand[4][0]== 6) && (npc_hand[4][1]== 1))
                {
                 npc_cards[4] = "six of diamonds";
                 cout << sixdiamonds;
                }

                if ((npc_hand[4][0]== 7) && (npc_hand[4][1]== 1))
                {
                 npc_cards[4] = "seven of diamonds";
                 cout << sevendiamonds;
                }

                if ((npc_hand[4][0]== 8) && (npc_hand[4][1]== 1))
                {
                 npc_cards[4] = "eight of diamonds";
                 cout << eightdiamonds;
                }

                if ((npc_hand[4][0]== 9) && (npc_hand[4][1]== 1))
                {
                 npc_cards[4] = "nine of diamonds";
                 cout << ninediamonds;
                }

                if ((npc_hand[4][0]== 10) && (npc_hand[4][1]== 1))
                {
                 npc_cards[4] = "ten of diamonds";
                 cout << tendiamonds;
                }

                if ((npc_hand[4][0]== 11) && (npc_hand[4][1]== 1))
                {
                 npc_cards[4] = "jack of diamonds";
                 cout << jackdiamonds;
                }

                if ((npc_hand[4][0]== 12) && (npc_hand[4][1]== 1))
                {
                 npc_cards[4] = "queen of diamonds";
                 cout << queendiamonds;
                }

                if ((npc_hand[4][0]== 13) && (npc_hand[4][1]== 1))
                {
                 npc_cards[4] = "king of diamonds";
                 cout << kingdiamonds;
                }

                if ((npc_hand[4][0]== 14) && (npc_hand[4][1]== 1))
                {
                 npc_cards[4] = "ace of diamonds";
                 cout << acediamonds;
                }

//middle art for the clubs

                if ((npc_hand[4][0]== 2) && (npc_hand[4][1]== 2))
                {
                 npc_cards[4] = "two of clubs";
                 cout << twoclubs;
                }

                if ((npc_hand[4][0]== 3) && (npc_hand[4][1]== 2))
                {
                 npc_cards[4] = "three of clubs";
                 cout << threeclubs;
                }

                if ((npc_hand[4][0]== 4) && (npc_hand[4][1]== 2))
                {
                 npc_cards[4] = "four of clubs";
                 cout << fourclubs;
                }

                if ((npc_hand[4][0]== 5) && (npc_hand[4][1]== 2))
                {
                 npc_cards[4] = "five of clubs";
                 cout << fiveclubs;
                }

                if ((npc_hand[4][0]== 6) && (npc_hand[4][1]== 2))
                {
                 npc_cards[4] = "six of clubs";
                 cout << sixclubs;
                }

                if ((npc_hand[4][0]== 7) && (npc_hand[4][1]== 2))
                {
                 npc_cards[4] = "seven of clubs";
                 cout << sevenclubs;
                }

                if ((npc_hand[4][0]== 8) && (npc_hand[4][1]== 2))
                {
                 npc_cards[4] = "eight of clubs";
                 cout << eightclubs;
                }

                if ((npc_hand[4][0]== 9) && (npc_hand[4][1]== 2))
                {
                 npc_cards[4] = "nine of clubs";
                 cout << nineclubs;
                }

                if ((npc_hand[4][0]== 10) && (npc_hand[4][1]== 2))
                {
                 npc_cards[4] = "ten of clubs";
                 cout << tenclubs;
                }

                if ((npc_hand[4][0]== 11) && (npc_hand[4][1]== 2))
                {
                 npc_cards[4] = "jack of clubs";
                 cout << jackclubs;
                }

                if ((npc_hand[4][0]== 12) && (npc_hand[4][1]== 2))
                {
                 npc_cards[4] = "queen of clubs";
                 cout << queenclubs;
                }

                if ((npc_hand[4][0]== 13) && (npc_hand[4][1]== 2))
                {
                 npc_cards[4] = "king of clubs";
                 cout << kingclubs;
                }

                if ((npc_hand[4][0]== 14) && (npc_hand[4][1]== 2))
                {
                 npc_cards[4] = "ace of clubs";
                 cout << aceclubs;
                }

//middle art for the hearts

                if ((npc_hand[4][0]== 2) && (npc_hand[4][1]== 3))
                {
                 npc_cards[4] = "two of hearts";
                 cout << twohearts;
                }

                if ((npc_hand[4][0]== 3) && (npc_hand[4][1]== 3))
                {
                 npc_cards[4] = "three of hearts";
                 cout << threehearts;
                }

                if ((npc_hand[4][0]== 4) && (npc_hand[4][1]== 3))
                {
                 npc_cards[4] = "four of hearts";
                 cout << fourhearts;
                }

                if ((npc_hand[4][0]== 5) && (npc_hand[4][1]== 3))
                {
                 npc_cards[4] = "five of hearts";
                 cout << fivehearts;
                }

                if ((npc_hand[4][0]== 6) && (npc_hand[4][1]== 3))
                {
                 npc_cards[4] = "six of hearts";
                 cout << sixhearts;
                }

                if ((npc_hand[4][0]== 7) && (npc_hand[4][1]== 3))
                {
                 npc_cards[4] = "seven of hearts";
                 cout << sevenhearts;
                }

                if ((npc_hand[4][0]== 8) && (npc_hand[4][1]== 3))
                {
                 npc_cards[4] = "eight of hearts";
                 cout << eighthearts;
                }

                if ((npc_hand[4][0]== 9) && (npc_hand[4][1]== 3))
                {
                 npc_cards[4] = "nine of hearts";
                 cout << ninehearts;
                }

                if ((npc_hand[4][0]== 10) && (npc_hand[4][1]== 3))
                {
                 npc_cards[4] = "ten of hearts";
                 cout << tenhearts;
                }

                if ((npc_hand[4][0]== 11) && (npc_hand[4][1]== 3))
                {
                 npc_cards[4] = "jack of hearts";
                 cout << jackhearts;
                }

                if ((npc_hand[4][0]== 12) && (npc_hand[4][1]== 3))
                {
                 npc_cards[4] = "queen of hearts";
                 cout << queenhearts;
                }

                if ((npc_hand[4][0]== 13) && (npc_hand[4][1]== 3))
                {
                 npc_cards[4] = "king of hearts";
                 cout << kinghearts;
                }

                if ((npc_hand[4][0]== 14) && (npc_hand[4][1]== 3))
                {
                 npc_cards[4] = "ace of hearts";
                 cout << acehearts;
                }

//middle art for the spades

                if ((npc_hand[4][0]== 2) && (npc_hand[4][1]== 4))
                {
                 npc_cards[4] = "two of spades";
                 cout << twospades;
                }

                if ((npc_hand[4][0]== 3) && (npc_hand[4][1]== 4))
                {
                 npc_cards[4] = "three of spades";
                 cout << threespades;
                }

                if ((npc_hand[4][0]== 4) && (npc_hand[4][1]== 4))
                {
                 npc_cards[4] = "four of spades";
                 cout << fourspades;
                }

                if ((npc_hand[4][0]== 5) && (npc_hand[4][1]== 4))
                {
                 npc_cards[4] = "five of spades";
                 cout << fivespades;
                }

                if ((npc_hand[4][0]== 6) && (npc_hand[4][1]== 4))
                {
                 npc_cards[4] = "six of spades";
                 cout << sixspades;
                }

                if ((npc_hand[4][0]== 7) && (npc_hand[4][1]== 4))
                {
                 npc_cards[4] = "seven of spades";
                 cout << sevenspades;
                }

                if ((npc_hand[4][0]== 8) && (npc_hand[4][1]== 4))
                {
                 npc_cards[4] = "eight of spades";
                 cout << eightspades;
                }

                if ((npc_hand[4][0]== 9) && (npc_hand[4][1]== 4))
                {
                 npc_cards[4] = "nine of spades";
                 cout << ninespades;
                }

                if ((npc_hand[4][0]== 10) && (npc_hand[4][1]== 4))
                {
                 npc_cards[4] = "ten of spades";
                 cout << tenspades;
                }

                if ((npc_hand[4][0]== 11) && (npc_hand[4][1]== 4))
                {
                 npc_cards[4] = "jack of spades";
                 cout << jackspades;
                }

                if ((npc_hand[4][0]== 12) && (npc_hand[4][1]== 4))
                {
                 npc_cards[4] = "queen of spades";
                 cout << queenspades;
                }

                if ((npc_hand[4][0]== 13) && (npc_hand[4][1]== 4))
                {
                 npc_cards[4] = "king of spades";
                 cout << kingspades;
                }

                if ((npc_hand[4][0]== 14) && (npc_hand[4][1]== 4))
                {
                 npc_cards[4] = "ace of spades";
                 cout << acespades;
                }



    cout << user_cardbottoms << "\n\n\n";
}



int main()
{
bool playagain=true;
while(playagain==true)
{
//KEEP THIS AS THE FIRST IN MAIN
srand(time(0));

deal_in();
print_userhand();
discard();
print_npchand();
print_userhand();
evaluate_hands();




//apply this to a big while loop within the main loop
bool getoffthistrain = false;
while (getoffthistrain == false)
{
    string whatnow;
    cout << "\nPlay  again? (y/n) ";
    cin >> whatnow;

    if (whatnow == "y" || whatnow == "Y")
    {
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    playagain == true;
    getoffthistrain = true;
    }
    else if (whatnow == "n" || whatnow == "N")
    {
    cout << "\n\n\n\n\n\n\n\n\n\n" << "\n\nB E T T E R   L U C K   N E X T   T I M E" << "\n\n\n\n\n\n\n\n\n\n";
    playagain=false;
    getoffthistrain = true;
    }
    else
    {
    cout << "invalid answer" << "\n";
    }
};
}

    return 0;
}





