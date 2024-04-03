#include <stdio.h>
#include<math.h>
//1) Faça um programa que dado o lado de um quadrado informado pelo usuário, calcule e exiba o perímetro, a área e a diagonal. Os
//valores de entrada devem ser validados de modo a garantir que valores errados não sejam processados
/*
int main (){
	float lado,peri,area,diagonal;
	printf("Digite o lado de seu quadrado e obtenha as medidas.\n");
	scanf("%f",&lado);
		while (lado<0){
			printf("Lado invalido, Digite Novamente!\n");
			scanf("%f",&lado);
		}
	peri=(lado*4);
	area=(lado*lado);
	diagonal=(lado*1.41421356237);
	
	printf("As medidas sao:\n");
	printf("Perimetro: %.2f\n",peri);
	printf("Area: %.2f \n",area);
	printf("Diagonal: %.2f\n",diagonal);
	
}
*/
///2 Faça um programa que leia e exiba o valor do salário-mínimo e o valor de um salário qualquer que são informados pelo usuário. O
//algoritmo deve calcular quantos salários-mínimos a pessoa recebe. Os valores de entrada devem ser validados.
/*
int main(){
	float salamin,salaqlq,result;
	printf("Digite o valor do salario minimo.\n");
	scanf("%f",&salamin);
		while (salamin<0){
			printf("Salario invalido! Digite Novamente!.\n");
			scanf("%f",&salamin);
		}
	printf("Digite o valor de salario do usuario.\n");
	scanf("%f",&salaqlq);
		while (salaqlq<0){
			printf("Salario invalido! Digite Novamente!.\n");
			scanf("%f",&salaqlq);
		}
	result=(salaqlq/salamin);
	if (result<1){
		printf("Seu salario esta abaixo do salario minimo ):");
	}
	if (result>=2){
	printf("Voce recebe %.2f salarios minimo",result);
	
	}if(result>=1 && result<2){
	printf("Voce recebe %.2f salario minimo.",result);
	}
}
*/
/*3 Faça um programa para uma empresa que contrata um encanador com uma diária de R$ 120,00. Crie um algoritmo que solicite o 
número de dias trabalhados pelo encanador e exiba os salários bruto e líquido desse funcionário. O funcionário terá um desconto de 
5% relativo ao IR, para valores a partir de R$ 2.000,00 até R$ 3.000,00 e 10% para valores maiores do que R$ 3.000,00. Os valores 
de entrada devem ser validados, para que processamento errados não ocorram.
*/
/*
int main (){
	int dias;
	float salariobru,salarioliq;
	
	printf("Digite o numero de dias trabalhados pelo encanador contratado.\n");
	scanf("%d",&dias);
		while ((dias<0)|| (dias>31)){
			printf("Numero invalido!Digite Novamente!\n");
			scanf("%d",&dias);
		}
	salariobru=dias*120;
		if ( salariobru<3000 && salariobru>=2000){
			salarioliq=salariobru*0.95;
		}
		if (salariobru>=3000){
			salarioliq=salariobru*0.90;
		}if (salariobru<2000){
			salarioliq=salariobru;
		}
	printf("O salario bruto do encanador e: %.2fR$\n",salariobru);
	printf("O salario liquido do encanador e: %.2fR$\n",salarioliq);
}
/*
//com operador ternario
int main(){
	int dias;
	float salariobru,salarioliq;
	
	printf("Digite o numero de dias trabalhados pelo encanador contratado.\n");
	scanf("%d",&dias);
		while ((dias<0)|| (dias>31)){
			printf("Numero invalido!Digite Novamente!\n");
			scanf("%d",&dias);
		}
	salariobru=dias*120;//fazendo com operador ternario
		salariobru>=3000?salarioliq=salariobru*0.90:(salarioliq=salariobru*0.50);
	printf("O salario bruto do encanador e: %.2fR$\n",salariobru);
	printf("O salario liquido do encanador e: %.2fR$\n",salarioliq);
}
*/

