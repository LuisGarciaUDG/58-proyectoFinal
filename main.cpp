/*Programa 58 proyecto final

Solicitud de empleo, utilizar estructuras, funciones sin parametros

Autor: Garcia Rodriguez Luis Alberto
N° de lista 11
fecha: 10 de mayo del 2015
*/


#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <string>

using namespace std;

struct solicitudes
{
    struct datosP
    {
        string generales [21];
    }dp;

    struct saludyhabit
    {
        string salud [10];
    }sadyh;

    struct documentacion
    {
        string dumentos[5];
    }doc;

    struct dtfamilia
    {
        string dfamili[4];
    }dtfam;

    struct estudios
    {
        string estudio[6];
    }est;

    struct conocimientos
    {
        string conocim[5];
    }cono;

    struct empleo
    {
        string emple[9];
    }emp;

    struct referencias
    {
        string referen[5];
    }refe;

    struct economicos
    {
        string economic[16];
    }econ;

}solicitud[5];

int cont=0;

void capturar()
{
    system ("cls");
    if (cont<5){

        cout<<"\n\tSolicitud de empleo\n\n";
        cout<<"\n\tDatos generales\n\n";

        cout<<"\tNombre:              "; cin>>solicitud[cont].dp.generales[0]; cin.ignore();
        cout<<"\tApellido paterno:    "; cin>>solicitud[cont].dp.generales[1]; cin.ignore();
        cout<<"\tApellido materno:    "; cin>>solicitud[cont].dp.generales[2]; cin.ignore();
        cout<<"\tC.U.R.P. :           "; cin>>solicitud[cont].dp.generales[3]; cin.ignore();
        cout<<"\tEstado civil:        "; cin>>solicitud[cont].dp.generales[4]; cin.ignore();
        cout<<"\tDomicilio:           "; cin>>solicitud[cont].dp.generales[5]; cin.ignore();
        cout<<"\tColonia:             "; cin>>solicitud[cont].dp.generales[6]; cin.ignore();
        cout<<"\tCodigo postal:       "; cin>>solicitud[cont].dp.generales[7]; cin.ignore();
        cout<<"\tTelefono:            "; cin>>solicitud[cont].dp.generales[8]; cin.ignore();
        cout<<"\tReligion:            "; cin>>solicitud[cont].dp.generales[9]; cin.ignore();
        cout<<"\tLugar de nacimiento: "; cin>>solicitud[cont].dp.generales[10]; cin.ignore();
        cout<<"\tFecha de nacimiento: "; cin>>solicitud[cont].dp.generales[11]; cin.ignore();
        cout<<"\tSexo:                "; cin>>solicitud[cont].dp.generales[12]; cin.ignore();
        cout<<"\tEdad:                "; cin>>solicitud[cont].dp.generales[13]; cin.ignore();
        cout<<"\tNacionalidad:        "; cin>>solicitud[cont].dp.generales[14]; cin.ignore();
        cout<<"\tVive usted con:      "; cin>>solicitud[cont].dp.generales[15]; cin.ignore();
        cout<<"\tEstatura:            "; cin>>solicitud[cont].dp.generales[16]; cin.ignore();
        cout<<"\tPeso:                "; cin>>solicitud[cont].dp.generales[17]; cin.ignore();
        cout<<"\tDependientes:        "; cin>>solicitud[cont].dp.generales[18]; cin.ignore();
        cout<<"\tPuesto deseado:      "; cin>>solicitud[cont].dp.generales[19]; cin.ignore();
        cout<<"\tSueldo deseado:      "; cin>>solicitud[cont].dp.generales[20]; cin.ignore();

        cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

        cout<<"\n\tSolicitud de empleo\n\n";
        cout<<"\n\tEstado de salud y habitos personales\n\n";

        cout<<"\tEstado de salud actual?                    "; cin>>solicitud[cont].sadyh.salud[0]; cin.ignore();
        cout<<"\tFalta con frecuencia al trabajo?           "; cin>>solicitud[cont].sadyh.salud[1]; cin.ignore();
        cout<<"\tPadece alguna enfermeda cronica?           "; cin>>solicitud[cont].sadyh.salud[2]; cin.ignore();
        cout<<"\tCuantas faltas ha tenido por enfermedad?   "; cin>>solicitud[cont].sadyh.salud[3]; cin.ignore();
        cout<<"\tAcostumbra ser puntual?                    "; cin>>solicitud[cont].sadyh.salud[4]; cin.ignore();
        cout<<"\tFue usted cumplido en sus funciones?       "; cin>>solicitud[cont].sadyh.salud[5]; cin.ignore();
        cout<<"\tHa tenido problemas con sus superiores?    "; cin>>solicitud[cont].sadyh.salud[6]; cin.ignore();
        cout<<"\tPractica algun deporte?                    "; cin>>solicitud[cont].sadyh.salud[7]; cin.ignore();
        cout<<"\tPertenece a algun club social o deportivo? "; cin>>solicitud[cont].sadyh.salud[8]; cin.ignore();
        cout<<"\tTiene alguna aficion fuera del trabajo?    "; cin>>solicitud[cont].sadyh.salud[9]; cin.ignore();

        cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

        cout<<"\n\tSolicitud de empleo\n\n";
        cout<<"\n\tDocumentacion\n\n";

        cout<<"\tR.F.C. :                  "; cin>>solicitud[cont].doc.dumentos[0]; cin.ignore();
        cout<<"\tI.M.S.S :                 "; cin>>solicitud[cont].doc.dumentos[1]; cin.ignore();
        cout<<"\tCartilla militar:         "; cin>>solicitud[cont].doc.dumentos[2]; cin.ignore();
        cout<<"\tPasaporte:                "; cin>>solicitud[cont].doc.dumentos[3]; cin.ignore();
        cout<<"\tLicencia (clas. y num.) : "; cin>>solicitud[cont].doc.dumentos[4]; cin.ignore();

        cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

        cout<<"\n\tSolicitud de empleo\n\n";
        cout<<"\n\tDatos familiares\n\n";

        cout<<"\tPadre:                  "; cin>>solicitud[cont].dtfam.dfamili[0]; cin.ignore();
        cout<<"\tMadre:                  "; cin>>solicitud[cont].dtfam.dfamili[1]; cin.ignore();
        cout<<"\tEsposo(a):              "; cin>>solicitud[cont].dtfam.dfamili[2]; cin.ignore();
        cout<<"\tNombre de los hijos:    "; cin>>solicitud[cont].dtfam.dfamili[3]; cin.ignore();

        cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

        cout<<"\n\tSolicitud de empleo\n\n";
        cout<<"\n\tEstudios realizados\n\n";

        cout<<"\tPrimaria:                         "; cin>>solicitud[cont].est.estudio[0]; cin.ignore();
        cout<<"\tSecundaria:                       "; cin>>solicitud[cont].est.estudio[1]; cin.ignore();
        cout<<"\tPreparatoria o vocacional:        "; cin>>solicitud[cont].est.estudio[2]; cin.ignore();
        cout<<"\tProfesional:                      "; cin>>solicitud[cont].est.estudio[3]; cin.ignore();
        cout<<"\tComercial u otras:                "; cin>>solicitud[cont].est.estudio[4]; cin.ignore();
        cout<<"\tEstudios que efectua actualmente: "; cin>>solicitud[cont].est.estudio[5]; cin.ignore();

        cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

        cout<<"\n\tSolicitud de empleo\n\n";
        cout<<"\n\tConocimientos generales\n\n";

        cout<<"\tIdiomas que domina:                    "; cin>>solicitud[cont].cono.conocim[0]; cin.ignore();
        cout<<"\tFunciones de oficina que domina:       "; cin>>solicitud[cont].cono.conocim[1]; cin.ignore();
        cout<<"\tMaquinas de oficina que sepa manejar:  "; cin>>solicitud[cont].cono.conocim[2]; cin.ignore();
        cout<<"\tMaquinas de taller que sepa manejar:   "; cin>>solicitud[cont].cono.conocim[3]; cin.ignore();
        cout<<"\tOtros trabajos o funciones que domine: "; cin>>solicitud[cont].cono.conocim[4]; cin.ignore();

        cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

        cout<<"\n\tSolicitud de empleo\n\n";
        cout<<"\n\tEmpleo actual o anterior\n\n";

        cout<<"\tTiempo que presto sus servicios:  "; cin>>solicitud[cont].emp.emple[0]; cin.ignore();
        cout<<"\tEmpresa:                          "; cin>>solicitud[cont].emp.emple[1]; cin.ignore();
        cout<<"\tDomicilio:                        "; cin>>solicitud[cont].emp.emple[2]; cin.ignore();
        cout<<"\tTelefono:                         "; cin>>solicitud[cont].emp.emple[3]; cin.ignore();
        cout<<"\tPuesto:                           "; cin>>solicitud[cont].emp.emple[4]; cin.ignore();
        cout<<"\tSueldo:                           "; cin>>solicitud[cont].emp.emple[5]; cin.ignore();
        cout<<"\tMotivo de separacion:             "; cin>>solicitud[cont].emp.emple[6]; cin.ignore();
        cout<<"\tNombre de su jefe:                "; cin>>solicitud[cont].emp.emple[7]; cin.ignore();
        cout<<"\tPuesto de su jefe:                "; cin>>solicitud[cont].emp.emple[8]; cin.ignore();

        cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

        cout<<"\n\tSolicitud de empleo\n\n";
        cout<<"\n\tReferencias personales\n\n";

        cout<<"\tNombre:              "; cin>>solicitud[cont].refe.referen[0]; cin.ignore();
        cout<<"\tDomicilio:           "; cin>>solicitud[cont].refe.referen[1]; cin.ignore();
        cout<<"\tTelefono:            "; cin>>solicitud[cont].refe.referen[2]; cin.ignore();
        cout<<"\tOcupacion:           "; cin>>solicitud[cont].refe.referen[3]; cin.ignore();
        cout<<"\tTiempo de conocerlo: "; cin>>solicitud[cont].refe.referen[4]; cin.ignore();

        cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

        cout<<"\n\tSolicitud de empleo\n\n";
        cout<<"\n\tDatos economicos\n\n";

        cout<<"\tComo supo de este empleo?                  "; cin>>solicitud[cont].econ.economic[0]; cin.ignore();
        cout<<"\tTiene parientes en esta empresa?           "; cin>>solicitud[cont].econ.economic[1]; cin.ignore();
        cout<<"\tHa estado afianzado?                       "; cin>>solicitud[cont].econ.economic[2]; cin.ignore();
        cout<<"\tHa estado afiliado a algun sindicato?      "; cin>>solicitud[cont].econ.economic[3]; cin.ignore();
        cout<<"\tTiene seguro de vida?                      "; cin>>solicitud[cont].econ.economic[4]; cin.ignore();
        cout<<"\tPuede usted viajar?                        "; cin>>solicitud[cont].econ.economic[5]; cin.ignore();
        cout<<"\tCambiaria de lugar de residencia?          "; cin>>solicitud[cont].econ.economic[6]; cin.ignore();
        cout<<"\tTiene otros ingresos?                      "; cin>>solicitud[cont].econ.economic[7]; cin.ignore();
        cout<<"\tSu conyuge trabaja?                        "; cin>>solicitud[cont].econ.economic[8]; cin.ignore();
        cout<<"\tVive en casa propia?                       "; cin>>solicitud[cont].econ.economic[9]; cin.ignore();
        cout<<"\tPaga renta?                                "; cin>>solicitud[cont].econ.economic[10]; cin.ignore();
        cout<<"\tTiene automovil propio?                    "; cin>>solicitud[cont].econ.economic[11]; cin.ignore();
        cout<<"\tTiene deudas?                              "; cin>>solicitud[cont].econ.economic[12]; cin.ignore();
        cout<<"\tCuanto abona mensualmente?                 "; cin>>solicitud[cont].econ.economic[13]; cin.ignore();
        cout<<"\tA cuanto ascienden sus gastos mensuales?   "; cin>>solicitud[cont].econ.economic[14]; cin.ignore();
        cout<<"\tFecha en que puede presentarse a trabajar? "; cin>>solicitud[cont].econ.economic[15]; cin.ignore();

        cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

        cont++;
    }
    else{
        cout<<"\n\tNo hay espacio disponible..."; system ("pause");
    }
}

