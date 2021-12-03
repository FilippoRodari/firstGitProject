//Programma svolto da Nikolic, Valenti e Rodari
//Per testare il programma si possono cambiare i valori di define di R e C per avere meno celle 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#define R 5
#define C 5
#define S 7
#define K 12
char pc[R][C]={0};
char gg[R][C]={0};
char pca[R][C]={0};
char gga[R][C]={0};

void color(int x){
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon, x);
}

void esplosione(){
	int i;
	int j;
	char c= '\n';
	int r = 0;
	int esplodere = 0;
	Sleep(1000);
	for(i=0; i<K; i++){
		
		for(j=0; j<r; j++){
			printf("%c", c);
		}
		if(i<10){
		printf("\t\t    |\\**/|   \n");
		printf("\t\t    \\ == /\n");
		printf("\t\t     |  |\n");
		printf("\t\t     |  |\n");
		printf("\t\t     \\  /\n");
		printf("\t\t      \\/\n");
			
		}else if(i==10){
			printf("\t\t    |\\**/|   \n");
			printf("\t\t    \\ == /\n");
			printf("\t\t     |  |\n");
			printf("\t\t     |  |\n");
			printf("\t\t     \\  /\n");
			printf("\t\t |._  \\/  \n");
		}else if(i==11){
			printf("\t\t    |\\**/|   \n");
			printf("\t\t    \\ == /\n");
			printf("\t\t     |  |\n");
			printf("\t\t     |  |\n");
			printf("\t\t |._ \\  /\n");
			printf("\t\t |._( \\/ \n");
		}
		if(i<10){
			for(j=S-i; j>=-1; j--){
			printf("%c", c);	
			}
		}
		if(i<10){
			printf("\t         |._\n");
			printf("\t         |._(\n");
		}else if(i==10){
			printf("\t         |._(\n");
		}
		printf("\t        <|.__..-'|.\n");
		printf("\t        ,|      .|)\\\n");
		printf("\t        /|      .|) \\\n");
		printf("\t       /.|)     .|)  \\\n");
		printf("\t      / .|)     .|)   \\\n");
		printf("\t     /  .|)     .|)    \\\n");
		printf("\t    /   .|)     .|)     \\\n");
		printf("\t   /  ,--+---_   |       \\ ,\n");
		printf("\t '\\==-,,;,,;,,;,,,,,,,-==;7\n");
		printf("\t _ \\__...____...__    __/ _ _\n");
		printf("\t   ~              ~~~~  ~~\n");
		Sleep(20);
		system("cls");
		r++;
	}
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	color(14);
	printf("\t\t        _.-^^---....,,--\n");
	printf("\t\t    _--                  --_\n");
	printf("\t\t   <                        >)\n");
	printf("\t\t   |                         |\n");
	printf("\t\t    \._                   _./\n");
	printf("\t\t       ```--. . , ; .--'''\n");
	printf("\t\t             | |   |\n");
	printf("\t\t          .-=||  | |=-.\n");
	printf("\t\t          `-=#$%&%$#=-'\n");
	printf("\t\t             | ;  :|\n");
	printf("\t\t    _____.,-#%&$@%#&#~,._____\n");
	color(15);
	Sleep(350);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	color(4);
	printf("                .         ____/ (  (    )   )  \\___\n");
	printf("               .         /( (  (  )   _    ))  )   )\\        .   .\n");
	printf("                       ((     (   )(    )  )   (   )  )   .\n");
	printf("            .    .   ((/  ( _(   )   (   _) ) (  () )  )        .   .\n");
	printf("                    ( (  ( (_)   ((    (   )  .((_ ) .  )_\n");
	printf("     .       .     (_((__(_(__(( ( ( |  ) ) ) )_))__))_)___)   .\n");
	printf("         .         ((__)        \\\\||lll|l||///          \\_))       .\n");
	printf("                  .       . / (  |(||(|)|||//  \\     .    .      .      .\n");
	printf("    .       .           .   (   /(/ (  )  ) )\\          .     .\n");
	printf("        .      .    .     (  . ( ( ( | | ) ) )\\   )               .\n");
	printf("                           (   /(| / ( )) ) ) )) )    .   .  .       .  .\n");
	printf("    .     .       .  .   (  .  ( ((((_(|)_)))))     )            .\n");
	printf("            .  .          (    . ||\\(|(|)|/|| . . )        .        .\n");
	printf("        .           .   (   .    |(||(||)||||   .    ) .      .         .\n");
	printf("    .      .      .       (     //|/l|||)|\\\\ \     )      .      .   .\n");
	printf("                        (/ / //  /|//||||\\\\  \\ \\  \\ _)\n");
	color(15);
	Sleep(350);
	system("cls");
	printf("\n\n\n\n\n\n\n\n");
	color(5);
	printf("                          ____/ (  (    )   )  \___\n");
	printf("                         /( (  (  )   _    ))  )   )\\\n");
	printf("                       ((     (   )(    )  )   (   )  )\n");
	printf("                     ((/  ( _(   )   (   _) ) (  () )  )\n");
	printf("                    ( (  ( (_)   ((    (   )  .((_ ) .  )_\n");
	printf("                  (  (   (  (   ) (  _  ( _) ).  ) . ) ) ( )\n");
	printf("                  ( (  (   ) (  )   (  ))     ) _)(   )  )  )\n");
	printf("                 ( (  ( \ ) (    (_  ( ) ( )  )   ) )  )) ( )\n");
	printf("                  (  (   (  (   (_ ( ) ( _    )  ) (  )  )   )\n");
	printf("                 ( (  ( (  (  )     (_  )  ) )  _)   ) _( ( )\n");
	printf("                  ((  (   )(    (     _    )   _) _(_ (  (_ )\n");
	printf("                   (_((__(_(__(( ( ( |  ) ) ) )_))__))_)___)\n");
	printf("                   ((__)        \\\\||lll|l||///          \_))\n");
	printf("                            (   /(/ (  )  ) )\\   )\n");
	printf("                          (    ( ( ( | | ) ) )\\   )\n");
	printf("                           (   /(| / ( )) ) ) )) )\n");
	printf("                         (     ( ((((_(|)_)))))     )\n");
	printf("                          (      ||\\(|(|)|/||     )\n");
	printf("                        (        |(||(||)||||        )\n");
	printf("                          (     //|/l|||)|\\\\ \\     )\n");
	printf("                        (/ / //  /|//||||\\\\  \\ \\  \\ _)\n");
	color(15);
	Sleep(1000);
	system("cls");

	
}



