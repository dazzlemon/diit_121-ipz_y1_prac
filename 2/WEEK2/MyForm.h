#include "approximation.h"
#include <cmath>
#include <fstream>
#include <string>
#include <vector>
#include "gauss_zeidel.h"

namespace WEEK2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ x1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox4;








	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox13;




	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox18;




	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox23;




	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox28;




	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox33;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox5;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox6;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox7;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox8;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox9;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox10;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox11;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox12;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox14;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox15;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox16;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox17;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox19;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox20;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox21;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox22;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox24;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox25;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox26;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox27;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox29;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox30;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox31;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox32;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::MaskedTextBox^ maskedTextBox34;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::ListBox^ listBox3;





















	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->x1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox13 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox18 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox23 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox28 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox33 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox5 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox6 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox7 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox8 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox9 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox10 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox11 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox12 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox14 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox15 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox16 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox17 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox19 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox20 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox21 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox22 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox24 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox25 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox26 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox27 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox29 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox30 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox31 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox32 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox34 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			this->chart1->Cursor = System::Windows::Forms::Cursors::Arrow;
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(12, 12);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::None;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Legend1";
			series3->Name = L"Approximation";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series4->Legend = L"Legend1";
			series4->Name = L"known f(x)";
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Size = System::Drawing::Size(543, 303);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(383, 673);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"approximate f(x)";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(383, 645);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(170, 22);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(231, 648);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"error for prebuild f(x)";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"***approximation by points(from *.txt file)***",
					L"f(x) = sin(x)", L"f(x) = 3 * pow(x, 5) - pow(x, 4) + 12 * pow(x, 3) - 1.1 * x", L"f(x) = x^(1/x)"
			});
			this->listBox1->Location = System::Drawing::Point(12, 459);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(543, 84);
			this->listBox1->TabIndex = 4;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Chebyshev\'s polynom approximation", L"Cubic spline approximation " });
			this->listBox2->Location = System::Drawing::Point(12, 346);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(543, 84);
			this->listBox2->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 433);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(205, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"choose function to approximate";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 322);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(201, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"choose approximation method:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 555);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(214, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"amount of nodes for prebuild f(x)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 583);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"step for prebuild f(x)";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(384, 555);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(170, 22);
			this->maskedTextBox1->TabIndex = 10;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(384, 583);
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(170, 22);
			this->maskedTextBox2->TabIndex = 11;
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->Location = System::Drawing::Point(384, 611);
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(170, 22);
			this->maskedTextBox3->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 616);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(165, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"starting x for prebuild f(x)";
			// 
			// x1
			// 
			this->x1->AutoSize = true;
			this->x1->Location = System::Drawing::Point(577, 12);
			this->x1->Name = L"x1";
			this->x1->Size = System::Drawing::Size(25, 17);
			this->x1->TabIndex = 14;
			this->x1->Text = L"A1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(657, 12);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(25, 17);
			this->label8->TabIndex = 15;
			this->label8->Text = L"A2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(737, 12);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(25, 17);
			this->label9->TabIndex = 16;
			this->label9->Text = L"A3";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(817, 12);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(25, 17);
			this->label10->TabIndex = 17;
			this->label10->Text = L"A4";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(897, 12);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(25, 17);
			this->label11->TabIndex = 18;
			this->label11->Text = L"A5";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(977, 12);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(16, 17);
			this->label12->TabIndex = 19;
			this->label12->Text = L"b";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(897, 179);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 17);
			this->label7->TabIndex = 24;
			this->label7->Text = L"x5";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(817, 179);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(22, 17);
			this->label13->TabIndex = 23;
			this->label13->Text = L"x4";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(737, 179);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(22, 17);
			this->label14->TabIndex = 22;
			this->label14->Text = L"x3";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(657, 180);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(22, 17);
			this->label15->TabIndex = 21;
			this->label15->Text = L"x2";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(577, 179);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(22, 17);
			this->label16->TabIndex = 20;
			this->label16->Text = L"x1";
			// 
			// maskedTextBox4
			// 
			this->maskedTextBox4->Location = System::Drawing::Point(577, 32);
			this->maskedTextBox4->Name = L"maskedTextBox4";
			this->maskedTextBox4->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox4->TabIndex = 25;
			// 
			// maskedTextBox13
			// 
			this->maskedTextBox13->Location = System::Drawing::Point(657, 32);
			this->maskedTextBox13->Name = L"maskedTextBox13";
			this->maskedTextBox13->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox13->TabIndex = 30;
			// 
			// maskedTextBox18
			// 
			this->maskedTextBox18->Location = System::Drawing::Point(737, 32);
			this->maskedTextBox18->Name = L"maskedTextBox18";
			this->maskedTextBox18->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox18->TabIndex = 35;
			// 
			// maskedTextBox23
			// 
			this->maskedTextBox23->Location = System::Drawing::Point(817, 32);
			this->maskedTextBox23->Name = L"maskedTextBox23";
			this->maskedTextBox23->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox23->TabIndex = 40;
			// 
			// maskedTextBox28
			// 
			this->maskedTextBox28->Location = System::Drawing::Point(897, 32);
			this->maskedTextBox28->Name = L"maskedTextBox28";
			this->maskedTextBox28->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox28->TabIndex = 45;
			// 
			// maskedTextBox33
			// 
			this->maskedTextBox33->Location = System::Drawing::Point(977, 32);
			this->maskedTextBox33->Name = L"maskedTextBox33";
			this->maskedTextBox33->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox33->TabIndex = 50;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(574, 346);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(39, 17);
			this->label17->TabIndex = 55;
			this->label17->Text = L"Ax=b";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(927, 32);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(34, 17);
			this->label18->TabIndex = 60;
			this->label18->Text = L"x5 =";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(847, 32);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(34, 17);
			this->label19->TabIndex = 59;
			this->label19->Text = L"x4 +";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(767, 32);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(34, 17);
			this->label20->TabIndex = 58;
			this->label20->Text = L"x3 +";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(687, 32);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(34, 17);
			this->label21->TabIndex = 57;
			this->label21->Text = L"x2 +";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(607, 32);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(34, 17);
			this->label22->TabIndex = 56;
			this->label22->Text = L"x1 +";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(927, 60);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(34, 17);
			this->label23->TabIndex = 71;
			this->label23->Text = L"x5 =";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(847, 60);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(34, 17);
			this->label24->TabIndex = 70;
			this->label24->Text = L"x4 +";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(767, 60);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(34, 17);
			this->label25->TabIndex = 69;
			this->label25->Text = L"x3 +";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(687, 60);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(34, 17);
			this->label26->TabIndex = 68;
			this->label26->Text = L"x2 +";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(607, 60);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(34, 17);
			this->label27->TabIndex = 67;
			this->label27->Text = L"x1 +";
			// 
			// maskedTextBox5
			// 
			this->maskedTextBox5->Location = System::Drawing::Point(977, 60);
			this->maskedTextBox5->Name = L"maskedTextBox5";
			this->maskedTextBox5->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox5->TabIndex = 66;
			// 
			// maskedTextBox6
			// 
			this->maskedTextBox6->Location = System::Drawing::Point(897, 60);
			this->maskedTextBox6->Name = L"maskedTextBox6";
			this->maskedTextBox6->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox6->TabIndex = 65;
			// 
			// maskedTextBox7
			// 
			this->maskedTextBox7->Location = System::Drawing::Point(817, 60);
			this->maskedTextBox7->Name = L"maskedTextBox7";
			this->maskedTextBox7->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox7->TabIndex = 64;
			// 
			// maskedTextBox8
			// 
			this->maskedTextBox8->Location = System::Drawing::Point(737, 60);
			this->maskedTextBox8->Name = L"maskedTextBox8";
			this->maskedTextBox8->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox8->TabIndex = 63;
			// 
			// maskedTextBox9
			// 
			this->maskedTextBox9->Location = System::Drawing::Point(657, 60);
			this->maskedTextBox9->Name = L"maskedTextBox9";
			this->maskedTextBox9->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox9->TabIndex = 62;
			// 
			// maskedTextBox10
			// 
			this->maskedTextBox10->Location = System::Drawing::Point(577, 60);
			this->maskedTextBox10->Name = L"maskedTextBox10";
			this->maskedTextBox10->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox10->TabIndex = 61;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(927, 88);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(34, 17);
			this->label28->TabIndex = 82;
			this->label28->Text = L"x5 =";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(847, 88);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(34, 17);
			this->label29->TabIndex = 81;
			this->label29->Text = L"x4 +";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(767, 88);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(34, 17);
			this->label30->TabIndex = 80;
			this->label30->Text = L"x3 +";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(687, 88);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(34, 17);
			this->label31->TabIndex = 79;
			this->label31->Text = L"x2 +";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(607, 88);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(34, 17);
			this->label32->TabIndex = 78;
			this->label32->Text = L"x1 +";
			// 
			// maskedTextBox11
			// 
			this->maskedTextBox11->Location = System::Drawing::Point(977, 88);
			this->maskedTextBox11->Name = L"maskedTextBox11";
			this->maskedTextBox11->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox11->TabIndex = 77;
			// 
			// maskedTextBox12
			// 
			this->maskedTextBox12->Location = System::Drawing::Point(897, 88);
			this->maskedTextBox12->Name = L"maskedTextBox12";
			this->maskedTextBox12->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox12->TabIndex = 76;
			// 
			// maskedTextBox14
			// 
			this->maskedTextBox14->Location = System::Drawing::Point(817, 88);
			this->maskedTextBox14->Name = L"maskedTextBox14";
			this->maskedTextBox14->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox14->TabIndex = 75;
			// 
			// maskedTextBox15
			// 
			this->maskedTextBox15->Location = System::Drawing::Point(737, 88);
			this->maskedTextBox15->Name = L"maskedTextBox15";
			this->maskedTextBox15->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox15->TabIndex = 74;
			// 
			// maskedTextBox16
			// 
			this->maskedTextBox16->Location = System::Drawing::Point(657, 88);
			this->maskedTextBox16->Name = L"maskedTextBox16";
			this->maskedTextBox16->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox16->TabIndex = 73;
			// 
			// maskedTextBox17
			// 
			this->maskedTextBox17->Location = System::Drawing::Point(577, 88);
			this->maskedTextBox17->Name = L"maskedTextBox17";
			this->maskedTextBox17->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox17->TabIndex = 72;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(927, 116);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(34, 17);
			this->label33->TabIndex = 93;
			this->label33->Text = L"x5 =";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(847, 116);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(34, 17);
			this->label34->TabIndex = 92;
			this->label34->Text = L"x4 +";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(767, 116);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(34, 17);
			this->label35->TabIndex = 91;
			this->label35->Text = L"x3 +";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(687, 116);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(34, 17);
			this->label36->TabIndex = 90;
			this->label36->Text = L"x2 +";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(607, 116);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(34, 17);
			this->label37->TabIndex = 89;
			this->label37->Text = L"x1 +";
			// 
			// maskedTextBox19
			// 
			this->maskedTextBox19->Location = System::Drawing::Point(977, 116);
			this->maskedTextBox19->Name = L"maskedTextBox19";
			this->maskedTextBox19->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox19->TabIndex = 88;
			// 
			// maskedTextBox20
			// 
			this->maskedTextBox20->Location = System::Drawing::Point(897, 116);
			this->maskedTextBox20->Name = L"maskedTextBox20";
			this->maskedTextBox20->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox20->TabIndex = 87;
			// 
			// maskedTextBox21
			// 
			this->maskedTextBox21->Location = System::Drawing::Point(817, 116);
			this->maskedTextBox21->Name = L"maskedTextBox21";
			this->maskedTextBox21->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox21->TabIndex = 86;
			// 
			// maskedTextBox22
			// 
			this->maskedTextBox22->Location = System::Drawing::Point(737, 116);
			this->maskedTextBox22->Name = L"maskedTextBox22";
			this->maskedTextBox22->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox22->TabIndex = 85;
			// 
			// maskedTextBox24
			// 
			this->maskedTextBox24->Location = System::Drawing::Point(657, 116);
			this->maskedTextBox24->Name = L"maskedTextBox24";
			this->maskedTextBox24->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox24->TabIndex = 84;
			// 
			// maskedTextBox25
			// 
			this->maskedTextBox25->Location = System::Drawing::Point(577, 116);
			this->maskedTextBox25->Name = L"maskedTextBox25";
			this->maskedTextBox25->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox25->TabIndex = 83;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(927, 144);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(34, 17);
			this->label38->TabIndex = 104;
			this->label38->Text = L"x5 =";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(847, 144);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(34, 17);
			this->label39->TabIndex = 103;
			this->label39->Text = L"x4 +";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(767, 144);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(34, 17);
			this->label40->TabIndex = 102;
			this->label40->Text = L"x3 +";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(687, 144);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(34, 17);
			this->label41->TabIndex = 101;
			this->label41->Text = L"x2 +";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(607, 144);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(34, 17);
			this->label42->TabIndex = 100;
			this->label42->Text = L"x1 +";
			// 
			// maskedTextBox26
			// 
			this->maskedTextBox26->Location = System::Drawing::Point(977, 144);
			this->maskedTextBox26->Name = L"maskedTextBox26";
			this->maskedTextBox26->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox26->TabIndex = 99;
			// 
			// maskedTextBox27
			// 
			this->maskedTextBox27->Location = System::Drawing::Point(897, 144);
			this->maskedTextBox27->Name = L"maskedTextBox27";
			this->maskedTextBox27->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox27->TabIndex = 98;
			// 
			// maskedTextBox29
			// 
			this->maskedTextBox29->Location = System::Drawing::Point(817, 144);
			this->maskedTextBox29->Name = L"maskedTextBox29";
			this->maskedTextBox29->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox29->TabIndex = 97;
			// 
			// maskedTextBox30
			// 
			this->maskedTextBox30->Location = System::Drawing::Point(737, 144);
			this->maskedTextBox30->Name = L"maskedTextBox30";
			this->maskedTextBox30->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox30->TabIndex = 96;
			// 
			// maskedTextBox31
			// 
			this->maskedTextBox31->Location = System::Drawing::Point(657, 144);
			this->maskedTextBox31->Name = L"maskedTextBox31";
			this->maskedTextBox31->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox31->TabIndex = 95;
			// 
			// maskedTextBox32
			// 
			this->maskedTextBox32->Location = System::Drawing::Point(577, 144);
			this->maskedTextBox32->Name = L"maskedTextBox32";
			this->maskedTextBox32->Size = System::Drawing::Size(28, 22);
			this->maskedTextBox32->TabIndex = 94;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(577, 209);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(64, 22);
			this->textBox2->TabIndex = 105;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(657, 209);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(64, 22);
			this->textBox3->TabIndex = 106;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(737, 209);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(64, 22);
			this->textBox4->TabIndex = 107;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(817, 209);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(64, 22);
			this->textBox5->TabIndex = 108;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(897, 209);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(64, 22);
			this->textBox6->TabIndex = 109;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(657, 346);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 22);
			this->button2->TabIndex = 110;
			this->button2->Text = L"solve";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// maskedTextBox34
			// 
			this->maskedTextBox34->Location = System::Drawing::Point(657, 247);
			this->maskedTextBox34->Name = L"maskedTextBox34";
			this->maskedTextBox34->Size = System::Drawing::Size(64, 22);
			this->maskedTextBox34->TabIndex = 111;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(574, 247);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(53, 17);
			this->label43->TabIndex = 112;
			this->label43->Text = L"epsilon";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(574, 314);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(126, 17);
			this->label44->TabIndex = 113;
			this->label44->Text = L"size(amount of x\'s)";
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 16;
			this->listBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2", L"3", L"4", L"5" });
			this->listBox3->Location = System::Drawing::Point(737, 247);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(224, 84);
			this->listBox3->TabIndex = 114;
			this->listBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox3_SelectedIndexChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1026, 702);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->maskedTextBox34);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->maskedTextBox26);
			this->Controls->Add(this->maskedTextBox27);
			this->Controls->Add(this->maskedTextBox29);
			this->Controls->Add(this->maskedTextBox30);
			this->Controls->Add(this->maskedTextBox31);
			this->Controls->Add(this->maskedTextBox32);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->maskedTextBox19);
			this->Controls->Add(this->maskedTextBox20);
			this->Controls->Add(this->maskedTextBox21);
			this->Controls->Add(this->maskedTextBox22);
			this->Controls->Add(this->maskedTextBox24);
			this->Controls->Add(this->maskedTextBox25);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->maskedTextBox11);
			this->Controls->Add(this->maskedTextBox12);
			this->Controls->Add(this->maskedTextBox14);
			this->Controls->Add(this->maskedTextBox15);
			this->Controls->Add(this->maskedTextBox16);
			this->Controls->Add(this->maskedTextBox17);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->maskedTextBox5);
			this->Controls->Add(this->maskedTextBox6);
			this->Controls->Add(this->maskedTextBox7);
			this->Controls->Add(this->maskedTextBox8);
			this->Controls->Add(this->maskedTextBox9);
			this->Controls->Add(this->maskedTextBox10);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->maskedTextBox33);
			this->Controls->Add(this->maskedTextBox28);
			this->Controls->Add(this->maskedTextBox23);
			this->Controls->Add(this->maskedTextBox18);
			this->Controls->Add(this->maskedTextBox13);
			this->Controls->Add(this->maskedTextBox4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->x1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->maskedTextBox3);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		int aprox_am, node_amount, power;
		double x_start, aproximation, step;//x1-x0;
		std::vector<double> y0;
		std::vector<double> x0;
		pointFunc FuncS[3]{ f_x, f_x0, f_x1 };

		int function = listBox1->SelectedIndex;
		if (function == 0) {
			std::ifstream cheby_input;
			cheby_input.open("D:\\1uno1\\diit\\year1\\prac\\Done\\week1_full_95\\WEEK1\\cheby_file.txt");
			std::string trash;
			std::getline(cheby_input, trash);

			this->chart1->Series["known f(x)"]->Points->Clear();
			for (int i = 0; !cheby_input.eof(); i++) {//
				cheby_input >> x_start;
				x0.push_back(x_start);
				cheby_input >> x_start;
				y0.push_back(x_start);
				this->chart1->Series["known f(x)"]->Points->AddXY(x0[i], y0[i]);
			}
			step = x0[1] - x0[0];
			this->textBox1->Text = Convert::ToString("  ");
			this->maskedTextBox1->Text = Convert::ToString("  ");
			this->maskedTextBox2->Text = Convert::ToString("  ");
			this->maskedTextBox3->Text = Convert::ToString("  ");
		}
		else {
			this->chart1->Series["known f(x)"]->Points->Clear();
			int nodes = Convert::ToInt16(maskedTextBox1->Text);
			double start = Convert::ToDouble(maskedTextBox3->Text);
			step = Convert::ToDouble(maskedTextBox2->Text);
			for (int i = 0; i < nodes; i++) {
				x0.push_back(i);
				y0.push_back(FuncS[function - 1](start + i * step));//add step for i, add f(x) choosing
				this->chart1->Series["known f(x)"]->Points->AddXY(x0[i], y0[i]);
			}
		}

		x_start = x0[0];
		node_amount = x0.size() - 1;
		power = node_amount / 2;
		aproximation = 0.001;
		aprox_am = (x0.back() - x0[0]) / aproximation + 1;

		int method = listBox2->SelectedIndex;
		switch (method) {
		case 0:
			this->chart1->Series["Approximation"]->Points->Clear();
			if (function == 0) {
				for (int i = 0; i < aprox_am; i++) {
					this->chart1->Series["Approximation"]->Points->AddXY((x_start + aproximation * i), Q_x((x_start + aproximation * i), power, node_amount, step, y0, x0));
				}
			}
			else {
				double error = 0;
				for (int i = 0; i < aprox_am; i++) {
					this->chart1->Series["Approximation"]->Points->AddXY((x_start + aproximation * i), Q_x((x_start + aproximation * i), power, node_amount, step, y0, x0));
					error += abs(FuncS[function - 1](x_start + aproximation * i) - Q_x((x_start + aproximation * i), power, node_amount, step, y0, x0));
				}
				error /= aprox_am;
				this->textBox1->Text = Convert::ToString(error);
			}
			break;
		case 1:
			double* b = new double[node_amount];
			double* c = new double[node_amount];
			double* d = new double[node_amount];
			cubicSplineInit(y0, b, c, d, x0, node_amount);
			this->chart1->Series["Approximation"]->Points->Clear();
			if (function == 0) {
				for (int i = 0; i < aprox_am; i++) {
					this->chart1->Series["Approximation"]->Points->AddXY((x_start + aproximation * i), cubicSpline((x_start + aproximation * i), y0, b, c, d, x0));
				}
			}
			else {
				double error = 0;
				for (int i = 0; i < aprox_am; i++) {
					this->chart1->Series["Approximation"]->Points->AddXY((x_start + aproximation * i), cubicSpline((x_start + aproximation * i), y0, b, c, d, x0));
					error += abs(FuncS[function - 1](x_start + aproximation * i) - cubicSpline((x_start + aproximation * i), y0, b, c, d, x0));
				}
				error /= aprox_am;
				this->textBox1->Text = Convert::ToString(error);
			}
			break;
		}
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
 
	const int n = 5;
	double** a = new double* [n];
	for (int i = 0; i < n; i++)
		a[i] = new double[n];

