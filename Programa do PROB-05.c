/*Escreva um programa na linguagem C que permita a um usuário acessar o nome de um HOST dado
o seu número IP.*/
#include <stdio.h>
#include <string.h>
#define TAM 50
char IP[20][TAM] = {"192.168.1.1", "192.168.1.2", "192.168.1.3", "192.168.1.4", "192.168.1.5", "192.168.1.6", "192.168.1.7", "192.168.1.8", "192.168.1.9", "192.168.1.10", "10.0.0.1", "10.0.0.2", "10.0.0.3", "10.0.0.4", "10.0.0.5", "172.16.0.1", "172.16.0.2", "172.16.0.3", "172.16.0.4", "172.16.0.5"};
char HOST[20][TAM] = {"server1.example.com", "server2.example.com", "pc1.example.com",  "printer1.example.com", "laptop1.example.com", "switch1.example.com", "router1.example.com", "nas1.example.com", "camera1.example.com", "accesspoint1.example.com", "dbserver1.example.com", "webserver1.example.com", "mailserver1.example.com", "firewall1.example.com", "storage1.example.com", "laptop2.example.com", "printer2.example.com", "voipphone1.example.com", "desktop1.example.com", "tablet1.example.com" }; 
char resposta[TAM];

int i;
int main() {
  printf("Digite o número de IP do Host desejado ou o nome do Host do IP desejado: ");
fgets(resposta, TAM, stdin);
  
  resposta[strcspn(resposta, "\n")] = 0;
  
   for (i=0;i<20;i++){
    if(strcmp(resposta, IP[i]) == 0){
      printf("O IP inserido pertence ao Host %s", HOST[i]);
      return 0;
    }
   }
     for (i=0;i<20;i++){
       if(strcmp(resposta, HOST[i]) == 0){
         printf("O Host inserido tem como indereço de IP: %s", IP[i]);
         return 0;
       }
     }
   
      printf("Não foi possível encontrar o Host ou IP inserido.");

  return 0;
}