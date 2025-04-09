#include "Header.h"

void Remove_Blanks_At_The_End( char *line ) {
        int i, k, newline_flag = 0;
        int n_blanks, n_chars;

        // 전체 문장에 대하여 line[k] 가 줄바꿈이면 flag를 1로 set, '\0'이면 종료
        for (k = 0; ; k++) {
                if (line[k] == '\n') {
                        newline_flag = 1;
                }
                if (line[k] == '\0') {
                        break;
                }
        }

        // line[i]가 공백이 아닌 문자를 만날 때까지 역으로 검사
        for (i = k - 1; i >= 0; i--) {
		 if (line[i] != ' ' && line[i] != '\t') {
            		break;
        	}
       
        }

        i++; // 마지막 유효 문자 다음 위치

        // flag가 1일때 문장의 마지막은 줄바꿈&종료, flag가 1이 아니라면 그냥 종료
        if (newline_flag == 1) {
                line[i] = '\n';
                line[i + 1] = '\0';
        }
        else {
                line[i] = '\0';
        }
}

void Get_Blanks_Chars( char *line, int Start, int *N_Blanks, int *N_Chars ) {
	int i, blank_flag = 0;

	*N_Blanks = *N_Chars = 0;
	for ( i = Start; ; i++ ) {
		if ( (line[i] == '\n') || (line[i] == '\0') ) {
			break;
		}
		else if ( line[i] == ' ' ) {
			if ( blank_flag == 0 ) {
				++(*N_Blanks);
			}
			else {
				break;
			}
		}
		else {
			blank_flag = 1;
			++(*N_Chars);
		}
	}
}
