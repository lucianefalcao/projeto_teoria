#include <iostream>
#include <regex>
#include <string>

using namespace std;

/**Verifica se o número de CPF é válido 
 * Se for válido, escreve a mensagem CPF Válido
 * Se não for válido, escreve a mensagem CPF não válido **/
void CPFValidacao(string str){

    cout << "Digite o CPF" << endl;

    cin >> str;

    // Especifica o padrão do CPF 3 dígitos, ponto, 3 dígitos, hífen, 2 dígitos 
    regex cpf("[[:d:]]{3}.[[:d:]]{3}-[[:d:]]{2}");

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

    cout << "Digite o telefone" << endl;
    
    cin >> str;

    // Especifica o padrão do telefone 4 ou 5 dígitos, hífen, 4 dígitos
    regex num("[[:d:]]{4,5}-[[:d:]]{4}");

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

    cout << "Digite o email" << endl;
    
    cin >> str;

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

    cout << "Digite a URL" << endl;
    
    cin >> str;

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
    int caso;

    cout << "Escolha o que você deseja validar" << endl << "Opção 1: CPF" << endl
        << "Opção 2: Número de Telefone" << endl << "Opção 3: Email" << endl << "Opção 4: URl" << endl;
     

        cin >> caso;

        switch (caso)
        {
            case 1:
                CPFValidacao(str);
                break;
            case 2:
                NumeroTel(str);
                break;
            case 3:
                EmailValido(str);
                break;      
            case 4:
                URLValida(str);
                break;    
            default:
                break;
        }
        
        //CPFValidacao(str);
        //NumeroTel(str);
        //EmailValido(str);
        //URLValida(str);

    return 0;
}