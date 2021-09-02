# CODICE SORGENTE C++: 

[this code on GITHUB](https://github.com/Laaouatni/myCode/blob/main/c%2B%2B/Esercizi-Base%20%5Blaaouatni%5D/ciao-nome-laaouatni/laa0_ciao-Nome.cpp)

----------------------------------------------------------------



----------------------------------------------------------------
# INTRODUZIONE:

Il risultato di questo programma, è per appunto: `ciao + Nome`

il programma è di livello semplice!

senza nessun algoritmo o variabile (nei altri esercizi, ci saranno cose più complicate)

----------------------------------------------------------------

## ⚠ ATTENZIONE:

LOOP INFINITO, **NON** eseguire il file **(non mi assumo nessuna responsabilità)**

❌**NON MANDARE AD AMICI per scherzare. mai.**

se vuoi eseguirlo lo stesso, perfavore apri **"GESTIONE ATTIVITA"** così puoi cliccare **"termina il processo".**

## sì, ho provato a eseguirlo 🤦‍♂️:

**EDIT:** ho provato con il mio PC, ed è veramente **pericoloso**: 
- utilizza 99% della CPU (ho l'ultima generazione intel 11th)
- utilizza 99% della RAM (8GB DDR4 ram)
- GESTIONE ATTIVITA non risponde.
- mouse laga un casino

## unico modo per uscire da questo casino: 
1. **cliccare direttamente il buttone fisico di spegnimento**

----------------------------------------------------------------
# Come eseguire il programma?
 
## vscode code editor

in VSCODE, visto che è solo un text-editor... 

è meglio installare gcc, e seguire l'installazione. (GCC è un compilatore)

- se hai già il compilatore, basta digitare nel terminale:

    1. `g++ nome-programma-con-anche-la-directory -o nome-programma-del-file-exe`
    2. `./nome-programma-del-file-exe.exe`

----------------------------------------------------------------

# cosa ho fatto?

## - ho commentato il codice:

`/* il tuo commento */` e `//il tuo commento`

Sono considerate commenti e non hanno alcun effetto sul comportamento del programma.


## - ho utilizzato una libreria C++:

La libreria utilizzata è `<iostream>`

Mi è servita questa libreria, in questo caso per l' `output`.


## - ho utilizzato `using namespace std;`

inizialmente ogni mio programma conteneva `namespace std`.

ma adesso ho capito il vero significato teorico di `namespace std`, 

è veramente grave utilizzare `using namespace std;` perchè a volte rende difficile il debbuging. 

è meglio sostituirlo con `std::`. 

ed sinceramente non serve nei programmi così semplici, ma è meglio abbituarsi già da adesso a `std::` 


## - int main();

è una funzione che viene chiamata sempre per prima, quindi ogni cosa che ci metto all'interno, verrà eseguita.

prima di `main` c'è `int` quindi abbiamo bisogno anche di fare un `return 0;`

## -  while();

`while` è una funzione che serve per creare dei loop. 

in questo caso ho messo come condizione ` 1 ` 

` 1 ` è uguale a dire ` true ` 

se si nota bene, la condizione è **sempre** **VERITIERA**. 

quindi abbiamo creato un **loop infinito**.


loop infinito | loop NON-infinito
------ | ------
`while(1);`   | `while(Numero_Volte <= 10);`

## - system()

funzione che sutilizza la libreria `<iostream>`

`system()` ti permette di inserire la sintassi del `terminale cmd` in c++.

ti permette di **facilitare** il tuo lavoro, ma utilizza **molta memoria** e **tempo**, rispetto alle normali funzioni.

se utilizzata in un loop, sicuramente ti uccoperà tutta la memoria del tuo dispositivo.

## - printf();

questa funzione, deriva dalla libreria `standard` . e serve per l' `output` .

per tutto l'altro lo sapete già, cioè metti la tua stringa che contiene i tuoi caratteri, che fanno una frase.


## - endl;

`endl` , serve per andare a capo

si può anche farlo con \n (caratteri escape) se volete!

----------------------------------------------------------------

# Laaouatni Anas - (c)copyright 2021 .