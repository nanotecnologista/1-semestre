#include <stdio.h>
// Atividade questC#o 1 - Hora diferente
// By: Jujuh Nanotech and Yago Rian

int
main ()
{
  int valor, hora, minutos, segundos;
  int segtt, segd, mind, hrd, hrtd;
  printf ("Insira em um valor UNICO: HHMMSS \n");
  scanf ("%d", &valor);

  hora = valor / 10000;
  minutos = (valor % 10000) / 100;
  segundos = ((valor % 10000) % 100);

  if (hora >= 0 && hora <= 23){
      if (minutos >= 0 && minutos <= 60){
          if (segundos >= 0 && segundos <= 60){
              
	        segtt = hora * 60 * 60 + minutos * 60 + segundos;
	        segd = segtt / 0.864;
	        hrd = segd / 1000;
	        mind = (segd % 1000) / 100;
	        segd = (segd % 1000) % 100;
	        hrtd = (hrd * 1000) + (mind * 100) + segd;
	        printf (" a hora e: %06d", hrtd);
	        //printf("%d%d%d", hrd, mind, segd);
	        }
	    }
    }else
    printf ("formato de hora errado!\n");

  return 0;
}

