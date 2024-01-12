# proiect-MAP

Acest proiect rezolvă problema celor 8 regine folosind limbajul de programare C, unde N este setat la 8 pentru o tablă de șah de dimensiune 8x8. Scopul problemei este de a plasa 8 regine pe tablă astfel încât niciuna dintre ele să nu se atace reciproc pe orizontală, verticală sau diagonale.

Structura Codului
   
1. Funcția "valid":
Această funcție verifică dacă o regină poate fi plasată într-o anumită poziție pe tablă. Se face verificarea în trei direcții:

Orizontal spre stânga
Diagonală sus-stânga
Diagonală jos-stânga
Dacă găsește o regină într-una dintre aceste direcții, funcția returnează false, altfel returnează true.

2. Funcția "rezolva_problema":
Această funcție utilizează recursivitatea pentru a găsi o soluție validă. Pentru fiecare coloană, încercă să plaseze o regină pe fiecare rând, verificând dacă poziția este validă cu ajutorul funcției valid. Dacă găsește o soluție pentru o coloană, trece la următoarea coloană. În caz contrar, revine și încearcă alte combinații. Funcția returnează true dacă găsește o soluție completă și false altfel.

3. Funcția "afisare":
Această funcție este responsabilă pentru afișarea tablei cu regine pe consolă.

4. Funcția "main":
Funcția main inițializează rezolvarea problemei, apelând rezolva_problema(0). Astfel, programul începe încercarea de a găsi soluția începând cu prima coloană.