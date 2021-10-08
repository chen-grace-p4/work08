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
 		dest[endDest] = source[srcIndex];
 		endDest++;
 	}

 	dest[endDest] = source[srcIndex];
 	return dest;
}

int mystrcmp(char* s1, char* s2) {
	while (*s1 && *s2) {
		if (*s1 != *s2) {
			if (*s1 < *s2) return -1;
			else return 1;
		}
		s1++;
		s2++;
	}
	if (*s1 == 0 && *s2 == 0) return 0;
	else {
		if(*s1 != 0) return 1;
		else return -1;
	}
}

char* mystrchr(char* s, char c){
	while (*s) {
		if (*s == c) {
			return s;
		}
		s++;
	}
	if (c==0) return s;
}
