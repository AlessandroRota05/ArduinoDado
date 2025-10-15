# Progetto: Simulatore di dado con LED su Arduino

## Descrizione (Italiano)
Questo progetto è uno sketch Arduino che simula il lancio di un dado a 7 facce (numeri da 0 a 6).

Il dado viene "lanciato" generando un numero casuale e visualizzandolo tramite una serie di LED collegati ai pin digitali della scheda. Prima della visualizzazione del risultato, si accende una sequenza di LED che rappresenta un conto alla rovescia, segnalando il momento imminente dell'uscita del nuovo numero.

Il codice utilizza funzioni dedicate per accendere i LED in configurazioni diverse, corrispondenti ai numeri da 0 a 6.

## Descrizione (English)
[translate:This project is an Arduino sketch simulating a 7-sided dice roll (numbers from 0 to 6).]

[translate:The dice result is generated randomly and displayed using a series of LEDs connected to the board's digital pins. Before displaying the result, a countdown sequence of LEDs signals the imminent appearance of the new number.]

[translate:The code uses dedicated functions to light LEDs in different configurations corresponding to numbers from 0 to 6.]

## Schema elettrico e topografico / Electrical and Layout Schematics

Qui puoi inserire le foto o immagini dello schema elettrico e del circuito topografico che mostra il collegamento dei LED ai pin Arduino.

Esempio di inserimento foto:

![Schema elettrico](link-alla-tua-immagine-elettrica.jpg)

![Schema topografico](link-alla-tua-immagine-topografica.jpg)

## Licenza / License
Questo progetto è rilasciato sotto la licenza [Apache License 2.0](https://www.apache.org/licenses/LICENSE-2.0).

[translate:This project is released under the] [translate:Apache License 2.0](https://www.apache.org/licenses/LICENSE-2.0).

---

## Come usare / How to use

- Collega i LED ai pin digitali indicati nel codice come A-H (13,12,11,10,9,8,7,6) per visualizzare il numero.
- Collega i LED ai pin 3, 4 e 5 per il conto alla rovescia prima di ogni lancio.
- Carica lo sketch sulla tua scheda Arduino.
- Monitora il risultato che cambia casualmente ogni ciclo con un breve conto alla rovescia.

---

## Suggerimenti per sviluppi futuri / Future improvements

- Ottimizzare il codice usando array e strutture dati per gestire i LED e la visualizzazione.
- Espandere la visualizzazione ai numeri da 7 a 9.
- Aggiungere documentazione dettagliata per il circuito hardware.
- Implementare un'interfaccia utente per controllare il lancio.

---

## Contatti / Contact

Per domande o contributi, apri una issue o invia una pull request su GitHub.

---
