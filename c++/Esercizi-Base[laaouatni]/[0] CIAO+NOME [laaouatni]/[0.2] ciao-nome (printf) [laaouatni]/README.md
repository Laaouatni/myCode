# CODICE SORGENTE C++: 
<button style="widht:100%;">[this code in GITHUB](https://github.com/Laaouatni/myCode/tree/main/c%2B%2B/Esercizi-Base%5Blaaouatni%5D/%5B0%5D%20CIAO%2BNOME%20%5Blaaouatni%5D/%5B0.2%5D%20ciao-nome%20(printf)%20%5Blaaouatni%5D)</button>

------
- [CODICE SORGENTE C++:](#codice-sorgente-c)
- [INTRODUZIONE:](#introduzione)
- [Come eseguire il programma?](#come-eseguire-il-programma)
  - [vscode code editor](#vscode-code-editor)
- [cosa ho fatto?](#cosa-ho-fatto)
  - [- ho commentato il codice:](#--ho-commentato-il-codice)
  - [- ho utilizzato una libreria C++:](#--ho-utilizzato-una-libreria-c)
  - [- ho utilizzato `using namespace std;`](#--ho-utilizzato-using-namespace-std)
  - [- int main();](#--int-main)
  - [- printf();](#--printf)
  - [- endl;](#--endl)
- [Laaouatni Anas - (c)copyright 2021 .](#laaouatni-anas---ccopyright-2021-)
  
----------------------------------------------------------------

# INTRODUZIONE:

Il risultato di questo programma, è per appunto: `ciao + Nome`

il programma è di livello semplice!

senza nessun algoritmo o variabile (nei altri esercizi, ci saranno cose più complicate)

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


## - printf();

questa istruzione, deriva dalla libreria `standard` . e serve per l' `output` .

per tutto l'altro lo sapete già, cioè metti la tua stringa che contiene i tuoi caratteri, che fanno una frase.


## - endl;

`endl` , serve per andare a capo

si può anche farlo con \n (caratteri escape) se volete!

----------------------------------------------------------------

# Laaouatni Anas - (c)copyright 2021 .