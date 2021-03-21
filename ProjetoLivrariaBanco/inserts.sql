-- CLIENTES

INSERT INTO clientes(cli_nome_primeiro,cli_nome_meio,cli_nome_ultimo,cli_cpf)
VALUES ('Alan','Ferreira','Pereira','832.123.860-29');

INSERT INTO clientes(cli_nome_primeiro,cli_nome_meio,cli_nome_ultimo,cli_cpf)
VALUES ('Beatrice','','Alvares','182.423.260-28');

INSERT INTO clientes(cli_nome_primeiro,cli_nome_meio,cli_nome_ultimo,cli_cpf)
VALUES ('Akihiko','','Sanada','357.060.010-65');

INSERT INTO clientes(cli_nome_primeiro,cli_nome_ultimo,cli_cpf)
VALUES ('Sheldon','Cooper','202.143.140-19');

INSERT INTO clientes(cli_nome_primeiro,cli_nome_meio,cli_nome_ultimo,cli_cpf)
VALUES ('Aloisio','Pereira','Alfredo','122.183.160-59');


-- FUNCIONARIOS

INSERT INTO funcionarios(fun_nome_primeiro,fun_nome_meio,fun_nome_ultimo,fun_matricula,fun_cargo)
VALUES ('André','Daniel','Gomes','15224', 'Vendedor');

INSERT INTO funcionarios(fun_nome_primeiro,fun_nome_meio,fun_nome_ultimo,fun_matricula,fun_cargo)
VALUES ('Giovanna','Nucci','Matos','17224', 'Vendedor');

INSERT INTO funcionarios(fun_nome_primeiro,fun_nome_ultimo,fun_matricula,fun_cargo)
VALUES ('Bobby','Lee','15224', 'Vendedor');

INSERT INTO funcionarios(fun_nome_primeiro,fun_nome_meio,fun_nome_ultimo,fun_matricula,fun_cargo)
VALUES ('Vinicius','Oliveira','Stigliano','14284', 'Recepcionista');

INSERT INTO funcionarios(fun_nome_primeiro,fun_nome_meio,fun_nome_ultimo,fun_matricula,fun_cargo)
VALUES ('Tallita','Lopes','de Souza','12824', 'Segurança');

INSERT INTO funcionarios(fun_nome_primeiro,fun_nome_meio,fun_nome_ultimo,fun_matricula,fun_cargo)
VALUES ('Paula','','Constantina','15524', 'Balconista');

INSERT INTO funcionarios(fun_nome_primeiro,fun_nome_meio,fun_nome_ultimo,fun_matricula,fun_cargo)
VALUES ('Nilce','Pereira','Leon','12424', 'Atacadista');


-- CATEGORIAS

INSERT INTO categorias (cat_nome)
VALUES ('Acao');

INSERT INTO categorias (cat_nome)
VALUES ('Terror');

INSERT INTO categorias (cat_nome)
VALUES ('Aventura');

INSERT INTO categorias (cat_nome)
VALUES ('Drama');

INSERT INTO categorias (cat_nome)
VALUES ('Romance');

INSERT INTO categorias (cat_nome)
VALUES ('Contos');

INSERT INTO categorias (cat_nome)
VALUES ('Biografias');

INSERT INTO categorias (cat_nome)
VALUES ('Mangas');

INSERT INTO categorias (cat_nome)
VALUES ('Humor');

INSERT INTO categorias (cat_nome)
VALUES ('Ficcao Cientifica');

INSERT INTO categorias (cat_nome)
VALUES ('Poesia');

INSERT INTO categorias (cat_nome)
VALUES ('Infanto Juvenis');


-- EDITORAS

INSERT INTO editoras(edi_nome)
VALUES ('Pearson');

INSERT INTO editoras(edi_nome)
VALUES ('RELX Group');

INSERT INTO editoras(edi_nome)
VALUES ('ThomsonReuters');

INSERT INTO editoras(edi_nome)
VALUES ('Grupo Planeta');

INSERT INTO editoras(edi_nome)
VALUES ('Panini Comics');

INSERT INTO editoras(edi_nome)
VALUES ('JBC');

INSERT INTO editoras(edi_nome)
VALUES ('Aleph');

INSERT INTO editoras(edi_nome)
VALUES ('Globo Livros');

INSERT INTO editoras(edi_nome)
VALUES ('Black shawn');

INSERT INTO editoras(edi_nome)
VALUES ('Harper Collins');

INSERT INTO editoras(edi_nome)
VALUES ('Panda Books');

INSERT INTO editoras(edi_nome)
VALUES ('RNTVA Books');

INSERT INTO editoras(edi_nome)
VALUES ('Shueisha');

INSERT INTO editoras(edi_nome)
VALUES ('Kleet');

INSERT INTO editoras(edi_nome)
VALUES ('Kadokawa Publishing');

INSERT INTO editoras(edi_nome)
VALUES ('C.H.Beck');

INSERT INTO editoras(edi_nome)
VALUES ('Cornelsen');


-- AUTORES

INSERT INTO autores(aut_nome_primeiro,aut_nome_ultimo)
VALUES ('William','Shakespeare');

INSERT INTO autores(aut_nome_primeiro,aut_nome_ultimo)
VALUES ('Stephen','King');

INSERT INTO autores(aut_nome_primeiro,aut_nome_meio,aut_nome_ultimo)
VALUES ('Murasaki','Shikibu','Lady');

INSERT INTO autores(aut_nome_primeiro,aut_nome_ultimo)
VALUES ('José','de Alencar');

INSERT INTO autores(aut_nome_primeiro,aut_nome_ultimo)
VALUES ('Monteiro','Lobato');

