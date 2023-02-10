/*

 a+b*(c/d)-e(f^g)

 */
# include<iostream.h>
# include<conio.h>
# include<string.h>
class Stack
{
	int top;
	char s[10];
	public:
	Stack()
	{
		top=-1;
	}
	void push(char data)
	{
		top++;
		s[top]=data;
	}
	char pop()
	{
		char data;
		data=s[top];
		top--;
		return data;
	}
	char peep()
	{
		char data;
		data=s[top];
		return data;
	}
};
int main()
{
	char in[20];
	Stack s;
	clrscr();
	cout<<"\nInfix Expression to postfix Expression.....\n"<<endl;
	cout<<"Enter the infix Expression: ";
	cin>>in;
	int l;
	l=strlen(in);
	s.push('(');
	in[l]=')';
	l++;
	in[l]='\0';
	for(int i=0;i<=l;i++)
	{
		switch(in[i])
		{
			case '(':
				s.push('(');
				break;
			case '^':
				while(s.peep()=='^')
				{
					cout<<s.pop();
				}
				s.push('^');
				break;
			case '/':
				while(s.peep()=='^'||s.peep()=='/')
				{
					cout<<s.pop();
				}
				s.push('/');
				break;
			case '*':
				while(s.peep()=='^'||s.peep()=='/'||s.peep()=='*')
				{
					cout<<s.pop();
				}
				s.push('*');
				break;
			case '+':
				while(s.peep()=='^'||s.peep()=='/'||s.peep()=='*'||s.peep()=='+')
				{
					cout<<s.pop();
				}
				s.push('+');
				break;
			case '-':
				while(s.peep()=='^'||s.peep()=='/'||s.peep()=='*'||s.peep()=='+'||s.peep()=='-')
				{
					cout<<s.pop();
				}
				s.push('-');
				break;
			case ')':
				while(s.peep()!='(')
				{
					cout<<s.pop();
				}
				s.pop();
				break;
			default:
				cout<<in[i];
		}
	}
	getch();
	return 0;
}





