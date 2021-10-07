int mystrlen(char* s) {
	int len = 0;
	while(*s){
		len++;
		s++;
	}
	return len;
}

// char* mystrcpy(char* dest, char* source) {
// 	int i;
// 	for (i = 0; *(source+i) != '\0'; i++) {
// 		*(dest+i) = *(source+i);
// 	}
// 	return dest;
// }

char* mystrncpy(char* dest, char*source, int n) {
	int i;
	for (i = 0; (i < n) && *(source+i) != '\0'; i++) {
		*(dest+i) = *(source+i);
	}
	return dest;
}

// char* mystrcat(char *dest, char*source) {
// 	int i;
// 	for (i = 0; *(dest+i) != '\0'; i++) {
// 		i = i;
// 	}
// 	int x;
// 	for (x = i)
// }

int mystrcmp(char* s1, char* s2) {
	return 0;
}

// char* mystrchr(char* s, char c){
// 	int i;
// 	char* mchar;
// 	for (i = 0; *(s+1) != '\0'; i++) {
// 		if (*(s+i) == c) {
// 			mchar = s+i;
// 		}
// 	}
// 	return mchar;
// }
