,lubuntu,lubuntu,01.05.2019 20:06,file:///home/lubuntu/.config/libreoffice/4;                                                                                                                                                                                                                                                                                                                                                                                                                                                   dos pares e soma dos impares
		if(vt[i] % 2 == 0)
			somaPares += vt[i];
		else 
			somaImpar += vt[i];
			
		//2 maiores
		if(segmaior < maior && segmaior < vt[i])
			segmaior = vt[i];
	}
	
	printf("A soma dos elementos é: %d\n", soma);
	printf("A media dos elementos é: %f\n", media);
	printf("Os pares por imapres é: %d\n", somaPares - somaImpar);
	printf("Ovalor maximo é: %d e o minimo é: %d\n", maior, menor);
	printf("Os maior é: %d e o segundo maior é: %d\n", maior, segmaior);
	return 0;
}
