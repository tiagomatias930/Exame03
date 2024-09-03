# 📝 Exame 03 - 42 Luanda

Bem-vindo ao repositório do **Exame 03** da 42 Luanda! 🎓 Este projeto é uma avaliação prática que testa suas habilidades em C, com foco em dois dos principais exercícios do currículo da 42: `get_next_line` e `ft_printf`. 🌟

## 🚀 Descrição do Projeto

Este repositório contém as implementações das funções `get_next_line` e `ft_printf`, que são componentes essenciais para manipulação de strings e formatação de saída em C. Esses projetos são fundamentais para o desenvolvimento de habilidades avançadas na linguagem C e são frequentemente usados como base para projetos futuros.

### 🧩 get_next_line
- **Descrição**: A função `get_next_line` lê uma linha de um file descriptor (FD) por vez. É uma ferramenta essencial para manipulação de arquivos, leitura de entradas do usuário, entre outras aplicações.
- **Desafios**: Manipular buffers de forma eficiente, garantir que a memória seja gerenciada corretamente e lidar com diferentes finalizações de leitura (EOF).

### 🖨️ ft_printf
- **Descrição**: `ft_printf` é uma versão personalizada da função `printf` da biblioteca padrão do C. Este projeto ensina a formatar strings de maneira complexa, lidar com diferentes tipos de dados e entender profundamente a manipulação de va_args.
- **Desafios**: Implementar formatações de saída, suporte para múltiplos especificadores (`%d`, `%s`, `%p`, etc.) e garantir que a função opere de maneira eficiente e correta.

## 📂 Estrutura do Repositório

- **`get_next_line/`**: Contém os arquivos fonte da implementação do `get_next_line`.
  - `get_next_line.c`
  - `get_next_line_utils.c`
  - `get_next_line.h`
  
- **`ft_printf/`**: Contém os arquivos fonte da implementação do `ft_printf`.
  - `ft_printf.c`
  - `ft_printf_utils.c`
  - `ft_printf.h`

## 🛠️ Compilação e Execução

Para compilar e testar as funções, você pode usar o `Makefile` incluído em cada diretório. Siga as instruções abaixo:

### get_next_line
```bash
cd get_next_line
make
