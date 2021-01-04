
#include <stdio.h>
#include <locale.h>
#include <conio.h>

char login[10];
int op;         // Define variável global

void menu();
void cadastro_ficha();// função cadastro e ficha de paciente
void agendamento_consulta();
void reclamacoeselogios();
void relatorio();

// função principal
int main()
{
    setlocale(LC_ALL,"");
    //inicio login
    int senha;
    int verifica_senha;
    int s;
    int i;

    printf("\n\t===================================================\n");
    printf("\n\t||||||||||      REDE CLINICA MEDICA   |||||||||||\n");
    printf("\n\t||||||||||ENTRE COM O LOGIN DA CLINICA|||||||||||\n ");
    printf("\n\t===================================================\n");
    while(verifica_senha == 0)
    {
        //imprime e recebe login
        printf("Login...: ");
        fflush(stdin);
        fgets(login,10,stdin);
        //imprime e recebe senha
        printf("Senha...: ");
        fflush(stdin);
        scanf("%d",&senha);

        if(senha == 123){ printf("\nSenha correta\n"); verifica_senha = 1; menu(); }
        else{ printf("\nSenha incorreta: %d\n",senha); }

    }//Fim login

    printf("........fim.......");

    return 0;
}

void menu()
{
    //MENU DE OPCOES

    do{
    system("cls");
    printf("\n\t========================================\n");
    printf("\n\t||||||||| REDE CLINICA MEDICA ||||||||||\n");           printf("\t\t\t\t\t\t\t\t\t\tUSUARIO: %s",login);
    printf("\n\t|||||||||||| MENU DE OPCOES ||||||||||||\n ");
    printf("\n\t======================================= \n");
    printf("1 - Cadastro\n");// Possui todos os cadastros.
    printf("2 - Agendamento | Cancelamento de consulta\n");
    printf("3 - Reclamações ou elogios\n");
    printf("4 - Relatórios\n");
    printf("5 - Sair\n");
    printf("\nDigite aqui a opção: ");
    scanf("%d",&op);

        switch(op)
        {
        case 1: cadastro_ficha();
            break;
        case 2: agendamento_consulta();
            break;
        case 3: reclamacoeselogios();
            break;
        case 4: relatorio();
            break;
        case 5: exit(1); system("pause");
            break;
            break;
        default: printf("\n\tOpção inválida\n");
            break;
        }
    }while(op != 5);

} // FIM MENU

