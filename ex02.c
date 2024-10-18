#include <stdio.h>

int main()
{
	float nota1, nota2, nota3, media;

	printf("Primeira nota: ");
	scanf("%f", &nota1);

	printf("Segunda nota: ");
	scanf("%f", &nota2);

	printf("Terceira nota: ");
	scanf("%f", &nota3);

	media = (nota1 + nota2 + nota3) / 3;

	printf("Media = %.1f", media);

	return 0;
}