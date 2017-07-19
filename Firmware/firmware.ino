/*****************************
 * DSIF - FEEC - Unicamp
 * Autor: Ricardo M. Zago
 * Email: ricardoz@outlook.com
 *****************************/

#define dummy 0

void setup()
{
  //Initialize serial and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
}


void loop()
{
  if (dummy){
    print_dummy();
  }
  else{
    print_adc();  
  }
  
}

/* Faz a leitura das entradas analógicas A0 e A1
 * Envia o resultado do conversão via serial
 * 
 * inline diz para o compilador que seria melhor copiar 
 * a função para o código principal, removendo a função
 * e adicionando seu código no lugar da chamada. É útil
 * para uma função que executada apenas uma vez ou quando
 * o tamanho do código não é importante, apenas sua 
 * velocidade de execução
 */
inline void print_adc()
{
  int read_0, read_1;

  read_0 = analogRead(0);
  read_1 = analogRead(1);

  print_zeros(read_0);
  Serial.print(read_0);
  Serial.print(",");
  print_zeros(read_1);
  Serial.println(read_1);

}


/* Função que imprime 0001,1023 0002,1022.
 * Ela é utilizada para testar o software sem a conexão do sinal a ser amostrado
 */
inline void print_dummy()
{
  int contador=0;

  while(1)
  {
    print_zeros(contador);
    Serial.print(contador);
    Serial.print(",");
    print_zeros(1024-contador);
    Serial.println(1024-contador);

    contador=contador+10;

    if (contador>=1024){
      contador=0;
    }

    delay(50);
  }
}

// Para formatar os números sempre com uma quantidade fixa de digitos na hora de imprimir.
void print_zeros(int contador)
{
  if (contador<1000) Serial.print('0');
  if (contador<100) Serial.print('0');
  if (contador<10) Serial.print('0');
}
