#include "display_game.h"



void welcome() {
    system("cls"); 

    printf("\n");
    printf("                                                                      _  _  _                                                                                                                \n");
    printf("                                                                   _ (_)(_)(_) _                                                                                                              \n");
    printf("                                                                  (_)         (_)         _  _  _             _  _   _  _          _  _  _  _                                                \n");
    printf("                                                                  (_)    _  _  _         (_)(_)(_) _         (_)(_)_(_)(_)        (_)(_)(_)(_)_                                              \n");
    printf("                                                                  (_)   (_)(_)(_)         _  _  _ (_)       (_)   (_)   (_)      (_) _  _  _ (_)                                              \n");
    printf("                                                                  (_)         (_)       _(_)(_)(_)(_)       (_)   (_)   (_)      (_)(_)(_)(_)(_)                                              \n");
    printf("                                                                  (_) _  _  _ (_)      (_)_  _  _ (_)_      (_)   (_)   (_)      (_)_  _  _  _                                                \n");
    printf("                                                                     (_)(_)(_)(_)        (_)(_)(_)  (_)     (_)   (_)   (_)        (_)(_)(_)(_)                                               \n");
    printf("                                                                                                                                                                                              \n");
    printf("                                                                                                                                                                                              \n");
    printf("    _  _  _  _              _  _                                                         _                         _  _  _                                                   _               \n");
    printf("   (_)(_)(_)(_) _          (_)(_)                                                       (_)                       (_)(_)(_)                                                 (_)              \n");
    printf("    (_)        (_)            (_)               _  _  _               _  _  _           (_)     _                    (_)            _  _  _               _  _  _           (_)     _        \n");
    printf("    (_) _  _  _(_)            (_)              (_)(_)(_) _          _(_)(_)(_)          (_)   _(_)                   (_)           (_)(_)(_) _          _(_)(_)(_)          (_)   _(_)       \n");
    printf("    (_)(_)(_)(_)_             (_)               _  _  _ (_)        (_)                  (_) _(_)                     (_)            _  _  _ (_)        (_)                  (_) _(_)         \n");
    printf("    (_)        (_)            (_)             _(_)(_)(_)(_)        (_)                  (_)(_)_               _      (_)          _(_)(_)(_)(_)        (_)                  (_)(_)_          \n");
    printf("    (_)_  _  _ (_)          _ (_) _          (_)_  _  _ (_)_       (_)_  _  _           (_)  (_)_            (_)  _  (_)         (_)_  _  _ (_)_       (_)_  _  _           (_)  (_)_        \n");
    printf("   (_)(_)(_)(_)            (_)(_)(_)           (_)(_)(_)  (_)        (_)(_)(_)          (_)    (_)            (_)(_)(_)            (_)(_)(_)  (_)        (_)(_)(_)          (_)    (_)       \n");
    printf("                                                                                                                                                                                              \n");
    printf("                                                                                                                                                                                              \n");

    printf("\n                                                                                       Tekan Enter untuk lanjut...");
    getchar(); // Menunggu pengguna menekan Enter
}


void displayMenu() {

    system("cls"); 

    printf("Menu:\n");
    printf("1. Main Game Blackjack\n");
    printf("2. Record\n");
    printf("3. Top score\n");
    printf("4. keluar\n");
    printf("Pilih opsi (1-4): ");
}


#include <stdio.h>

