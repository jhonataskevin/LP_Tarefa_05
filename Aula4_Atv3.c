# include <stdio.h>

int main() {
	
	int n, l, r, d, cont;
	
	
	scanf("%d", &n);
	
	for(cont = 1; cont = n; cont++){
		
	 scnaf("%d %d %d", &l, &r, &d);
	 
	 if(l <0 || l>100){
	 	 printf("Valor inválido. posição tem que estar entre 0 a 100.\n");
	 }else if (r <0 || r > 100){
	 	printf("Valor inválido. posição tem que estar entre 0 a 100.\n");
	 }else if(d <0 || d> 100) {
	 	printf("Valor inválido. posição tem que estar entre 0 a 100.\n");
	 }	
	}
	
	if (r > 50 && l < r && r> d){
		prntf("S");
	}else{
		printf("N");
	}
	
	return 0;
	
}
