#include <stdio.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: always 0
 *     */
int main(void)
{
		char a;
			int b;
				long int c;
					long long int d;
						float e;

							puts("Size of a char: " + sizeof(a) + " byte(s)");
								puts("Size of an int: " + sizeof(b) + " byte(s)");
									puts("Size of a long int: " + sizeof(c) + " byte(s)");
										puts("Size of a long long int: " + sizeof(b) + " byte(s)");
											puts("Size of a float: " + sizeof(b) + " byte(s)");
												printf("Size of a char: %d byte(s)\n", sizeof(char));
													printf("Size of an int: %d byte(s)\n", sizeof(int));
														printf("Size of a long int: %d byte(s)\n", sizeof(long int));
															printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
																printf("Size of a float: %d byte(s)\n", sizeof(float));
																	return (0);
}