void you_win() {
    
   
    
    printf("    _           _             _  _  _  _             _            _   \n");
    printf("   (_)_       _(_)          _(_)(_)(_)(_)_          (_)          (_)  \n");
    printf("     (_)_   _(_)           (_)          (_)         (_)          (_)  \n");
    printf("       (_)_(_)             (_)          (_)         (_)          (_)  \n");
    printf("         (_)               (_)          (_)         (_)          (_)  \n");
    printf("         (_)               (_)          (_)         (_)          (_)  \n");
    printf("         (_)               (_)_  _  _  _(_)         (_)_  _  _  _(_)  \n");
    printf("         (_)                 (_)(_)(_)(_)             (_)(_)(_)(_)    \n");
    printf("                                                                      \n");
    printf("                                                                      \n");
    printf("   _             _           _  _  _           _           _          \n");
    printf("  (_)           (_)         (_)(_)(_)         (_) _       (_)         \n");
    printf("  (_)           (_)            (_)            (_)(_)_     (_)         \n");
    printf("  (_)     _     (_)            (_)            (_)  (_)_   (_)         \n");
    printf("  (_)   _(_)_   (_)            (_)            (_)    (_)_ (_)         \n");
    printf("  (_)  (_) (_)  (_)            (_)            (_)      (_)(_)         \n");
    printf("  (_)_(_)   (_)_(_)          _ (_) _          (_)         (_)         \n");
    printf("    (_)       (_)           (_)(_)(_)         (_)         (_)         \n");
    printf("                                                                      \n");
    printf("                                                                      \n");
    return ;
}

void you_lose() {

    printf("    _           _             _  _  _  _             _            _                            \n");
    printf("   (_)_       _(_)          _(_)(_)(_)(_)_          (_)          (_)                           \n");
    printf("     (_)_   _(_)           (_)          (_)         (_)          (_)                           \n");
    printf("       (_)_(_)             (_)          (_)         (_)          (_)                           \n");
    printf("         (_)               (_)          (_)         (_)          (_)                           \n");
    printf("         (_)               (_)          (_)         (_)          (_)                           \n");
    printf("         (_)               (_)_  _  _  _(_)         (_)_  _  _  _(_)                           \n");
    printf("         (_)                 (_)(_)(_)(_)             (_)(_)(_)(_)                             \n");
    printf("                                                                                                \n");
    printf("                                                                                                \n");
    printf("    _                         _  _  _  _               _  _  _  _             _  _  _  _  _    \n");
    printf("   (_)                      _(_)(_)(_)(_)_           _(_)(_)(_)(_)_          (_)(_)(_)(_)(_)   \n");
    printf("   (_)                     (_)          (_)         (_)          (_)         (_)               \n");
    printf("   (_)                     (_)          (_)         (_)_  _  _  _            (_) _  _          \n");
    printf("   (_)                     (_)          (_)           (_)(_)(_)(_)_          (_)(_)(_)         \n");
    printf("   (_)                     (_)          (_)          _           (_)         (_)               \n");
    printf("   (_) _  _  _  _          (_)_  _  _  _(_)         (_)_  _  _  _(_)         (_) _  _  _  _    \n");
    printf("   (_)(_)(_)(_)(_)           (_)(_)(_)(_)             (_)(_)(_)(_)           (_)(_)(_)(_)(_)   \n");
    printf("                                                                                                \n");
    printf("                                                                                                \n");
    return ;
}

void draw() {

    

    printf("    _  _  _  _              _  _  _  _                    _                 _             _   \n");
    printf("   (_)(_)(_)(_)            (_)(_)(_)(_) _               _(_)_              (_)           (_)  \n");
    printf("    (_)      (_)_          (_)         (_)            _(_) (_)_            (_)           (_)  \n");
    printf("    (_)        (_)         (_) _  _  _ (_)          _(_)     (_)_          (_)     _     (_)  \n");
    printf("    (_)        (_)         (_)(_)(_)(_)            (_) _  _  _ (_)         (_)   _(_)_   (_)  \n");
    printf("    (_)       _(_)         (_)   (_) _             (_)(_)(_)(_)(_)         (_)  (_) (_)  (_)  \n");
    printf("    (_)_  _  (_)           (_)      (_) _          (_)         (_)         (_)_(_)   (_)_(_)  \n");
    printf("   (_)(_)(_)(_)            (_)         (_)         (_)         (_)           (_)       (_)    \n");
    printf("                                                                                               \n");
    printf("                                                                                               \n");
    return;
}



    
