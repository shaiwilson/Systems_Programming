int count(char s[], char c);

int count(char s[], char c)
{
	
   if(s[0] == '\0'){
   		return 0;
   	}
   	else if (s[0] == c)
   	{
   		return 1 + count(++s, c);
   	}	
   	else
   	{
		return count(++s, c);
   	}	
}