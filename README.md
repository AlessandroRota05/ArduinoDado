# 🎲 Progetto: Simulatore di dado con LED su Arduino 💡

## 📋 Descrizione
Questo progetto è uno sketch Arduino che simula il lancio di un dado a 7 facce (numeri da 0 a 6).

Il dado viene "lanciato" generando un numero casuale e visualizzandolo tramite un display 7 segmenti ai pin digitali della scheda. Prima della visualizzazione del risultato, si accende una sequenza di LED che rappresenta un conto alla rovescia, segnalando il momento imminente dell'uscita del nuovo numero.

Il codice utilizza funzioni dedicate per accendere i LED in configurazioni diverse, corrispondenti ai numeri da 0 a 6.

Il funzionamento dettagliato del codice si trova nella sezione apposita.

## 🔌 Schema elettrico e topografico  

![Schema elettrico](schemaelettrico.jpg)  
![Schema topografico](schematopografico.jpg)

## 📄 Licenza  
Questo progetto é protetto dalla licenza Apache License 2.0. Guarda il file LICENSE per ulteriori dettagli. Sentiti libero di usarlo, modificarlo e condividerlo.

Disclaimer: L'autore declina ogni responsabilità per qualsiasi danno diretto o indiretto, perdita di dati o uso improprio derivante dall'utilizzo di questo software. Usalo a tuo rischio.

---

## 🚀 Come usare

- Collega i LED ai pin digitali indicati nel codice come A-H (13, 12, 11, 10, 9, 8, 7, 6) per visualizzare il numero.  
- Collega i LED ai pin 3, 4 e 5 per il conto alla rovescia prima di ogni lancio.  
- Carica lo sketch sulla tua scheda Arduino.  
- Monitora il risultato che cambia casualmente ogni ciclo con un breve conto alla rovescia.  

---

## 📬 Autore: 

Creato con l'aiuto di molta caffeina da Ale, per gli amici questo dado si chiama Paco, Paco il dado

