#include<stdio.h>
char cipher(char* text)
{int i=0;
while(ch!='\0')
{
ch=text[i];
text[i]++;
}
return(*text);
}

void main()
{
char line[200],ch,a;
int i=0;
printf("\nenter the text:\n");
while(ch != '\n')
{
ch=getchar();
line[i]=ch;
i++;
}
line[i]='\0';
line=cipher(line);
printf("\n%s",line);

}



