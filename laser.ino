int giallo = 4; 
int pulsante = 7; 
int transistor = 5; 


int stato=0; // All'inizio il sistema è spento. 
int val=0; // Memorizza il valore dello stato tra un ciclo e l'altro 
int luce;



void setup() {
  pinMode(giallo, OUTPUT);
  pinMode(transistor, OUTPUT); 
  pinMode(A0,INPUT);
}
 
 void loop() { 
 val = digitalRead(pulsante); // Leggo lo stato del segnale (se o cliccato o no) 
 delay(10); 
 
   digitalWrite(transistor, 1);
    
   luce = analogRead(A0); 
   
   if (luce<10) { 
    digitalWrite(giallo, HIGH); 
   }
   
   else
    digitalWrite(giallo, LOW);  // Da eliminare nel caso spiegato nel paragrafo "All'opera"  
}
