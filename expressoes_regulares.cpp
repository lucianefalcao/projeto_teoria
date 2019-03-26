#include <iostream>
#include <regex>
#include <string>

using namespace std;

/**Verifica se o número de CPF é válido 
 * Se for válido, escreve a mensagem CPF Válido
 * Se não for válido, escreve a mensagem CPF não válido **/
void CPFValidacao(string str){

    // Especifica o padrão do CPF 3 dígitos, ponto, 3 dígitos, hífen, 2 dígitos 
    regex cpf("[[:d:]]{3} . [[:d:]]{3} - [[:d:]]{2}");

    //Verifica se o CPF passado é válido
    if(regex_match(str, cpf)){
        cout << "CPF Válido!" << endl;
    }
    else{
        cout << "CPF não válido" << endl;
    }
}

/**Verifica se o número de telefone é válido 
 * Se for válido, escreve a mensagem Telefone Válido
 * Se não for válido, escreve a mensagem telefone não válido **/
void NumeroTel(string str){

    // Especifica o padrão do telefone 4 ou 5 dígitos, hífen, 4 dígitos
    regex num("[[:d:]]{4,5} - [[:d:]]{4}");

    //Verifica se o número passado é válido
    if(regex_match(str, num)){
        cout << "Telefone Válido!" << endl;
    }
    else{
        cout << "Telefone não válido" << endl;
    }
}

/**Verifica se o email é válido 
 * Se for válido, escreve a mensagem Email Válido
 * Se não for válido, escreve a mensagem Email não válido **/
void EmailValido(string str){

    // Especifica o padrão do email 1 ou mais dígitos, "@", domínio, ".com", ".br" ou ".org"
    regex email("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(com|br|org))");
    
    //Verifica se o email passado é válido
    if(regex_match(str, email)){
        cout << "Email Válido!" << endl;
    }
    else{
        cout << "Email não válido" << endl;
    }

}

/**Verifica se o email é válido 
 * Se for válido, escreve a mensagem Email Válido
 * Se não for válido, escreve a mensagem Email não válido **/
void URLValida(string str){

    // Especifica o padrão de uma url: wwww, ponto, domínio, ".com", ".br" ou ".org"
    regex url("(w){3}(\\.)(\\w*)(\\.(com|br|org))");
    
    //Verifica se a url passada é válido
    if(regex_match(str, url)){
        cout << "URL Válida!" << endl;
    }
    else{
        cout << "URL não válida" << endl;
    }

}

int main(){

    string str;

    while(true){

        cin >> str;

        //CPFValidacao(str);
        //NumeroTel(str);
        //EmailValido(str);
        URLValida(str);
    }

    return 0;
}