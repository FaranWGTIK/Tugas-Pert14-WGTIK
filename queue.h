#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <iostream>
using namespace std;
#define head(P) (P).Head
#define tail(P) (P).Tail
#define info(P) (P)->info
#define next(P) (P)->next

struct infotype {
    string Artis;
    string Judul;
};

typedef struct element *adr;

struct element {
    infotype info;
    adr next;
};

struct playlistLagu {
    adr Head;
    adr Tail;
};

void createPlaylist(playlistLagu &Q);
void createElement(infotype laguBaru, adr &pLagu);
void enqueue(playlistLagu &Q, adr pLagu);
void dequeue(playlistLagu &Q, adr &pLagu);
void showSemuaLagu(playlistLagu Q);


#endif // QUEUE_H_INCLUDED
