#include <stdio.h>
int mystrlen(char* s) {
	int len = 0;
	while(*s){
		len++;
		s++;
	}
	return len;
}

char* mystrcpy(char* dest, char* source) {
	int i;
	for (i = 0; *(source+i) != '\0'; i++) {
		*(dest+i) = *(source+i);
	}
	return dest;
}

char* mystrncpy(char* dest, char*source, int n) {
	int i;
	for (i = 0; (i < n) && *(source+i) != '\0'; i++) {
		*(dest+i) = *(source+i);
	}
	return dest;
}

char* mystrcat(char *dest, char*source) {
 	int endDest = mystrlen(dest);
 	
 	int srcIndex;
 	for (srcIndex = 0; *(source+srcIndex) != '\0'; srcIndex++) {
 		//printf("%c \n", *(source+srcIndex));
 		dest[endDest] = source[srcIndex];
 		//printf("%c \n", *(dest+endDest));
 		endDest++;
 	}
 	
 	dest[endDest] = source[srcIndex];
 	return dest;
}

int mystrcmp(char* s1, char* s2) {
	return 0;
}

char* mystrchr(char* s, char c){
	//int i;
	//char* mchar = NULL;
	//for (i = 0; s[i] != '\0'; i++) {
	//	if (s[i] == c) {
	//		mchar = &s[i];
	//	}
	//}
	
	while (*s) {
		if (*s == c) {
			return s;
		} 
		s++;
	}
	if (c==0) return s;
	//return mchar;
}
