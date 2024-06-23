#pragma once
namespace pryTrabajoFinalGrupoUno {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	// Estructura para almacenar preguntas y respuestas
	value struct Pregunta
	{
		String^ testoPreguntas;
		List<String^>^ respuestas; // Cambiando a List<T> para su uso con .NET
		int indiceCorrecto; // Índice de la respuesta correcta
	};
	public ref class frmPreguntas : public System::Windows::Forms::Form
	{
	private:
		// Lista de preguntas y respuestas
		List<Pregunta>^ preguntas;
		int indicePreguntaActual;
		Random^ random; // Añadido para la selección aleatoria
	public:
		frmPreguntas(void)
		{
			InitializeComponent();
			// Inicialización de preguntas y respuestas usando List<T>
			preguntas = gcnew List<Pregunta>();

			Pregunta p1;
			p1.testoPreguntas = "¿Cuantos paises limitan con Mexico?";
			p1.respuestas = gcnew List<String^>();
			p1.respuestas->Add("4");
			p1.respuestas->Add("3");
			p1.respuestas->Add("6");
			p1.indiceCorrecto = 1;
			preguntas->Add(p1);

			Pregunta p2;
			p2.testoPreguntas = "¿Cual es la fuerza que evita que 2 cuerpos se atraviesen?";
			p2.respuestas = gcnew List<String^>();
			p2.respuestas->Add("Gravedad");
			p2.respuestas->Add("Normal");
			p2.respuestas->Add("Electromagnetismo");
			p2.indiceCorrecto = 1;
			preguntas->Add(p2);

			//Pregunta p2;
			//p2.testoPreguntas = "¿Cuantos continentes existen?";
			//p2.respuestas = gcnew List<String^>();
			//p2.respuestas->Add("6");
			//p2.respuestas->Add("5");
			//p2.respuestas->Add("4");
			//p2.indiceCorrecto = 2;
			//preguntas->Add(p2);

			Pregunta p3;
			p3.testoPreguntas = "¿Cual es la raiz cubica de 512?";
			p3.respuestas = gcnew List<String^>();
			p3.respuestas->Add("0");
			p3.respuestas->Add("6");
			p3.respuestas->Add("8");
			p3.indiceCorrecto = 2;
			preguntas->Add(p3);

			Pregunta p4;
			p4.testoPreguntas = "¿En que anio se tomo la primera fotografia a color?";
			p4.respuestas = gcnew List<String^>();
			p4.respuestas->Add("1861");
			p4.respuestas->Add("1901");
			p4.respuestas->Add("1944");
			p4.indiceCorrecto = 0;
			preguntas->Add(p4);

			Pregunta p5;
			p5.testoPreguntas = "¿Que dia del anio se celebra en Peru el 'Dia de la Bandera'?";
			p5.respuestas = gcnew List<String^>();
			p5.respuestas->Add("7 de julio");
			p5.respuestas->Add("7 de octubre");
			p5.respuestas->Add("7 de junio");
			p5.indiceCorrecto = 2;
			preguntas->Add(p5);

			Pregunta p6;
			p6.testoPreguntas = "¿Que colores posee la bandera de China?";
			p6.respuestas = gcnew List<String^>();
			p6.respuestas->Add("Blanco y rojo");
			p6.respuestas->Add("Amarillo y rojo");
			p6.respuestas->Add("Azul, rojo y blanco");
			p6.indiceCorrecto = 1;
			preguntas->Add(p6);

			Pregunta p7;
			p7.testoPreguntas = "¿A que pais le pertenece la isla de Tasmania?";
			p7.respuestas = gcnew List<String^>();
			p7.respuestas->Add("Nueva Zelanda");
			p7.respuestas->Add("Australia");
			p7.respuestas->Add("Francia");
			p7.indiceCorrecto = 1;
			preguntas->Add(p7);

			Pregunta p8;
			p8.testoPreguntas = "¿Cual es la capital de Suiza?";
			p8.respuestas = gcnew List<String^>();
			p8.respuestas->Add("Berna");
			p8.respuestas->Add("Zurich");
			p8.respuestas->Add("Ginebra");
			p8.indiceCorrecto = 0;
			preguntas->Add(p8);

			Pregunta p9;
			p9.testoPreguntas = "¿Como se llama la moneda de Venezuela?";
			p9.respuestas = gcnew List<String^>();
			p9.respuestas->Add("Real");
			p9.respuestas->Add("Peso");
			p9.respuestas->Add("Bolivar");
			p9.indiceCorrecto = 2;
			preguntas->Add(p9);

			Pregunta p10;
			p10.testoPreguntas = "¿Cual es el organo del cuerpo que consume mas energia?";
			p10.respuestas = gcnew List<String^>();
			p10.respuestas->Add("Cerebro");
			p10.respuestas->Add("Higado");
			p10.respuestas->Add("Corazon");
			p10.indiceCorrecto = 0;
			preguntas->Add(p10);

			Pregunta p11;
			p11.testoPreguntas = "¿A que se dedica un cunicultor?";
			p11.respuestas = gcnew List<String^>();
			p11.respuestas->Add("Cultivar hongos");
			p11.respuestas->Add("Criar conejos");
			p11.respuestas->Add("Cuidar bebes");
			p11.indiceCorrecto = 1;
			preguntas->Add(p11);

			Pregunta p12;
			p12.testoPreguntas = "¿Cual es la cultura mas antigua del Peru?";
			p12.respuestas = gcnew List<String^>();
			p12.respuestas->Add("Cultura Chavin");
			p12.respuestas->Add("Cultura Paracas");
			p12.respuestas->Add("Cultura Caral");
			p12.indiceCorrecto = 2;
			preguntas->Add(p12);

			Pregunta p13;
			p13.testoPreguntas = "¿En que departamento de Peru se encuentra Machu Picchu?";
			p13.respuestas = gcnew List<String^>();
			p13.respuestas->Add("Cajamarca");
			p13.respuestas->Add("Cusco");
			p13.respuestas->Add("Callao"); //xd
			p13.indiceCorrecto = 1;
			preguntas->Add(p13);

			Pregunta p14;
			p14.testoPreguntas = "¿Cual de estos minerales es mas duro?";
			p14.respuestas = gcnew List<String^>();
			p14.respuestas->Add("Topacio");
			p14.respuestas->Add("Rodio");
			p14.respuestas->Add("Diamante");
			p14.indiceCorrecto = 2;
			preguntas->Add(p14);

			Pregunta p15;
			p15.testoPreguntas = "¿Cual es la capital de Australia?";
			p15.respuestas = gcnew List<String^>();
			p15.respuestas->Add("Canberra");
			p15.respuestas->Add("Sidney");
			p15.respuestas->Add("Melbourne");
			p15.indiceCorrecto = 0;
			preguntas->Add(p15);

			Pregunta p16;
			p16.testoPreguntas = "¿Cual es el proceso en el que el agua se convierte en vapor?";
			p16.respuestas = gcnew List<String^>();
			p16.respuestas->Add("Evaporacion");
			p16.respuestas->Add("Solidificacion");
			p16.respuestas->Add("Condensacion");
			p16.indiceCorrecto = 0;
			preguntas->Add(p16);

			Pregunta p17;
			p17.testoPreguntas = "¿Como se llama la fobia a la sangre?";
			p17.respuestas = gcnew List<String^>();
			p17.respuestas->Add("Talasofobia");
			p17.respuestas->Add("Hemofobia");
			p17.respuestas->Add("Acuafobia");
			p17.indiceCorrecto = 1;
			preguntas->Add(p17);

			Pregunta p18;
			p18.testoPreguntas = "¿Cual es el nombre del lado mas grande de un triangulo rectangulo?";
			p18.respuestas = gcnew List<String^>();
			p18.respuestas->Add("Hipotenusa");
			p18.respuestas->Add("Bisectriz");
			p18.respuestas->Add("Cateto mayor");
			p18.indiceCorrecto = 0;
			preguntas->Add(p18);

			Pregunta p19;
			p19.testoPreguntas = "¿Cual es la montania mas alta del Peru?";
			p19.respuestas = gcnew List<String^>();
			p19.respuestas->Add("Huascaran");
			p19.respuestas->Add("Misti");
			p19.respuestas->Add("Coropuna");
			p19.indiceCorrecto = 0;
			preguntas->Add(p19);

			Pregunta p20;
			p20.testoPreguntas = "¿En que pais se encuentra la ciudad de Dublin?";
			p20.respuestas = gcnew List<String^>();
			p20.respuestas->Add("Gales");
			p20.respuestas->Add("Irlanda");
			p20.respuestas->Add("Polonia");
			p20.indiceCorrecto = 1;
			preguntas->Add(p20);

			Pregunta p21;
			p21.testoPreguntas = "¿Cual es la flor nacional del Peru?";
			p21.respuestas = gcnew List<String^>();
			p21.respuestas->Add("El Ceibo");
			p21.respuestas->Add("El Copihue");
			p21.respuestas->Add("La Cantuta");
			p21.indiceCorrecto = 2;
			preguntas->Add(p21);

			Pregunta p22;
			p22.testoPreguntas = "¿Que personaje jugable generalmente protagoniza la saga de videojuegos 'The Legend of Zelda'?";
			p22.respuestas = gcnew List<String^>();
			p22.respuestas->Add("Kirby");
			p22.respuestas->Add("Zelda");
			p22.respuestas->Add("Link");
			p22.indiceCorrecto = 2;
			preguntas->Add(p22);

			Pregunta p23;
			p23.testoPreguntas = "¿Como se escribe 2005 en numeros romanos?";
			p23.respuestas = gcnew List<String^>();
			p23.respuestas->Add("MCMXCVIII");
			p23.respuestas->Add("MMV");
			p23.respuestas->Add("MMXXIV");
			p23.indiceCorrecto = 1;
			preguntas->Add(p23);

			Pregunta p24;
			p24.testoPreguntas = "¿Cual es el animal que mas muertes provoca cada anio?";
			p24.respuestas = gcnew List<String^>();
			p24.respuestas->Add("Mosquito");
			p24.respuestas->Add("Cocodrilo");
			p24.respuestas->Add("Tiburon");
			p24.indiceCorrecto = 0;
			preguntas->Add(p24);

			Pregunta p25;
			p25.testoPreguntas = "¿Cual es el gentilicio de los Paises Bajos?";
			p25.respuestas = gcnew List<String^>();
			p25.respuestas->Add("Danes");
			p25.respuestas->Add("Neerlandes");
			p25.respuestas->Add("Holandes");
			p25.indiceCorrecto = 1;
			preguntas->Add(p25);

			Pregunta p26;
			p26.testoPreguntas = "¿En que oceano se encuentra el archipielago 'Cabo Verde'?";
			p26.respuestas = gcnew List<String^>();
			p26.respuestas->Add("Oceano Pacifico");
			p26.respuestas->Add("Oceano Atlantico");
			p26.respuestas->Add("Oceano Indico");
			p26.indiceCorrecto = 1;
			preguntas->Add(p26);

			Pregunta p27;
			p27.testoPreguntas = "¿Cual es el oceano que rodea la Antartida?";
			p27.respuestas = gcnew List<String^>();
			p27.respuestas->Add("Oceano Austral");
			p27.respuestas->Add("Oceano Pacifico");
			p27.respuestas->Add("Oceano Indico");
			p27.indiceCorrecto = 0;
			preguntas->Add(p27);

			Pregunta p28;
			p28.testoPreguntas = "¿Con que oceano limita Peru?";
			p28.respuestas = gcnew List<String^>();
			p28.respuestas->Add("Oceano Atlantico");
			p28.respuestas->Add("Oceano Atlantico y Pacifico");
			p28.respuestas->Add("Oceano Pacifico");
			p28.indiceCorrecto = 2;
			preguntas->Add(p28);

			Pregunta p29;
			p29.testoPreguntas = "¿Cual de estos paises NO limita con Peru?";
			p29.respuestas = gcnew List<String^>();
			p29.respuestas->Add("Paraguay");
			p29.respuestas->Add("Chile");
			p29.respuestas->Add("Colombia");
			p29.indiceCorrecto = 0;
			preguntas->Add(p29);

			Pregunta p30;
			p30.testoPreguntas = "¿Cual es el simbolo quimico del Paladio?";
			p30.respuestas = gcnew List<String^>();
			p30.respuestas->Add("Pd");
			p30.respuestas->Add("Pa");
			p30.respuestas->Add("Po");
			p30.indiceCorrecto = 0;
			preguntas->Add(p30);

			Pregunta p31;
			p31.testoPreguntas = "¿A que organo afecta la enfermedad conocida como 'Psoriasis'?";
			p31.respuestas = gcnew List<String^>();
			p31.respuestas->Add("Cerebro");
			p31.respuestas->Add("Piel");
			p31.respuestas->Add("Ojos");
			p31.indiceCorrecto = 1;
			preguntas->Add(p31);

			Pregunta p32;
			p32.testoPreguntas = "¿Cual se la capital de Costa Rica?";
			p32.respuestas = gcnew List<String^>();
			p32.respuestas->Add("San Jose");
			p32.respuestas->Add("San Martin");
			p32.respuestas->Add("San Juan");
			p32.indiceCorrecto = 0;
			preguntas->Add(p32);

			Pregunta p33;
			p33.testoPreguntas = "¿Como se le denomina a una palabra que tiene el mismo significado que otra palabra?";
			p33.respuestas = gcnew List<String^>();
			p33.respuestas->Add("Antonimo");
			p33.respuestas->Add("Sinonimo");
			p33.respuestas->Add("Diptongo");
			p33.indiceCorrecto = 1;
			preguntas->Add(p33);

			Pregunta p34;
			p34.testoPreguntas = "¿En el abecedario, que letra se encuentra antes de la 'U'?";
			p34.respuestas = gcnew List<String^>();
			p34.respuestas->Add("T");
			p34.respuestas->Add("V");
			p34.respuestas->Add("X");
			p34.indiceCorrecto = 0;
			preguntas->Add(p34);

			Pregunta p35;
			p35.testoPreguntas = "¿Cual es el simbolo quimico del Tulio?";
			p35.respuestas = gcnew List<String^>();
			p35.respuestas->Add("Tm");
			p35.respuestas->Add("Tu");
			p35.respuestas->Add("Tl");
			p35.indiceCorrecto = 0;
			preguntas->Add(p35);

			Pregunta p36;
			p36.testoPreguntas = "¿Que es la oferta y la demanda?";
			p36.respuestas = gcnew List<String^>();
			p36.respuestas->Add("Relacion entre precio y salario");
			p36.respuestas->Add("Relacion entre cantidad y calidad");
			p36.respuestas->Add("Relacion entre cantidad y precio");
			p36.indiceCorrecto = 2;
			preguntas->Add(p36);

			Pregunta p37;
			p37.testoPreguntas = "¿Cual es el elemento quimico mas raro del planeta?";
			p37.respuestas = gcnew List<String^>();
			p37.respuestas->Add("Osmio");
			p37.respuestas->Add("Astato");
			p37.respuestas->Add("Francio");
			p37.indiceCorrecto = 1;
			preguntas->Add(p37);

			Pregunta p38;
			p38.testoPreguntas = "¿Que pais gano la Eurocopa de 2016?";
			p38.respuestas = gcnew List<String^>();
			p38.respuestas->Add("Portugal");
			p38.respuestas->Add("Francia");
			p38.respuestas->Add("Alemania");
			p38.indiceCorrecto = 0;
			preguntas->Add(p38);

			Pregunta p39;
			p39.testoPreguntas = "¿Cual es el torneo deportivo mas antiguo del mundo?";
			p39.respuestas = gcnew List<String^>();
			p39.respuestas->Add("Olimpiadas");
			p39.respuestas->Add("Mundial");
			p39.respuestas->Add("FA Cup");
			p39.indiceCorrecto = 2;
			preguntas->Add(p39);

			Pregunta p40;
			p40.testoPreguntas = "¿Cual es el penultimo planeta del sistema solar?";
			p40.respuestas = gcnew List<String^>();
			p40.respuestas->Add("Saturno");
			p40.respuestas->Add("Neptuno");
			p40.respuestas->Add("Urano");
			p40.indiceCorrecto = 2;
			preguntas->Add(p40);

			Pregunta p41;
			p41.testoPreguntas = "¿Cual es el pais mas pequenio del mundo?";
			p41.respuestas = gcnew List<String^>();
			p41.respuestas->Add("Vaticano");
			p41.respuestas->Add("Chipre");
			p41.respuestas->Add("Monaco");
			p41.indiceCorrecto = 0;
			preguntas->Add(p41);

			Pregunta p42;
			p42.testoPreguntas = "¿Cual es el elemento quimico mas abundante en la tierra?";
			p42.respuestas = gcnew List<String^>();
			p42.respuestas->Add("Nitrogeno");
			p42.respuestas->Add("Oxigeno");
			p42.respuestas->Add("Carbono");
			p42.indiceCorrecto = 0;
			preguntas->Add(p42);

			Pregunta p43;
			p43.testoPreguntas = "¿De que anio es la actual constitucion politica del Peru?";
			p43.respuestas = gcnew List<String^>();
			p43.respuestas->Add("1979");
			p43.respuestas->Add("1991");
			p43.respuestas->Add("1993");
			p43.indiceCorrecto = 2;
			preguntas->Add(p43);

			Pregunta p44;
			p44.testoPreguntas = "¿Cual es el organo mas grande del cuerpo humano?";
			p44.respuestas = gcnew List<String^>();
			p44.respuestas->Add("El higado");
			p44.respuestas->Add("El intestino delgado");
			p44.respuestas->Add("La piel");
			p44.indiceCorrecto = 2;
			preguntas->Add(p44);

			Pregunta p45;
			p45.testoPreguntas = "¿Cuantos lados tiene un hexagono?";
			p45.respuestas = gcnew List<String^>();
			p45.respuestas->Add("8");
			p45.respuestas->Add("6");
			p45.respuestas->Add("7");
			p45.indiceCorrecto = 1;
			preguntas->Add(p45);

			Pregunta p46;
			p46.testoPreguntas = "¿Cual es el equipo de futbol mas laureado de la historia?";
			p46.respuestas = gcnew List<String^>();
			p46.respuestas->Add("Bayern Munchen");
			p46.respuestas->Add("Real Madrid");
			p46.respuestas->Add("Barcelona");
			p46.indiceCorrecto = 1;
			preguntas->Add(p46);

			Pregunta p47;
			p47.testoPreguntas = "¿En que anio capturan a Abimael Guzman?";
			p47.respuestas = gcnew List<String^>();
			p47.respuestas->Add("1992");
			p47.respuestas->Add("1995");
			p47.respuestas->Add("1998");
			p47.indiceCorrecto = 0;
			preguntas->Add(p47);

			Pregunta p48;
			p48.testoPreguntas = "¿En que anio se da la operacion Chavin de Huantar?";
			p48.respuestas = gcnew List<String^>();
			p48.respuestas->Add("1861");
			p48.respuestas->Add("1901");
			p48.respuestas->Add("1944");
			p48.indiceCorrecto = 0;
			preguntas->Add(p48);

			Pregunta p49;
			p49.testoPreguntas = "¿Quien es el unico peruano con un premio Nobel?";
			p49.respuestas = gcnew List<String^>();
			p49.respuestas->Add("Cesar Vallejo");
			p49.respuestas->Add("Mario Vargas Llosa");
			p49.respuestas->Add("Julio Ramon Ribeyro");
			p49.indiceCorrecto = 1;
			preguntas->Add(p49);

			Pregunta p50;
			p50.testoPreguntas = "¿Como se le denomina a un triangulo con todos los lados desiguales?";
			p50.respuestas = gcnew List<String^>();
			p50.respuestas->Add("Equilatero");
			p50.respuestas->Add("Isosceles");
			p50.respuestas->Add("Escaleno ");
			p50.indiceCorrecto = 2;
			preguntas->Add(p50);

			Pregunta p51;
			p51.testoPreguntas = "¿Cual de los siguientes animales es conocido por ser el mas rapido en tierra?";
			p51.respuestas = gcnew List<String^>();
			p51.respuestas->Add("Halcon peregrino");
			p51.respuestas->Add("Guepardo");
			p51.respuestas->Add("Jaguar");
			p51.indiceCorrecto = 1;
			preguntas->Add(p51);

			Pregunta p52;
			p52.testoPreguntas = "¿Cual es la franquicia de videojuegos mas vendida en la historia?";
			p52.respuestas = gcnew List<String^>();
			p52.respuestas->Add("Tetris");
			p52.respuestas->Add("Minecraft");
			p52.respuestas->Add("Grand Theft Auto");
			p52.indiceCorrecto = 0;
			preguntas->Add(p52);

			Pregunta p53;
			p53.testoPreguntas = "¿Que pintor famoso pinto la obra 'La noche estrallada'?";
			p53.respuestas = gcnew List<String^>();
			p53.respuestas->Add("Miguel Angel");
			p53.respuestas->Add("Frida Kahlo");
			p53.respuestas->Add("Vincent van Gogh");
			p53.indiceCorrecto = 2;
			preguntas->Add(p53);

			Pregunta p54;
			p54.testoPreguntas = "¿En que anio comenzo la Segunda Guerra Mundial?";
			p54.respuestas = gcnew List<String^>();
			p54.respuestas->Add("1917");
			p54.respuestas->Add("1939");
			p54.respuestas->Add("1945");
			p54.indiceCorrecto = 1;
			preguntas->Add(p54);

			Pregunta p55;
			p55.testoPreguntas = "¿Cual es el area de un cuadrado con un lado de longitud 6 metros?";
			p55.respuestas = gcnew List<String^>();
			p55.respuestas->Add("72");
			p55.respuestas->Add("36");
			p55.respuestas->Add("24");
			p55.indiceCorrecto = 1;
			preguntas->Add(p55);

			Pregunta p56;
			p56.testoPreguntas = "¿Que programa o servicio se dedica a la proteccion de computadoras a intrusos maliciosos";
			p56.respuestas = gcnew List<String^>();
			p56.respuestas->Add("Anti-virus");
			p56.respuestas->Add("Servicio VPN");
			p56.respuestas->Add("Administrador de tareas");
			p56.indiceCorrecto = 0;
			preguntas->Add(p56);

			random = gcnew Random(); // Inicializar Random
			cargarPregunta(); // Cargar la primera pregunta al iniciar
		}
	protected:
		~frmPreguntas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ rbRespuesta1;
	private: System::Windows::Forms::RadioButton^ rbRespuesta2;
	private: System::Windows::Forms::RadioButton^ rbRespuesta3;
	private: System::Windows::Forms::Button^ btnResponder;
	protected:
	protected:
	private: System::Windows::Forms::Label^ lblPregunta;



	private:
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->rbRespuesta1 = (gcnew System::Windows::Forms::RadioButton());
			this->rbRespuesta2 = (gcnew System::Windows::Forms::RadioButton());
			this->rbRespuesta3 = (gcnew System::Windows::Forms::RadioButton());
			this->btnResponder = (gcnew System::Windows::Forms::Button());
			this->lblPregunta = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// rbRespuesta1
			// 
			this->rbRespuesta1->CheckAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->rbRespuesta1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->rbRespuesta1->Location = System::Drawing::Point(61, 280);
			this->rbRespuesta1->Name = L"rbRespuesta1";
			this->rbRespuesta1->Size = System::Drawing::Size(145, 170);
			this->rbRespuesta1->TabIndex = 0;
			this->rbRespuesta1->Text = L"RESPUESTA #1";
			this->rbRespuesta1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->rbRespuesta1->UseVisualStyleBackColor = true;
			// 
			// rbRespuesta2
			// 
			this->rbRespuesta2->CheckAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->rbRespuesta2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->rbRespuesta2->Location = System::Drawing::Point(248, 280);
			this->rbRespuesta2->Name = L"rbRespuesta2";
			this->rbRespuesta2->Size = System::Drawing::Size(145, 170);
			this->rbRespuesta2->TabIndex = 1;
			this->rbRespuesta2->Text = L"RESPUESTA #2";
			this->rbRespuesta2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->rbRespuesta2->UseVisualStyleBackColor = true;
			// 
			// rbRespuesta3
			// 
			this->rbRespuesta3->CheckAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->rbRespuesta3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->rbRespuesta3->Location = System::Drawing::Point(433, 280);
			this->rbRespuesta3->Name = L"rbRespuesta3";
			this->rbRespuesta3->Size = System::Drawing::Size(145, 170);
			this->rbRespuesta3->TabIndex = 2;
			this->rbRespuesta3->Text = L"RESPUESTA #3";
			this->rbRespuesta3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->rbRespuesta3->UseVisualStyleBackColor = true;
			// 
			// btnResponder
			// 
			this->btnResponder->Location = System::Drawing::Point(193, 510);
			this->btnResponder->Name = L"btnResponder";
			this->btnResponder->Size = System::Drawing::Size(250, 40);
			this->btnResponder->TabIndex = 3;
			this->btnResponder->Text = L"Aceptar seleccion";
			this->btnResponder->UseVisualStyleBackColor = true;
			this->btnResponder->Click += gcnew System::EventHandler(this, &frmPreguntas::btnResponder_Click);
			// 
			// lblPregunta
			// 
			this->lblPregunta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->lblPregunta->Location = System::Drawing::Point(12, 65);
			this->lblPregunta->Name = L"lblPregunta";
			this->lblPregunta->Size = System::Drawing::Size(607, 196);
			this->lblPregunta->TabIndex = 8;
			this->lblPregunta->Text = L"PREGUNTA";
			this->lblPregunta->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// frmPreguntas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(631, 601);
			this->Controls->Add(this->rbRespuesta3);
			this->Controls->Add(this->rbRespuesta2);
			this->Controls->Add(this->rbRespuesta1);
			this->Controls->Add(this->btnResponder);
			this->Controls->Add(this->lblPregunta);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"frmPreguntas";
			this->ShowIcon = false;
			this->Text = L"Pregunta / Mision";
			this->ResumeLayout(false);

		}
#pragma endregion