//4) Faça um programa para ler dois números informados pelo usuário. O programa deverá exibir quatro opções de operações sobre 
//esses números: adição, subtração, multiplicação e divisão, com base na opção selecionada pelo usuário o resultado deve ser exibido.
/*#include<stdio.h>
int main (){
	float num1,num2,result;
	int opcao;
	printf("Digite dois numeros e escolha a operacao para realizar e obter o resultado.\n");
//recebendo os valores dos 2 nnumeros...
	printf("Digite o primeiro valor. ");
		scanf("%f",&num1);
	printf("Digite o segundo valor. ");
		scanf("%f",&num2);
//criando as opções de escolhas...
	printf("Escolha a operacao a ser realizada.\n");	
	printf("Para somar, digite 1. \n");	
	printf("Para subtrair, digite 2. \n");
	printf("Para multiplicar, digite 3. \n");
	printf("Para dividir, digite 4. \n");
		scanf("%d",&opcao);
				//repetindo a validação para não aceitar numero maior que 4....
			while (opcao>4||opcao<1){
				printf("Numero invalido!Digite novamente.");
				printf("Escolha a operacao a ser realizada.\n");	
				printf("Para somar, digite 1. \n");	
				printf("Para subtrair, digite 2. \n");
				printf("Para multiplicar, digite 3. \n");
				printf("Para dividir, digite 4. \n");
					scanf("%d",&opcao);
			}
		
	switch (opcao) // escolhendo a opcao para realizar a operacao solicitada
		{
			case 1:
				result=num1+num2;
				printf("Resultado da operacao:\n%.2f",result);
				break;
			case 2:
				result=num1-num2;
				printf("Resultado da operacao:\n%.2f",result);
				break;
			case 3:
				result=num1*num2;
				printf("Resultado da operacao:\n%.2f",result);
				break;
			case 4:
				result=num1/num2;
				printf("Resultado da operacao:\n%.2f",result);
				break;
			default:
				printf("Numero invalido!");
				break;
		}
	
}
*/
/*
//5 Faça um algoritmo para efetuar o cálculo da quantidade de litros de combustível gastos em uma viagem. O automóvel faz 12 Km/l. 
//Para realizar o cálculo, o usuário devera´ fornecer o tempo gasto na viagem e a velocidade média durante essa viagem. Desta forma, 
//sera´ possível obter a distância percorrida com a fórmula DISTANCIA = TEMPO x VELOCIDADE. Com o valor da distância, basta 
//calcular a quantidade de litros de combustível utilizada na viagem com a fórmula: LITROS_USADOS = DISTANCIA÷12. O programa 
//devera´ apresentar os valores da velocidade média, tempo gasto na viagem, a distância percorrida e a quantidade de litros utilizada na 
//viagem. Os valores de entrada devem ser validados.
/*
int main ()
{
	float tempo,dist,velocidade,litrousado,gasolina;
	printf("Digite o tempo gasto na viagem em horas. ");
		scanf("%f",&tempo);
			while(tempo<0){
				printf("Digite o tempo gasto na viagem em horas. ");
					scanf("%f",&tempo);
			}
	printf("Digite a velocidade media durante essa viagem. ");
		scanf("%f",&velocidade);
			while(velocidade<0){
				printf("Digite a velocidade media durante essa viagem. ");
					scanf("%f",&velocidade);
			}
	dist=tempo*velocidade;
	litrousado=dist/12;
	gasolina=litrousado*5.5;
	
	printf("Velocidade media em viagem: %.2fkm/h\n",velocidade);
	printf("Tempo em viagem: %.1fh\n",tempo);
	printf("Distancia percorrida: %.2fkm\n",dist);
	printf("Quantidade de Litros consumidos: %.2fL\n",litrousado);
	printf("O valor gasto com gasolina nesse percuso: R$%.1f",gasolina);
}

//6 Em cada apartamento de um edifício “X” só pode existir no ma´ximo um animal de estimação. Neste edifício, cada apartamento 
//paga R$ 320,00 de condomínio mais uma taxa extra caso possua um animal de estimação. A taxa é cobrada da seguinte forma: R$ 
//50,00 se houve cachorro, R$ 30,00 se houver gato e R$ 12,00 se houve ave e R$ 100,00 para outros animais. Caso o apartamento 
//não tenha nenhum animal de estimação há um desconto de R$ 20,00. Desenvolva um programa que para os 120 moradores, 
//pergunte o tipo de animal de estimação que ele possui e ao final exiba o valor que ele deve pagar de condomínio e o animal que ele 
//possui. Faça um menu de opções para que o morador possa selecionar qual o tipo de animal de estimação ele possui, tipo: 1 –
//Cachorro, 2 – Gato, 3 – Ave e 4 - Outros. Os valores de entrada devem ser validados, para que o processamento seja feito 
//corretamente
*/
/*
int main()
{
	int animal;
	printf("Qual animal voce possui?\n");
	printf("0-Nenhum animal\n1-Cachorro\n2-Gato\n3-Ave\n4-Outros\n_____________________________________\n");
		scanf("%d",&animal);
			for (;(animal>0 && animal<4);){
					printf("Escolha invalida!\n");
				printf("0-Nenhum animal\n1-Cachorro\n2-Gato\n3-Ave\n4-Outros\n-------------------------------\n");
					scanf("%d",&animal);
			}
				
		switch (animal)
		{
			case 0:
				printf("Voce nao possui animal.\nVoce devera pagar 320,00R$");
			break;
			case 1:
				printf("Voce possui um cachorro.\nVoce devera pagar: 370,00R$");
			break;
			case 2:
				printf("Voce possui um gato.\nVoce devera pagar: 350,00R$");
			break;
			case 3:
				printf("Voce possui uma ave.\nVoce devera pagar: 332,00R$");
			break;
			case 4:
				printf("Voce possui outra especie de animal.\nVoce devera pagar: 420,00R$");
			break;
			default:
				printf("Escolha invalida!");
			break;
		}
	}
	*/
