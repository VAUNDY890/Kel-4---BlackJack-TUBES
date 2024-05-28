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
    printf("3. Keluar\n");
    printf("Pilih opsi (1-3): ");
}


#include <stdio.h>

void you_win() {
    
    system("cls"); 
    
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

    system("cls"); 

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

    system("cls"); 

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



    