#pragma region A_matrix_init
	a[0][0] = Convert::ToDouble(maskedTextBox4->Text);
	a[0][1] = Convert::ToDouble(maskedTextBox13->Text);
	a[0][2] = Convert::ToDouble(maskedTextBox18->Text);
	a[0][3] = Convert::ToDouble(maskedTextBox23->Text);
	a[0][4] = Convert::ToDouble(maskedTextBox28->Text);

	a[1][0] = Convert::ToDouble(maskedTextBox10->Text);
	a[1][1] = Convert::ToDouble(maskedTextBox9->Text);
	a[1][2] = Convert::ToDouble(maskedTextBox8->Text);
	a[1][3] = Convert::ToDouble(maskedTextBox7->Text);
	a[1][4] = Convert::ToDouble(maskedTextBox6->Text);

	a[2][0] = Convert::ToDouble(maskedTextBox17->Text);
	a[2][1] = Convert::ToDouble(maskedTextBox16->Text);
	a[2][2] = Convert::ToDouble(maskedTextBox15->Text);
	a[2][3] = Convert::ToDouble(maskedTextBox14->Text);
	a[2][4] = Convert::ToDouble(maskedTextBox12->Text);

	a[3][0] = Convert::ToDouble(maskedTextBox25->Text);
	a[3][1] = Convert::ToDouble(maskedTextBox24->Text);
	a[3][2] = Convert::ToDouble(maskedTextBox22->Text);
	a[3][3] = Convert::ToDouble(maskedTextBox21->Text);
	a[3][4] = Convert::ToDouble(maskedTextBox20->Text);

	a[4][0] = Convert::ToDouble(maskedTextBox32->Text);
	a[4][1] = Convert::ToDouble(maskedTextBox31->Text);
	a[4][2] = Convert::ToDouble(maskedTextBox30->Text);
	a[4][3] = Convert::ToDouble(maskedTextBox29->Text);
	a[4][4] = Convert::ToDouble(maskedTextBox27->Text);
