#include <iostream>   // Para std::cout e std::cerr
#include <fstream>    // Para std::ifstream
#include <string>     // Para std::string (opcional)

int main() {
    std::ifstream file;  // Objeto de entrada de arquivo (input file stream)
    std::string filename = "C:\\Users\\20241en20268\\Documents\\GabrielRamos_LP\\codes\\pratica08\\test_file.txt";  // Nome do arquivo

    file.open(filename);  // Abre o arquivo para leitura

    // Verifica se o arquivo foi aberto com sucesso
    if (!file.is_open()) {
        std::cerr << "Erro ao abrir o arquivo." << std::endl;
        return 1;  // Retorna código de erro
    }

    char character;

    // Lê caractere por caractere até o final do arquivo
    while (file.get(character)) {
        // Exibe cada caractere em uma nova linha
        std::cout << character << std::endl;
    }

    file.close();  // Fecha o arquivo

    return 0;  // Programa terminou com sucesso
}
