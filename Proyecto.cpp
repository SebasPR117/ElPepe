#include <iostream>
#include <math.h>
#include <string>

using namespace std;

struct usuario
{
    string nombre;
    string apellido;
    float tel;
    string pais;
    float tar;
};

int main ()
{
    int a,b,c,d,e,f,g;
    usuario x[1];
    cout<<"Holi"<<endl;
    cout<<"Te damos la bienvenida a la libreria de Navarrete"<<endl;
    cout<<"Aqui podras buscar tus libros favoritos facil y rapido"<<endl;
    cout<<"Por el momento tenemos poco inventario, pero te podemos ayudar con nuestras categorias"<<endl;
    for(int k=0; k<1;)
    {
        cout<<"Desea registrarse en nuestra libreria?"<<endl;
        cout<<"1-Si"<<endl;
        cout<<"2-No"<<endl;
        cin>>a;
        switch (a)
        {
        case 1:
            for(int i=0; i<1;)
            {
                cout<<"Ingrese su nombre "<<endl;
                cin>>x[0].nombre;
                cout<<"Ingrese su primer apellido"<<endl;
                cin>>x[0].apellido;
                cout<<"Ingrese su numero de telefono"<<endl;
                cin>>x[0].tel;
                cout<<"Ingrese pais de residencia"<<endl;
                cin>>x[0].pais;
                cout<<"Ingrese su targeta de credito (especifique los 16 numeros, fecha de expiracion y cvv)"<<endl;
                cout<<"No usaremos su tergeta sin consentimiento"<<endl;
                cin>>x[0].tar;
                cout<<endl;
                cout<<x[0].nombre<<endl<<x[0].apellido<<endl<<x[0].tel<<endl<<x[0].pais<<endl<<x[0].tar<<endl;
                cout<<endl;
                for(int j=0; j<1;)
                {
                    cout<<"Son correctos sus datos? (No los podra cambiar mas adelante)"<<endl;
                    cout<<"1-Si"<<endl;
                    cout<<"2-No"<<endl;
                    cin>>b;
                    switch (b)
                    {
                    case 1:
                        i=1;
                        j=1;
                        break;
                    case 2:
                        cout<<"Ingrese nuevamente sus datos"<<endl;
                        j=1;
                        break;
                    default:
                        cout<<"Seleccion erronea"<<endl;
                        j=1;
                        break;
                    }
                }
            }
            k=1;
            break;
        case 2:
            cout<<"NECESITA REGISTRARSE PARA ENTRAR"<<endl;
            break;
        default:
            cout<<"Seleccion erronea"<<endl;
            break;
        }
    }
    cout<<endl;

    for(int i=0; i<1;)
    {
        cout<<"Como desea buscar su libro?"<<endl;
        cout<<"1-Por genero"<<endl;
        cout<<"2-Por autor"<<endl;
        cout<<"3-Por nombre"<<endl;
        cout<<"Cada busqueda cuesta 5 dolares, sera descontado de su targeta"<<endl;
        cin>>c;
        cout<<endl;
        switch (c)
        {
        case 1:
            for (int j=0; j<1;)
            {
                cout<<"Escoja el genero que guste"<<endl;
                cout<<"1-Terror"<<endl;
                cout<<"2-Drama"<<endl;
                cout<<"3-Romance"<<endl;
                cout<<"4-Suspenso"<<endl;
                cout<<"Descuento activo, solo se le cobraran 4.99 dolares por busqueda  "<<endl;
                cin>>d;
                cout<<endl;
                switch (d)
                {
                case 1:
                    for(int k=0; k<1;)
                    {
                        cout<<"1-It"<<endl;
                        cout<<"2-The shining"<<endl;
                        cin>>e;
                        cout<<endl;
                        switch (e)
                        {
                        case 1:
                            cout<<"Nombre: It"<<endl;
                            cout<<"Autor: Stephen King"<<endl;
                            cout<<"Fecha de publicacion: 15 septiembre de 1986"<<endl;
                            cout<<"Sinopsis:"<<endl;
                            cout<<"Varios ninos de una pequena ciudad del estado de Maine se alian para combatir a una entidad"<<endl;
                            cout<<"diabolica que adopta la forma de un payaso y desde hace mucho tiempo emerge cada 27 anos"<<endl;
                            cout<<"para saciarse de sangre infantil."<<endl;
                            cout<<endl;
                            for(int l=0; l<1;)
                            {
                                cout<<"1-Ver libro completo (costo $500 dolares)"<<endl;
                                cout<<"2-Ver biografia del autor (costo $30 dolares)"<<endl;
                                cout<<"3-Hacer otra busqueda"<<endl;
                                cout<<"4-Salir del programa (valor $100 dolares)"<<endl;
                                cin>>f;
                                cout<<endl;
                                switch (f)
                                {
                                case 1:
                                    cout<<"https://www.casadellibro.com/libro-it/9788497593793/873687"<<endl;
                                    cout<<endl;
                                    break;
                                case 2:
                                    cout<<"https://es.wikipedia.org/wiki/Stephen_King"<<endl;
                                    cout<<endl;
                                    break;
                                case 3:
                                    l=1;
                                    k=1;
                                    j=1;
                                    cout<<endl;
                                    break;
                                case 4:
                                    l=2;
                                    k=2;
                                    j=2;
                                    i=2;
                                    break;
                                default:
                                    cout<<"Seleccion erronea"<<endl;
                                    cout<<"Se le descontara 10 dolares"<<endl;
                                    cout<<endl;
                                    break;
                                }
                            }
                            break;
                        case 2:
                            cout<<"Nombre: The Shining"<<endl;
                            cout<<"Autor: Stephen King"<<endl;
                            cout<<"Fecha de publicacion: 28 de enero del 1977"<<endl;
                            cout<<"Sinopsis:"<<endl;
                            cout<<"Jack Torrance acepta una oferta de trabajo en un hotel de montana que se encuentra a 65 kilometros"<<endl;
                            cout<<"del pueblo más cercano. Ademas, las carreteras se encuentran cerradas al trafico "<<endl;
                            cout<<"por las fuertes nevadas del invierno. Pronto comenzaran a manifestarse espiritus y apariciones"<<endl;
                            cout<<"extranas. Es el propio hotel el que intenta controlar tanto a los vivos como a los muertos. Danny,"<<endl;
                            cout<<"el hijo de Jack tiene la capacidad de ver visiones sobre el pasado del hotel y de resistirse a su"<<endl;
                            cout<<"poder hipnotico. Es entonces cuando su padre comienza a enloquecer."<<endl;
                            cout<<endl;
                            for(int l=0; l<1;)
                            {
                                cout<<"1-Ver libro completo (costo $500 dolares)"<<endl;
                                cout<<"2-Ver biografia del autor (costo $30 dolares)"<<endl;
                                cout<<"3-Hacer otra busqueda"<<endl;
                                cout<<"4-Salir del programa (valor $100 dolares)"<<endl;
                                cout<<endl;
                                cin>>f;
                                switch (f)
                                {
                                case 1:
                                    cout<<"https://www.casadellibro.com/libro-el-resplandor/9788412094756/11245450"<<endl;
                                    cout<<endl;
                                    break;
                                case 2:
                                    cout<<"https://es.wikipedia.org/wiki/Stephen_King"<<endl;
                                    cout<<endl;
                                    break;
                                case 3:
                                    l=1;
                                    k=1;
                                    j=1;
                                    cout<<endl;
                                    break;
                                case 4:
                                    l=2;
                                    k=2;
                                    j=2;
                                    i=2;
                                    break;
                                default:
                                    cout<<"Seleccion erronea"<<endl;
                                    cout<<"Se le descontara 10 dolares"<<endl;
                                    cout<<endl;
                                    break;
                                }
                            
                            }
                            break;
                        default:
                            cout<<"Seleccion erronea"<<endl;
                            cout<<"Se le descontara 10 dolares"<<endl;
                            break;
                        }
                        break;
                    }
                    break;
                case 2:
                    for(int k=0; k<1;)
                    {
                        cout<<"1-La nina de la lista de Schindler"<<endl;
                        cout<<"2-Little Women"<<endl;
                        cin>>e;
                        cout<<endl;
                        switch (e)
                        {
                        case 1:
                            cout<<"Nombre: La nina de la lista de Schindler"<<endl;
                            cout<<"Autor: Stella Muller-Madej"<<endl;
                            cout<<"Fecha de publicacion: 1991"<<endl;
                            cout<<"Sinopsis:"<<endl;
                            cout<<"Estamos en 1939. Tengo nueve anos. Mis facciones son regulares, lo cual dicen que no abunda"<<endl;
                            cout<<"entre los judios. Mama es alta, esbelta y elegante. Nuestros conocidos "<<endl;
                            cout<<"dicen que se parece a Greta Garbo"<<endl;
                            cout<<endl;
                            for(int l=0; l<1;)
                            {
                                cout<<"1-Ver libro completo (costo $500 dolares)"<<endl;
                                cout<<"2-Ver biografia del autor (costo $30 dolares)"<<endl;
                                cout<<"3-Hacer otra busqueda"<<endl;
                                cout<<"4-Salir del programa (valor $100 dolares)"<<endl;
                                cin>>f;
                                cout<<endl;
                                switch (f)
                                {
                                case 1:
                                    cout<<"https://www.casadellibro.com/libro-la-nina-de-la-lista-de-schindler/9788427035591/1255962"<<endl;
                                    cout<<endl;
                                    break;
                                case 2:
                                    cout<<"Sin bibliografia"<<endl;
                                    cout<<endl;
                                    break;
                                case 3:
                                    l=1;
                                    k=1;
                                    j=1;
                                    cout<<endl;
                                    break;
                                case 4:
                                    l=2;
                                    k=2;
                                    j=2;
                                    i=2;
                                    break;
                                default:
                                    cout<<"Seleccion erronea"<<endl;
                                    cout<<"Se le descontara 10 dolares"<<endl;
                                    break;
                                }
                        
                            }
                            break;
                        case 2:
                            cout<<"Nombre: The litlle women"<<endl;
                            cout<<"Autor: Louisa May Alcott"<<endl;
                            cout<<"Fecha de publicacion: 30 de septiembre de 1868"<<endl;
                            cout<<"Sinopsis:"<<endl;
                            cout<<"La novela cuenta la historia de las hermanas March, cuatro jovencitas que vivian en "<<endl;
                            cout<<"un pueblo de Nueva Inglaterra mientras la guerra civil hacía estragos en toda America. Han pasado "<<endl;
                            cout<<"casi ciento cincuenta anos desde aquel lejano 1868, pero la complicidad de Meg, Beth, Amy y Jo "<<endl;
                            cout<<"con las demas mujeres no ha muerto."<<endl;
                            cout<<endl;
                            for(int l=0; l<1;)
                            {
                                cout<<"1-Ver libro completo (costo $500 dolares)"<<endl;
                                cout<<"2-Ver biografia del autor (costo $30 dolares)"<<endl;
                                cout<<"3-Hacer otra busqueda"<<endl;
                                cout<<"4-Salir del programa (valor $100 dolares)"<<endl;
                                cin>>f;
                                cout<<endl;
                                switch (f)
                                {
                                case 1:
                                    cout<<"https://www.casadellibro.com/libro-mujercitas/9788408216636/9788451"<<endl;
                                    cout<<endl;
                                    break;
                                case 2:
                                    cout<<"https://es.wikipedia.org/wiki/Louisa_May_Alcott#:~:text=Louisa%20May%20Alcott%20escribi%C3%B3%20relatos,la%20revista%20The%20Atlantic%20Monthly."<<endl;
                                    cout<<endl;
                                    break;
                                case 3:
                                    l=1;
                                    k=1;
                                    j=1;
                                    cout<<endl;
                                    break;
                                case 4:
                                    l=2;
                                    k=2;
                                    j=2;
                                    i=2;
                                    break;
                                default:
                                    cout<<"Seleccion erronea"<<endl;
                                    cout<<"Se le descontara 10 dolares"<<endl;
                                    break;
                                }
                            
                            }
                            break;
                        default:
                            cout<<"Seleccion erronea"<<endl;
                            cout<<"Se le descontara 10 dolares"<<endl;
                            cout<<endl;
                            break;
                        }
                        break;
                    }
                    break;
                case 3:
                    for(int k=0; k<1;)
                    {
                        cout<<"1-Pride and Prejudice:"<<endl;
                        cout<<"2-The Fault in Our Stars"<<endl;
                        cin>>e;
                        cout<<endl;
                        switch (e)
                        {
                        case 1:
                            cout<<"Nombre: Pride and Prejudice"<<endl;
                            cout<<"Autor: Jane Austen"<<endl;
                            cout<<"Fecha de publicacion: 28 de enero de 1813"<<endl;
                            cout<<"Sinopsis:"<<endl;
                            cout<<"Es una novela de desarrollo personal, en la que las dos figuras principales,"<<endl;
                            cout<<"Elizabeth Bennet y Fitzwilliam Darcy, cada uno a su manera y, no obstante, de forma muy"<<endl;
                            cout<<"parecida, deben madurar para superar algunas crisis y aprender de sus errores para poder encarar"<<endl;
                            cout<<"el futuro en comun, superando el orgullo de clase de Darcy y los prejuicios de Elizabeth hacia el."<<endl;
                            cout<<endl;
                            for(int l=0; l<1;)
                            {
                                cout<<"1-Ver libro completo (costo $500 dolares)"<<endl;
                                cout<<"2-Ver biografia del autor (costo $30 dolares)"<<endl;
                                cout<<"3-Hacer otra busqueda"<<endl;
                                cout<<"4-Salir del programa (valor $100 dolares)"<<endl;
                                cin>>f;
                                cout<<endl;
                                switch (f)
                                {
                                case 1:
                                    cout<<"https://www.casadellibro.com/libro-orgullo-y-prejuicio/9788467045642/2594995"<<endl;
                                    cout<<endl;
                                    break;
                                case 2:
                                    cout<<"https://es.wikipedia.org/wiki/Jane_Austen"<<endl;
                                    cout<<endl;
                                    break;
                                case 3:
                                    l=1;
                                    k=1;
                                    j=1;
                                    cout<<endl;
                                    break;
                                case 4:
                                    l=2;
                                    k=2;
                                    j=2;
                                    i=2;
                                    break;
                                default:
                                    cout<<"Seleccion erronea"<<endl;
                                    cout<<"Se le descontara 10 dolares"<<endl;
                                    cout<<endl;
                                    break;
                                }
                            
                            }
                            break;
                        case 2:
                            cout<<"Nombre: The Fault in Our Stars"<<endl;
                            cout<<"Autor: John Green"<<endl;
                            cout<<"Fecha de publicacion: 10 de enero de 2012"<<endl;
                            cout<<"Sinopsis:"<<endl;
                            cout<<"Novela escrita por John Green, narra el drama de amor melancolico que tienen que vivir,"<<endl;
                            cout<<"sentir y padecer dos jovenes condenados por el cancer, que les hara conocer"<<endl;
                            cout<<"tambien el amor ingenuo y cándido, la amistad sincera y espontanea, la idealizacion de los sueños"<<endl;
                            cout<<"y la afliccion y agobio de vivir una vida llena de sobresaltos por la angustia y la tragedia de padecer "<<endl;
                            cout<<"este mal y finalmente el dolor, la pena y el sufrimiento por la perdida del unico y verdadero amor."<<endl;
                            cout<<endl;
                            for(int l=0; l<1;)
                            {
                                cout<<"1-Ver libro completo (costo $500 dolares)"<<endl;
                                cout<<"2-Ver biografia del autor (costo $30 dolares)"<<endl;
                                cout<<"3-Hacer otra busqueda"<<endl;
                                cout<<"4-Salir del programa (valor $100 dolares)"<<endl;
                                cin>>f;
                                cout<<endl;
                                switch (f)
                                {
                                case 1:
                                    cout<<"https://www.casadellibro.com/libro-the-fault-in-our-stars/9780141345659/2250453"<<endl;
                                    cout<<endl;
                                    break;
                                case 2:
                                    cout<<"https://es.wikipedia.org/wiki/John_Green"<<endl;
                                    cout<<endl;
                                    break;
                                case 3:
                                    l=1;
                                    k=1;
                                    j=1;
                                    cout<<endl;
                                    break;
                                case 4:
                                    l=2;
                                    k=2;
                                    j=2;
                                    i=2;
                                    break;
                                default:
                                    cout<<"Seleccion erronea"<<endl;
                                    cout<<"Se le descontara 10 dolares"<<endl;
                                    cout<<endl;
                                    break;
                                }
                            
                            }
                            break;
                        default:
                            cout<<"Seleccion erronea"<<endl;
                            cout<<"Se le descontara 10 dolares"<<endl;
                            cout<<endl;
                            break;
                        }
                        break;
                    }
                    break;
                case 4:
                    for(int k=0; k<1;)
                    {
                        cout<<"1-The Girl on the Train"<<endl;
                        cout<<"2-the psicoanalist"<<endl;
                        cin>>e;
                        cout<<endl;
                        switch (e)
                        {
                        case 1:
                            cout<<"Nombre: The Girl on the Train"<<endl;
                            cout<<"Autor: Paula Hawkins"<<endl;
                            cout<<"Fecha de publicacion: 6 de enero de 2015"<<endl;
                            cout<<"Sinopsis:"<<endl;
                            cout<<"La protagonista, Rachel Watson, es una mujer deprimida. El divorcio de su exmarido le ha condenado al alcoholismo."<<endl;
                            cout<<"Todos los días toma en Londres el tren de las 8:04. En el trayecto siempre observa a una pareja que"<<endl;
                            cout<<"parece tiene una vida perfecta, pero un día ve algo y, la chica a la que ella llamaba Jess desaparece..."<<endl;
                            cout<<endl;
                            for(int l=0; l<1;)
                            {
                                cout<<"1-Ver libro completo (costo $500 dolares)"<<endl;
                                cout<<"2-Ver biografia del autor (costo $30 dolares)"<<endl;
                                cout<<"3-Hacer otra busqueda"<<endl;
                                cout<<"4-Salir del programa (valor $100 dolares)"<<endl;
                                cin>>f;
                                cout<<endl;
                                switch (f)
                                {
                                case 1:
                                    cout<<"https://www.casadellibro.com/libro-la-chica-del-tren/9788408141471/2544161"<<endl;
                                    cout<<endl;
                                    break;
                                case 2:
                                    cout<<"https://es.wikipedia.org/wiki/Paula_Hawkins"<<endl;
                                    cout<<endl;
                                    break;
                                case 3:
                                    l=1;
                                    k=1;
                                    j=1;
                                    cout<<endl;
                                    break;
                                case 4:
                                    l=2;
                                    k=2;
                                    j=2;
                                    i=2;
                                    break;
                                default:
                                    cout<<"Seleccion erronea"<<endl;
                                    cout<<"Se le descontara 10 dolares"<<endl;
                                    cout<<endl;
                                    break;
                                }
                            
                            }
                            break;
                        case 2:
                            cout<<"Nombre: The psicoanalist"<<endl;
                            cout<<"Autor: John Katzenbach"<<endl;
                            cout<<"Fecha de publicacion: 29 de enero de 2002"<<endl;
                            cout<<"Sinopsis:"<<endl;
                            cout<<"El doctor Frederick Ricky Starks es un psicoanalista estadounidense con una larga "<<endl;
                            cout<<"carrera a sus espaldas. El día de su 53.º aniversario, recibe la carta de un psicópata que firma como"<<endl;
                            cout<<"Rumplestiltskin y que al parecer lleva de por si el conocimiento de su vida rutinaria."<<endl;
                            cout<<endl;
                            for(int l=0; l<1;)
                            {
                                cout<<"1-Ver libro completo (costo $500 dolares)"<<endl;
                                cout<<"2-Ver biografia del autor (costo $30 dolares)"<<endl;
                                cout<<"3-Hacer otra busqueda"<<endl;
                                cout<<"4-Salir del programa (valor $100 dolares)"<<endl;
                                cin>>f;
                                cout<<endl;
                                switch (f)
                                {
                                case 1:
                                    cout<<"https://www.casadellibro.com/libro-el-psicoanalista/9788466665070/6769802"<<endl;
                                    cout<<endl;
                                    break;
                                case 2:
                                    cout<<"https://es.wikipedia.org/wiki/John_Katzenbach"<<endl;
                                    cout<<endl;
                                    break;
                                case 3:
                                    l=1;
                                    k=1;
                                    j=1;
                                    cout<<endl;
                                    break;
                                case 4:
                                    l=2;
                                    k=2;
                                    j=2;
                                    i=2;
                                    break;
                                default:
                                    cout<<"Seleccion erronea"<<endl;
                                    cout<<"Se le descontara 10 dolares"<<endl;
                                    cout<<endl;
                                    break;
                                }
                            
                            }
                            break;
                        default:
                            cout<<"Seleccion erronea"<<endl;
                            cout<<"Se le descontara 10 dolares"<<endl;
                            cout<<endl;
                            break;
                        }
                        break;
                    }
                    break;
                default:
                    break;
                }
                break;
            }
            break;
        case 2:
            for (int j=0; j<1;)
            {
                cout<<"Escoja el autor"<<endl;
                cout<<"1-Stephen King"<<endl;
                cout<<"2-Stella Muller-Madej"<<endl;
                cout<<"3-Louisa May Alcott"<<endl;
                cout<<"4-Jane Austen"<<endl;
                cout<<"5-John Green"<<endl;
                cout<<"6-Paula Hawkins"<<endl;
                cout<<"7-John Katzenbach"<<endl;
                cout<<"Descuento activo, solo se le cobraran 4.99 dolares por busqueda  "<<endl;
                cin>>d;
                cout<<endl;
                switch (d)
                {
                case 1:
                    for(int k=0; k<1;)
                    {
                        cout<<"1-It"<<endl;
                        cout<<"2-The shining"<<endl;
                        cin>>e;
                        cout<<endl;
                        switch (e)
                        {
                        case 1:
                            cout<<"Nombre: It"<<endl;
                            cout<<"Autor: Stephen King"<<endl;
                            cout<<"Fecha de publicacion: 15 septiembre de 1986"<<endl;
                            cout<<"Sinopsis:"<<endl;
                            cout<<"Varios ninos de una pequena ciudad del estado de Maine se alian para combatir a una entidad"<<endl;
                            cout<<"diabolica que adopta la forma de un payaso y desde hace mucho tiempo emerge cada 27 anos"<<endl;
                            cout<<"para saciarse de sangre infantil."<<endl;
                            cout<<endl;
                            for(int l=0; l<1;)
                            {
                                cout<<"1-Ver libro completo (costo $500 dolares)"<<endl;
                                cout<<"2-Ver biografia del autor (costo $30 dolares)"<<endl;
                                cout<<"3-Hacer otra busqueda"<<endl;
                                cout<<"4-Salir del programa (valor $100 dolares)"<<endl;
                                cin>>f;
                                cout<<endl;
                                switch (f)
                                {
                                case 1:
                                    cout<<"https://www.casadellibro.com/libro-it/9788497593793/873687"<<endl;
                                    cout<<endl;
                                    break;
                                case 2:
                                    cout<<"https://es.wikipedia.org/wiki/Stephen_King"<<endl;
                                    cout<<endl;
                                    break;
                                case 3:
                                    l=1;
                                    k=1;
                                    j=1;
                                    cout<<endl;
                                    break;
                                case 4:
                                    l=2;
                                    k=2;
                                    j=2;
                                    i=2;
                                    break;
                                default:
                                    cout<<"Seleccion erronea"<<endl;
                                    cout<<"Se le descontara 10 dolares"<<endl;
                                    cout<<endl;
                                    break;
                                }
                            }
                            break;
                        case 2:
                            cout<<"Nombre: The Shining"<<endl;
                            cout<<"Autor: Stephen King"<<endl;
                            cout<<"Fecha de publicacion: 28 de enero del 1977"<<endl;
                            cout<<"Sinopsis:"<<endl;
                            cout<<"Jack Torrance acepta una oferta de trabajo en un hotel de montana que se encuentra a 65 kilometros"<<endl;
                            cout<<"del pueblo más cercano. Ademas, las carreteras se encuentran cerradas al trafico "<<endl;
                            cout<<"por las fuertes nevadas del invierno. Pronto comenzaran a manifestarse espiritus y apariciones"<<endl;
                            cout<<"extranas. Es el propio hotel el que intenta controlar tanto a los vivos como a los muertos. Danny,"<<endl;
                            cout<<"el hijo de Jack tiene la capacidad de ver visiones sobre el pasado del hotel y de resistirse a su"<<endl;
                            cout<<"poder hipnotico. Es entonces cuando su padre comienza a enloquecer."<<endl;
                            cout<<endl;
                            for(int l=0; l<1;)
                            {
                                cout<<"1-Ver libro completo (costo $500 dolares)"<<endl;
                                cout<<"2-Ver biografia del autor (costo $30 dolares)"<<endl;
                                cout<<"3-Hacer otra busqueda"<<endl;
                                cout<<"4-Salir del programa (valor $100 dolares)"<<endl;
                                cout<<endl;
                                cin>>f;
                                switch (f)
                                {
                                case 1:
                                    cout<<"https://www.casadellibro.com/libro-el-resplandor/9788412094756/11245450"<<endl;
                                    cout<<endl;
                                    break;
                                case 2:
                                    cout<<"https://es.wikipedia.org/wiki/Stephen_King"<<endl;
                                    cout<<endl;
                                    break;
                                case 3:
                                    l=1;
                                    k=1;
                                    j=1;
                                    cout<<endl;
                                    break;
                                case 4:
                                    l=2;
                                    k=2;
                                    j=2;
                                    i=2;
                                    break;
                                default:
                                    cout<<"Seleccion erronea"<<endl;
                                    cout<<"Se le descontara 10 dolares"<<endl;
                                    cout<<endl;
                                    break;
                                }
                            
                            }
                            break;
                        default:
                            cout<<"Seleccion erronea"<<endl;
                            cout<<"Se le descontara 10 dolares"<<endl;
                            break;
                        }
                        break;
                    }
                    break;
                case 2:

                    for(int k=0; k<1;)
                    {
                        cout<<"1-La niña de la lista de Schindler"<<endl;
                        cin>>e;
                        cout<<endl;
                        switch (e)
                        {
                        case 1:
                            cout<<"Nombre: La niña de la lista de Schindler"<<endl;
                            cout<<"Autor: Stella Muller-Madej"<<endl;
                            cout<<"Fecha de publicacion: 1991"<<endl;
                            cout<<"Sinopsis:"<<endl;
                            cout<<"Estamos en 1939. Tengo nueve años. Mis facciones son regulares, lo cual dicen que no abunda"<<endl;
                            cout<<"entre los judios. Mama es alta, esbelta y elegante. Nuestros conocidos "<<endl;
                            cout<<"dicen que se parece a Greta Garbo"<<endl;
                            cout<<endl;
                            for(int l=0; l<1;)
                            {
                                cout<<"1-Ver libro completo (costo $500 dolares)"<<endl;
                                cout<<"2-Ver biografia del autor (costo $30 dolares)"<<endl;
                                cout<<"3-Hacer otra busqueda"<<endl;
                                cout<<"4-Salir del programa (valor $100 dolares)"<<endl;
                                cin>>f;
                                cout<<endl;
                                switch (f)
                                {
                                case 1:
                                    cout<<"https://www.casadellibro.com/libro-la-nina-de-la-lista-de-schindler/9788427035591/1255962"<<endl;
                                    cout<<endl;
                                    break;
                                case 2:
                                    cout<<"Sin bibliografia"<<endl;
                                    cout<<endl;
                                    break;
                                case 3:
                                    l=1;
                                    k=1;
                                    j=1;
                                    cout<<endl;
                                    break;
                                case 4:
                                    l=2;
                                    k=2;
                                    j=2;
                                    i=2;
                                    break;
                                default:
                                    cout<<"Seleccion erronea"<<endl;
                                    cout<<"Se le descontara 10 dolares"<<endl;
                                    break;
                                }
                        
                            }
                            break;
                        default:
                            cout<<"Seleccion erronea"<<endl;
                            cout<<"Se le descontara 10 dolares"<<endl;
                            cout<<endl;
                            break;
                        }
                    }
                    break;
                case 3:

                    for(int k=0; k<1;)
                    {
                        cout<<"1-Little Women"<<endl;
                        cin>>e;
                        cout<<endl;
                        switch (e)
                        {
                        case 1:
                            cout<<"Nombre: The litlle women"<<endl;
                            cout<<"Autor: Louisa May Alcott"<<endl;
                            cout<<"Fecha de publicacion: 30 de septiembre de 1868"<<endl;
                            cout<<"Sinopsis:"<<endl;
                            cout<<"La novela cuenta la historia de las hermanas March, cuatro jovencitas que vivian en "<<endl;
                            cout<<"un pueblo de Nueva Inglaterra mientras la guerra civil hacía estragos en toda America. Han pasado "<<endl;
                            cout<<"casi ciento cincuenta anos desde aquel lejano 1868, pero la complicidad de Meg, Beth, Amy y Jo "<<endl;
                            cout<<"con las demas mujeres no ha muerto."<<endl;
                            cout<<endl;
                            for(int l=0; l<1;)
                            {
                                cout<<"1-Ver libro completo (costo $500 dolares)"<<endl;
                                cout<<"2-Ver biografia del autor (costo $30 dolares)"<<endl;
                                cout<<"3-Hacer otra busqueda"<<endl;
                                cout<<"4-Salir del programa (valor $100 dolares)"<<endl;
                                cin>>f;
                                cout<<endl;
                                switch (f)
                                {
                                case 1:
                                    cout<<"https://www.casadellibro.com/libro-mujercitas/9788408216636/9788451"<<endl;
                                    cout<<endl;
                                    break;
                                case 2:
                                    cout<<"https://es.wikipedia.org/wiki/Louisa_May_Alcott#:~:text=Louisa%20May%20Alcott%20escribi%C3%B3%20relatos,la%20revista%20The%20Atlantic%20Monthly."<<endl;
                                    cout<<endl;
                                    break;
                                case 3:
                                    l=1;
                                    k=1;
                                    j=1;
                                    cout<<endl;
                                    break;
                                case 4:
                                    l=2;
                                    k=2;
                                    j=2;
                                    i=2;
                                    break;
                                default:
                                    cout<<"Seleccion erronea"<<endl;
                                    cout<<"Se le descontara 10 dolares"<<endl;
                                    break;
                                }
                            
                            }
                            break;
                        default:
                            cout<<"Seleccion erronea"<<endl;
                            cout<<"Se le descontara 10 dolares"<<endl;
                            cout<<endl;
                            break;
                        }
                        break;
                    
                    }
                    break;
                case 4:
                    for(int k=0; k<1;)
                    {
                        cout<<"1-Pride and Prejudice:"<<endl;
                        cin>>e;
                        cout<<endl;
                        switch (e)
                        {
                        case 1:
                            cout<<"Nombre: Pride and Prejudice"<<endl;
                            cout<<"Autor: Jane Austen"<<endl;
                            cout<<"Fecha de publicacion: 28 de enero de 1813"<<endl;
                            cout<<"Sinopsis:"<<endl;
                            cout<<"Es una novela de desarrollo personal, en la que las dos figuras principales,"<<endl;
                            cout<<"Elizabeth Bennet y Fitzwilliam Darcy, cada uno a su manera y, no obstante, de forma muy"<<endl;
                            cout<<"parecida, deben madurar para superar algunas crisis y aprender de sus errores para poder encarar"<<endl;
                            cout<<"el futuro en comun, superando el orgullo de clase de Darcy y los prejuicios de Elizabeth hacia el."<<endl;
                            cout<<endl;
                            for(int l=0; l<1;)
                            {
                                cout<<"1-Ver libro completo (costo $500 dolares)"<<endl;
                                cout<<"2-Ver biografia del autor (costo $30 dolares)"<<endl;
                                cout<<"3-Hacer otra busqueda"<<endl;
                                cout<<"4-Salir del programa (valor $100 dolares)"<<endl;
                                cin>>f;
                                cout<<endl;
                                switch (f)
                                {
                                case 1:
                                    cout<<"https://www.casadellibro.com/libro-orgullo-y-prejuicio/9788467045642/2594995"<<endl;
                                    cout<<endl;
                                    break;
                                case 2:
                                    cout<<"https://es.wikipedia.org/wiki/Jane_Austen"<<endl;
                                    cout<<endl;
                                    break;
                                case 3:
                                    l=1;
                                    k=1;
                                    j=1;
                                    cout<<endl;
                                    break;
                                case 4:
                                    l=2;
                                    k=2;
                                    j=2;
                                    i=2;
                                    break;
                                default:
                                    cout<<"Seleccion erronea"<<endl;
                                    cout<<"Se le descontara 10 dolares"<<endl;
                                    cout<<endl;
                                    break;
                                }
                            
                            }
                            break;
                        default:
                            cout<<"Seleccion erronea"<<endl;
                            cout<<"Se le descontara 10 dolares"<<endl;
                            cout<<endl;
                            break;
                        }
                    }
                    break;
                case 5:

                    for(int k=0; k<1;)
                    {
                        cout<<"1-The Fault in Our Stars"<<endl;
                        cin>>e;
                        cout<<endl;
                        switch (e)
                        {
                        case 1:
                            cout<<"Nombre: The Fault in Our Stars"<<endl;
                            cout<<"Autor: John Green"<<endl;
                            cout<<"Fecha de publicacion: 10 de enero de 2012"<<endl;
                            cout<<"Sinopsis:"<<endl;
                            cout<<"Novela escrita por John Green, narra el drama de amor melancolico que tienen que vivir,"<<endl;
                            cout<<"sentir y padecer dos jovenes condenados por el cancer, que les hara conocer"<<endl;
                            cout<<"tambien el amor ingenuo y cándido, la amistad sincera y espontanea, la idealizacion de los sueños"<<endl;
                            cout<<"y la afliccion y agobio de vivir una vida llena de sobresaltos por la angustia y la tragedia de padecer "<<endl;
                            cout<<"este mal y finalmente el dolor, la pena y el sufrimiento por la perdida del unico y verdadero amor."<<endl;
                            cout<<endl;
                            for(int l=0; l<1;)
                            {
                                cout<<"1-Ver libro completo (costo $500 dolares)"<<endl;
                                cout<<"2-Ver biografia del autor (costo $30 dolares)"<<endl;
                                cout<<"3-Hacer otra busqueda"<<endl;
                                cout<<"4-Salir del programa (valor $100 dolares)"<<endl;
                                cin>>f;
                                cout<<endl;
                                switch (f)
                                {
                                case 1:
                                    cout<<"https://www.casadellibro.com/libro-the-fault-in-our-stars/9780141345659/2250453"<<endl;
                                    cout<<endl;
                                    break;
                                case 2:
                                    cout<<"https://es.wikipedia.org/wiki/John_Green"<<endl;
                                    cout<<endl;
                                    break;
                                case 3:
                                    l=1;
                                    k=1;
                                    j=1;
                                    cout<<endl;
                                    break;
                                case 4:
                                    l=2;
                                    k=2;
                                    j=2;
                                    i=2;
                                    break;
                                default:
                                    cout<<"Seleccion erronea"<<endl;
                                    cout<<"Se le descontara 10 dolares"<<endl;
                                    cout<<endl;
                                    break;
                                }
                            
                            }
                            break;
                        default:
                            cout<<"Seleccion erronea"<<endl;
                            cout<<"Se le descontara 10 dolares"<<endl;
                            cout<<endl;
                            break;
                        }
                    }
                    break;
                case 6:
                    for(int k=0; k<1;)
                    {
                        cout<<"1-The Girl on the Train"<<endl;
                        cin>>e;
                        cout<<endl;
                        switch (e)
                        {
                        case 1:
                            cout<<"Nombre: The Girl on the Train"<<endl;
                            cout<<"Autor: Paula Hawkins"<<endl;
                            cout<<"Fecha de publicacion: 6 de enero de 2015"<<endl;
                            cout<<"Sinopsis:"<<endl;
                            cout<<"La protagonista, Rachel Watson, es una mujer deprimida. El divorcio de su exmarido le ha condenado al alcoholismo."<<endl;
                            cout<<"Todos los días toma en Londres el tren de las 8:04. En el trayecto siempre observa a una pareja que"<<endl;
                            cout<<"parece tiene una vida perfecta, pero un día ve algo y, la chica a la que ella llamaba Jess desaparece..."<<endl;
                            cout<<endl;
                            for(int l=0; l<1;)
                            {
                                cout<<"1-Ver libro completo (costo $500 dolares)"<<endl;
                                cout<<"2-Ver biografia del autor (costo $30 dolares)"<<endl;
                                cout<<"3-Hacer otra busqueda"<<endl;
                                cout<<"4-Salir del programa (valor $100 dolares)"<<endl;
                                cin>>f;
                                cout<<endl;
                                switch (f)
                                {
                                case 1:
                                    cout<<"https://www.casadellibro.com/libro-la-chica-del-tren/9788408141471/2544161"<<endl;
                                    cout<<endl;
                                    break;
                                case 2:
                                    cout<<"https://es.wikipedia.org/wiki/Paula_Hawkins"<<endl;
                                    cout<<endl;
                                    break;
                                case 3:
                                    l=1;
                                    k=1;
                                    j=1;
                                    cout<<endl;
                                    break;
                                case 4:
                                    l=2;
                                    k=2;
                                    j=2;
                                    i=2;
                                    break;
                                default:
                                    cout<<"Seleccion erronea"<<endl;
                                    cout<<"Se le descontara 10 dolares"<<endl;
                                    cout<<endl;
                                    break;
                                }
                            
                            }
                            break;
                        default:
                            cout<<"Seleccion erronea"<<endl;
                            cout<<"Se le descontara 10 dolares"<<endl;
                            cout<<endl;
                            break;
                        }
                    }
                    break;
                case 7:

                    for(int k=0; k<1;)
                    {
                        cout<<"1-the psicoanalist"<<endl;
                        cin>>e;
                        cout<<endl;
                        switch (e)
                        {
                        case 1:
                            cout<<"Nombre: The psicoanalist"<<endl;
                            cout<<"Autor: John Katzenbach"<<endl;
                            cout<<"Fecha de publicacion: 29 de enero de 2002"<<endl;
                            cout<<"Sinopsis:"<<endl;
                            cout<<"El doctor Frederick Ricky Starks es un psicoanalista estadounidense con una larga "<<endl;
                            cout<<"carrera a sus espaldas. El día de su 53.º aniversario, recibe la carta de un psicópata que firma como"<<endl;
                            cout<<"Rumplestiltskin y que al parecer lleva de por si el conocimiento de su vida rutinaria."<<endl;
                            cout<<endl;
                            for(int l=0; l<1;)
                            {
                                cout<<"1-Ver libro completo (costo $500 dolares)"<<endl;
                                cout<<"2-Ver biografia del autor (costo $30 dolares)"<<endl;
                                cout<<"3-Hacer otra busqueda"<<endl;
                                cout<<"4-Salir del programa (valor $100 dolares)"<<endl;
                                cin>>f;
                                cout<<endl;
                                switch (f)
                                {
                                case 1:
                                    cout<<"https://www.casadellibro.com/libro-el-psicoanalista/9788466665070/6769802"<<endl;
                                    cout<<endl;
                                    break;
                                case 2:
                                    cout<<"https://es.wikipedia.org/wiki/John_Katzenbach"<<endl;
                                    cout<<endl;
                                    break;
                                case 3:
                                    l=1;
                                    k=1;
                                    j=1;
                                    cout<<endl;
                                    break;
                                case 4:
                                    l=2;
                                    k=2;
                                    j=2;
                                    i=2;
                                    break;
                                default:
                                    cout<<"Seleccion erronea"<<endl;
                                    cout<<"Se le descontara 10 dolares"<<endl;
                                    cout<<endl;
                                    break;
                                }
                            
                            }
                            break;
                        default:
                            cout<<"Seleccion erronea"<<endl;
                            cout<<"Se le descontara 10 dolares"<<endl;
                            cout<<endl;
                            break;
                        }
                    }
                    break;
                default:
                    break;
                }
                break;
            }
            break;
        case 3:
            for (int j=0; j<1;)
            {
                cout<<"Nombre (Orden alfabetico)"<<endl;
                cout<<"1-It"<<endl;
                cout<<"2-La nina de la lista de Schindler"<<endl;
                cout<<"3-Little Women"<<endl;
                cout<<"4-Pride and Prejudice"<<endl;
                cout<<"5-The Fault in Our Stars"<<endl;
                cout<<"6-The Girl on the Train"<<endl;
                cout<<"7-The psicoanalist"<<endl;
                cout<<"8-The Shining"<<endl;
                cout<<"Descuento activo, solo se le cobraran 4.99 dolares por busqueda  "<<endl;
                cin>>d;
                switch (d)
                {
                case 1:
                    cout<<"Nombre: It"<<endl;
                    cout<<"Autor: Stephen King"<<endl;
                    cout<<"Fecha de publicacion: 15 septiembre de 1986"<<endl;
                    cout<<"Sinopsis:"<<endl;
                    cout<<"Varios ninos de una pequena ciudad del estado de Maine se alian para combatir a una entidad"<<endl;
                    cout<<"diabolica que adopta la forma de un payaso y desde hace mucho tiempo emerge cada 27 anos"<<endl;
                    cout<<"para saciarse de sangre infantil."<<endl;
                    cout<<endl;
                    for(int l=0; l<1;)
                    {
                        cout<<"1-Ver libro completo (costo $500 dolares)"<<endl;
                        cout<<"2-Ver biografia del autor (costo $30 dolares)"<<endl;
                        cout<<"3-Hacer otra busqueda"<<endl;
                        cout<<"4-Salir del programa (valor $100 dolares)"<<endl;
                        cin>>f;
                        cout<<endl;
                        switch (f)
                        {
                        case 1:
                            cout<<"https://www.casadellibro.com/libro-it/9788497593793/873687"<<endl;
                            cout<<endl;
                            break;
                        case 2:
                            cout<<"https://es.wikipedia.org/wiki/Stephen_King"<<endl;
                            cout<<endl;
                            break;
                        case 3:
                            l=1;
                            j=1;
                            cout<<endl;
                            break;
                        case 4:
                            l=2;
                            j=2;
                            i=2;
                            break;
                        default:
                            cout<<"Seleccion erronea"<<endl;
                            cout<<"Se le descontara 10 dolares"<<endl;
                            cout<<endl;
                            break;
                        }
                    }
                    break;
                case 2:

                    cout<<"Nombre: La nina de la lista de Schindler"<<endl;
                    cout<<"Autor: Stella Muller-Madej"<<endl;
                    cout<<"Fecha de publicacion: 1991"<<endl;
                    cout<<"Sinopsis:"<<endl;
                    cout<<"Estamos en 1939. Tengo nueve anos. Mis facciones son regulares, lo cual dicen que no abunda"<<endl;
                    cout<<"entre los judios. Mama es alta, esbelta y elegante. Nuestros conocidos "<<endl;
                    cout<<"dicen que se parece a Greta Garbo"<<endl;
                    cout<<endl;
                    for(int l=0; l<1;)
                    {
                        cout<<"1-Ver libro completo (costo $500 dolares)"<<endl;
                        cout<<"2-Ver biografia del autor (costo $30 dolares)"<<endl;
                        cout<<"3-Hacer otra busqueda"<<endl;
                        cout<<"4-Salir del programa (valor $100 dolares)"<<endl;
                        cin>>f;
                        cout<<endl;
                        switch (f)
                        {
                        case 1:
                            cout<<"https://www.casadellibro.com/libro-la-nina-de-la-lista-de-schindler/9788427035591/1255962"<<endl;
                            cout<<endl;
                            break;
                        case 2:
                            cout<<"Sin bibliografia"<<endl;
                            cout<<endl;
                            break;
                        case 3:
                            l=1;
                            j=1;
                            cout<<endl;
                            break;
                        case 4:
                            l=2;
                            j=2;
                            i=2;
                            break;
                        default:
                            cout<<"Seleccion erronea"<<endl;
                            cout<<"Se le descontara 10 dolares"<<endl;
                            break;
                        }
                
                    }
                    break;
                case 3:

                    cout<<"Nombre: The litlle women"<<endl;
                    cout<<"Autor: Louisa May Alcott"<<endl;
                    cout<<"Fecha de publicacion: 30 de septiembre de 1868"<<endl;
                    cout<<"Sinopsis:"<<endl;
                    cout<<"La novela cuenta la historia de las hermanas March, cuatro jovencitas que vivian en "<<endl;
                    cout<<"un pueblo de Nueva Inglaterra mientras la guerra civil hacía estragos en toda America. Han pasado "<<endl;
                    cout<<"casi ciento cincuenta anos desde aquel lejano 1868, pero la complicidad de Meg, Beth, Amy y Jo "<<endl;
                    cout<<"con las demas mujeres no ha muerto."<<endl;
                    cout<<endl;
                    for(int l=0; l<1;)
                    {
                        cout<<"1-Ver libro completo (costo $500 dolares)"<<endl;
                        cout<<"2-Ver biografia del autor (costo $30 dolares)"<<endl;
                        cout<<"3-Hacer otra busqueda"<<endl;
                        cout<<"4-Salir del programa (valor $100 dolares)"<<endl;
                        cin>>f;
                        cout<<endl;
                        switch (f)
                        {
                        case 1:
                            cout<<"https://www.casadellibro.com/libro-mujercitas/9788408216636/9788451"<<endl;
                            cout<<endl;
                            break;
                        case 2:
                            cout<<"https://es.wikipedia.org/wiki/Louisa_May_Alcott#:~:text=Louisa%20May%20Alcott%20escribi%C3%B3%20relatos,la%20revista%20The%20Atlantic%20Monthly."<<endl;
                            cout<<endl;
                            break;
                        case 3:
                            l=1;
                            j=1;
                            cout<<endl;
                            break;
                        case 4:
                            l=2;
                            j=2;
                            i=2;
                            break;
                        default:
                            cout<<"Seleccion erronea"<<endl;
                            cout<<"Se le descontara 10 dolares"<<endl;
                            break;
                        }
                    
                    }
                    break;
                case 4:
                    cout<<"Nombre: Pride and Prejudice"<<endl;
                    cout<<"Autor: Jane Austen"<<endl;
                    cout<<"Fecha de publicacion: 28 de enero de 1813"<<endl;
                    cout<<"Sinopsis:"<<endl;
                    cout<<"Es una novela de desarrollo personal, en la que las dos figuras principales,"<<endl;
                    cout<<"Elizabeth Bennet y Fitzwilliam Darcy, cada uno a su manera y, no obstante, de forma muy"<<endl;
                    cout<<"parecida, deben madurar para superar algunas crisis y aprender de sus errores para poder encarar"<<endl;
                    cout<<"el futuro en comun, superando el orgullo de clase de Darcy y los prejuicios de Elizabeth hacia el."<<endl;
                    cout<<endl;
                    for(int l=0; l<1;)
                    {
                        cout<<"1-Ver libro completo (costo $500 dolares)"<<endl;
                        cout<<"2-Ver biografia del autor (costo $30 dolares)"<<endl;
                        cout<<"3-Hacer otra busqueda"<<endl;
                        cout<<"4-Salir del programa (valor $100 dolares)"<<endl;
                        cin>>f;
                        cout<<endl;
                        switch (f)
                        {
                        case 1:
                            cout<<"https://www.casadellibro.com/libro-orgullo-y-prejuicio/9788467045642/2594995"<<endl;
                            cout<<endl;
                            break;
                        case 2:
                            cout<<"https://es.wikipedia.org/wiki/Jane_Austen"<<endl;
                            cout<<endl;
                            break;
                        case 3:
                            l=1;
                            j=1;
                            cout<<endl;
                            break;
                        case 4:
                            l=2;
                            j=2;
                            i=2;
                            break;
                        default:
                            cout<<"Seleccion erronea"<<endl;
                            cout<<"Se le descontara 10 dolares"<<endl;
                            cout<<endl;
                            break;
                        }
                    
                    }
                    break;
                case 5:
                    cout<<"Nombre: The Fault in Our Stars"<<endl;
                    cout<<"Autor: John Green"<<endl;
                    cout<<"Fecha de publicacion: 10 de enero de 2012"<<endl;
                    cout<<"Sinopsis:"<<endl;
                    cout<<"Novela escrita por John Green, narra el drama de amor melancolico que tienen que vivir,"<<endl;
                    cout<<"sentir y padecer dos jovenes condenados por el cancer, que les hara conocer"<<endl;
                    cout<<"tambien el amor ingenuo y cándido, la amistad sincera y espontanea, la idealizacion de los sueños"<<endl;
                    cout<<"y la afliccion y agobio de vivir una vida llena de sobresaltos por la angustia y la tragedia de padecer "<<endl;
                    cout<<"este mal y finalmente el dolor, la pena y el sufrimiento por la perdida del unico y verdadero amor."<<endl;
                    cout<<endl;
                    for(int l=0; l<1;)
                    {
                        cout<<"1-Ver libro completo (costo $500 dolares)"<<endl;
                        cout<<"2-Ver biografia del autor (costo $30 dolares)"<<endl;
                        cout<<"3-Hacer otra busqueda"<<endl;
                        cout<<"4-Salir del programa (valor $100 dolares)"<<endl;
                        cin>>f;
                        cout<<endl;
                        switch (f)
                        {
                        case 1:
                            cout<<"https://www.casadellibro.com/libro-the-fault-in-our-stars/9780141345659/2250453"<<endl;
                            cout<<endl;
                            break;
                        case 2:
                            cout<<"https://es.wikipedia.org/wiki/John_Green"<<endl;
                            cout<<endl;
                            break;
                        case 3:
                            l=1;
                            j=1;
                            cout<<endl;
                            break;
                        case 4:
                            l=2;
                            j=2;
                            i=2;
                            break;
                        default:
                            cout<<"Seleccion erronea"<<endl;
                            cout<<"Se le descontara 10 dolares"<<endl;
                            cout<<endl;
                            break;
                        }
                    }
                    break;
                case 6:
                    cout<<"Nombre: The Girl on the Train"<<endl;
                    cout<<"Autor: Paula Hawkins"<<endl;
                    cout<<"Fecha de publicacion: 6 de enero de 2015"<<endl;
                    cout<<"Sinopsis:"<<endl;
                    cout<<"La protagonista, Rachel Watson, es una mujer deprimida. El divorcio de su exmarido le ha condenado al alcoholismo."<<endl;
                    cout<<"Todos los días toma en Londres el tren de las 8:04. En el trayecto siempre observa a una pareja que"<<endl;
                    cout<<"parece tiene una vida perfecta, pero un día ve algo y, la chica a la que ella llamaba Jess desaparece..."<<endl;
                    cout<<endl;
                    for(int l=0; l<1;)
                    {
                        cout<<"1-Ver libro completo (costo $500 dolares)"<<endl;
                        cout<<"2-Ver biografia del autor (costo $30 dolares)"<<endl;
                        cout<<"3-Hacer otra busqueda"<<endl;
                        cout<<"4-Salir del programa (valor $100 dolares)"<<endl;
                        cin>>f;
                        cout<<endl;
                        switch (f)
                        {
                        case 1:
                            cout<<"https://www.casadellibro.com/libro-la-chica-del-tren/9788408141471/2544161"<<endl;
                            cout<<endl;
                            break;
                        case 2:
                            cout<<"https://es.wikipedia.org/wiki/Paula_Hawkins"<<endl;
                            cout<<endl;
                            break;
                        case 3:
                            l=1;
                            j=1;
                            cout<<endl;
                            break;
                        case 4:
                            l=2;
                            j=2;
                            i=2;
                            break;
                        default:
                            cout<<"Seleccion erronea"<<endl;
                            cout<<"Se le descontara 10 dolares"<<endl;
                            cout<<endl;
                            break;
                        }
                    
                    }
                    break;
                case 7:
                    cout<<"Nombre: The psicoanalist"<<endl;
                    cout<<"Autor: John Katzenbach"<<endl;
                    cout<<"Fecha de publicacion: 29 de enero de 2002"<<endl;
                    cout<<"Sinopsis:"<<endl;
                    cout<<"El doctor Frederick Ricky Starks es un psicoanalista estadounidense con una larga "<<endl;
                    cout<<"carrera a sus espaldas. El día de su 53.º aniversario, recibe la carta de un psicópata que firma como"<<endl;
                    cout<<"Rumplestiltskin y que al parecer lleva de por si el conocimiento de su vida rutinaria."<<endl;
                    cout<<endl;
                    for(int l=0; l<1;)
                    {
                        cout<<"1-Ver libro completo (costo $500 dolares)"<<endl;
                        cout<<"2-Ver biografia del autor (costo $30 dolares)"<<endl;
                        cout<<"3-Hacer otra busqueda"<<endl;
                        cout<<"4-Salir del programa (valor $100 dolares)"<<endl;
                        cin>>f;
                        cout<<endl;
                        switch (f)
                        {
                        case 1:
                            cout<<"https://www.casadellibro.com/libro-el-psicoanalista/9788466665070/6769802"<<endl;
                            cout<<endl;
                            break;
                        case 2:
                            cout<<"https://es.wikipedia.org/wiki/John_Katzenbach"<<endl;
                            cout<<endl;
                            break;
                        case 3:
                            l=1;
                            j=1;
                            cout<<endl;
                            break;
                        case 4:
                            l=2;
                            j=2;
                            i=2;
                            break;
                        default:
                            cout<<"Seleccion erronea"<<endl;
                            cout<<"Se le descontara 10 dolares"<<endl;
                            cout<<endl;
                            break;
                        }
                    
                    }
                    break;
                case 8:
                    cout<<"Nombre: The Shining"<<endl;
                    cout<<"Autor: Stephen King"<<endl;
                    cout<<"Fecha de publicacion: 28 de enero del 1977"<<endl;
                    cout<<"Sinopsis:"<<endl;
                    cout<<"Jack Torrance acepta una oferta de trabajo en un hotel de montana que se encuentra a 65 kilometros"<<endl;
                    cout<<"del pueblo más cercano. Ademas, las carreteras se encuentran cerradas al trafico "<<endl;
                    cout<<"por las fuertes nevadas del invierno. Pronto comenzaran a manifestarse espiritus y apariciones"<<endl;
                    cout<<"extranas. Es el propio hotel el que intenta controlar tanto a los vivos como a los muertos. Danny,"<<endl;
                    cout<<"el hijo de Jack tiene la capacidad de ver visiones sobre el pasado del hotel y de resistirse a su"<<endl;
                    cout<<"poder hipnotico. Es entonces cuando su padre comienza a enloquecer."<<endl;
                    cout<<endl;
                    for(int l=0; l<1;)
                    {
                        cout<<"1-Ver libro completo (costo $500 dolares)"<<endl;
                        cout<<"2-Ver biografia del autor (costo $30 dolares)"<<endl;
                        cout<<"3-Hacer otra busqueda"<<endl;
                        cout<<"4-Salir del programa (valor $100 dolares)"<<endl;
                        cout<<endl;
                        cin>>f;
                        switch (f)
                        {
                        case 1:
                            cout<<"https://www.casadellibro.com/libro-el-resplandor/9788412094756/11245450"<<endl;
                            cout<<endl;
                            break;
                        case 2:
                            cout<<"https://es.wikipedia.org/wiki/Stephen_King"<<endl;
                            cout<<endl;
                            break;
                        case 3:
                            l=1;
                            j=1;
                            cout<<endl;
                            break;
                        case 4:
                            l=2;
                            j=2;
                            i=2;
                            break;
                        default:
                            cout<<"Seleccion erronea"<<endl;
                            cout<<"Se le descontara 10 dolares"<<endl;
                            cout<<endl;
                            break;
                        }
                    
                    }
                    break;
                default:
                    cout<<"Seleccion erronea"<<endl;
                    cout<<"Se le descontara 10 dolares"<<endl;
                    break;
                }
                break;
            }
            break;
        default:
            cout<<"Seleccion erronea"<<endl;
            cout<<"Se le descontara 10 dolares"<<endl;
            break;
        }
    }
    cout<<"Gracias por usar la libreria de Navarrete"<<endl;
    cout<<"Vuelva pronto para una nueva estafa"<<endl;
    cout<<"Consulta**"<<endl;
}

