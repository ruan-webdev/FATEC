package exercicioObserver;

public class Principal {
		public static void main(String[] args) {
			DadosSubject dados = new DadosSubject();
			dados.attach(new TabelaObserver(dados));
			dados.attach(new PorcentoObserver(dados));
			
			dados.setState(new Dados(6, 2, 1));
			dados.setState(new Dados(3, 3, 1));
		}
}
