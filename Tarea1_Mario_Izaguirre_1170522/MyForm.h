#pragma once
#include <math.h>
#include "iostream"
#include <string>
#include <math.h>
#include <conio.h>
using std::string;

namespace Tarea1MarioIzaguirre1170522 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1_Click;
	private: System::Windows::Forms::TextBox^ txttotalREC;
	private: System::Windows::Forms::TextBox^ txttotalINT;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ CALCULARREC;
	private: System::Windows::Forms::Button^ CALCULARINT;
	private: System::Windows::Forms::TextBox^ txtsegREC;
	private: System::Windows::Forms::TextBox^ txtprimREC;
	private: System::Windows::Forms::TextBox^ txtsegINT;
	private: System::Windows::Forms::TextBox^ txtprimINT;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ ConvREC;
	private: System::Windows::Forms::TextBox^ ConvINT;
	private: System::Windows::Forms::TextBox^ BaseREC;
	private: System::Windows::Forms::TextBox^ NumREC;
	private: System::Windows::Forms::TextBox^ baseINT;
	private: System::Windows::Forms::TextBox^ NumINT;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ BTConREC;
	private: System::Windows::Forms::Button^ BTConINT;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ txtINT;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ CantREC;

	private: System::Windows::Forms::TextBox^ CantINT;

	private: System::Windows::Forms::Button^ ContINT;
	private: System::Windows::Forms::Button^ ContREC;
	private: System::Windows::Forms::TextBox^ txtREC;
	private: System::Windows::Forms::Label^ label23;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1_Click = (gcnew System::Windows::Forms::TabPage());
			this->txttotalREC = (gcnew System::Windows::Forms::TextBox());
			this->txttotalINT = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->CALCULARREC = (gcnew System::Windows::Forms::Button());
			this->CALCULARINT = (gcnew System::Windows::Forms::Button());
			this->txtsegREC = (gcnew System::Windows::Forms::TextBox());
			this->txtprimREC = (gcnew System::Windows::Forms::TextBox());
			this->txtsegINT = (gcnew System::Windows::Forms::TextBox());
			this->txtprimINT = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->CantREC = (gcnew System::Windows::Forms::TextBox());
			this->CantINT = (gcnew System::Windows::Forms::TextBox());
			this->ContINT = (gcnew System::Windows::Forms::Button());
			this->ContREC = (gcnew System::Windows::Forms::Button());
			this->txtREC = (gcnew System::Windows::Forms::TextBox());
			this->txtINT = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->ConvREC = (gcnew System::Windows::Forms::TextBox());
			this->ConvINT = (gcnew System::Windows::Forms::TextBox());
			this->BaseREC = (gcnew System::Windows::Forms::TextBox());
			this->NumREC = (gcnew System::Windows::Forms::TextBox());
			this->baseINT = (gcnew System::Windows::Forms::TextBox());
			this->NumINT = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->BTConREC = (gcnew System::Windows::Forms::Button());
			this->BTConINT = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1_Click->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1_Click);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 43);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(551, 259);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1_Click
			// 
			this->tabPage1_Click->Controls->Add(this->txttotalREC);
			this->tabPage1_Click->Controls->Add(this->txttotalINT);
			this->tabPage1_Click->Controls->Add(this->label8);
			this->tabPage1_Click->Controls->Add(this->label7);
			this->tabPage1_Click->Controls->Add(this->CALCULARREC);
			this->tabPage1_Click->Controls->Add(this->CALCULARINT);
			this->tabPage1_Click->Controls->Add(this->txtsegREC);
			this->tabPage1_Click->Controls->Add(this->txtprimREC);
			this->tabPage1_Click->Controls->Add(this->txtsegINT);
			this->tabPage1_Click->Controls->Add(this->txtprimINT);
			this->tabPage1_Click->Controls->Add(this->label6);
			this->tabPage1_Click->Controls->Add(this->label5);
			this->tabPage1_Click->Controls->Add(this->label4);
			this->tabPage1_Click->Controls->Add(this->label3);
			this->tabPage1_Click->Controls->Add(this->label2);
			this->tabPage1_Click->Controls->Add(this->label1);
			this->tabPage1_Click->Location = System::Drawing::Point(4, 25);
			this->tabPage1_Click->Name = L"tabPage1_Click";
			this->tabPage1_Click->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1_Click->Size = System::Drawing::Size(543, 230);
			this->tabPage1_Click->TabIndex = 0;
			this->tabPage1_Click->Text = L"Ejercicio 1";
			this->tabPage1_Click->UseVisualStyleBackColor = true;
			// 
			// txttotalREC
			// 
			this->txttotalREC->Location = System::Drawing::Point(357, 272);
			this->txttotalREC->Name = L"txttotalREC";
			this->txttotalREC->Size = System::Drawing::Size(100, 22);
			this->txttotalREC->TabIndex = 15;
			// 
			// txttotalINT
			// 
			this->txttotalINT->Location = System::Drawing::Point(70, 272);
			this->txttotalINT->Name = L"txttotalINT";
			this->txttotalINT->Size = System::Drawing::Size(100, 22);
			this->txttotalINT->TabIndex = 14;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(293, 272);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 16);
			this->label8->TabIndex = 13;
			this->label8->Text = L"TOTAL: ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 272);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 16);
			this->label7->TabIndex = 12;
			this->label7->Text = L"TOTAL: ";
			// 
			// CALCULARREC
			// 
			this->CALCULARREC->Location = System::Drawing::Point(348, 197);
			this->CALCULARREC->Name = L"CALCULARREC";
			this->CALCULARREC->Size = System::Drawing::Size(92, 30);
			this->CALCULARREC->TabIndex = 11;
			this->CALCULARREC->Text = L"CALCULAR";
			this->CALCULARREC->UseVisualStyleBackColor = true;
			this->CALCULARREC->Click += gcnew System::EventHandler(this, &MyForm::CALCULARREC_Click);
			// 
			// CALCULARINT
			// 
			this->CALCULARINT->Location = System::Drawing::Point(64, 197);
			this->CALCULARINT->Name = L"CALCULARINT";
			this->CALCULARINT->Size = System::Drawing::Size(92, 30);
			this->CALCULARINT->TabIndex = 10;
			this->CALCULARINT->Text = L"CALCULAR";
			this->CALCULARINT->UseVisualStyleBackColor = true;
			this->CALCULARINT->Click += gcnew System::EventHandler(this, &MyForm::CALCULARINT_Click);
			// 
			// txtsegREC
			// 
			this->txtsegREC->Location = System::Drawing::Point(427, 145);
			this->txtsegREC->Name = L"txtsegREC";
			this->txtsegREC->Size = System::Drawing::Size(100, 22);
			this->txtsegREC->TabIndex = 9;
			// 
			// txtprimREC
			// 
			this->txtprimREC->Location = System::Drawing::Point(427, 98);
			this->txtprimREC->Name = L"txtprimREC";
			this->txtprimREC->Size = System::Drawing::Size(100, 22);
			this->txtprimREC->TabIndex = 8;
			// 
			// txtsegINT
			// 
			this->txtsegINT->Location = System::Drawing::Point(137, 148);
			this->txtsegINT->Name = L"txtsegINT";
			this->txtsegINT->Size = System::Drawing::Size(100, 22);
			this->txtsegINT->TabIndex = 7;
			// 
			// txtprimINT
			// 
			this->txtprimINT->Location = System::Drawing::Point(137, 104);
			this->txtprimINT->Name = L"txtprimINT";
			this->txtprimINT->Size = System::Drawing::Size(100, 22);
			this->txtprimINT->TabIndex = 6;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(293, 148);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(116, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Segundo Numero:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(293, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Primer Numero";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 148);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(119, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Segundo Numero: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Primer Numero: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(354, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"RECURSIVO";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(67, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"INTERARIVO";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label23);
			this->tabPage2->Controls->Add(this->label22);
			this->tabPage2->Controls->Add(this->label21);
			this->tabPage2->Controls->Add(this->label20);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->CantREC);
			this->tabPage2->Controls->Add(this->CantINT);
			this->tabPage2->Controls->Add(this->ContINT);
			this->tabPage2->Controls->Add(this->ContREC);
			this->tabPage2->Controls->Add(this->txtREC);
			this->tabPage2->Controls->Add(this->txtINT);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(543, 230);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Ejercicios 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(6, 3);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(264, 16);
			this->label23->TabIndex = 15;
			this->label23->Text = L"Ingresar las palabras y separar por comas.";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(270, 63);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(41, 16);
			this->label22->TabIndex = 14;
			this->label22->Text = L"Texto";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(3, 63);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(41, 16);
			this->label21->TabIndex = 13;
			this->label21->Text = L"Texto";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(293, 189);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(61, 16);
			this->label20->TabIndex = 12;
			this->label20->Text = L"Cantidad";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(10, 189);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(61, 16);
			this->label19->TabIndex = 11;
			this->label19->Text = L"Cantidad";
			// 
			// CantREC
			// 
			this->CantREC->Location = System::Drawing::Point(360, 186);
			this->CantREC->Name = L"CantREC";
			this->CantREC->Size = System::Drawing::Size(95, 22);
			this->CantREC->TabIndex = 10;
			// 
			// CantINT
			// 
			this->CantINT->Location = System::Drawing::Point(77, 186);
			this->CantINT->Name = L"CantINT";
			this->CantINT->Size = System::Drawing::Size(95, 22);
			this->CantINT->TabIndex = 9;
			// 
			// ContINT
			// 
			this->ContINT->Location = System::Drawing::Point(87, 126);
			this->ContINT->Name = L"ContINT";
			this->ContINT->Size = System::Drawing::Size(75, 23);
			this->ContINT->TabIndex = 8;
			this->ContINT->Text = L"Contar";
			this->ContINT->UseVisualStyleBackColor = true;
			this->ContINT->Click += gcnew System::EventHandler(this, &MyForm::ContINT_Click);
			// 
			// ContREC
			// 
			this->ContREC->Location = System::Drawing::Point(372, 126);
			this->ContREC->Name = L"ContREC";
			this->ContREC->Size = System::Drawing::Size(75, 23);
			this->ContREC->TabIndex = 7;
			this->ContREC->Text = L"Contar";
			this->ContREC->UseVisualStyleBackColor = true;
			this->ContREC->Click += gcnew System::EventHandler(this, &MyForm::ContREC_Click);
			// 
			// txtREC
			// 
			this->txtREC->Location = System::Drawing::Point(317, 60);
			this->txtREC->Name = L"txtREC";
			this->txtREC->Size = System::Drawing::Size(194, 22);
			this->txtREC->TabIndex = 6;
			// 
			// txtINT
			// 
			this->txtINT->Location = System::Drawing::Point(46, 60);
			this->txtINT->Name = L"txtINT";
			this->txtINT->Size = System::Drawing::Size(194, 22);
			this->txtINT->TabIndex = 5;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(369, 24);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(86, 16);
			this->label18->TabIndex = 4;
			this->label18->Text = L"RECURSIVO";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(74, 24);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(88, 16);
			this->label17->TabIndex = 3;
			this->label17->Text = L"INTERATIVO";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->ConvREC);
			this->tabPage3->Controls->Add(this->ConvINT);
			this->tabPage3->Controls->Add(this->BaseREC);
			this->tabPage3->Controls->Add(this->NumREC);
			this->tabPage3->Controls->Add(this->baseINT);
			this->tabPage3->Controls->Add(this->NumINT);
			this->tabPage3->Controls->Add(this->label16);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->BTConREC);
			this->tabPage3->Controls->Add(this->BTConINT);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(543, 230);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Ejercicio 3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// ConvREC
			// 
			this->ConvREC->Location = System::Drawing::Point(408, 176);
			this->ConvREC->Name = L"ConvREC";
			this->ConvREC->Size = System::Drawing::Size(129, 22);
			this->ConvREC->TabIndex = 15;
			// 
			// ConvINT
			// 
			this->ConvINT->Location = System::Drawing::Point(139, 179);
			this->ConvINT->Name = L"ConvINT";
			this->ConvINT->Size = System::Drawing::Size(134, 22);
			this->ConvINT->TabIndex = 14;
			// 
			// BaseREC
			// 
			this->BaseREC->Location = System::Drawing::Point(424, 80);
			this->BaseREC->Name = L"BaseREC";
			this->BaseREC->Size = System::Drawing::Size(82, 22);
			this->BaseREC->TabIndex = 13;
			// 
			// NumREC
			// 
			this->NumREC->Location = System::Drawing::Point(424, 46);
			this->NumREC->Name = L"NumREC";
			this->NumREC->Size = System::Drawing::Size(82, 22);
			this->NumREC->TabIndex = 12;
			// 
			// baseINT
			// 
			this->baseINT->Location = System::Drawing::Point(129, 89);
			this->baseINT->Name = L"baseINT";
			this->baseINT->Size = System::Drawing::Size(82, 22);
			this->baseINT->TabIndex = 11;
			// 
			// NumINT
			// 
			this->NumINT->Location = System::Drawing::Point(129, 46);
			this->NumINT->Name = L"NumINT";
			this->NumINT->Size = System::Drawing::Size(82, 22);
			this->NumINT->TabIndex = 10;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(279, 179);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(123, 16);
			this->label16->TabIndex = 9;
			this->label16->Text = L"Numero Convertido";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 179);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(127, 16);
			this->label15->TabIndex = 8;
			this->label15->Text = L"Numero Convertirdo";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(3, 79);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(102, 16);
			this->label14->TabIndex = 7;
			this->label14->Text = L"Base a ingresar";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(279, 79);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(102, 16);
			this->label13->TabIndex = 6;
			this->label13->Text = L"Base a ingresar";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(279, 52);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(117, 16);
			this->label12->TabIndex = 5;
			this->label12->Text = L"Ingresa un numero";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 52);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(120, 16);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Ingresa un  numero";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(357, 17);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(86, 16);
			this->label10->TabIndex = 3;
			this->label10->Text = L"RECURSIVO";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(84, 17);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(88, 16);
			this->label9->TabIndex = 2;
			this->label9->Text = L"INTERATIVO";
			// 
			// BTConREC
			// 
			this->BTConREC->Location = System::Drawing::Point(360, 129);
			this->BTConREC->Name = L"BTConREC";
			this->BTConREC->Size = System::Drawing::Size(74, 27);
			this->BTConREC->TabIndex = 1;
			this->BTConREC->Text = L"Convertir";
			this->BTConREC->UseVisualStyleBackColor = true;
			this->BTConREC->Click += gcnew System::EventHandler(this, &MyForm::BTConREC_Click);
			// 
			// BTConINT
			// 
			this->BTConINT->Location = System::Drawing::Point(74, 129);
			this->BTConINT->Name = L"BTConINT";
			this->BTConINT->Size = System::Drawing::Size(75, 23);
			this->BTConINT->TabIndex = 0;
			this->BTConINT->Text = L"Convertir";
			this->BTConINT->UseVisualStyleBackColor = true;
			this->BTConINT->Click += gcnew System::EventHandler(this, &MyForm::BTConINT_Click);
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(489, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 33);
			this->button1->TabIndex = 16;
			this->button1->Text = L"SALIR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(587, 313);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1_Click->ResumeLayout(false);
			this->tabPage1_Click->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CALCULARINT_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			double Primer = Convert::ToDouble(txtprimINT->Text);
			double Segundo = Convert::ToDouble(txtsegINT->Text);
			txttotalINT->Text = Convert::ToString(multisumaINT(Primer, Segundo));
		}
		catch (Exception^ e)
		{
			MessageBox::Show("El dato que ingreso son incorrectos, intente de nuevo");
		}
	}
		   static double multisumaINT(double Prim, double Seg)
		   {
			   double total = 0;
			   for (size_t i = Seg; i > 0; i--)
			   {
				   total = total + Prim;
			   }
			   return total;
		   }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void CALCULARREC_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		double Primer = Convert::ToDouble(txtprimREC->Text);
		double Segundo = Convert::ToDouble(txtsegREC->Text);
		txttotalREC->Text = Convert::ToString(multisumREC(Primer, Segundo));
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Datos ingresados erróneos, vuelva a intentarlo");
	}
}
	   static double multisumREC(double Prim, double Seg)
	   {
		   if (Seg > 0)
		   {
			   return Prim + multisumREC(Prim, Seg - 1);
		   }
		   return 0;
	   }