		// Método para cargar la pregunta actual y sus respuestas
		void cargarPregunta()
		{
			indicePreguntaActual = random->Next(preguntas->Count); // Selección aleatoria de la pregunta
			Pregunta preguntaActual = preguntas[indicePreguntaActual];
			lblPregunta->Text = preguntaActual.testoPreguntas;
			rbRespuesta1->Text = preguntaActual.respuestas[0];
			rbRespuesta2->Text = preguntaActual.respuestas[1];
			rbRespuesta3->Text = preguntaActual.respuestas[2];
			rbRespuesta1->Checked = false;
			rbRespuesta2->Checked = false;
			rbRespuesta3->Checked = false;
		}

		// Método para verificar la respuesta seleccionada por el usuario
		void validarRespuesta()
		{
			Pregunta preguntaActual = preguntas[indicePreguntaActual];
			int indicePregunta = -1;
			if (rbRespuesta1->Checked)
				indicePregunta = 0;
			else if (rbRespuesta2->Checked)
				indicePregunta = 1;
			else if (rbRespuesta3->Checked)
				indicePregunta = 2;
			if (indicePregunta == preguntaActual.indiceCorrecto)
			{
				MessageBox::Show("¡Respuesta correcta!");
			}
			else
			{
				MessageBox::Show("Respuesta incorrecta. La respuesta correcta es: " + preguntaActual.respuestas[preguntaActual.indiceCorrecto]);
			}
			cargarPregunta(); // Cargar una nueva pregunta aleatoria después de verificar la respuesta
		}
		private: System::Void btnResponder_Click(System::Object^ sender, System::EventArgs^ e) {
			validarRespuesta(); // Llamar al método para verificar la respuesta
		}
	};
}