#pragma endregion

	double b[n]{Convert::ToDouble(maskedTextBox33->Text), Convert::ToDouble(maskedTextBox5->Text), Convert::ToDouble(maskedTextBox11->Text), Convert::ToDouble(maskedTextBox19->Text), Convert::ToDouble(maskedTextBox26->Text)};
	double epsilon = Convert::ToDouble(maskedTextBox34->Text);
	double x_new[n]{0, 0, 0, 0, 0};//start approx
	int size = listBox3->SelectedIndex + 2;
	gauss_zeidel(a, b, epsilon, size, x_new);
	
	textBox2->Text = Convert::ToString(x_new[0]);
	textBox3->Text = Convert::ToString(x_new[1]);
	textBox4->Text = Convert::ToString(x_new[2]);
	textBox5->Text = Convert::ToString(x_new[3]);
	textBox6->Text = Convert::ToString(x_new[4]);
}
private: System::Void listBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
#pragma region all_0
	maskedTextBox4->Text = Convert::ToString("0");
	maskedTextBox13->Text = Convert::ToString("0");
	maskedTextBox18->Text = Convert::ToString("0");
	maskedTextBox23->Text = Convert::ToString("0");
	maskedTextBox28->Text = Convert::ToString("0");
	maskedTextBox33->Text = Convert::ToString("0");

	maskedTextBox10->Text = Convert::ToString("0");
	maskedTextBox9->Text = Convert::ToString("0");
	maskedTextBox8->Text = Convert::ToString("0");
	maskedTextBox7->Text = Convert::ToString("0");
	maskedTextBox6->Text = Convert::ToString("0");
	maskedTextBox5->Text = Convert::ToString("0");

	maskedTextBox17->Text = Convert::ToString("0");
	maskedTextBox16->Text = Convert::ToString("0");
	maskedTextBox15->Text = Convert::ToString("0");
	maskedTextBox14->Text = Convert::ToString("0");
	maskedTextBox12->Text = Convert::ToString("0");
	maskedTextBox11->Text = Convert::ToString("0");

	maskedTextBox25->Text = Convert::ToString("0");
	maskedTextBox24->Text = Convert::ToString("0");
	maskedTextBox22->Text = Convert::ToString("0");
	maskedTextBox21->Text = Convert::ToString("0");
	maskedTextBox20->Text = Convert::ToString("0");
	maskedTextBox19->Text = Convert::ToString("0");

	maskedTextBox32->Text = Convert::ToString("0");
	maskedTextBox31->Text = Convert::ToString("0");
	maskedTextBox30->Text = Convert::ToString("0");
	maskedTextBox29->Text = Convert::ToString("0");
	maskedTextBox27->Text = Convert::ToString("0");
	maskedTextBox26->Text = Convert::ToString("0");

	textBox2->Text = Convert::ToString("0");
	textBox3->Text = Convert::ToString("0");
	textBox4->Text = Convert::ToString("0");
	textBox5->Text = Convert::ToString("0");
	textBox6->Text = Convert::ToString("0");

	maskedTextBox34->Text = Convert::ToString("0.001");