void cadastro_ficha()
{// CADASTRO

    int confirma;

    struct ficha_cad
    {
        char nome_medico[25];
        float altura, peso;
    };
    struct cad_cadastro
    {
        char uni[10];
        char nome[25];
        int telefone;
        int documento;

        struct ficha_cad ficha;
    };
    struct cad_cadastro cadastro;


    do{
    system("cls");
    printf("\n\t========================================\n");
    printf("\n\t||||||||| REDE CLINICA MEDICA ||||||||||\n");
    printf("\n\t|||||||||||| Cadastro ||||||||||||\n ");
    printf("\n\t======================================= \n");
    printf("1 - Cadastro Cliente\n");
    printf("2 - Cadastro Médico\n");
    printf("3 - Cadastro Funcionário\n");
    printf("4 - Ficha Paciente\n");
    printf("5 - Menu\n");
    printf("\nDigite aqui a opção: ");
    scanf("%d",&op);
        switch(op)
        {
        case 1:
            printf("\n\t=====================\n");
            printf("\t=CADASTRO DO CLIENTE=\n");
            printf("\t=====================\n");

            printf("Digite a unidade de atendimento..: ");
            fflush(stdin); // LIMPA O BUFFER DO TECLADO
            gets(cadastro.uni);
            printf("\nNome..: ");
            fflush(stdin);
            gets(cadastro.nome);
            printf("\nTelefone..: ");
            scanf("%d",&cadastro.telefone);
            printf("\nDocumento..: ");
            scanf("%d",&cadastro.documento);

            //Confirmação de cadastro
            printf("\nConfirma cadastro?\n 1 Para sim 0 Para cancelar..: ");
            scanf("%d",&confirma);
            if(confirma==0)
            {
                printf("\nCadastro cancelado com sucesso!\n");
                menu();
                getch();
            }
            printf("\nCadastro realizado com sucesso!\n");
            getch();
            break;
        case 2:
            printf("\t====================\n");
            printf("\t=CADASTRO DO MÉDICO=\n");
            printf("\t====================\n");

            printf("Digite a unidade de atendimento..: ");
            fflush(stdin);
            gets(cadastro.uni);
            printf("\nNome..: ");
            fflush(stdin);
            gets(cadastro.nome);
            printf("\nTelefone..: ");
            scanf("%d",&cadastro.telefone);
            printf("\nDocumento..: ");
            scanf("%d",&cadastro.documento);

            //Confirmação de cadastro
            printf("\nConfirma cadastro?\n 1 Para sim 0 Para cancelar..: ");
            scanf("%d",&confirma);
            if(confirma==0)
            {
                printf("\nCadastro cancelado com sucesso!\n");
                menu();
                getch();
            }
            printf("\nCadastro realizado com sucesso!\n");
            getch();
            break;
        case 3:
            printf("\t=========================\n");
            printf("\t=CADASTRO DO FUNCIONÁRIO=\n");
            printf("\t=========================\n");

            printf("Digite a unidade de atendimento..: ");
            fflush(stdin);
            gets(cadastro.uni);
            printf("\nNome..: ");
            fflush(stdin);
            gets(cadastro.nome);
            printf("\nTelefone..: ");
            scanf("%d",&cadastro.telefone);
            printf("\nDocumento..: ");
            scanf("%d",&cadastro.documento);

            //Confirmação de cadastro
            printf("\nConfirma cadastro?\n 1 Para sim 0 Para cancelar..: ");
            scanf("%d",&confirma);
            if(confirma==0)
            {
                printf("\nCadastro cancelado com sucesso!\n");
                menu();
                getch();
            }
            printf("\nCadastro realizado com sucesso!\n");
            getch();
            break;
        case 4:
            printf("\t==================\n");
            printf("\t=FICA DO PACIENTE=\n");
            printf("\t==================\n");

            printf("Digite a unidade de atendimento..: ");
            fflush(stdin);
            gets(cadastro.uni);
            printf("Nome..: ");
            fflush(stdin);
            gets(cadastro.nome);
            printf("Telefone..: ");
            scanf("%d",&cadastro.telefone);
            printf("Altura..: ");
            scanf("%f",&cadastro.ficha.altura);
            printf("Peso..:");
            scanf("%f",&cadastro.ficha.peso);

            //Confirmação de cadastro
            printf("\nConfirma cadastro?\n 1 Para sim 0 Para cancelar..: ");
            scanf("%d",&confirma);
            if(confirma==0)
            {
                printf("\nCadastro cancelado com sucesso!\n");
                menu();
                getch();
            }
            printf("\nCadastro realizado com sucesso!\n");
            getch();
            break;
        case 5: menu();
			break;
        default: printf("\n\tOpção Inválida\n");
            break;
        }
    }while(op != 5);
}// FIM

agendamento_consulta()
{// AGENDAMENTO

    float dia;
    char nome[20],uni[10];
    int tel, doc, confirma;



	do{

	system("cls");
    printf("\n\t=====================================");
    printf("\n\t||| AGENDAMENTOS | CANCELAMENTOS  |||");
	printf("\n\t=====================================\n");
	printf("1 - Para agendamento\n");
    printf("2 - Para cancelamento\n");
    printf("3 - Menu\n");
	scanf("%d",&op);

	switch(op){
		case 1:
		    printf("\t====AGENDAMENTO====\n");
            printf("\n\nDigite o nome: ");
            fflush(stdin);
            fgets(nome,20,stdin);
            printf("\nDigite o dia e mes que deseja comparecer na consulta: %5.2");
            scanf("%f",&dia);
            printf("\nInforme a unidade onde o cliente deseja marcar a consulta: ");
            fflush(stdin);
            fgets(uni,10,stdin);
            printf("\nDigite um telefone para contato: ");
            scanf("%d",&tel);
            //Confirmação de agendamento
            printf("\nConfirma agendamento?\n 1 Para sim 0 Para cancelar..: ");
            scanf("%d",&confirma);
            if(confirma==0)
            {
                printf("\nAgendamento cancelado com sucesso!\n");
                menu();
                getch();
            }
            printf("\nAgendamento realizado com sucesso!\n");
            getch();
			break;
		case 2:
		    system("cls");
		    printf("\t=================================================\n");
		    printf("\t================CANCELAMENTO=====================\n");
		    printf("\t=================================================\n");
		    printf("\nDigite o nome do paciente: ");
            fflush(stdin);
            fgets(nome,20,stdin);
            printf("\nDigite seu documento: ");
            scanf("%i", &doc);
            system ("cls");
            printf("\n==================================================");
            printf("\n\n                  Atencao!");
            printf("\n\n      Voce deseja mesmo cancelar a consulta? ");
            printf("\n\n digite 1 para cancelar");
            printf("\n digite 0 para encerrar a operacao e nao cancelar");
            printf("\n\n=================================================");
            printf("\nDigite aqui a opção: ");
            scanf("%d",&confirma);
            if(confirma==0)
            {
                printf("\nOperação encerrada com sucesso!\n");
                menu();
                getch();
            }
            printf("\nOperação realizada com sucesso!\n");
            getch();
			break;
        case 3: menu();
			break;
		default:
			printf("\nOpcao invalida\n");
			getch();
			break;
	}
	}while(op != 3);
}// FIM AGENDAMENTO_CONSULTA

