#incude <stdio.h>

int main () {
    int ingredientesSecos = 4;
    int ingredientesUmidos = 4;
    int utensilioCozinha = 8;
    int lugares = 2;
    int tempo1 = 10;
    int tempo2 = 15;
    int tempo3 = 40;
    int tempo4 = 30;
    int temperatura1 = 120; 
 
//variaveis de string precisam de uma biblioteca especifica, veremos em breve, se acalme 
    string lugar1 = mercado;
    string lugar2 = casa;
    
    string ingrediente1 = farinha;
    string ingrediente2 = acucar;
    string ingrediente3 = ovos;
    string ingrediente4 = leite;
    string ingrediente5 = margarina;
    string ingrediente6 = fermento;
    string ingrediente7 = manteiga;
    string ingredinete8 = farinha de trigo;
    
    string utensilio1 = forma;
    string utensilio2 = espátula; 
    string utensilio3 = forno; 
    string utensilio4 = faca; 
    string utensilio5 = prato;
    string utensilio7 = tigela;
    string utensilio8 = cumbuca;



    printf ( "-----Receita de Bolo das Gostosas----\n" )
    printf ("Ir em %s comprar as coisa \n", lugar);
    printf ("Voltar pra %s, pegar %s \n", lugar2, utensilio7 );
    printf ("Pegar ingredientes secos %s, %s, %s\n", ingrediente1, ingrediente2, ingrediente6 );
    printf ("Misturar ingredientes secos em %s\n", utensilio8);
    printf ("Pegar ingredientes molhados %s, %s, %s e misturar em %s \n", ingrediente3, ingrediente4, ingrediente5, utensilio7)
    printf ("Despejar os ingredientes molhados de %s em %s\n", utensilio7, utensilio8);
    printf ("Pegar %s e misturar o conteúde de %s até homogeneo \n", utensilio2, utensilio8);
    printf ("Deixar massa misturada descansar por %d min \n", tempo1);
    printf ("Preaquecer %s a %d graus por %d min \n", utensilio3, temperatura1, tempo2);
    printf ("Untar %s com %s e %s\n", utensilio1, ingrediente7, ingrediente8);
    printf ("Espalhar uniformemente a massa em %s\n", utensilio1 );
    printf ("Abrir %s e botar %s dentro \n", utensilio3, utensilio1);
    printf ("Fechar %s\n,", utensilio3);
    printf ("Deixar %s no %s por %d minutos a %d graus \n", utensilio1, utensilio3, tempo3, temperatura1);
    printf ("Não abrir %s pelos primeiros %s minutos para o bolo não solar\n", utensilio3, tempo4);
    printf ("Abrir %s e retirar %s com o bolo \n", utensilio3, utensilio1);
    printf ("Deixar bolo esfriar por %s min \n", tempo4);
    printf ("Pegar %s e passar nas laterais de dentro da %s \n", utensilio4, utensilio1);
    printf ("Pegar %s \n", utensilio5);
    printf ("Virar %s com bolo no %s \n", utensilio1, utensilio5);
    printf ("E vamos de comer\n");
    printf ("quer que eu arranque teu bolo so num murro,bufo?\n");  // eu amo

return 0;
}
