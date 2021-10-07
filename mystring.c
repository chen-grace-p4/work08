int mystrlen(char* s) {
	int len = 0;
	while(*s){
		len++;
		s++;
	}
	return len;
}

char* mystrcpy(char* dest, char* source) {
	while (*source) {
		*(dest) = *(source);
		dest++;
		source++;
	}
	return dest;
}

//char* mystrncpy(char* dest, char*source, int n) {
//}

int mystrcmp(char* s1, char* s2) {
	return 0;
}

//char* mystrchr(char* s, char c){
//}
