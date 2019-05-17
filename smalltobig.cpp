#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char change(char *scanf_s){
	char big[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char small[27] = "abcdefghijklmnopqrstuvwxyz";
	for(int i = 0; i < 27; i++){
		for(int j =0; j < 27; j++){
			if(scanf_s[j] == small[i]){
				scanf_s[j] = big[i];
			}
			else if(scanf_s[j] == big[i]){
				scanf_s[j] = small[i];
			}
		}
	}
	printf("ÈÄ %s", scanf_s);
}

int main(int argc, char *argv[]) {
	char s_list[4];
	scanf("%s", s_list);
	printf("Àü %s\n", s_list);
	change(s_list);
	return 0;
}
