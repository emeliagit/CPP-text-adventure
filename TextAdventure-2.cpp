#include <iostream>

using namespace std;
// main starting code

int main()
{
    // Game title/introduction
    cout << R"(
                                                                ,---,                                                                               
                                                             ,`--.' |                                                                               
    ,---,.          ____            ,--,                     |   :  :                     ,----..                                           ___     
  ,'  .' |        ,'  , `.        ,--.'|     ,--,            |   |  '                    /   /   \                                        ,--.'|_   
,---.'   |     ,-+-,.' _ |        |  | :   ,--.'|            '   :  |                   /   .     :            ,--,                       |  | :,'  
|   |   .'  ,-+-. ;   , ||        :  : '   |  |,             ;   |.'.--.--.            .   /   ;.  \         ,'_ /|             .--.--.   :  : ' :  
:   :  |-, ,--.'|'   |  || ,---.  |  ' |   `--'_      ,--.--.'---' /  /    '          .   ;   /  ` ;    .--. |  | :    ,---.   /  /    '.;__,'  /   
:   |  ;/||   |  ,', |  |,/     \ '  | |   ,' ,'|    /       \    |  :  /`./          ;   |  ; \ ; |  ,'_ /| :  . |   /     \ |  :  /`./|  |   |    
|   :   .'|   | /  | |--'/    /  ||  | :   '  | |   .--.  .-. |   |  :  ;_            |   :  | ; | '  |  ' | |  . .  /    /  ||  :  ;_  :__,'| :    
|   |  |-,|   : |  | ,  .    ' / |'  : |__ |  | :    \__\/: . .    \  \    `.         .   |  ' ' ' :  |  | ' |  | | .    ' / | \  \    `. '  : |__  
'   :  ;/||   : |  |/   '   ;   /||  | '.'|'  : |__  ," .--.; |     `----.   \        '   ;  \; /  |  :  | : ;  ; | '   ;   /|  `----.   \|  | '.'| 
|   |    \|   | |`-'    '   |  / |;  :    ;|  | '.'|/  /  ,.  |    /  /`--'  /         \   \  ',  . \ '  :  `--'   \'   |  / | /  /`--'  /;  :    ; 
|   :   .'|   ;/        |   :    ||  ,   / ;  :    ;  :   .'   \  '--'.     /           ;   :      ; |:  ,      .-./|   :    |'--'.     / |  ,   /  
|   | ,'  '---'          \   \  /  ---`-'  |  ,   /|  ,     .-./    `--'---'             \   \ .'`--"  `--`----'     \   \  /   `--'---'   ---`-'   
`----'                    `----'            ---`-'  `--`---'                              `---`                       `----'                        
                                                                                                                                                    )";
    // initialize choice for class
    char classchoice;
    char sorcequestion, knightquestion, archquestion;
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
        cout << "(b) No, actually, I'm a mage! My father was a sorcerer, though! [polite chorrection]" << endl;
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
        cout << "Wonderful! Knighting is a highly respected profession. You seem quite young, have you ever killed a monster, by chance?\n";
        cin >> knightquestion;
        cout << "(a) Yes, many! I once killed a troll with nothing but my bare hands!" << endl;
        cout << "(b) I've killed one or two, but I'm by no means experienced." << endl;
        cout << "(c) Nope, none. I'm only just beginning on my journey, but I hope to slay many!" << endl;
        if (knightquestion == 'a') {
            cout << "Arrogant, are we? Alright, then, face me in battle, if you're the mighty warrior you claim to be!\n";
            cout << "The stranger lifts his cloak slightly, revealing a beautiful sword unlike anything you've ever seen. You cower in fear and run away.";\
            cout << R"(
         />_________________________________
[########[]_________________________________>
         \>)" << '\n';
        }
        if (knightquestion == 'b') {
            cout << "Humble, then, aren't you? I like that." << endl;
            cout << "You and the stranger are now friends. Congratulations.";
            cout << R"(
  ^~^  ,
 ('Y') )
 /   \/ 
(\|||/)
)";
        }
        if (knightquestion == 'c') {
            cout << "Well, then, young adventurer, I do wish you the best of luck on your journey. May it be long and propserous.";
            cout << "You depart on your journey, never to see the stranger again. Or anyone else. Let's just say, you didn't get very far.";
        }
        break;
    case 'c':
        break;
    }

    cout << R"(
 _______  _______  _______  _______    _______           _______  _______ 
(  ____ \(  ___  )(       )(  ____ \  (  ___  )|\     /|(  ____ \(  ____ )
| (    \/| (   ) || () () || (    \/  | (   ) || )   ( || (    \/| (    )|
| |      | (___) || || || || (__      | |   | || |   | || (__    | (____)|
| | ____ |  ___  || |(_)| ||  __)     | |   | |( (   ) )|  __)   |     __)
| | \_  )| (   ) || |   | || (        | |   | | \ \_/ / | (      | (\ (   
| (___) || )   ( || )   ( || (____/\  | (___) |  \   /  | (____/\| ) \ \__
(_______)|/     \||/     \|(_______/  (_______)   \_/   (_______/|/   \__/
                                                                          )";

    return 0;
}