/*
7 Escreva um programa que calcule e exiba a potência de uma quantidade indeterminada de números. A base deve aceitar somente
inteiros positivos informados pelo usuário. O expoente para o cálculo dessas potências também deve ser informado pelo usuário, mas 
pode ser positivo ou negativo. O programa deve parar de receber números quando informar um valor negativo qualquer para a base. 
O programa deve:
a) exibir o resultado do cálculo da potência de cada número;
b) exibir a média dos resultados das potências;
c) exibir a classificação para cada resultado de potência, sendo que os critérios de classificação são:
Regras                  Classificação
Resultado abaixo de 40  Baixo
Entre 40 e 60           Médio
Acima de 60             Alto

*/

int main() {
    int base, contador = 0,expoente;
    float media, resultado, somaResultados = 0;

    
    while (1) {
        printf("Informe a base (numero inteiro positivo) ou um valor negativo para encerrar: ");
        scanf("%d", &base);
        
        // Encerra o loop se a base for negativa
        if (base < 0) {
            break;
        }
        
        printf("Informe o expoente (numero inteiro): ");
        scanf("%d", &expoente);
        
        resultado = pow(base, expoente);
        printf("Resultado: %.2f\n", resultado);
        
        // Classificação conforme os critérios especificados
        if (resultado < 40) {
            printf("Classificacao: Baixo\n");
        } else if (resultado >= 40 && resultado <= 60) {
            printf("Classificacao: Medio\n");
        } else {
            printf("Classificacao: Alto\n");
        }
        
        somaResultados += resultado;
        contador++;
    }
    
    if (contador > 0) {
        media = somaResultados / contador;
        printf("Media dos resultados das potencias: %.2f\n", media);
    } else {
        printf("Nenhum numero foi informado.\n");
    }
    
    return 0;
}

/* 8 Faça um programa para o seguinte cenário: Uma pequena empresa precisa automatizar a comissão de vendas dos seus 50
empregados. Para cada empregado, o usuário deve informar: nº da matrícula do empregado, total de vendas mensal, salário mensal. 
O programa deverá imprimir na tela:
a) nº da matrícula e salário total de cada empregado;
b) o maior salário total;
c) nº da matrícula do empregado que vendeu mais e o respectivo valor vendido.
Auxílio para a resolução da questão:
1 - Valide as situações para que os valores numéricos não sejam negativos nem zero.
2 – Salário total é o salário mensal mais a comissão sobre as vendas.
3 – Critérios do cálculo da comissão:
- Acréscimo de 9%, sobre as vendas, quando estas vendas ultrapassarem R$ 20.000,00;
- Acréscimo de 7%, sobre as vendas, quando estas forem entre R$ 10.000,00 e menor que R$ 20.000,00.
- Acréscimo de 5%, sobre as vendas, quando estas forem entre R$ 5.000,00 e 10.000,00.
- Vendas menores do que R$ 5.000,00 não tem acréscimo de comissão
*/

int main (){
	
}

