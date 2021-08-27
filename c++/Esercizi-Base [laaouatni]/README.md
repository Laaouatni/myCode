CODICE SORGENTE C++: <a>`laa0_ciao-Nome.cpp`</a>

INTRODUZIONE:
Il programma precedente è il tipico programma che gli apprendisti programmatori scrivono per la prima volta,

e il suo risultato è vedere sul tuo schermo la frase “Hello World!” oppure Italianizzato “il Tuo Nome“.

È uno dei programmi più semplici che possono essere scritti in C++, ma contiene già i componenti fondamentali che ogni programma C++ ha.

Guarderemo linea per linea… così da capire insieme facilmente le basi del C++, cioè il codice che abbiamo appena scritto:

//copyright
Questa è una linea di commento.

Tutte le linee che iniziano con:

iniziano con due slash //
iniziano con un slash e un asterisco /* e finiscono con un asterisco e un slash */
sono considerate commenti e non hanno alcun effetto sul comportamento del programma.

Il programmatore può usarle per includere brevi spiegazioni o osservazioni all’interno del codice sorgente stesso...

#include <iostream>
Le linee che iniziano con un segno hash # sono direttive per il preprocessore.

Non sono linee di codice regolare con espressioni / comandi...

ma indicazioni per il preprocessore del compilatore.

In questo caso la direttiva #include dice al preprocessore di includere il file standard iostream.

Questo specifico file iostream include le dichiarazioni della libreria standard di base di input-output in C++,

ed è incluso perché la sua funzionalità sarà usata più avanti nel programma.

usando namespace std; , tradotto in italiano sarà qualcosa come “lo spazio dei nomi standard”

Tutti gli elementi della libreria standard C++ sono dichiarati all’interno di quello che è chiamato uno spazio dei nomi:

namespace std;
Quindi per accedere alla sua funzionalità std dichiariamo using namespace std;

Questa riga è molto frequente nei programmi C++ che usano la libreria standard, e infatti sarà inclusa, nella maggior parte dei codici sorgenti, inclusi in questo tutorial.

int main ( )
Questa linea corrisponde all’inizio della definizione della funzione main .

La funzione main() è il punto iniziale da cui tutti i programmi C++, iniziano la loro esecuzione,

indipendentemente dalla sua posizione all’interno del codice sorgente.

non importa se ci sono altre funzioni con altri nomi definite prima o dopo di essa…

le istruzioni contenute nella definizione di questa funzione saranno sempre le PRIME ad essere eseguite in qualsiasi programma C++.

Per questa stessa ragione, è essenziale che tutti i programmi C++, abbiano una funzione main() .

La parola main è seguita nel codice da una coppia di parentesi ( ) .

Questo perché è una funzione:

In C++, ciò che differenzia una dichiarazione di funzione da altri tipi di espressioni, che sono queste parentesi ( ) che seguono il suo nome.

Opzionalmente, queste parentesi ( ) possono racchiudere una lista di parametri al loro interno.

Subito dopo queste parentesi possiamo trovare il corpo della funzione principale racchiuso tra parentesi graffe { } .

Ciò che è contenuto in queste parentesi ( ) è ciò che la funzione, utilizza quando viene eseguita.

cout<<"nome";
Questa riga è un'istruzione C++.

Un'istruzione è un'espressione semplice o composta, che può effettivamente produrre qualche effetto.

In effetti, questa affermazione esegue l'unica azione che genera un effetto visibile nel nostro primo programma.

cout rappresenta il flusso di output standard in C++ ...

e il significato dell'intera istruzione è: 

inserire una sequenza di caratteri

(in questo caso la sequenza di caratteri IL_TUO_NOME)

nello standard output stream (che di solito è lo schermo / terminale).

cout è dichiarato nel file standard iostream all'interno dello spazio dei nomi std,

ecco perché dovevamo includere quel file specifico e dichiarare che avremmo usato questo spazio dei nomi specifico. (in precedenza) nel nostro codice C++.

Se si nota bene... ogni istruzione termina con un punto e virgola ;.

Questo carattere è usato per segnare la fine di qualsiasi istruzione

e infatti deve essere inclusa alla fine di tutte le istruzioni di espressione in tutti i programmi C++.

(uno degli errori di sintassi più comuni è infatti quello di dimenticare di includere un punto e virgola ; dopo un'istruzione).
