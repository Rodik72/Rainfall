void p(char *s, char *typedString) {
  	char *string;
	char buffer [4104];
  
  puts(typedString);
  read(0, buffer, 4096);
  string = strchr(buffer, '\n');
  *string = '\0';
  strncpy(s, buffer, 20);
  return;
}

void pp(char *s) {
	char firstString [20];
  	char secondString [20];
  
 	 p(firstString, " - ");
 	 p(secondString, " - ");
 	 strcpy(s, firstString);
 	 strcat(s, secondString);
 	 
	 return;
}

int main(void) {
	char s[54];

	pp(s);
	puts(s);
	return (0);
}
