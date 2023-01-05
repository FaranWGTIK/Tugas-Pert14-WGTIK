#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
    playlistLagu Q;
    adr P = new element;
    infotype X;

    createPlaylist(Q);

    X.Judul = "A";
    X.Artis = "A";
    createElement(X,P);
    enqueue(Q,P);
    P = new element;
    X.Judul = "B";
    X.Artis = "B";
    createElement(X,P);
    enqueue(Q,P);
    P = new element;
    X.Judul = "C";
    X.Artis = "C";
    createElement(X,P);
    enqueue(Q,P);
    P = new element;
    X.Judul = "D";
    X.Artis = "D";
    createElement(X,P);
    enqueue(Q,P);
    P = new element;
    X.Judul = "E";
    X.Artis = "E";
    createElement(X,P);
    enqueue(Q,P);
    P = new element;
    X.Judul = "F";
    X.Artis = "F";
    createElement(X,P);
    enqueue(Q,P);
    P = new element;
    X.Judul = "G";
    X.Artis = "G";
    createElement(X,P);
    enqueue(Q,P);
    P = new element;
    X.Judul = "H";
    X.Artis = "H";
    createElement(X,P);
    enqueue(Q,P);
    P = new element;
    X.Judul = "I";
    X.Artis = "I";
    createElement(X,P);
    enqueue(Q,P);
    P = new element;
    X.Judul = "J";
    X.Artis = "J";
    createElement(X,P);
    enqueue(Q,P);
    P = new element;
    X.Judul = "K";
    X.Artis = "K";
    createElement(X,P);
    enqueue(Q,P);
    P = new element;
    X.Judul = "L";
    X.Artis = "L";
    createElement(X,P);
    enqueue(Q,P);
    P = new element;
    X.Judul = "M";
    X.Artis = "M";
    createElement(X,P);
    enqueue(Q,P);
    P = new element;
    X.Judul = "N";
    X.Artis = "N";
    createElement(X,P);
    enqueue(Q,P);
    P = new element;
    X.Judul = "O";
    X.Artis = "O";
    createElement(X,P);
    enqueue(Q,P);
    P = new element;
    X.Judul = "P";
    X.Artis = "P";
    createElement(X,P);
    enqueue(Q,P);
    P = new element;
    X.Judul = "Q";
    X.Artis = "Q";
    createElement(X,P);
    enqueue(Q,P);
    P = new element;
    X.Judul = "R";
    X.Artis = "R";
    createElement(X,P);
    enqueue(Q,P);

    cout<<"Sebelum Penghapusan Lagu"<<endl;
    showSemuaLagu(Q);

    dequeue(Q,P);
    dequeue(Q,P);
    dequeue(Q,P);

    cout<<endl<<endl<<"Setelah Penghapusan Lagu"<<endl;
    showSemuaLagu(Q);
    return 0;
}
