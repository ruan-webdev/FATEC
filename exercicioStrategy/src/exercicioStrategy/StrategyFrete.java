package exercicioStrategy;

import java.util.Scanner;

public class StrategyFrete {

	public static void main(String[] args) {
		
		try (Scanner entrada = new Scanner(System.in)){
			System.out.printf("Informe a distancia: ");
			int distancia = entrada.nextInt();
			System.out.printf("Qual o tipo de frete (1) Normal, (2) Sedex, (3) Sedex10: ");
			int opcaoFrete = entrada.nextInt();
			TipoFrete tipoFrete = TipoFrete.values()[opcaoFrete -1];
			Frete frete = tipoFrete.obterFrete();
			double preco = frete.calcularPreco(distancia);
			System.out.printf("O valor total é de R$%.2f", preco);
		}
	}

}
