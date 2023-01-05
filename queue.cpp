#include "queue.h"

void createPlaylist(playlistLagu &Q){
    head(Q) = NULL;
    tail(Q) = NULL;
}


void createElement(infotype laguBaru, adr &pLagu){
    info(pLagu) = laguBaru;
    next(pLagu) = NULL;
}


void enqueue(playlistLagu &Q, adr pLagu){
    if (head(Q) == NULL){
        head(Q) = pLagu;
        tail(Q) = pLagu;
    }else {
        next(tail(Q)) = pLagu;
        tail(Q) = pLagu;
    }
}


void dequeue(playlistLagu &Q, adr &pLagu){
    if (head(Q) == NULL){
        cout<<"Queue Kosong";
    }else if (head(Q)==tail(Q)){
        pLagu = head(Q);
        head(Q) = NULL;
        tail(Q) = NULL;
    }else {
        pLagu = head(Q);
        head(Q) = next(head(Q));
    }
}


void showSemuaLagu(playlistLagu Q){
    adr P = head(Q);
    while (P != NULL){
        cout<<info(P).Judul<<"-"<<info(P).Artis<<", ";
        P = next(P);
    }
}