void mostrar()
{
    system ("cls");
    if (cont!=0){

        for (int i=0; i<cont; i++){

        cout<<"\n\tSolicitud de empleo\n\n";
        cout<<"\n\tDatos generales\n\n";

        cout<<"\tNombre:              "<<solicitud[i].dp.generales[0]<<"\n";
        cout<<"\tApellido paterno:    "<<solicitud[i].dp.generales[1]<<"\n";
        cout<<"\tApellido materno:    "<<solicitud[i].dp.generales[2]<<"\n";
        cout<<"\tC.U.R.P. :           "<<solicitud[i].dp.generales[3]<<"\n";
        cout<<"\tEstado civil:        "<<solicitud[i].dp.generales[4]<<"\n";
        cout<<"\tDomicilio:           "<<solicitud[i].dp.generales[5]<<"\n";
        cout<<"\tColonia:             "<<solicitud[i].dp.generales[6]<<"\n";
        cout<<"\tCodigo postal:       "<<solicitud[i].dp.generales[7]<<"\n";
        cout<<"\tTelefono:            "<<solicitud[i].dp.generales[8]<<"\n";
        cout<<"\tReligion:            "<<solicitud[i].dp.generales[9]<<"\n";
        cout<<"\tLugar de nacimiento: "<<solicitud[i].dp.generales[10]<<"\n";
        cout<<"\tFecha de nacimiento: "<<solicitud[i].dp.generales[11]<<"\n";
        cout<<"\tSexo:                "<<solicitud[i].dp.generales[12]<<"\n";
        cout<<"\tEdad:                "<<solicitud[i].dp.generales[13]<<"\n";
        cout<<"\tNacionalidad:        "<<solicitud[i].dp.generales[14]<<"\n";
        cout<<"\tVive usted con:      "<<solicitud[i].dp.generales[15]<<"\n";
        cout<<"\tEstatura:            "<<solicitud[i].dp.generales[16]<<"\n";
        cout<<"\tPeso:                "<<solicitud[i].dp.generales[17]<<"\n";
        cout<<"\tDependientes:        "<<solicitud[i].dp.generales[18]<<"\n";
        cout<<"\tPuesto deseado:      "<<solicitud[i].dp.generales[19]<<"\n";
        cout<<"\tSueldo deseado:      "<<solicitud[i].dp.generales[20]<<"\n";

        cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

        cout<<"\n\tSolicitud de empleo\n\n";
        cout<<"\n\tEstado de salud y habitos personales\n\n";

        cout<<"\tEstado de salud actual?                    "<<solicitud[i].sadyh.salud[0]<<"\n";
        cout<<"\tFalta con frecuencia al trabajo?           "<<solicitud[i].sadyh.salud[1]<<"\n";
        cout<<"\tPadece alguna enfermeda cronica?           "<<solicitud[i].sadyh.salud[2]<<"\n";
        cout<<"\tCuantas faltas ha tenido por enfermedad?   "<<solicitud[i].sadyh.salud[3]<<"\n";
        cout<<"\tAcostumbra ser puntual?                    "<<solicitud[i].sadyh.salud[4]<<"\n";
        cout<<"\tFue usted cumplido en sus funciones?       "<<solicitud[i].sadyh.salud[5]<<"\n";
        cout<<"\tHa tenido problemas con sus superiores?    "<<solicitud[i].sadyh.salud[6]<<"\n";
        cout<<"\tPractica algun deporte?                    "<<solicitud[i].sadyh.salud[7]<<"\n";
        cout<<"\tPertenece a algun club social o deportivo? "<<solicitud[i].sadyh.salud[8]<<"\n";
        cout<<"\tTiene alguna aficion fuera del trabajo?    "<<solicitud[i].sadyh.salud[9]<<"\n";

        cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

        cout<<"\n\tSolicitud de empleo\n\n";
        cout<<"\n\tDocumentacion\n\n";

        cout<<"\tR.F.C. :                  "<<solicitud[i].doc.dumentos[0]<<"\n";
        cout<<"\tI.M.S.S :                 "<<solicitud[i].doc.dumentos[1]<<"\n";
        cout<<"\tCartilla militar:         "<<solicitud[i].doc.dumentos[2]<<"\n";
        cout<<"\tPasaporte:                "<<solicitud[i].doc.dumentos[3]<<"\n";
        cout<<"\tLicencia (clas. y num.) : "<<solicitud[i].doc.dumentos[4]<<"\n";

        cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

        cout<<"\n\tSolicitud de empleo\n\n";
        cout<<"\n\tDatos familiares\n\n";

        cout<<"\tPadre:                  "<<solicitud[i].dtfam.dfamili[0]<<"\n";
        cout<<"\tMadre:                  "<<solicitud[i].dtfam.dfamili[1]<<"\n";
        cout<<"\tEsposo(a):              "<<solicitud[i].dtfam.dfamili[2]<<"\n";
        cout<<"\tNombre de los hijos:    "<<solicitud[i].dtfam.dfamili[3]<<"\n";

        cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

        cout<<"\n\tSolicitud de empleo\n\n";
        cout<<"\n\tEstudios realizados\n\n";

        cout<<"\tPrimaria:                         "<<solicitud[i].est.estudio[0]<<"\n";
        cout<<"\tSecundaria:                       "<<solicitud[i].est.estudio[1]<<"\n";
        cout<<"\tPreparatoria o vocacional:        "<<solicitud[i].est.estudio[2]<<"\n";
        cout<<"\tProfesional:                      "<<solicitud[i].est.estudio[3]<<"\n";
        cout<<"\tComercial u otras:                "<<solicitud[i].est.estudio[4]<<"\n";
        cout<<"\tEstudios que efectua actualmente: "<<solicitud[i].est.estudio[5]<<"\n";

        cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

        cout<<"\n\tSolicitud de empleo\n\n";
        cout<<"\n\tConocimientos generales\n\n";

        cout<<"\tIdiomas que domina:                    "<<solicitud[i].cono.conocim[0]<<"\n";
        cout<<"\tFunciones de oficina que domina:       "<<solicitud[i].cono.conocim[1]<<"\n";
        cout<<"\tMaquinas de oficina que sepa manejar:  "<<solicitud[i].cono.conocim[2]<<"\n";
        cout<<"\tMaquinas de taller que sepa manejar:   "<<solicitud[i].cono.conocim[3]<<"\n";
        cout<<"\tOtros trabajos o funciones que domine: "<<solicitud[i].cono.conocim[4]<<"\n";

        cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

        cout<<"\n\tSolicitud de empleo\n\n";
        cout<<"\n\tEmpleo actual o anterior\n\n";

        cout<<"\tTiempo que presto sus servicios:  "<<solicitud[i].emp.emple[0]<<"\n";
        cout<<"\tEmpresa:                          "<<solicitud[i].emp.emple[1]<<"\n";
        cout<<"\tDomicilio:                        "<<solicitud[i].emp.emple[2]<<"\n";
        cout<<"\tTelefono:                         "<<solicitud[i].emp.emple[3]<<"\n";
        cout<<"\tPuesto:                           "<<solicitud[i].emp.emple[4]<<"\n";
        cout<<"\tSueldo:                           "<<solicitud[i].emp.emple[5]<<"\n";
        cout<<"\tMotivo de separacion:             "<<solicitud[i].emp.emple[6]<<"\n";
        cout<<"\tNombre de su jefe:                "<<solicitud[i].emp.emple[7]<<"\n";
        cout<<"\tPuesto de su jefe:                "<<solicitud[i].emp.emple[8]<<"\n";

        cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

        cout<<"\n\tSolicitud de empleo\n\n";
        cout<<"\n\tReferencias personales\n\n";

        cout<<"\tNombre:              "<<solicitud[i].refe.referen[0]<<"\n";
        cout<<"\tDomicilio:           "<<solicitud[i].refe.referen[1]<<"\n";
        cout<<"\tTelefono:            "<<solicitud[i].refe.referen[2]<<"\n";
        cout<<"\tOcupacion:           "<<solicitud[i].refe.referen[3]<<"\n";
        cout<<"\tTiempo de conocerlo: "<<solicitud[i].refe.referen[4]<<"\n";

        cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

        cout<<"\n\tSolicitud de empleo\n\n";
        cout<<"\n\tDatos economicos\n\n";

        cout<<"\tComo supo de este empleo?                  "<<solicitud[i].econ.economic[0]<<"\n";
        cout<<"\tTiene parientes en esta empresa?           "<<solicitud[i].econ.economic[1]<<"\n";
        cout<<"\tHa estado afianzado?                       "<<solicitud[i].econ.economic[2]<<"\n";
        cout<<"\tHa estado afiliado a algun sindicato?      "<<solicitud[i].econ.economic[3]<<"\n";
        cout<<"\tTiene seguro de vida?                      "<<solicitud[i].econ.economic[4]<<"\n";
        cout<<"\tPuede usted viajar?                        "<<solicitud[i].econ.economic[5]<<"\n";
        cout<<"\tCambiaria de lugar de residencia?          "<<solicitud[i].econ.economic[6]<<"\n";
        cout<<"\tTiene otros ingresos?                      "<<solicitud[i].econ.economic[7]<<"\n";
        cout<<"\tSu conyuge trabaja?                        "<<solicitud[i].econ.economic[8]<<"\n";
        cout<<"\tVive en casa propia?                       "<<solicitud[i].econ.economic[9]<<"\n";
        cout<<"\tPaga renta?                                "<<solicitud[i].econ.economic[10]<<"\n";
        cout<<"\tTiene automovil propio?                    "<<solicitud[i].econ.economic[11]<<"\n";
        cout<<"\tTiene deudas?                              "<<solicitud[i].econ.economic[12]<<"\n";
        cout<<"\tCuanto abona mensualmente?                 "<<solicitud[i].econ.economic[13]<<"\n";
        cout<<"\tA cuanto ascienden sus gastos mensuales?   "<<solicitud[i].econ.economic[14]<<"\n";
        cout<<"\tFecha en que puede presentarse a trabajar? "<<solicitud[i].econ.economic[15]<<"\n";

        cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

        }//fin del for
    }//fin del if
    else{
        cout<<"\n\tEl arreglo esta vacio...\n\n\t"; system ("pause");
    }

}

