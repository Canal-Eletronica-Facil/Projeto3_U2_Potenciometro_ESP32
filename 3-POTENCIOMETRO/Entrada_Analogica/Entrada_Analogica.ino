//... Livro IoT na Prática - PROGRAMA 3 - Leitura de Entradas Analógicas ...//

//............. BLOCO 1 - NOMEAR PINOS USADOS NO PROJETO .............//

int POTENCIOMETRO = 34;  // Seleciona o nome POTENCIOMETRO para o GPIO 34 do ESP32
int Leitura_POT = 0;     // Variável que irá salvar o valor obtido da conversão ADC
float tensao = 0;        // Variável que irá armazenar o valor calculado da tensão elétrica       

int LED1 = 32;          // Seleciona o nome LED1 para o GPIO 32 do ESP32
int LED2 = 33;          // Seleciona o nome LED1 para o GPIO 33 do ESP32
int LED3 = 25;          // Seleciona o nome LED1 para o GPIO 25 do ESP32
int LED4 = 27;          // Seleciona o nome LED1 para o GPIO 27 do ESP32
int LED5 = 12;          // Seleciona o nome LED1 para o GPIO 12 do ESP32
int LED6 = 13;          // Seleciona o nome LED1 para o GPIO 13 do ESP32
                    
//............. BLOCO 2 - CONFIGURAR PINOS USADOS NO PROJETO .............//
void setup() 
{
  pinMode(POTENCIOMETRO,INPUT);   // Configura o GPIO 34 do ESP32 como entrada
  pinMode(LED1, OUTPUT);          // Configura o GPIO 32 do ESP32 como saída
  pinMode(LED2, OUTPUT);          // Configura o GPIO 33 do ESP32 como saída
  pinMode(LED3, OUTPUT);          // Configura o GPIO 25 do ESP32 como saída
  pinMode(LED4, OUTPUT);          // Configura o GPIO 27 do ESP32 como saída
  pinMode(LED5, OUTPUT);          // Configura o GPIO 12 do ESP32 como saída
  pinMode(LED6, OUTPUT);          // Configura o GPIO 13 do ESP32 como saída
  Serial.begin(115200);
}
//......... BLOCO 3 - REPETIÇÃO DAS TAREFAS USADAS NO PROJETO ...........//
void loop() 
{
  Leitura_POT = analogRead(POTENCIOMETRO);
  Serial.print("O Valor do ADC eh:");
  Serial.print(Leitura_POT);

  tensao = (Leitura_POT * 3.3) / 4095;
  
  Serial.print(" O Valor da tensao eletrica eh:");
  Serial.print(tensao);
  Serial.println(" Volts");

  if(tensao < 0.5)
  {
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,LOW);
    digitalWrite(LED5,LOW);
    digitalWrite(LED6,LOW);
  }
  else if(tensao > 0.5 && tensao < 1.0)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,LOW);
    digitalWrite(LED5,LOW);
    digitalWrite(LED6,LOW);
  }
  else if(tensao > 1.0 && tensao < 1.5)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,LOW);
    digitalWrite(LED5,LOW);
    digitalWrite(LED6,LOW);
  }
  else if(tensao > 1.5 && tensao < 2.0)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,LOW);
    digitalWrite(LED5,LOW);
    digitalWrite(LED6,LOW);
  }
  else if(tensao > 2.0 && tensao < 2.5)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED5,LOW);
    digitalWrite(LED6,LOW);
  }
  else if(tensao > 2.5 && tensao < 3.0)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED5,HIGH);
    digitalWrite(LED6,LOW);
  }
  else if(tensao > 3.0)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED5,HIGH);
    digitalWrite(LED6,HIGH);
  }
  delay(100);   
  
}
 
