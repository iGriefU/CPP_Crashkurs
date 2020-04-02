int main(){

    int x=42, y=1001;
    int const* a = &x; //pointer auf einen KONSTANTEN INT WERT -> wert konstant, pointer änderbar
    int* const b = &x; //KONSTANTER POINTER auf einen INT WERT -> pointer ist fest verankert, der wert ist aber beliebig änderbar
    int const* const c = &x; // KONSTANTER pointer auf einen KONSTANTEN INT WERT -> reiner lesezugriff, pointer nicht verbiegbar, wert unveränderlich

    *a = y; //error, da a auf einen const wert zeigt
    a = &y; // geht, da der pointer verbiegbar ist
    *b = y; // geht, da wert beliebig veränderbar
    b = &y; //error, da pointer fest verankert auf &x ist
    *c = y; //error, da zeiger auf einen const int zeigt
    c = &y; //error, da der pointer ein const pointer ist
    return 0;
}