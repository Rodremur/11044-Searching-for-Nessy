/*-------------------------------------------------------
 * Tarea de Analisis de Algoritmos: 11044 - Searching for Nessy
 * Fecha: 15-02-2016
 * Autor:
 *      A01064215 Rodrigo Reyes Murillo
 */

#include <stdio.h>
int main(int argc, char const *argv[])
{
	int t, n, m, i, r;

	scanf("%d", &t);
	for (i = 0; i < t; i++) {
		scanf("%d", &n);
		scanf("%d", &m);
		r = (m/3)*(n/3);
		printf("%d\n", r);
	}
	return 0;
}