void buscar()
{
    system ("cls");
        bool band=false;
    if (cont!=0){

        string busc;

        cout<<"\n\n\tDame el nombre a buscar: ";
        cin>>busc;

        for (int i=0; i<cont; i++){

            if (busc==solicitud[i].dp.generales[0]){

            cout<<"\n\tSolicitud de empleo\n\n";
            cout<<"\n\tDatos generales\n\n";

            cout<<"\tNombre:              "<<solicitud[i].dp.generales[0]<<"\n";
            cout<<"\tApellido paterno:    "<<solicitud[i].dp.generales[1]<<"\n";
            cout<<"\tApellido materno:    "<<solicitud[i].dp.generales[2]<<"\n";
            cout<<"\tC.U.R.P. :           "<<solicitud[i].dp.generales[3]<<"\n";
            cout<<"\tEstado civil:        "<<solicitud[i].dp.generales[4]<<"\n";
            cout<<"\tDomicilio:           "<<solicitud[i].dp.generales[5]<<"\n";
            cout<<"\tColonia:             "<<solicitud[i].dp.generales[6]<<"\n";
            cout<<"\tCodigo postal:       "<<solicitud[i].dp.generales[7]<<"\n";
            cout<<"\tTelefono:            "<<solicitud[i].dp.generales[8]<<"\n";
            cout<<"\tReligion:            "<<solicitud[i].dp.generales[9]<<"\n";
            cout<<"\tLugar de nacimiento: "<<solicitud[i].dp.generales[10]<<"\n";
            cout<<"\tFecha de nacimiento: "<<solicitud[i].dp.generales[11]<<"\n";
            cout<<"\tSexo:                "<<solicitud[i].dp.generales[12]<<"\n";
            cout<<"\tEdad:                "<<solicitud[i].dp.generales[13]<<"\n";
            cout<<"\tNacionalidad:        "<<solicitud[i].dp.generales[14]<<"\n";
            cout<<"\tVive usted con:      "<<solicitud[i].dp.generales[15]<<"\n";
            cout<<"\tEstatura:            "<<solicitud[i].dp.generales[16]<<"\n";
            cout<<"\tPeso:                "<<solicitud[i].dp.generales[17]<<"\n";
            cout<<"\tDependientes:        "<<solicitud[i].dp.generales[18]<<"\n";
            cout<<"\tPuesto deseado:      "<<solicitud[i].dp.generales[19]<<"\n";
            cout<<"\tSueldo deseado:      "<<solicitud[i].dp.generales[20]<<"\n";

            cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

            cout<<"\n\tSolicitud de empleo\n\n";
            cout<<"\n\tEstado de salud y habitos personales\n\n";

            cout<<"\tEstado de salud actual?                    "<<solicitud[i].sadyh.salud[0]<<"\n";
            cout<<"\tFalta con frecuencia al trabajo?           "<<solicitud[i].sadyh.salud[1]<<"\n";
            cout<<"\tPadece alguna enfermeda cronica?           "<<solicitud[i].sadyh.salud[2]<<"\n";
            cout<<"\tCuantas faltas ha tenido por enfermedad?   "<<solicitud[i].sadyh.salud[3]<<"\n";
            cout<<"\tAcostumbra ser puntual?                    "<<solicitud[i].sadyh.salud[4]<<"\n";
            cout<<"\tFue usted cumplido en sus funciones?       "<<solicitud[i].sadyh.salud[5]<<"\n";
            cout<<"\tHa tenido problemas con sus superiores?    "<<solicitud[i].sadyh.salud[6]<<"\n";
            cout<<"\tPractica algun deporte?                    "<<solicitud[i].sadyh.salud[7]<<"\n";
            cout<<"\tPertenece a algun club social o deportivo? "<<solicitud[i].sadyh.salud[8]<<"\n";
            cout<<"\tTiene alguna aficion fuera del trabajo?    "<<solicitud[i].sadyh.salud[9]<<"\n";

            cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

            cout<<"\n\tSolicitud de empleo\n\n";
            cout<<"\n\tDocumentacion\n\n";

            cout<<"\tR.F.C. :                  "<<solicitud[i].doc.dumentos[0]<<"\n";
            cout<<"\tI.M.S.S :                 "<<solicitud[i].doc.dumentos[1]<<"\n";
            cout<<"\tCartilla militar:         "<<solicitud[i].doc.dumentos[2]<<"\n";
            cout<<"\tPasaporte:                "<<solicitud[i].doc.dumentos[3]<<"\n";
            cout<<"\tLicencia (clas. y num.) : "<<solicitud[i].doc.dumentos[4]<<"\n";

            cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

            cout<<"\n\tSolicitud de empleo\n\n";
            cout<<"\n\tDatos familiares\n\n";

            cout<<"\tPadre:                  "<<solicitud[i].dtfam.dfamili[0]<<"\n";
            cout<<"\tMadre:                  "<<solicitud[i].dtfam.dfamili[1]<<"\n";
            cout<<"\tEsposo(a):              "<<solicitud[i].dtfam.dfamili[2]<<"\n";
            cout<<"\tNombre de los hijos:    "<<solicitud[i].dtfam.dfamili[3]<<"\n";

            cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

            cout<<"\n\tSolicitud de empleo\n\n";
            cout<<"\n\tEstudios realizados\n\n";

            cout<<"\tPrimaria:                         "<<solicitud[i].est.estudio[0]<<"\n";
            cout<<"\tSecundaria:                       "<<solicitud[i].est.estudio[1]<<"\n";
            cout<<"\tPreparatoria o vocacional:        "<<solicitud[i].est.estudio[2]<<"\n";
            cout<<"\tProfesional:                      "<<solicitud[i].est.estudio[3]<<"\n";
            cout<<"\tComercial u otras:                "<<solicitud[i].est.estudio[4]<<"\n";
            cout<<"\tEstudios que efectua actualmente: "<<solicitud[i].est.estudio[5]<<"\n";

            cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

            cout<<"\n\tSolicitud de empleo\n\n";
            cout<<"\n\tConocimientos generales\n\n";

            cout<<"\tIdiomas que domina:                    "<<solicitud[i].cono.conocim[0]<<"\n";
            cout<<"\tFunciones de oficina que domina:       "<<solicitud[i].cono.conocim[1]<<"\n";
            cout<<"\tMaquinas de oficina que sepa manejar:  "<<solicitud[i].cono.conocim[2]<<"\n";
            cout<<"\tMaquinas de taller que sepa manejar:   "<<solicitud[i].cono.conocim[3]<<"\n";
            cout<<"\tOtros trabajos o funciones que domine: "<<solicitud[i].cono.conocim[4]<<"\n";

            cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

            cout<<"\n\tSolicitud de empleo\n\n";
            cout<<"\n\tEmpleo actual o anterior\n\n";

            cout<<"\tTiempo que presto sus servicios:  "<<solicitud[i].emp.emple[0]<<"\n";
            cout<<"\tEmpresa:                          "<<solicitud[i].emp.emple[1]<<"\n";
            cout<<"\tDomicilio:                        "<<solicitud[i].emp.emple[2]<<"\n";
            cout<<"\tTelefono:                         "<<solicitud[i].emp.emple[3]<<"\n";
            cout<<"\tPuesto:                           "<<solicitud[i].emp.emple[4]<<"\n";
            cout<<"\tSueldo:                           "<<solicitud[i].emp.emple[5]<<"\n";
            cout<<"\tMotivo de separacion:             "<<solicitud[i].emp.emple[6]<<"\n";
            cout<<"\tNombre de su jefe:                "<<solicitud[i].emp.emple[7]<<"\n";
            cout<<"\tPuesto de su jefe:                "<<solicitud[i].emp.emple[8]<<"\n";

            cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

            cout<<"\n\tSolicitud de empleo\n\n";
            cout<<"\n\tReferencias personales\n\n";

            cout<<"\tNombre:              "<<solicitud[i].refe.referen[0]<<"\n";
            cout<<"\tDomicilio:           "<<solicitud[i].refe.referen[1]<<"\n";
            cout<<"\tTelefono:            "<<solicitud[i].refe.referen[2]<<"\n";
            cout<<"\tOcupacion:           "<<solicitud[i].refe.referen[3]<<"\n";
            cout<<"\tTiempo de conocerlo: "<<solicitud[i].refe.referen[4]<<"\n";

            cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

            cout<<"\n\tSolicitud de empleo\n\n";
            cout<<"\n\tDatos economicos\n\n";

            cout<<"\tComo supo de este empleo?                  "<<solicitud[i].econ.economic[0]<<"\n";
            cout<<"\tTiene parientes en esta empresa?           "<<solicitud[i].econ.economic[1]<<"\n";
            cout<<"\tHa estado afianzado?                       "<<solicitud[i].econ.economic[2]<<"\n";
            cout<<"\tHa estado afiliado a algun sindicato?      "<<solicitud[i].econ.economic[3]<<"\n";
            cout<<"\tTiene seguro de vida?                      "<<solicitud[i].econ.economic[4]<<"\n";
            cout<<"\tPuede usted viajar?                        "<<solicitud[i].econ.economic[5]<<"\n";
            cout<<"\tCambiaria de lugar de residencia?          "<<solicitud[i].econ.economic[6]<<"\n";
            cout<<"\tTiene otros ingresos?                      "<<solicitud[i].econ.economic[7]<<"\n";
            cout<<"\tSu conyuge trabaja?                        "<<solicitud[i].econ.economic[8]<<"\n";
            cout<<"\tVive en casa propia?                       "<<solicitud[i].econ.economic[9]<<"\n";
            cout<<"\tPaga renta?                                "<<solicitud[i].econ.economic[10]<<"\n";
            cout<<"\tTiene automovil propio?                    "<<solicitud[i].econ.economic[11]<<"\n";
            cout<<"\tTiene deudas?                              "<<solicitud[i].econ.economic[12]<<"\n";
            cout<<"\tCuanto abona mensualmente?                 "<<solicitud[i].econ.economic[13]<<"\n";
            cout<<"\tA cuanto ascienden sus gastos mensuales?   "<<solicitud[i].econ.economic[14]<<"\n";
            cout<<"\tFecha en que puede presentarse a trabajar? "<<solicitud[i].econ.economic[15]<<"\n";

            cout<<"\n\n\t\t\t"; system ("pause"); system ("cls");

            band=true;
            }//fin del if de comparacion
        }//fin del for
    }//fin del if
    else {
        cout<<"\n\tEl arrelo esta vacio...\n\n\t"; system ("pause");
    }
    if(band==false and cont!=0){
        cout<<"\n\tEl dato es inexistente...\n\n\t"; system ("pause");
    }
}

