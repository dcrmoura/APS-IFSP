#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Disciplina {
public:
    int id;
    string nome;
    string descricao;
};

class Turma {
public:
    int id;
    string semestre;
    int idDisciplina;
    int idProfessor;
    vector<int> idAlunos;
};

class Aluno {
public:
    int id;
    vector<int> idDisciplinas;
    void login() {}
    void logout() {}
    void listaProfessores() {}
    void listaDisciplinasPorCurso() {}
    void listaCursos() {}
};

class Professor {
public:
    vector<int> idTurmas;
    void listaAlunosPorTurma() {}
    void listaTurmas() {}
    void gerenciaTurma() {}
};

class Administrador {
public:
    void gerenciaProfessor() {}
    void gerenciaAluno() {}
    void gerenciaDisciplina() {}
    void gerenciaCurso() {}
};

class InterfaceUsuario {
public:
    void mostrarMenu() {}
};

class GerenciadorDados {
public:
    void gerenciar() {}
};

class Participacao {
public:
    int idAluno;
    int idDisciplina;
    vector<float> notas;
    float frequencia;
};

class Curso {
public:
    int id;
    string nome;
    string descricao;
    vector<int> idDisciplinas;
};

int main() {
    // Exemplo de utilização
    Disciplina disciplina;
    disciplina.id = 1;
    disciplina.nome = "Matemática";
    disciplina.descricao = "Curso de Matemática básica";

    Turma turma;
    turma.id = 1;
    turma.semestre = "2024/1";
    turma.idDisciplina = 1;
    turma.idProfessor = 1;
    turma.idAlunos.push_back(1);
    turma.idAlunos.push_back(2);

    Aluno aluno;
    aluno.id = 1;
    aluno.idDisciplinas.push_back(1);

    return 0;
}
