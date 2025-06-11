'''

Program: YAML_py

Author: Gabriel Vitor Amaral

Date: 04/06/2025

Description: this script reads a YAML file and loads its content into a Python data structure.

License: [CC BY]

'''
import yaml  # Importa a biblioteca PyYAML para manipulação de arquivos YAML

def carregar_yaml(caminho_arquivo):
    # Abre o arquivo YAML no modo leitura com codificação UTF-8
    with open(caminho_arquivo, 'r', encoding='utf-8') as arquivo:
        # Carrega o conteúdo do arquivo YAML em uma estrutura de dados Python (dict, list, etc.)
        dados = yaml.safe_load(arquivo)
    # Retorna os dados estruturados
    return dados

# Exemplo de uso:
if __name__ == "__main__":
    caminho = 'example.yaml'  # Define o caminho do arquivo YAML a ser lido
    dados_estruturados = carregar_yaml(caminho)  # Chama a função para carregar o YAML
    print(dados_estruturados)  # Exibe os dados carregados