private: System::Void BTConINT_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int Numero	= Convert::ToInt32(NumINT->Text);
		int Base = Convert::ToInt32(baseINT->Text);
		if (Base > 16 || Base < 2)
		{
			MessageBox::Show("No se puede esa base");
		}
		else
		{
			ConvINT->Text = Convert::ToString(ConvertirBase(Numero, Base));
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Vuelva a ingresar el dato correctamente");
	}
}
	   char* ConvertirBase(int num, int base)
	   {
		   char* resultado = new char[20];
		   int i = 0; 
		   int n[20];
		   while (num > 0)
		   {
			   n[i] = num % base;
			   num = num / base;
			   i++;
		   }
		   int j = 0; 
		   while (i >= 0)
		   {
			   if (n[i] >= 0 && n[i] <= 9)
			   {
				   resultado[j] = char(n[i]);
			   }
			   else
			   {
				   switch (n[i])
				   {
				   case 10: resultado[j] = 'A';
					   break;
				   case 11: resultado[j] = 'B';
					   break;
				   case 12: resultado[j] = 'C';
					   break;
				   case 13: resultado[j] = 'D';
					   break;
				   case 14: resultado[j] = 'E';
					   break;
				   case 15: resultado[j] = 'F';
					   break;
				   }
			   }
			   i--;
			   j++;
		   }
		   return resultado;
	   }
	   