void cancella(){
	char c;
	printf("Premi un tasto qualsiasi per andare avanti.\n");
	c=getch();
	system("CLS");
}
void riempiMatrice(){
	int i;
	int j;
	for(i=0; i<R; i++){
		for(j=0; j<C; j++){
			pc[i][j]=254;
			gg[i][j]=254;
			pca[i][j]=254;
			gga[i][j]=254;
		}
	}
}

void stampaMatriceP(){
	int i;
	int j;

	for(i=0; i<C; i++){
		if(i==0){
			printf("  %d", i);
		}else{
			printf(" %d", i);
		}	
	}
	printf("\n");
	for(i=0; i<R; i++){
		for(j=0; j<C; j++){
			if(j==0){
				printf("%c ", i+65);
			}
			color(14);
			printf("%c ", pc[i][j]);
			color(15);
		}
		printf("\n");
	}
}


void stampaMatriceG(){
	int i;
	int j;
	for(i=0; i<C; i++){
		if(i==0){
			printf("  %d", i);
		}else{
			printf(" %d", i);
		}	
	}
	printf("\n");
	for(i=0; i<R; i++){
		for(j=0; j<C; j++){
			if(j==0){
				printf("%c ", i+65);
			}
			color(14);
			printf("%c ", gg[i][j]);
			color(15);
		}
		printf("\n");
	}
	printf("\n");
}