#pragma endregion

#pragma region all invisible
	maskedTextBox18->Visible = false;
	maskedTextBox23->Visible = false;
	maskedTextBox28->Visible = false;

	maskedTextBox8->Visible = false;
	maskedTextBox7->Visible = false;
	maskedTextBox6->Visible = false;

	maskedTextBox17->Visible = false;
	maskedTextBox16->Visible = false;
	maskedTextBox15->Visible = false;
	maskedTextBox14->Visible = false;
	maskedTextBox12->Visible = false;
	maskedTextBox11->Visible = false;

	maskedTextBox25->Visible = false;
	maskedTextBox24->Visible = false;
	maskedTextBox22->Visible = false;
	maskedTextBox21->Visible = false;
	maskedTextBox20->Visible = false;
	maskedTextBox19->Visible = false;

	maskedTextBox32->Visible = false;
	maskedTextBox31->Visible = false;
	maskedTextBox30->Visible = false;
	maskedTextBox29->Visible = false;
	maskedTextBox27->Visible = false;
	maskedTextBox26->Visible = false;

	textBox4->Visible = false;
	textBox5->Visible = false;
	textBox6->Visible = false;

	label9->Visible = false;
	label10->Visible = false;
	label11->Visible = false;

	label20->Visible = false;
	label19->Visible = false;
	label18->Visible = false;

	label25->Visible = false;
	label24->Visible = false;
	label23->Visible = false;

	label32->Visible = false;
	label31->Visible = false;
	label30->Visible = false;
	label29->Visible = false;
	label28->Visible = false;

	label37->Visible = false;
	label36->Visible = false;
	label35->Visible = false;
	label34->Visible = false;
	label33->Visible = false;

	label42->Visible = false;
	label41->Visible = false;
	label40->Visible = false;
	label39->Visible = false;
	label38->Visible = false;

	label14->Visible = false;
	label13->Visible = false;
	label7->Visible = false;
