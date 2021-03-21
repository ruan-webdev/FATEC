package exercicioStrategy;

public enum TipoFrete {
		
		NORMAL {
			public Frete obterFrete() {
				return new Normal();
			}
		},
		
		SEDEX {
			public Frete obterFrete() {
				return new Sedex();
		   }
		},
		
		SEDEX10 {

			@Override
			public Frete obterFrete() {
	
				return new Sedex10();
			}
		
		};
		
public abstract Frete obterFrete();
	
}