void reclamacoeselogios(){
    //TELA RECLAMACOES E ELOGIOS
	char comentario[50];

    do{
    	system("cls");
    	printf("========== Nos avalie ==========: \n 1- Atendimento ruim.\n 2- Atendimento regular.\n 3- Atendimento bom.\n 4- Atendimento otimo.\n");
    	printf("\nInforme a opcao desejada: ");
    	scanf("%d",&op);
    	switch (op) {
    		case 1:
        		printf("=== Voce escolheu a opcao atendimento ruim. === \n");
        		break;
   			case 2 :
        		printf("=== Voce escolheu a opcao atendimento regular. === \n");
        		break;
    		case 3:
        		printf("=== Voce escolheu a opcao atendimento bom. === \n");
        		break;
    		case 4:
        		printf("=== Voce escolheu a opcao atendimento otimo. === \n");
        		break;
    		default:
        		printf("=== Opcao invalida ===");
        		system("pause");
        		break;
    	}
    printf("\nDeixe um comentario para possiveis melhorias: ");
    fflush(stdin);
    fgets(comentario,50,stdin);
    printf("\nDeseja nos avaliar novamente? Digite 1 se nao 0: ");
    scanf("%d",&op);
	}while(op==1);
} // FINAL DA TELA

void relatorio(){
    int resp, x1, x2, x3;
    float y, r1, r2, r3;

    //X recebe a quantidade de pacientes atendidos
    x1 = 52;
    x2 = 37;
    x3 = 76;
    y = 45,00; // Y recebe o valor da diária



	do {
		printf("\n\n=======================================");
		printf("\n\nQUAL UNIDADE VOCÊ DESEJA ACESSAR:");
		printf("\n\n\nDIGITE [1] PARA UNIDADE 1");
		printf("\nDIGITE [2] PARA UNIDADE 2");
		printf("\nDIGITE [3] PARA UNIDADE 3");
		printf("\n\n======================================");
		printf("\n\nDIGITE AQUI: ");
		scanf("%i", &op );

		system("cls");

		switch (op) {
			case 1:
				printf("\n\n=======================================");
				printf("\n\n             UNIDADE 1");
				printf("\n\n=======================================");
                printf("\nQuantidade de pacientes atendidos: %d", x1);
                printf("\nValor da diária: R$%5.2f",y);
                r1 = x1 * y;
                printf("\nValor total da rede: R$%5.2f", r1);
				printf("\n\n=======================================");
				break;

			case 2:
				printf("\n\n=======================================");
				printf("\n\n             UNIDADE 2");
				printf("\n\n=======================================");
				printf("\nQuantidade de pacientes atendidos: %d", x2);
                printf("\nValor da diária: R$%5.2f",y);
                r2 = x2 * y;
                printf("\nValor total da rede: R$%5.2f", r2);
				printf("\n\n=======================================");
				break;
			case 3:
				printf("\n\n=======================================");
				printf("\n\n             UNIDADE 3");
				printf("\n\n=======================================");
				printf("\nQuantidade de pacientes atendidos: %d", x3);
                printf("\nValor da diária: R$%5.2f",y);
                r3 = x3 * y;
                printf("\nValor total da rede: R$%5.2f", r3);
				printf("\n\n=======================================");
				break;

			default:
				printf("Opcão Inválida");
				break;
		}

		printf("\n\nVOCÊ DESEJA VERIFICAR OUTRA UNIDADE?");
		printf("\n\nDIGITE [1] para SIM OU [2] para NÃO: ");
		scanf("%i", &resp);

		system("cls");

	} while (resp == 1);
		system("cls");
				printf("\n\n=======================================");
				printf("\n\n             CONCLUÍDO");
				printf("\n\n=======================================");

return (0);
}
