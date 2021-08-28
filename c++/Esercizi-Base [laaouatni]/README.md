CODICE SORGENTE C++: [laa0_ciao-Nome.cpp] (https://raw.githubusercontent.com/Laaouatni/myCode/main/c%2B%2B/Esercizi-Base%20%5Blaaouatni%5D/laa0_ciao-Nome.cpp)

# INTRODUZIONE:

Il risultato di questo programma, è per appunto: `ciao + Nome`

il programma è di livello semplice!

senza nessun algoritmo o variabile (nei altri esercizi, ci saranno cose così)

# cosa ho fatto?

### - ho commentato il codice:
`/* il tuo commento */` e `//il tuo commento`

Sono considerate commenti e non hanno alcun effetto sul comportamento del programma.

### - ho utilizzato una libreria:
La libreria utilizzata è `<iostream>`

Mi è servita questa libreria, in questo caso per l' `output`.

### - ho utilizzato namespace std:
inizialmente ogni mio programma conteneva `namespace std`.

ma adesso ho capito il vero significato teorico di `namespace std`, 

è veramente grave utilizzare `using namespace std;` perchè a volte rende difficile il debbuging. 

è meglio sostituirlo con `std::`. 

nei tutorial che troverete su internet, 

vi diranno di mettere `using namespace std` senza nemmeno sapere il significato. 

perchè è più facile per i begginer, 

ed sinceramente non serve nei programmi così semplici, ma è meglio abbituarsi a `std::`

##### ecco qui un esempio pratico di namespace:
`std` è la libreria `standard` in C++, 

che contiene la definizione di un insieme di classi, contenitori e funzioni che fanno parte del linguaggio C++ principale. 


Nel tuo programma C++, quando usi identificatori o oggetti o metodi, il compilatore deve sapere dove sono definiti.

Deve sapere a quale `namespace` appartengono

(cioè provengono dalla libreria standard? O sono definiti dall'utente?)


Ora, diciamo che stai creando il tuo gioco. 

Nel tuo gioco, hai una classe per gestire una raccolta di oggetti. 

Quella classe ha una funzione chiamata `begin()` . 


Il suo obiettivo è "iniziare" una serie di operazioni sulla raccolta. 

Va tutto bene, ma il fatto è che, nel C++ standard, c'è anche la funzione `begin()` ,

che può essere chiamata sui contenitori per ottenere un iteratore che punta al loro primo elemento. 


Quindi, nel tuo programma, ogni volta che usi la funzione `begin()` , 

il compilatore deve sapere a quale delle funzioni `begin()` esistenti/disponibili ti stai riferendo. 


È quello della libreria C++ standard,

a cui puoi accedere tramite std::begin()? O è quello del tuo gioco?


È una buona cosa includere sempre lo namespace std per ogni cosa nel tuo programma 

per essere specifico ed evitare conflitti che potrebbero essere difficili da eseguire il debug. 


Tuttavia, se stai lavorando su un programma semplice e sei sicuro al 100% che non ci sia alcun conflitto, 

puoi aggiungere la riga `using namespace std` nella parte superiore dei tuoi file, 

in modo da non dover aggiungere `std::` prima di ogni classe/contenitore/funzione che usi. 

Il compilatore saprà che deve cercare le definizioni all'interno dello spazio dei nomi STD per impostazione predefinita, se non diversamente specificato.

### - int main()
è una funzione che viene chiamata sempre per prima, quindi ogni cosa che ci metto all'interno, verrà eseguita.

prima di `main` c'è `int` quindi abbiamo bisogno anche di fare un `return 0;`

### - cout<<
questa istruzione, deriva dalla libreria `standard` . e serve per l' `output` .

per tutto l'altro lo sapete già, cioè metti la tua stringa che contiene i tuoi caratteri, che fanno una frase.

# 

### - `endl;`
`endl` , serve per andare a capo

si può anche farlo con \n (caratteri escape) se volete!