/* copy string t to s, array subscript version*/
void strcpy1(char * s, char * t) {
int i = 0;
while ((s[i] = t[i]) != '\0')
i++;
}
/* copy string t to s, pointer version*/
void strcpy2(char * s, char * t) {
while ((*s = *t) != '\0') {
s++;
t++;
}
}
/* copy string t to s, shorter pointer version*/
void strcpy3(char * s, char * t) {
while ((*s++ = *t++) != '\0');
}
/* copy string t to s, shorter pointer version,
comparison to zero is not necessary */
void strcpy4(char * s, char * t) {
while ((*s++ = *t++));
}