#pragma endregion

	int size = listBox3->SelectedIndex;
	switch (size) {
	case 3:
		maskedTextBox28->Visible = true;
		maskedTextBox6->Visible = true;
		maskedTextBox12->Visible = true;
		maskedTextBox20->Visible = true;
		maskedTextBox27->Visible = true;
		maskedTextBox29->Visible = true;
		maskedTextBox30->Visible = true;
		maskedTextBox31->Visible = true;
		maskedTextBox32->Visible = true;
		maskedTextBox26->Visible = true;

		label11->Visible = true;
		label18->Visible = true;
		label23->Visible = true;
		label28->Visible = true;
		label33->Visible = true;
		label38->Visible = true;
		label39->Visible = true;
		label40->Visible = true;
		label41->Visible = true;
		label42->Visible = true;

		textBox6->Visible = true;
		label7->Visible = true;

		//rows/columns 1-5 visible(labels/maskedTextBoxes)
	case 2:
		maskedTextBox23->Visible = true;
		maskedTextBox7->Visible = true;
		maskedTextBox14->Visible = true;
		maskedTextBox21->Visible = true;
		maskedTextBox22->Visible = true;
		maskedTextBox24->Visible = true;
		maskedTextBox25->Visible = true;
		maskedTextBox19->Visible = true;

		label10->Visible = true;
		label19->Visible = true;
		label24->Visible = true;
		label29->Visible = true;
		label34->Visible = true;
		label35->Visible = true;
		label36->Visible = true;
		label37->Visible = true;

		textBox5->Visible = true;
		label13->Visible = true;

		//rows/columns 1-4 visible(labels/maskedTextBoxes)
	case 1:
		maskedTextBox18->Visible = true;
		maskedTextBox8->Visible = true;
		maskedTextBox15->Visible = true;
		maskedTextBox16->Visible = true;
		maskedTextBox17->Visible = true;
		maskedTextBox11->Visible = true;

		label9->Visible = true;
		label20->Visible = true;
		label25->Visible = true;
		label30->Visible = true;
		label31->Visible = true;
		label32->Visible = true;

		textBox4->Visible = true;
		label14->Visible = true;
		//rows/columns 1-3 visible(labels/maskedTextBoxes)
	case 0:
		//rows/columns 1-2 visible(labels/maskedTextBoxes)
		break;
	}

	label21->Text = "x2 +";
	label26->Text = "x2 +";
	label20->Text = "x3 +";
	label25->Text = "x3 +";
	label30->Text = "x3 +";
	label19->Text = "x4 +";
	label24->Text = "x4 +";
	label29->Text = "x4 +";
	label34->Text = "x4 +";

	switch (size) {
	case 0:
		label21->Text = "x2 =";
		label26->Text = "x2 =";
	case 1:
		label20->Text = "x3 =";
		label25->Text = "x3 =";
		label30->Text = "x3 =";
		break;
	case 2:
		label19->Text = "x4 =";
		label24->Text = "x4 =";
		label29->Text = "x4 =";
		label34->Text = "x4 =";
		break;
	}
}
};
}
