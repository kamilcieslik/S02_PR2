#include <iostream>
#include <ncurses.h>

int main() {
    std::cout << "--------------------------------------------------------------------" << std::endl;
    std::cout << "Program:\n\tBlocks Threads" << std::endl;
    std::cout << "Autorzy:\n\tPatryk Zdral & Kamil Cieślik 2018" << std::endl;
    std::cout << "--------------------------------------------------------------------" << std::endl;
    system("read -p 'Naciśnij Enter aby rozpocząć...' var");

    initscr();
    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);
    attron(COLOR_PAIR(1));
    nodelay(stdscr, false);
    getch();
    endwin();
    std::cout << "--------------------------------------------------------------------" << std::endl;
    std::cout << "ZAKOŃCZONO DZIAŁANIE PROGRAMU" << std::endl;
    std::cout << "--------------------------------------------------------------------" << std::endl;
    return 0;
}