📦 CVC Turismo - Sistema de Gerenciamento de Pacotes de Viagem
Este projeto é um sistema desenvolvido em linguagem C, com foco em operações de cadastro, busca, alteração, remoção e listagem de pacotes de viagem, simulando uma aplicação de turismo como a CVC.

O sistema trabalha com arquivos texto (pacotes.txt e indices.txt) para armazenamento dos dados, utilizando controle de posições em bytes para acesso rápido aos registros, sem necessidade de banco de dados.



🚀 Funcionalidades
🏷️ Cadastro de Pacotes: Inclui informações como ID, destino, data de saída, data de retorno e preço.

🔍 Busca de Pacotes: Consulta diretamente os dados no arquivo através do ID.

✍️ Modificação de Pacotes: Permite alterar qualquer informação do pacote.

❌ Remoção de Pacotes: Remove pacotes de forma lógica (reescrevendo o arquivo sem o registro).

📄 Listagem Ordenada: Exibe os pacotes ordenados por ID.

📑 Geração de Índices: Cria um arquivo indices.txt contendo os IDs dos pacotes e suas respectivas posições (em bytes) no arquivo pacotes.txt.



🗂️ Estrutura dos Arquivos
main.c → Função principal com menu e controle.

cabecalho.h → Arquivo de cabeçalho com as estruturas e protótipos.

Funções separadas:

funcaoinserirpacote.c

funcaobuscarpacote.c

funcaomodificarpacote.c

funcaoremoverpacote.c

funcaolistarpacotesordenados.c

funcaosalvarindices.c



💾 Armazenamento
pacotes.txt → Contém os dados dos pacotes no formato:
ID|Destino|DataSaida|DataRetorno|Preço

indices.txt → Contém os IDs e as posições em bytes dos registros no formato:
ID posição



⚙️ Tecnologias
Linguagem C

Manipulação de arquivos (fopen, fseek, ftell)

Operações básicas de ordenação e busca



🎯 Objetivo
Este projeto tem fins educacionais, sendo parte de atividades e estudos sobre Estruturas de Dados, manipulação de arquivos sequenciais e desenvolvimento de sistemas em linguagem C.



👥 Contato

[CARLOS SICSU] (carlosfnsicsu@gmail.com(mailto:carlosfnsicsu@gmail.com))

https://www.linkedin.com/in/carlos-sics%C3%BA-131980236/

[EMILLY MORAIS] (moraisemilly358@gmail.com(mailto:moraisemilly358@gmail.com))

http://linkedin.com/in/emilly-morais-bulcão-1a17bb2b2/



📚 Licença
Este projeto é de código aberto e está licenciado sob a licença MIT.
