#include <string.h>
#include <stdio.h>

char element;
void ele(int x)
{
	for (int i = 0; i < x; i++)
	{
		printf("%c", element);
	}
}
void emp(int x)
{
	for (int i = 0; i < x; i++)
	{
		printf(" ");
	}
}
void Render(char str[], int left, int right)
{
	//printf("%d--%d",left,right);
	for (int height = 0; height < 7; height++)
	{

		for (int i = left; i <= right; i++)
		{
			char c = str[i];

			switch (c)
			{
			case 'A':
			case 'a':
				switch (height)
				{
				case 0:
					emp(4);
					ele(3);
					emp(6);

					break;

				case 1:
					emp(2);
					ele(3);
					emp(1);
					ele(3);
					emp(4);

					break;

				case 2:
					emp(1);
					ele(3);
					emp(3);
					ele(3);
					emp(3);

					break;

				case 3:
					ele(11);
					emp(2);

					break;

				case 4:
					ele(3);
					emp(5);
					ele(3);
					emp(2);

					break;

				case 5:
					ele(3);
					emp(5);
					ele(3);
					emp(2);

					break;

				case 6:
					ele(3);
					emp(5);
					ele(3);
					emp(2);

					break;
				}
				break;

            case 'B':
			case 'b':
				switch (height)
				{
				case 0:
					ele(10);
					emp(3);

					break;

				case 1:
					ele(3);
					emp(6);
					ele(2);
					emp(2);

					break;

				case 2:
					ele(3);
					emp(6);
					ele(2);
					emp(2);

					break;

				case 3:
					ele(9);
					emp(4);

					break;

				case 4:
					ele(3);
					emp(6);
					ele(2);
					emp(2);

					break;

				case 5:
					ele(3);
					emp(6);
					ele(2);
					emp(2);

					break;

				case 6:
				    ele(10);
					emp(3);

					break;
				}
				break;
				
			case 'C':
			case 'c':
				switch (height)
				{
				case 0:
					emp(3);
					ele(7);
					emp(3);

					break;

				case 1:
					emp(2);
					ele(3);
					emp(8);

					break;

				case 2:
					emp(1);
					ele(3);
					emp(9);

					break;

				case 3:
					ele(3);
					emp(10);

					break;

				case 4:
					emp(1);
					ele(3);
					emp(9);

					break;

				case 5:
					emp(2);
					ele(3);
					emp(8);

					break;

				case 6:
					emp(3);
					ele(7);
					emp(3);

					break;
				}
				break;
				
			case 'D':
			case 'd':
				switch (height)
				{
				case 0:
					ele(9);
					emp(4);

					break;

				case 1:
					ele(3);
					emp(5);
					ele(3);
					emp(2);

					break;

				case 2:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 3:
					ele(3);
					emp(7);
					ele(2);
					emp(1);

					break;

				case 4:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 5:
					ele(3);
					emp(5);
					ele(3);
					emp(2);

					break;

				case 6:
					ele(9);
					emp(4);

					break;
				}
				break;
					
			case 'E':
			case 'e':

				switch (height)
				{
				case 0:
					ele(11);
					emp(2);

					break;

				case 1:
					ele(3);
					emp(10);

					break;

				case 2:
					ele(3);
					emp(10);

					break;

				case 3:
					ele(11);
					emp(2);

					break;

				case 4:
					ele(3);
					emp(10);
					break;

				case 5:
					ele(3);
					emp(10);

					break;

				case 6:
					ele(11);
					emp(2);

					break;
				}
				break;
					
			case 'F':
            case 'f':
				switch (height)
				{
				case 0:
					ele(11);
					emp(2);

					break;

				case 1:
					ele(3);
					emp(10);

					break;

				case 2:
					ele(3);
					emp(10);

					break;

				case 3:
					ele(7);
					emp(6);

					break;

				case 4:
					ele(3);
					emp(10);
					break;

				case 5:
					ele(3);
					emp(10);

					break;

				case 6:
					ele(3);
					emp(10);

					break;
				}
				break;
					
			case 'G':
            case 'g':

				switch (height)
				{
				case 0:
					ele(11);
					emp(2);

					break;

				case 1:
					ele(3);
					emp(5);
					ele(3);
					emp(2);

					break;

				case 2:
					ele(3);
					emp(10);

					break;

				case 3:
					ele(3);
					emp(2);
					ele(6);
					emp(2);
					break;

				case 4:
					ele(3);
					emp(2);
					ele(2);
					emp(1);
					ele(3);
					emp(2);
					break;

				case 5:
					ele(3);
					emp(5);
					ele(3);
					emp(2);

					break;

				case 6:
					ele(11);
					emp(2);

					break;
				}
				break;
				
				case 'H':
                case 'h':

				switch (height)
				{
				case 0:
					ele(3);
					emp(5);
					ele(3);
					emp(2);

					break;

				case 1:
					ele(3);
					emp(5);
					ele(3);
					emp(2);

					break;

				case 2:
					ele(3);
					emp(5);
					ele(3);
					emp(2);

					break;

				case 3:
					ele(11);
					emp(2);

					break;

				case 4:
					ele(3);
					emp(5);
					ele(3);
					emp(2);

					break;

				case 5:
					ele(3);
					emp(5);
					ele(3);
					emp(2);

					break;

				case 6:
					ele(3);
					emp(5);
					ele(3);
					emp(2);
					break;
				}
				break;

			case 'I':
            case 'i':

				switch (height)
				{
				case 0:
					emp(3);
					ele(7);
					emp(3);

					break;

				case 1:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 2:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 3:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 4:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 5:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 6:
					emp(3);
					ele(7);
					emp(3);
					break;
				}
				break;

			case 'J':
            case 'j':

				switch (height)
				{
				case 0:
					emp(3);
					ele(8);
					emp(2);

					break;

				case 1:
					emp(3);
					ele(2);
					emp(3);
					ele(3);
					emp(2);

					break;

				case 2:
					emp(8);
					ele(3);
					emp(2);

					break;

				case 3:
					emp(8);
					ele(3);
					emp(2);

					break;

				case 4:
					emp(8);
					ele(3);
					emp(2);

					break;

				case 5:
					ele(2);
					emp(6);
					ele(3);
					emp(2);

					break;

				case 6:
					ele(11);
					emp(2);
					break;
				}
				break;

			case 'K':
            case 'k':

				switch (height)
				{
				case 0:
					ele(3);
					emp(5);
					ele(3);
					emp(2);

					break;

				case 1:
					ele(3);
					emp(4);
					ele(3);
					emp(3);

					break;

				case 2:
					ele(3);
					emp(2);
					ele(3);
					emp(5);

					break;

				case 3:
					ele(6);
					emp(7);

					break;

				case 4:
					ele(3);
					emp(2);
					ele(3);
					emp(5);

					break;

				case 5:
					ele(3);
					emp(4);
					ele(3);
					emp(3);

					break;

				case 6:
					ele(3);
					emp(6);
					ele(3);
					emp(1);
					break;
				}
				break;

			case 'L':
            case 'l':

				switch (height)
				{
				case 0:
					ele(5);
					emp(8);

					break;

				case 1:
					ele(3);
					emp(10);

					break;

				case 2:
					ele(3);
					emp(10);

					break;

				case 3:
					ele(3);
					emp(10);

					break;

				case 4:
					ele(3);
					emp(10);

					break;

				case 5:
					ele(3);
					emp(5);
					ele(3);
					emp(2);

					break;

				case 6:
					ele(11);
					emp(2);
					break;
				}
				break;

			case 'M':
            case 'm':

				switch (height)
				{
				case 0:
					ele(4);
					emp(4);
					ele(4);
					emp(1);

					break;

				case 1:
					ele(5);
					emp(2);
					ele(5);
					emp(1);

					break;

				case 2:
					ele(3);
					emp(1);
					ele(4);
					emp(1);
					ele(3);
					emp(1);

					break;

				case 3:
					ele(3);
					emp(2);
					ele(2);
					emp(2);
					ele(3);
					emp(1);

					break;

				case 4:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 5:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 6:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;
				}
				break;

			case 'N':
            case 'n':

				switch (height)
				{
				case 0:
					ele(4);
					emp(5);
					ele(3);
					emp(1);

					break;

				case 1:
					ele(5);
					emp(4);
					ele(3);
					emp(1);

					break;

				case 2:
					ele(3);
					emp(1);
					ele(2);
					emp(3);
					ele(3);
					emp(1);

					break;

				case 3:
					ele(3);
					emp(2);
					ele(2);
					emp(2);
					ele(3);
					emp(1);
					
					break;

				case 4:
					ele(3);
					emp(3);
					ele(2);
					emp(1);
					ele(3);
					emp(1);

					break;

				case 5:
					ele(3);
					emp(4);
					ele(5);
					emp(1);

					break;

				case 6:
					ele(3);
					emp(5);
					ele(4);
					emp(1);

					break;
				}
				break;

			case 'O':
            case 'o':

				switch (height)
				{
				case 0:
					emp(4);
					ele(5);
					emp(4);

					break;

				case 1:
					emp(2);
					ele(3);
					emp(3);
					ele(3);
					emp(2);

					break;

				case 2:
					emp(1);
					ele(3);
					emp(5);
					ele(3);
					emp(1);

					break;

				case 3:
					emp(1);
					ele(2);
					emp(7);
					ele(2);
					emp(1);
					
					break;

				case 4:
					emp(1);
					ele(3);
					emp(5);
					ele(3);
					emp(1);

					break;

				case 5:
					emp(2);
					ele(3);
					emp(3);
					ele(3);
					emp(2);

					break;

				case 6:
					emp(4);
					ele(5);
					emp(4);

					break;
				}
				break;

			case 'P':
            case 'p':

				switch (height)
				{
				case 0:
					ele(11);
					emp(2);

					break;

				case 1:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 2:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 3:
					ele(11);
					emp(2);
					
					break;

				case 4:
					ele(3);
					emp(10);

					break;

				case 5:
					ele(3);
					emp(10);

					break;

				case 6:
					ele(3);
					emp(10);

					break;
				}
				break;

			case 'Q':
            case 'q':

				switch (height)
				{
				case 0:
					emp(4);
					ele(5);
					emp(4);

					break;

				case 1:
					emp(2);
					ele(3);
					emp(3);
					ele(3);
					emp(2);

					break;

				case 2:
					emp(1);
					ele(3);
					emp(5);
					ele(3);
					emp(1);

					break;

				case 3:
					emp(1);
					ele(2);
					emp(7);
					ele(2);
					emp(1);
					
					break;

				case 4:
					emp(1);
					ele(3);
					emp(5);
					ele(3);
					emp(1);

					break;

				case 5:
					emp(2);
					ele(3);
					emp(3);
					ele(3);
					emp(2);

					break;

				case 6:
					emp(4);
					ele(5);
					emp(1);
					ele(2);
					emp(1);

					break;
				}
				break;

			case 'R':
            case 'r':

				switch (height)
				{
				case 0:
					ele(11);
					emp(2);

					break;

				case 1:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 2:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 3:
					ele(11);
					emp(2);
					
					break;

				case 4:
					ele(7);
					emp(6);

					break;

				case 5:
					ele(3);
					emp(3);
					ele(3);
					emp(4);

					break;

				case 6:
					ele(3);
					emp(5);
					ele(3);
					emp(2);

					break;
				}
				break;
					
			case 'S':
            case 's':

				switch (height)
				{
				case 0:
					ele(12);
					emp(1);

					break;

				case 1:
					ele(3);
					emp(10);

					break;

				case 2:
					ele(3);
					emp(10);

					break;

				case 3:
					ele(12);
					emp(1);

					break;

				case 4:
					emp(9);
					ele(3);
					emp(1);
					break;

				case 5:
					emp(9);
					ele(3);
					emp(1);

					break;

				case 6:
					ele(12);
					emp(1);

					break;
				}
				break;

			case 'T':
            case 't':

				switch (height)
				{
				case 0:
					ele(13);

					break;

				case 1:
					ele(2);
					emp(3);
					ele(3);
					emp(3);
					ele(2);

					break;

				case 2:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 3:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 4:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 5:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 6:
					emp(4);
					ele(5);
					emp(4);
					break;
				}
				break;

			case 'U':
            case 'u':

				switch (height)
				{
				case 0:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 1:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 2:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 3:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 4:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 5:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 6:
					ele(12);
					emp(1);
					break;
				}
				break;

			case 'V':
            case 'v':

				switch (height)
				{
				case 0:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 1:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 2:
					emp(1);
					ele(3);
					emp(4);
					ele(3);
					emp(2);

					break;

				case 3:
					emp(2);
					ele(2);
					emp(4);
					ele(2);
					emp(3);

					break;

				case 4:
					emp(3);
					ele(2);
					emp(2);
					ele(2);
					emp(4);

					break;

				case 5:
					emp(3);
					ele(2);
					emp(2);
					ele(2);
					emp(4);

					break;

				case 6:
					emp(4);
					ele(4);
					emp(5);
					break;
				}
				break;

			case 'W':
            case 'w':

				switch (height)
				{
				case 0:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 1:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 2:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 3:
					ele(3);
					emp(2);
					ele(2);
					emp(2);
					ele(3);
					emp(1);

					break;

				case 4:
					ele(3);
					emp(1);
					ele(4);
					emp(1);
					ele(3);
					emp(1);
					break;

				case 5:
					ele(5);
					emp(2);
					ele(5);
					emp(1);

					break;

				case 6:
					ele(4);
					emp(4);
					ele(4);
					emp(1);
					break;
				}
				break;

			case 'X':
            case 'x':

				switch (height)
				{
				case 0:
					ele(4);
					emp(5);
					ele(3);
					emp(1);

					break;

				case 1:
					emp(2);
					ele(3);
					emp(2);
					ele(3);
					emp(3);

					break;

				case 2:
					emp(3);
					ele(2);
					emp(2);
					ele(2);
					emp(4);

					break;

				case 3:
					emp(4);
					ele(4);
					emp(5);

					break;

				case 4:
					emp(3);
					ele(2);
					emp(2);
					ele(2);
					emp(4);
					break;

				case 5:
					emp(2);
					ele(3);
					emp(2);
					ele(3);
					emp(3);

					break;

				case 6:
					ele(4);
					emp(5);
					ele(3);
					emp(1);
					break;
				}
				break;


			case 'Y':
            case 'y':

				switch (height)
				{
				case 0:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 1:

					emp(2);
					ele(3);
					emp(2);
					ele(3);
					emp(3);

					break;

				case 2:
					emp(3);
					ele(2);
					emp(2);
					ele(2);
					emp(4);

					break;

				case 3:
					emp(4);
					ele(4);
					emp(5);

					break;

				case 4:
					emp(4);
					ele(4);
					emp(5);

					break;

				case 5:
					emp(4);
					ele(4);
					emp(5);

					break;

				case 6:
					emp(2);
					ele(8);
					emp(3);

					break;
				}
				break;

			case 'Z':
            case 'z':

				switch (height)
				{
				case 0:
					ele(12);
					emp(1);

					break;

				case 1:
					emp(8);
					ele(4);
					emp(1);

					break;

				case 2:
					emp(6);
					ele(4);
					emp(3);

					break;

				case 3:
					emp(4);
					ele(4);
					emp(5);

					break;

				case 4:
					emp(2);
					ele(4);
					emp(7);

					break;

				case 5:
					ele(4);
					emp(9);

					break;

				case 6:
					ele(12);
					emp(1);

					break;
				}
				break;

			case '0':

				switch (height)
				{
				case 0:
					ele(12);
					emp(1);

					break;

				case 1:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 2:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 3:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 4:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 5:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 6:
					ele(12);
					emp(1);
					break;
				}
				break;

			case '1':

				switch (height)
				{
				case 0:
					emp(2);
					ele(6);
					emp(5);

					break;

				case 1:
					ele(3);
					emp(2);
					ele(3);
					emp(5);

					break;

				case 2:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 3:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 4:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 5:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 6:
					emp(3);
					ele(7);
					emp(3);
					break;
				}
				break;

			case '2':

				switch (height)
				{
				case 0:
					emp(1);
					ele(10);
					emp(2);

					break;

				case 1:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 2:
					ele(2);
					emp(6);
					ele(3);
					emp(2);

					break;

				case 3:
					emp(6);
					ele(3);
					emp(4);

					break;

				case 4:
					emp(3);
					ele(3);
					emp(7);

					break;

				case 5:
					emp(1);
					ele(3);
					emp(9);

					break;

				case 6:
					emp(1);
					ele(11);
					emp(1);
					break;
				}
				break;

			case '3':

				switch (height)
				{
				case 0:
					emp(1);
					ele(10);
					emp(2);

					break;

				case 1:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 2:
					emp(9);
					ele(3);
					emp(1);

					break;

				case 3:
					emp(7);
					ele(5);
					emp(1);

					break;

				case 4:
					emp(9);
					ele(3);
					emp(1);

					break;

				case 5:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 6:
					emp(1);
					ele(10);
					emp(2);
					
					break;
				}
				break;

			case '4':

				switch (height)
				{
				case 0:
					emp(6);
					ele(5);
					emp(2);

					break;

				case 1:
					emp(4);
					ele(3);
					emp(1);
					ele(3);
					emp(2);

					break;

				case 2:
					emp(3);
					ele(3);
					emp(2);
					ele(3);
					emp(2);

					break;

				case 3:
					emp(2);
					ele(3);
					emp(3);
					ele(3);
					emp(2);

					break;

				case 4:
					emp(1);
					ele(12);
					emp(0);

					break;

				case 5:
					emp(8);
					ele(3);
					emp(2);

					break;

				case 6:
					emp(8);
					ele(3);
					emp(2);
					
					break;
				}
				break;

			case '5':

				switch (height)
				{
				case 0:
					ele(10);
					emp(3);

					break;

				case 1:
					ele(3);
					emp(10);

					break;

				case 2:
					ele(3);
					emp(10);

					break;

				case 3:
					ele(11);
					emp(2);

					break;

				case 4:
					emp(9);
					ele(3);
					emp(1);

					break;

				case 5:
					emp(9);
					ele(3);
					emp(1);

					break;

				case 6:
					ele(11);
					emp(2);
					
					break;
				}
				break;

			case '6':

				switch (height)
				{
				case 0:
					ele(11);
					emp(2);

					break;

				case 1:
					ele(3);
					emp(10);

					break;

				case 2:
					ele(3);
					emp(10);

					break;

				case 3:
					ele(11);
					emp(2);

					break;

				case 4:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 5:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 6:
					ele(11);
					emp(2);
					
					break;
				}
				break;

			case '7':

				switch (height)
				{
				case 0:
					emp(2);
					ele(10);
					emp(1);

					break;

				case 1:
					emp(9);
					ele(3);
					emp(1);

					break;

				case 2:
					emp(8);
					ele(3);
					emp(2);

					break;

				case 3:
					emp(4);
					ele(6);
					emp(3);

					break;

				case 4:
					emp(6);
					ele(3);
					emp(4);

					break;

				case 5:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 6:
					emp(4);
					ele(3);
					emp(6);
					
					break;
				}
				break;

			case '8':

				switch (height)
				{
				case 0:
					ele(12);
					emp(1);

					break;

				case 1:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 2:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 3:
					ele(12);
					emp(1);

					break;

				case 4:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 5:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 6:
					ele(12);
					emp(1);
					break;
				}
				break;

			case '9':

				switch (height)
				{
				case 0:
					ele(12);
					emp(1);

					break;

				case 1:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 2:
					ele(3);
					emp(6);
					ele(3);
					emp(1);

					break;

				case 3:
					ele(12);
					emp(1);

					break;

				case 4:
					emp(9);
					ele(3);
					emp(1);

					break;

				case 5:
					emp(9);
					ele(3);
					emp(1);

					break;

				case 6:
					ele(12);
					emp(1);
					break;
				}
				break;

			case '+':

				switch (height)
				{
				case 0:
					emp(13);

					break;

				case 1:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 2:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 3:
					emp(1);
					ele(11);
					emp(1);

					break;

				case 4:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 5:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 6:
					emp(13);

					break;
				}
				break;

			case '-':

				switch (height)
				{
				case 0:
					emp(13);

					break;

				case 1:
					emp(13);

					break;

				case 2:
					emp(13);

					break;

				case 3:
					emp(1);
					ele(11);
					emp(1);

					break;

				case 4:
					emp(13);

					break;

				case 5:
					emp(13);

					break;

				case 6:
					emp(13);
					
					break;
				}
				break;

			case '*':

				switch (height)
				{
				case 0:
					emp(13);

					break;

				case 1:
					emp(1);
					ele(3);
					emp(5);
					ele(3);
					emp(1);

					break;

				case 2:
					emp(3);
					ele(3);
					emp(1);
					ele(3);
					emp(3);

					break;

				case 3:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 4:
					emp(3);
					ele(3);
					emp(1);
					ele(3);
					emp(3);

					break;

				case 5:
					emp(1);
					ele(3);
					emp(5);
					ele(3);
					emp(1);

					break;

				case 6:
					emp(13);
					
					break;
				}
				break;

			case '/':

				switch (height)
				{
				case 0:
					emp(9);
					ele(3);
					emp(1);

					break;

				case 1:
					emp(8);
					ele(3);
					emp(2);

					break;

				case 2:
					emp(7);
					ele(3);
					emp(3);

					break;

				case 3:
					emp(6);
					ele(3);
					emp(4);

					break;

				case 4:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 5:
					emp(4);
					ele(3);
					emp(6);

					break;

				case 6:
					emp(3);
					ele(3);
					emp(7);
					
					break;
				}
				break;

			case '=':

				switch (height)
				{
				case 0:
					emp(13);

					break;

				case 1:
					emp(13);

					break;

				case 2:
					emp(1);
					ele(11);
					emp(1);

					break;

				case 3:
					emp(13);

					break;

				case 4:
					emp(1);
					ele(11);
					emp(1);

					break;

				case 5:
					emp(13);

					break;

				case 6:
					emp(13);
					
					break;
				}
				break;

			case '~':

				switch (height)
				{
				case 0:
					emp(2);
					ele(4);
					emp(1);
					ele(4);
					emp(2);

					break;

				case 1:
					emp(2);
					ele(3);
					emp(2);
					ele(3);
					emp(3);

					break;

				case 2:
					emp(3);
					ele(2);
					emp(2);
					ele(2);
					emp(4);

					break;

				case 3:
					emp(5);
					ele(1);
					emp(3);
					ele(1);
					emp(3);

					break;

				case 4:
					emp(13);

					break;

				case 5:
					emp(13);

					break;

				case 6:
					emp(13);
					
					break;
				}
				break;

			case '^':

				switch (height)
				{
				case 0:
					emp(2);
					ele(4);
					emp(1);
					ele(4);
					emp(2);

					break;

				case 1:
					emp(3);
					ele(3);
					emp(2);
					ele(3);
					emp(2);

					break;

				case 2:
					emp(4);
					ele(2);
					emp(2);
					ele(2);
					emp(3);

					break;

				case 3:
					emp(3);
					ele(1);
					emp(3);
					ele(1);
					emp(5);

					break;

				case 4:
					emp(13);

					break;

				case 5:
					emp(13);

					break;

				case 6:
					emp(13);
					
					break;
				}
				break;

			case '!':

				switch (height)
				{
				case 0:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 1:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 2:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 3:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 4:
					emp(13);

					break;

				case 5:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 6:
					emp(5);
					ele(3);
					emp(5);
					
					break;
				}
				break;

			case '#':

				switch (height)
				{
				case 0:
					emp(5);
					ele(2);
					emp(4);
					ele(2);

					break;

				case 1:
					emp(4);
					ele(2);
					emp(4);
					ele(2);
					emp(1);

					break;

				case 2:
					ele(13);

					break;

				case 3:
					emp(2);
					ele(2);
					emp(4);
					ele(2);
					emp(3);

					break;

				case 4:
					ele(13);

					break;

				case 5:
					ele(2);
					emp(4);
					ele(2);
					emp(5);

					break;

				case 6:
					ele(1);
					emp(4);
					ele(2);
					emp(6);
					
					break;
				}
				break;
					
			case '&':

				switch (height)
				{
				case 0:
					ele(12);
					emp(1);

					break;

				case 1:
					ele(3);
					emp(3);
					ele(2);
					emp(2);
					ele(2);
					emp(1);

					break;

				case 2:
					ele(3);
					emp(3);
					ele(2);
					emp(5);

					break;

				case 3:
					ele(12);
					emp(1);

					break;

				case 4:
					emp(6);
					ele(2);
					emp(1);
					ele(3);
					emp(1);
					break;

				case 5:
					ele(2);
					emp(4);
					ele(2);
					emp(1);
					ele(3);
					emp(1);

					break;

				case 6:
					ele(12);
					emp(1);

					break;
				}
				break;
					
			case '%':

				switch (height)
				{
				case 0:
					emp(8);
					ele(3);
					emp(2);

					break;

				case 1:
					emp(1);
					ele(3);
					emp(3);
					ele(3);
					emp(3);

					break;

				case 2:
					emp(1);
					ele(3);
					emp(2);
					ele(3);
					emp(4);

					break;

				case 3:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 4:
					emp(4);
					ele(3);
					emp(3);
					ele(3);

					break;

				case 5:
					emp(3);
					ele(3);
					emp(4);
					ele(3);

					break;

				case 6:
					emp(2);
					ele(3);
					emp(8);

					break;
				}
				break;
					
			case '(':

				switch (height)
				{
				case 0:
					emp(3);
					ele(4);
					emp(6);

					break;

				case 1:
					emp(2);
					ele(3);
					emp(8);

					break;

				case 2:
					emp(1);
					ele(3);
					emp(9);

					break;

				case 3:
					ele(3);
					emp(10);

					break;

				case 4:
					emp(1);
					ele(3);
					emp(9);

					break;

				case 5:
					emp(2);
					ele(3);
					emp(8);

					break;

				case 6:
					emp(3);
					ele(4);
					emp(6);

					break;
				}
				break;
					
			case ')':

				switch (height)
				{
				case 0:
					emp(6);
					ele(4);
					emp(3);

					break;

				case 1:
					emp(8);
					ele(3);
					emp(2);

					break;

				case 2:
					emp(9);
					ele(3);
					emp(1);

					break;

				case 3:
					emp(10);
					ele(3);

					break;

				case 4:
					emp(9);
					ele(3);
					emp(1);

					break;

				case 5:
					emp(8);
					ele(3);
					emp(2);

					break;

				case 6:
					emp(6);
					ele(4);
					emp(3);

					break;
				}
				break;
					
			case ':':

				switch (height)
				{
				case 0:
					emp(13);

					break;

				case 1:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 2:
					emp(13);

					break;

				case 3:
					emp(13);

					break;

				case 4:
					emp(13);
					break;

				case 5:
					emp(5);
					ele(3);
					emp(5);
					break;

				case 6:
					emp(13);

					break;
				}
				break;
					
			case ';':

				switch (height)
				{
				case 0:
					emp(13);

					break;

				case 1:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 2:
					emp(13);

					break;

				case 3:
					emp(13);

					break;

				case 4:
					emp(5);
					ele(3);
					emp(5);
					break;

				case 5:
					emp(6);
					ele(2);
					emp(5);
					break;

				case 6:
					emp(6);
					ele(1);
					emp(6);

					break;
				}
				break;
					
			case ',':

				switch (height)
				{
				case 0:
					emp(13);

					break;

				case 1:
					emp(13);

					break;

				case 2:
					emp(13);

					break;

				case 3:
					emp(13);

					break;

				case 4:
					emp(5);
					ele(3);
					emp(5);
					break;

				case 5:
					emp(6);
					ele(2);
					emp(5);
					break;

				case 6:
					emp(6);
					ele(1);
					emp(6);

					break;
				}
				break;
					
			case '.':

				switch (height)
				{
				case 0:
					emp(13);

					break;

				case 1:
					emp(13);

					break;

				case 2:
					emp(13);

					break;

				case 3:
					emp(13);

					break;

				case 4:
					emp(13);
					break;

				case 5:
					emp(5);
					ele(3);
					emp(5);
					break;

				case 6:
					emp(13);

					break;
				}
				break;
					
			case '?':

				switch (height)
				{
				case 0:
					emp(1);
					ele(11);
					emp(1);

					break;

				case 1:
					emp(1);
					ele(3);
					emp(4);
					ele(4);
					emp(1);

					break;

				case 2:
					emp(2);
					ele(1);
					emp(4);
					ele(3);
					emp(3);

					break;

				case 3:
					emp(6);
					ele(3);
					emp(4);

					break;

				case 4:
					emp(6);
					ele(3);
					emp(4);

					break;

				case 5:
					emp(13);

					break;

				case 6:
					emp(6);
					ele(3);
					emp(4);

					break;
				}
				break;
					
			case '[':

				switch (height)
				{
				case 0:
					emp(5);
					ele(6);
					emp(2);

					break;

				case 1:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 2:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 3:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 4:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 5:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 6:
					emp(5);
					ele(6);
					emp(2);

					break;
				}
				break;
					
			case ']':

				switch (height)
				{
				case 0:
					emp(2);
					ele(6);
					emp(5);

					break;

				case 1:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 2:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 3:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 4:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 5:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 6:
					emp(2);
					ele(6);
					emp(5);

					break;
				}
				break;
					
			case '{':

				switch (height)
				{
				case 0:
					emp(5);
					ele(6);
					emp(2);

					break;

				case 1:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 2:
					emp(5);
					ele(2);
					emp(6);

					break;

				case 3:
					emp(3);
					ele(3);
					emp(7);

					break;

				case 4:
					emp(5);
					ele(2);
					emp(6);
					break;

				case 5:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 6:
					emp(5);
					ele(6);
					emp(2);

					break;
				}
				break;
					
			case '}':

				switch (height)
				{
				case 0:
					emp(2);
					ele(6);
					emp(5);

					break;

				case 1:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 2:
					emp(6);
					ele(2);
					emp(5);

					break;

				case 3:
					emp(7);
					ele(3);
					emp(3);

					break;

				case 4:
					emp(6);
					ele(2);
					emp(5);
					break;

				case 5:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 6:
					emp(2);
					ele(6);
					emp(5);

					break;
				}
				break;
					
			case '|':

				switch (height)
				{
				case 0:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 1:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 2:
					emp(5);
					ele(3);
					emp(5);
					break;

				case 3:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 4:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 5:
					emp(5);
					ele(3);
					emp(5);

					break;

				case 6:
					emp(5);
					ele(3);
					emp(5);

					break;
				}
				break;

			default:
				break;
			}
		}

		printf("\n");
	}

	for (int i = 0; i < 4; i++)
	{
		printf("\n");
	}
}


void print(char str[], char font )
{
	element = font;
	int i;
	for (i = 0; str[i] != '\0'; ++i)
		;

	int left = 0;
	int right = 0;

	for (int j = 0; j < i; j++)
	{
		if (str[j] != ' ')
		{
			right = j;
		}
		else
		{

			Render(str, left, right);
			left = ++right;
		}
	}

	Render(str, left, right);
}


// int main()
// {
// 	char c[50] = "TANMAY & BISWA";
// 	char font[5] = "|*$#T";
// 	for (int i = 0; i < 5; i++)
// 	{
// 		print(c, font[i]);
// 	}

// 	//int i;
// 	//printf("press ANY LETTER THEN ENTER FOR Exit");
// 	//scanf("%d", i);

// 	return 0;
// }