INSERT INTO autores(aut_nome_primeiro,aut_nome_meio,aut_nome_ultimo)
VALUES ('Carlos','Drummond','De Andrade');

INSERT INTO autores(aut_nome_primeiro,aut_nome_ultimo)
VALUES ('Machado','de Assis');

INSERT INTO autores(aut_nome_primeiro,aut_nome_ultimo)
VALUES ('Miguel','de Cervantes');

INSERT INTO autores(aut_nome_primeiro,aut_nome_meio,aut_nome_ultimo)
VALUES ('Joanne','Jo','Rowling');

INSERT INTO autores(aut_nome_primeiro,aut_nome_ultimo)
VALUES ('Tite','Kubo');

INSERT INTO autores(aut_nome_primeiro,aut_nome_meio,aut_nome_ultimo)
VALUES ('Neil','deGrasse','Tyson');

INSERT INTO autores(aut_nome_primeiro,aut_nome_ultimo)
VALUES ('Carl','Sagan');

INSERT INTO autores(aut_nome_primeiro,aut_nome_ultimo)
VALUES ('Mauricio','de Souza');

INSERT INTO autores(aut_nome_primeiro,aut_nome_meio,aut_nome_ultimo)
VALUES ('Everson','Alex','Zoio');


-- LIVROS

INSERT INTO livros (liv_titulo, liv_preco_unit, liv_tip_cap, liv_edi_id)
VALUES ('O ultimo Principe Brasileiro',29.99,'Dura',2);

INSERT INTO livros (liv_titulo, liv_preco_unit, liv_tip_cap, liv_edi_id)
VALUES ('Harry Potter e a camera secreta',49.99,'Dura',8);

INSERT INTO livros (liv_titulo, liv_preco_unit, liv_tip_cap, liv_edi_id)
VALUES ('Bleach e as aventuras alucinantes',19.99,'Mole',2);

INSERT INTO livros (liv_titulo, liv_preco_unit, liv_tip_cap, liv_edi_id)
VALUES ('Naruto e amigos em Konoha',14.99,'Mole',10);

INSERT INTO livros (liv_titulo, liv_preco_unit, liv_tip_cap, liv_edi_id)
VALUES ('Percy Jackson e o ladrão de raios',45.59,'Dura',5);

INSERT INTO livros (liv_titulo, liv_preco_unit, liv_tip_cap, liv_edi_id)
VALUES ('Cosmos',39.45,'Dura',6);

INSERT INTO livros (liv_titulo, liv_preco_unit, liv_tip_cap, liv_edi_id)
VALUES ('A short history of nearly everthing',32.50,'Mole',9);

INSERT INTO livros (liv_titulo, liv_preco_unit, liv_tip_cap, liv_edi_id)
VALUES ('Breves respostas para grandes questoes',28.80,'Mole',1);

INSERT INTO livros (liv_titulo, liv_preco_unit, liv_tip_cap, liv_edi_id)
VALUES ('Dom Casmurro',21.90,'Dura',3);

INSERT INTO livros (liv_titulo, liv_preco_unit, liv_tip_cap, liv_edi_id)
VALUES ('Caçador X Caçador',18.40,'Mole',12);


-- VENDAS

INSERT INTO vendas (ven_detalhe_prod,ven_data,ven_valor_total,ven_icms_total,ven_fun_id,ven_cli_id)
VALUES ('Cosmos','03-MAR-2021',39.45,2.99,2,1);

INSERT INTO vendas (ven_detalhe_prod,ven_data,ven_valor_total,ven_icms_total,ven_fun_id,ven_cli_id)
VALUES ('Bleach e as aventuras alucinantes','02-MAR-2021',19.99,2.49,1,4);

INSERT INTO vendas (ven_detalhe_prod,ven_data,ven_valor_total,ven_icms_total,ven_fun_id,ven_cli_id)
VALUES ('Percy Jackson e o ladrão de raios','02-MAR-2021',45.59,1.99,1,4);

INSERT INTO vendas (ven_detalhe_prod,ven_data,ven_valor_total,ven_icms_total,ven_fun_id,ven_cli_id)
VALUES ('Harry Potter e a camera secreta','05-MAR-2021',19.99,1.20,1,2);

INSERT INTO vendas (ven_detalhe_prod,ven_data,ven_valor_total,ven_icms_total,ven_fun_id,ven_cli_id)
VALUES ('O ultimo Principe Brasileiro','05-MAR-2021',19.99,1.25,1,2);


-- VENDAS_LIVROS

INSERT INTO vendas_livros (vnl_liv_id,vnl_quant,vnl_preco,vnl_icms_unit)
VALUES (6,1,45.90,3.70);

INSERT INTO vendas_livros (vnl_liv_id,vnl_quant,vnl_preco,vnl_icms_unit)
VALUES (3,2,30,7.50);

INSERT INTO vendas_livros (vnl_liv_id,vnl_quant,vnl_preco,vnl_icms_unit)
VALUES (5,1,35.45,2.20);

INSERT INTO vendas_livros (vnl_liv_id,vnl_quant,vnl_preco,vnl_icms_unit)
VALUES (2,3,89.90,8.25);

INSERT INTO vendas_livros (vnl_liv_id,vnl_quant,vnl_preco,vnl_icms_unit)
VALUES (1,1,14.90,2.95);

-- CATEGORIAS_LIVROS

INSERT INTO categorias_livros 
VALUES (0,0);

-- AUTORES_LIVROS

INSERT INTO autores_livros 
VALUES (0,0);

-- SELECTS

select * from clientes;
select * from funcionarios;
select * from autores;
select * from editoras;
select * from categorias;
select * from livros;
select * from vendas;
select * from vendas_livros;
select * from categorias_livros;
select * from autores_livros;