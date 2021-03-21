package exercicioStrategyDogs;

public class StrategyDogs {

	public static void main(String[] args) {
			PincherDog pincher = new PincherDog();
			DobbermannDog dobbermann = new DobbermannDog();
			PastorAlemaoDog pastorAlemao = new PastorAlemaoDog();
			SchnauzerDog schnauzer = new SchnauzerDog();
			ChouChouDog chouchou = new ChouChouDog();
			
			pincher.MostrarCachorro();
			pincher.performarLatido();
			pincher.performarPulo();
			System.out.println("");
			dobbermann.MostrarCachorro();
			dobbermann.performarLatido();
			dobbermann.performarPulo();
			System.out.println("");
			pastorAlemao.MostrarCachorro();
			pastorAlemao.performarLatido();
			pastorAlemao.performarPulo();
			System.out.println("");
			schnauzer.MostrarCachorro();
			schnauzer.performarLatido();
			schnauzer.performarPulo();
			System.out.println("");
			chouchou.MostrarCachorro();
			chouchou.performarLatido();
			chouchou.setComportamentoLatir(new LatirBrincadeira());
			chouchou.performarLatido();
	}

}
