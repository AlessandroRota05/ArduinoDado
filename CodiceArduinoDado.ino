// Array contenente i pin Arduino collegati ai LED dei segmenti A-H (8 LED)
const int segmentPins[] = {13, 12, 11, 10, 9, 8, 7, 6}; // corrispondono ai segmenti A, B, C, D, E, F, G, H

// Array con i pin dei LED usati per il conto alla rovescia (3 LED)
const int countdownPins[] = {5, 4, 3};

// Variabile per memorizzare il numero casuale generato (risultato del dado)
int randNumber;

// Matrice 7x8 che definisce quali LED accendere (1) o spegnere (0) per ogni numero da 0 a 6
// Ogni riga corrisponde a un numero e ogni colonna a un LED segmentPin nell'ordine A-H
const byte dicePatterns[7][8] = {
  {0,1,1,1,1,1,1,0}, // zero: accende segmenti B, C, D, E, F, G
  {0,0,0,1,0,0,1,0}, // one: accende segmenti D, G
  {1,0,1,1,1,1,0,0}, // two: accende segmenti A, C, D, E, F
  {1,0,1,1,0,1,1,0}, // three: accende segmenti A, C, D, F, G
  {1,1,0,1,0,0,1,0}, // four: accende segmenti A, B, D, G
  {1,1,1,0,0,1,1,0}, // five: accende segmenti A, B, C, F, G
  {1,1,1,0,1,1,1,0}  // six: accende segmenti A, B, C, E, F, G
};

void setup() {
  Serial.begin(9600); // Inizializza comunicazione seriale per debug (opzionale)

  // Imposta tutti i pin dei segmenti A-H come uscite digitali
  for (int i = 0; i < 8; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }

  // Imposta i pin del countdown come uscite digitali
  for (int i = 0; i < 3; i++) {
    pinMode(countdownPins[i], OUTPUT);
  }

  // Inizializza il seme del generatore di numeri casuali usando una lettura analogica casuale
  randomSeed(analogRead(A0));
}

// Funzione per accendere i LED uno alla volta a intervalli regolari come conto alla rovescia
void countdown() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(countdownPins[i], HIGH);  // Accende LED di countdown
    delay(1500);                           // Attende 1,5 secondi prima di passare al prossimo LED
  }
  for (int i = 0; i < 3; i++) {
    digitalWrite(countdownPins[i], LOW);   // Spegne tutti i LED di countdown dopo la sequenza
  }
}

// Funzione che accende e spegne i LED segmentPin in base al numero da visualizzare
void displayNumber(int num) {
  for (int i = 0; i < 8; i++) {
    // Se dicePatterns[num][i] è 1 accende il LED, altrimenti lo spegne
    digitalWrite(segmentPins[i], dicePatterns[num][i] ? HIGH : LOW);
  }
}

void loop() {
  randNumber = random(7);      // Genera un numero casuale tra 0 e 6 (inclusi)
  countdown();                 // Esegue il conto alla rovescia con i LED
  displayNumber(randNumber);   // Mostra il numero casuale accendendo i LED corrispondenti
  delay(2500);                 // Attende 2,5 secondi prima di generare un nuovo numero
}
