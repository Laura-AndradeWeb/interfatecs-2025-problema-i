# Problema I - A Nonna vai?
**Maratona InterFatecs 2025 - 1ª Fase**

## Descrição
Dorothy e Dagmar sorteiam bolinhas numeradas de 1 a 30. Quem tirar o maior
número decide o programa do fim de semana. Se a soma dos dois números for
maior que 40, a Nonna Bina vai junto.

## Regras
- Dorothy maior e soma > 40: **DOROTHY DECIDE E A NONNA VAI**
- Dorothy maior e soma <= 40: **DOROTHY DECIDE**
- Dagmar maior e soma > 40: **DAGMAR DECIDE E A NONNA VAI**
- Dagmar maior e soma <= 40: **DAGMAR DECIDE**

## Entrada
- Primeira linha: inteiro Q (quantidade de sorteios)
- 2Q linhas seguintes: valor de Dorothy e valor de Dagmar (um por linha)

## Saída
Para cada par de valores: a mensagem correspondente à decisão

## Exemplo
**Entrada:**
```
4
23
12
26
20
12
23
20
26
```

**Saída:**
```
DOROTHY DECIDE
DOROTHY DECIDE E A NONNA VAI
DAGMAR DECIDE
DAGMAR DECIDE E A NONNA VAI
```

## Compilar e executar
```
gcc anonnavai.c -o anonnavai
./anonnavai < entrada.txt
```