private: System::Void BTConREC_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		System::String^ num;
		num = NumREC->Text;
		double numero;
		int base;
		base = Convert::ToInt32(BaseREC->Text);
		numero = Convert::ToInt32(num);
		if (base > 10 || base < 2)
		{
			MessageBox::Show("Ingresa valores en el rango de 2 a 10");
		}
		else
		{
			ConvREC->Text = Convert::ToString(numeros(numero, 0, base));
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Dato ingresado erróneo");
	}
}
	   static double numeros(int numero, int contador, int base)
	   {
		   if (numero < 1)
		   {
			   return 0;
		   }
		   return (numero % base) * pow(10, contador) + numeros((numero / base), (contador + 1), base);
	   }
private: System::Void ContINT_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ palabra;
	palabra = txtINT->Text;
	CantINT->Text = Convert::ToString(convINT(palabra));
}
	   static int convINT(System::String^ palabra)
	   {
		   int cantidad = 0;
		   for (size_t i = 0; i < palabra->Split(',')->Length; i++)
		   {
			   cantidad += compIteración(palabra->Split(',')[i]);
		   }
		   return cantidad;
	   }
	   static int compIteración(System::String^ Pal)
	   {
		   int comprobador;
		   for (size_t i = 0, j = (Pal->Length - 1); i < ((Pal->Length / 2) + 1); i++, j--)
		   {
			   if (Pal[i] == Pal[j])
			   {
				   comprobador = 1;
			   }
			   else if (Pal[i] != Pal[j])
			   {
				   comprobador = 0;
				   break;
			   }
		   }
		   return comprobador;
	   }
private: System::Void ContREC_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ palabra;
	palabra = txtREC->Text;
	CantREC->Text = Convert::ToString(COMP(0, palabra));
}
	   static int COMP(int indice, System::String^ palabra)
	   {
		   if (indice == palabra->Split(',')->Length)
		   {
			   return 0;
		   }
		   return compPalindromo(palabra->Split(',')[indice], 0, (palabra->Split(',')[indice]->Length - 1)) + COMP((indice + 1), palabra);
	   }
	   static int compPalindromo(System::String^ palin, int inicio, int final)
	   {
		   if (palin[inicio] == palin[final])
		   {
			   if (inicio == ((palin->Length) - 1) / 2)
			   {
				   return 1;
			   }
			   return compPalindromo(palin, (inicio + 1), (final - 1));
		   }
		   return 0;
	   }
};
}