void immettiCoordinate(int N){
	char k;
	int l;                                                                                  
	int t=0;
	char v;
	printf("Utente seleziona le coordinate delle %d navi.\n", N);                        
	do{
		do{
			stampaMatriceG();
			do{
				printf("Inserisci la coordinata della riga della nave numero %d (A, J)\n", t+1);
				scanf("%c", &k);
				scanf("%c", &k);
				if(k<65 || k>=R+65){
					printf("Errore, ripetere\n");
				}
			}while(!(k>=65 && k<R+65));
				
			do{
				printf("Inserisci la coordinata della colonna della nave numero %d\n", t+1);
				scanf("%d", &l);                                                  
				if(l<0 || l>=R){
					printf("\nErrore, inserire nuovamente la coordinata\n");
				}
				printf("\n\n");
			}while(!(l>=0 && l<R));
			system("CLS");
			
			if(gg[k-65][l]=='X'){
				printf("Cella gia' occupata da una nava, riprova\n");
			}
		}while(gg[k-65][l]=='X');
		gg[k-65][l]='X';
		t++;
	}while(t<N);
	stampaMatriceG();

}
void immettiCoordinateP(int N){
	char k;
	int l;
	int t=0;
	do{
		do{	
			l=rand()%(R-0+1)+0;
			k=rand()%((R+65-1)-65+1)+65;
		}while((pc[k-65][l]=='X'));
		pc[k-65][l]='X';	
		t++;
	}while(t<N);
}
void stampaMatricePAggiornata(){//AGGIORNAMENTO
	int i;
	int j;
	for(i=0; i<C; i++){
		if(i==0){
			printf("  %d", i);
		}else{
			printf(" %d", i);
		}
	}
	printf("\n");
	for(i=0; i<R; i++){
		for(j=0; j<C; j++){
			if(j==0){
				printf("%c ",i+65);
			}
			if(pca[i][j]=='X'){
				color(4);
				printf("%c ", pca[i][j]);
				color(15);
				
			}else if(pca[i][j]==126){
				color(3);
				printf("%c ", pca[i][j]);
				color(15);
			}else{
				color(14);
				printf("%c ", pca[i][j]);
				color(15);
			}
		}
		printf("\n");
	}
}

void stampaMatriceGAggiornata(){//AGGIORNAMENTO
	int i;
	int j;

	for(i=0; i<C; i++){
		if(i==0){
			printf("  %d", i);
		}else{
			printf(" %d", i);
		}	
	}
	printf("\n");
	for(i=0; i<R; i++){
		for(j=0; j<C; j++){
			if(j==0){
				printf("%c ",i+65);
			}
			if(gga[i][j]=='X'){
				color(4);
				printf("%c ", gga[i][j]);
				color(15);
				
			}else if(gga[i][j]==126){
				color(3);
				printf("%c ", gga[i][j]);
				color(15);
			}else{
				color(14);
				printf("%c ", gga[i][j]);
				color(15);
			}
		}
		printf("\n");
	}
	
}
int affondaNave(int n){
	int vittoria = 0;             
	int t=0;
	int l; 
	char k;
	printf("Utente, inserisci le coordinate dove pensi che siano le navi avversarie\n");
	do{
		do{
			printf("Inserisci la coordinata della riga dove pensi che sia la nave(A, J)\n");
			scanf(" %c", &k);
			if(k<65 || k>=R+65){
				printf("Errore, ripetere\n");
			}
		}while(!(k>=65 && k<R+65));
		do{
			printf("Inserisci la coordinata della colonna dove pensi che sia la nave(0, %d)\n", R-1);
			scanf("%d", &l);
			if(l<0 || l>=R){
				printf("\nErrore, inserire nuovamente la coordinata\n");
			}
			system("CLS");
			
		}while(!(l>=0 && l<R));
		if(pca[k-65][l]=='X' || pca[k-65][l]==126){
			printf("Cella gia' colpita, immetti nuovamente le coordinate.\n");
			stampaMatricePAggiornata();	
		}
		
	}while(pca[k-65][l]=='X' || pca[k-65][l]==126);
	
	if(pc[k-65][l]=='X'){
		printf("Nave Affondata\n");
		pca[k-65][l]='X';
		color(4);
		printf("\nGriglia Nemica\n");
		color(15);
		stampaMatricePAggiornata();	
		return vittoria = 1;
		
	}else{
		printf("Peccato hai mancato la nave, acqua\n");
		pca[k-65][l]=126;
		color(4);
		printf("\nGriglia Nemica\n");
		color(15);
		stampaMatricePAggiornata();	
	}
}