void eliminar()
{
    system ("cls");
    bool band=false;
    if (cont!=0){

        string busc;

        cout<<"\n\n\tDame el nombre a buscar para eliminar: ";
        cin>>busc;

        for (int i=0; i<cont; i++){

            if (busc==solicitud[i].dp.generales[0]){

            for (int x=0; x<=20; x++){
            solicitud[i].dp.generales[x]="";
            }

            for (int x=0; x<=9; x++){
            solicitud[i].sadyh.salud[x]="";
            }

            for (int x=0; x<=4; x++){
            solicitud[i].doc.dumentos[x]="";
            }

            for (int x=0; x<=3; x++){
            solicitud[i].dtfam.dfamili[x]="";
            }

            for (int x=0; x<=5; x++){
            solicitud[i].est.estudio[x]="";
            }

            for (int x=0; x<=4; x++){
            solicitud[i].cono.conocim[x]="";
            }

            for (int x=0; x<=8; x++){
            solicitud[i].emp.emple[x]="";
            }

            for (int x=0; x<=4; x++){
            solicitud[i].refe.referen[x]="";
            }

            for (int x=0; x<=15; x++){
            solicitud[i].econ.economic[x]="";
            }

            cont --;

            cout<<"\n\n\t\t\tEliminando";
            for (int t=0;t<10; t++){
                Sleep(500);
                cout<<".";
            }
            Sleep(2000);

            band=true;
            }//fin del if de comparacion
        }//fin del for
    }//fin del if

    else {
        cout<<"\n\tEl arrelo esta vacio...\n\n\t"; system ("pause");
    }

    if(band==false and cont!=0){
        cout<<"\n\tEl dato es inexistente...\n\n\t"; system ("pause");
    }

}

