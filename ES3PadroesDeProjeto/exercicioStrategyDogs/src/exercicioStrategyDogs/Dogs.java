package exercicioStrategyDogs;

public abstract class Dogs {
	ComportamentoLatir comportamentoLatir;
	ComportamentoPular comportamentoPular;
	
	public Dogs() {	
	}
	
	public void setComportamentoLatir(ComportamentoLatir cl) {
		comportamentoLatir = cl;
	}
	
	public void setComportamentoFalar(ComportamentoPular cp){
		comportamentoPular = cp;
	}
	
	abstract void MostrarCachorro();
	
	public void performarLatido() {
		comportamentoLatir.latir();
	}
	
	public void performarPulo() {
		comportamentoPular.pular();
	}
	
	public void comer() {
		System.out.println("Todos os cachorros se alimentam");
	}
	
}