int affondaNaveA(int n){
	int vittoria1 = 0;                                                    
	int t=0;
	int l; 
	char k;
	do{
		l=rand()%(C-0+1)+0;	
		k=rand()%((R+65-1)-65+1)+65;
	}while(gga[k-65][l]=='X' || gga[k-65][l]==126);
	
	if(gg[k-65][l]=='X'){
		printf("La Tua Nave E' Stata Affondata\n");
		gga[k-65][l]='X';
		color(2);
		printf("Nostra Griglia\n");
		color(15);
		stampaMatriceGAggiornata();	
		return vittoria1 = 1;
	}else{
		gga[k-65][l]=126;
		printf("Ha Mancato La Nave, Acqua\n");
		color(2);
		printf("\nNostra Griglia\n");
		color(15);
		stampaMatriceGAggiornata();	
	}
}
int main(){
	srand(time(NULL));
	printf("UTILIZZARE IL CAPS LOCK PER IMMETTERE LE LETTERE\n");
	int i;
	int vittoria = 0;
	int vittoria1 = 0;
	char c;
	int n;
	char s=219;
	int affondate=0;
	int affondateA=0;
	printf("Scegli il numero delle navi che vuoi posizionare(Min 5, Max 15)\n");
	do{
		scanf("%d", &n);
		if(n<5 || n>15){
			printf("\nErrore, inserire nuovamente il numeri di navi\n");
		}
	}while(!(n>=5 && n<=15));
	riempiMatrice();
	stampaMatriceP();
	
	for(i=0; i-(C+C+2); i++){
		color(7);
		printf("%c", s);
		color(15);
	}
	printf("\n");
	stampaMatriceG();
	
	cancella();
	immettiCoordinate(n);
	immettiCoordinateP(n);
	
	cancella();
	printf("\t\t\t\tInizio Battaglia\n\n");
	do{
		vittoria = affondaNave(n);
		if(vittoria==1){
			affondate++;	
		}
		if(affondate!=n){
			vittoria1 = affondaNaveA(n);
			if(vittoria1==1){
				affondateA++;	
			}
		}
		if(vittoria == 1 || vittoria1 == 1){
			esplosione();
			if(vittoria == 1){
				printf("Nave Affondata\n");
			}else{
				printf("Acqua\n");
			}
			color(4);
			printf("\nGriglia Nemica\n");
			color(15);
			stampaMatricePAggiornata();	
			if(vittoria1 == 1){
				printf("La Tua Nave E' Stata Affondata\n");
			}else{
				printf("Acqua\n");
			}
			color(2);
			printf("\Nostra Griglia\n");
			color(15);
			stampaMatriceGAggiornata();	
		}
			
	}while((affondate!=n && affondateA!=n));
	
	if(affondate==n){
		printf("Complimenti Utente hai vinto la partita di battaglia navale!\n");
	}else{
		printf("Peccato Utente, hai perso la partita di battaglia navale contro il pc!\n");
	}
	return 0;
}
