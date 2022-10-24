#include <iostream>

using namespace std;
// main starting code

int main()
{
    // initialize choice for class
    char classchoice;
    char sorcequestion;
    // first dialogue, selection of class 
    cout << "Hello there, young traveler. It seems you intend on going on a quest, judging by your gear. What, exactly, is that on your back?\n";
    cout << "(a) A staff! Can't cast spells without a staff! [mage]" << endl;
    cout << "(b) A sword! Can't slay monsters without a sword! [knight]" << endl;
    cout << "(c) A bow! Can't hunt without a proper bow and arrow! [archer]" << endl;
    cin >> classchoice;
    cout << endl;
    switch (classchoice) {
    case 'a':
        cout << "Wonderful! I love sorcery. Are you a sorcerer?" << endl;
        cout << "(a) No, I'm a mage. You'd know that if you paid close enough attention. [rude]" << endl;
        cout << "(b) No, actually, I'm a mage! My father was a sorcerer, though! [polite correction]" << endl;
        cout << "(c) Yeah, that's close enough. [play along]" << endl;
        cin >> sorcequestion;
        if (sorcequestion == 'a') {
            cout << "Oh, so you're going to be like that, are you?" << endl << "The stranger takes off his mysterious cloak, revealing his immensely powerful aura and zapping you with lightning, turning you to nothing but a pile of a ash!\n";
        }
        if (sorcequestion == 'b') {
            cout << "Fantastic! I wish you the best of luck on your journey, young one.\n"; 
            cout << "You walk forward, suddenly feeling yourself no longer touching the ground. The stranger laughs. He tripped you! You fell and died.\n";
        }
        if (sorcequestion == 'c') {
            cout << "Aha, so you're a sorcerer? Then explain why your robes match that of a mage.\n";
            cout << "You stutter, struggling to get a word out trying not to embarass yourself, but it's too late! The stranger throws a ball of fire at you and you explode!\n";
        }
        break;
    case 'b':

        break;
    case 'c':

        break;
    }

    cout << "Game Over";

    return 0;
}