#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include <string>
#include <iomanip>
using namespace std;
const string WORD_LIST[] = {
 "angle", "ant", "apple", "arch", "arm", "army",
 "baby", "bag", "ball", "band", "basin", "basket", "bath", "bed", "bee", "bell", "berry",
 "bird", "blade", "board", "boat", "bone", "book", "boot", "bottle", "box", "boy",
 "brain", "brake", "branch", "brick", "bridge", "brush", "bucket", "bulb", "button",
 "cake", "camera", "card", "cart", "carriage", "cat", "chain", "cheese", "chest",
 "chin", "church", "circle", "clock", "cloud", "coat", "collar", "comb", "cord",
 "cow", "cup", "curtain", "cushion",
 "dog", "door", "drain", "drawer", "dress", "drop", "ear", "egg", "engine", "eye",
 "face", "farm", "feather", "finger", "fish", "flag", "floor", "fly",
 "foot", "fork", "fowl", "frame", "garden", "girl", "glove", "goat", "gun",
 "hair", "hammer", "hand", "hat", "head", "heart", "hook", "horn", "horse",
 "hospital", "house", "island", "jewel", "kettle", "key", "knee", "knife", "knot",
 "leaf", "leg", "library", "line", "lip", "lock",
 "map", "match", "monkey", "moon", "mouth", "muscle",
 "nail", "neck", "needle", "nerve", "net", "nose", "nut",
 "office", "orange", "oven", "parcel", "pen", "pencil", "picture", "pig", "pin",
 "pipe", "plane", "plate", "plow", "pocket", "pot", "potato", "prison", "pump",
 "rail", "rat", "receipt", "ring", "rod", "roof", "root",
 "sail", "school", "scissors", "screw", "seed", "sheep", "shelf", "ship", "shirt",
 "shoe", "skin", "skirt", "snake", "sock", "spade", "sponge", "spoon", "spring",
 "square", "stamp", "star", "station", "stem", "stick", "stocking", "stomach",
 "store", "street", "sun", "table", "tail", "thread", "throat", "thumb", "ticket",
 "toe", "tongue", "tooth", "town", "train", "tray", "tree", "trousers", "umbrella",
 "wall", "watch", "wheel", "whip", "whistle", "window", "wire", "wing", "worm",
 };
const int WORD_COUNT = sizeof(WORD_LIST) / sizeof(string);
const string FIGURE[] = {
 " -------------  \n"
 " |              \n"
 " |              \n"
 " |              \n"
 " |              \n"
 " |              \n"
 " -----          \n",
 " -------------  \n"
 " |           |  \n"
 " |              \n"
 " |              \n"
 " |              \n"
 " |              \n"
 " -----          \n",
 " -------------  \n"
 " |           |  \n"
 " |           O  \n"
 " |              \n"
 " |              \n"
 " |              \n"
 " -----          \n",
 " -------------  \n"
 " |           |  \n"
 " |           O  \n"
 " |           |  \n"
 " |              \n"
 " |              \n"
 " -----          \n",
 " -------------  \n"
 " |           |  \n"
 " |           O  \n"
 " |          /|  \n"
 " |              \n"
 " |              \n"
 " -----          \n",
 " -------------  \n"
 " |           |  \n"
 " |           O  \n"
 " |          /|\\ \n"
 " |              \n"
 " |              \n"
 " -----          \n",
 " -------------  \n"
 " |           |  \n"
 " |           O  \n"
 " |          /|\\ \n"
 " |          /   \n"
 " |              \n"
 " -----          \n",
 " -------------  \n"
 " |           |  \n"
 " |           O  \n"
 " |          /|\\ \n"
 " |          / \\ \n"
 " |              \n"
 " -----          \n",
};

char make_guess()
{
    cout<<"Press your answer: ";
    char guess_word; cin>>guess_word;
    return guess_word;
}
string choose_word()
{
    srand(time(NULL));
    int random_index=rand()%WORD_COUNT;
    return WORD_LIST[random_index];
}
void render_game(string answer_word, int bad_guess, string guessed_word)
{
	system("cls");
	for(int i=0;i<=17;i++)
	{
		cout<<endl;
	}
    cout<<FIGURE[bad_guess]<<endl;
    cout<<"Your word: "<<answer_word<<endl;
    cout<<"Number of wrong answer: "<<bad_guess<<endl;
	cout<<"Guessed words: "<<guessed_word<<endl;
}
void to_lower(char &guess)
{
	if(guess>='A'&&guess<='Z') guess+='a'-'A';
}
bool check_repress(char guess, string guessed_word)
{
	bool returning=false;
	if(!(guess>='a'&&guess<='z')) returning=true;
	for(int i=0;i<guessed_word.length();i++)
	{
		if(guessed_word[i]==guess) returning=true;
	}
	return returning;
}
void update(string &answer_word, const string secret_word, char guess)
{
    for(int i=0;i<secret_word.length();i++)
    {
        if(guess==secret_word[i])
        {
            answer_word[i]=secret_word[i];
        }
    }
}
bool contains(const string secret_word, char guess)
{
    bool returning=false;
    for(int i=0;i<secret_word.length();i++)
    {
        if(secret_word[i]==guess) returning=true;
    }
    return returning;
}
int main()
{
    const string secret_word=choose_word();
    string answer_word;
    for(int i=0;i<secret_word.length();i++)
    {
        answer_word+="-";
    }
    string guessed_word="";
    int bad_guess=0;
    do
    {
        render_game(answer_word,bad_guess,guessed_word);
        char guess;
        do
        {
        	guess=make_guess();
        	to_lower(guess);
        	if(check_repress(guess,guessed_word)==true) 
			{
				render_game(answer_word,bad_guess,guessed_word);
				cout<<"Please repress your word."<<endl;
			}
        	else break;
		}
		while(true);
        guessed_word.push_back(guess);
        if(contains(secret_word,guess)) update(answer_word,secret_word,guess);
        else bad_guess++;
    }
    while(bad_guess<7&&secret_word!=answer_word);
    render_game(answer_word,bad_guess,guessed_word);
    if(bad_guess<7) cout<<"Congratulations. You win!";
    else cout<<"You lost. The correct word is: "<<secret_word;
}