int clase;

int main()
{
bool salir=false;
    do {

//system ("treasure.mp3");
system ("color f0");
system ("cls");cout<<"\n\tFECHA:\t";
system ("date /t");

cout<<"\t -----------------------------------"<<endl;
cout<<"\t!                                   !"<<endl;
cout<<"\t!        SOLICITUD DE EMPLEO        !"<<endl;
cout<<"\t!                                   !"<<endl;
cout<<"\t -----------------------------------"<<endl<<endl;

cout<<"\t************************************"<<endl;
cout<<"\t*                                  *"<<endl;
cout<<"\t*             Menu                 *"<<endl;
cout<<"\t*                                  *"<<endl;
cout<<"\t* 1.- Capturar                     *"<<endl;
cout<<"\t* 2.- Mostrar                      *"<<endl;
cout<<"\t* 3.- Buscar                       *"<<endl;
cout<<"\t* 4.- Eliminar                     *"<<endl;
cout<<"\t*                                  *"<<endl;
cout<<"\t* 5.- Salir                        *"<<endl;
cout<<"\t*                                  *"<<endl;
cout<<"\t************************************"<<endl;
cout<<"\t*                                  *"<<endl;
cout<<"\t* Elija una opcion:                * ";
cin>>clase;

switch (clase)

{
case 1:
    capturar();
    break;

case 2:
    mostrar();
    break;

case 3:
    buscar();
    break;

case 4:
    eliminar();
    break;

case 5:
    salir=true;
    break;

default :
    cout<<"\n\n\t\tHa elegido una opcion inexistente...\n\n\t\t\t\t\t"; system ("pause"); system ("cls");
    break;

}//fin del switc principal

}while (salir==false);

cout<<"\n\n\t\t\t\t\a";
system ("pause");
    return 0;
}
