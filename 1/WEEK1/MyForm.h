#pragma once

#include "methods.h"
#include "math_functions_x.h"
#include <vector>
#include <string>

std::string f_ch1 = { "'f(x) = pow(x1, 4) + (2 * pow(x2, 4)) + (x1 * x1 * x2 * x2) + (2 * x1) + x2'" };
std::string f_ch2 = { "'f(x) = ((x1 - 5) * (x1 - 5)) * ((x2 - 4) * (x2 - 4)) + ((x1 - 5) * (x1 - 5)) + ((x2 - 4) * (x2 - 4)) + 1'" };
std::string f_ch3 = { "'f(x) = (x1 * x1) + (2 * x2 * x2) + pow(exp(1), ((x1 * x1) + (x2 * x2))) - x1 + (2 * x2)'" };

std::string f_ch4 = { "'f(x) = (x1 * x1) + (2 * x2 * x2) + pow(exp(1), ((x1 * x1) + (x2 * x2))) - x1 + (2 * x2)'" };//
std::string f_ch5 = { "'f(x) = (x1 * x1) + (2 * x2 * x2) + pow(exp(1), ((x1 * x1) + (x2 * x2))) - x1 + (2 * x2)'" };//
std::string f_ch6 = { "'f(x) = (x1 * x1) + (2 * x2 * x2) + pow(exp(1), ((x1 * x1) + (x2 * x2))) - x1 + (2 * x2)'" };//

Function3d func3d[3]{	{F1_3d, f1_x1_3d, f1_x2_3d, &f_ch1},
						{F2_3d, f2_x1_3d, f2_x2_3d, &f_ch2},
						{F3_3d, f3_x1_3d, f3_x2_3d, &f_ch3}
};

Function2d func2d[3]{	{F_sqr, &f_ch4},
						{F2d_0, &f_ch5},
						{F2d_1, &f_ch6},
};

namespace WEEK1 {

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



	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ calculate;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;



	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox4;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox5;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox6;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox7;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox8;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox9;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;





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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->calculate = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox5 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox6 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox7 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox8 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox9 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(737, 608);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 340);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(212, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Choose 3d function to minimize: ";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// listBox
			// 
			this->listBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox->FormattingEnabled = true;
			this->listBox->ItemHeight = 16;
			this->listBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"\'f(x) = x1^4 + 2*x2^4 + (x1*x2)^2 + 2*x1 + x2\'",
					L"\'f(x) = ((x1 - 5)*(x2 - 4))^2 + (x1 - 5)^2 + (x2 - 4)^2 + 1\'",
					L"\'f(x) = x1^2 + 2*x2^2 + exp^(x1^2 + x2^2) - x1 + 2*x2\'"
					
			});
			this->listBox->Location = System::Drawing::Point(12, 360);
			this->listBox->Name = L"listBox";
			this->listBox->Size = System::Drawing::Size(524, 52);
			this->listBox->TabIndex = 5;
			this->listBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 420);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"epsilon, digits after *.*";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 450);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"x1 estimate";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(10, 480);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"x2 estimate";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 531);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"x1 ans";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(118, 531);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"x2 ans";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(224, 531);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 17);
			this->label7->TabIndex = 14;
			this->label7->Text = L"f(x1 ans, x2 ans)";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 562);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 15;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(121, 562);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 16;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(227, 562);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 17;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// calculate
			// 
			this->calculate->Location = System::Drawing::Point(10, 612);
			this->calculate->Name = L"calculate";
			this->calculate->Size = System::Drawing::Size(157, 23);
			this->calculate->TabIndex = 18;
			this->calculate->Text = L"minimize f(x1, x2)";
			this->calculate->UseVisualStyleBackColor = true;
			this->calculate->Click += gcnew System::EventHandler(this, &MyForm::calculate_Click);
			// 
			// chart1
			// 
			chartArea5->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->chart1->Legends->Add(legend5);
			this->chart1->Location = System::Drawing::Point(12, 12);
			this->chart1->Name = L"chart1";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series5->Legend = L"Legend1";
			series5->Name = L"Series1";
			series5->XValueMember = L"x1";
			series5->YValueMembers = L"x2";
			this->chart1->Series->Add(series5);
			this->chart1->Size = System::Drawing::Size(524, 325);
			this->chart1->TabIndex = 19;
			this->chart1->Text = L"chart";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(160, 420);
			this->maskedTextBox1->Mask = L"00000000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(100, 22);
			this->maskedTextBox1->TabIndex = 20;
			this->maskedTextBox1->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &MyForm::maskedTextBox1_MaskInputRejected);
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(160, 450);
			this->maskedTextBox2->Mask = L"####.0000";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(100, 22);
			this->maskedTextBox2->TabIndex = 21;
			this->maskedTextBox2->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &MyForm::maskedTextBox2_MaskInputRejected);
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->Location = System::Drawing::Point(160, 480);
			this->maskedTextBox3->Mask = L"####.0000";
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(100, 22);
			this->maskedTextBox3->TabIndex = 22;
			this->maskedTextBox3->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &MyForm::maskedTextBox3_MaskInputRejected);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(548, 249);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(264, 23);
			this->button1->TabIndex = 23;
			this->button1->Text = L"calculate root f(x)";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(712, 210);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 24;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(545, 210);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 17);
			this->label8->TabIndex = 25;
			this->label8->Text = L"root f(x)";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(545, 118);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(158, 17);
			this->label9->TabIndex = 29;
			this->label9->Text = L"epsilon digits after point";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(545, 148);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(55, 17);
			this->label10->TabIndex = 30;
			this->label10->Text = L"left limit";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(545, 178);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(64, 17);
			this->label11->TabIndex = 31;
			this->label11->Text = L"right limit";
			// 
			// maskedTextBox4
			// 
			this->maskedTextBox4->Location = System::Drawing::Point(712, 118);
			this->maskedTextBox4->Mask = L"00000000";
			this->maskedTextBox4->Name = L"maskedTextBox4";
			this->maskedTextBox4->Size = System::Drawing::Size(100, 22);
			this->maskedTextBox4->TabIndex = 32;
			this->maskedTextBox4->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &MyForm::maskedTextBox4_MaskInputRejected);
			// 
			// maskedTextBox5
			// 
			this->maskedTextBox5->Location = System::Drawing::Point(712, 148);
			this->maskedTextBox5->Mask = L"####.0000";
			this->maskedTextBox5->Name = L"maskedTextBox5";
			this->maskedTextBox5->Size = System::Drawing::Size(100, 22);
			this->maskedTextBox5->TabIndex = 33;
			// 
			// maskedTextBox6
			// 
			this->maskedTextBox6->Location = System::Drawing::Point(712, 178);
			this->maskedTextBox6->Mask = L"####.0000";
			this->maskedTextBox6->Name = L"maskedTextBox6";
			this->maskedTextBox6->Size = System::Drawing::Size(100, 22);
			this->maskedTextBox6->TabIndex = 34;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"3*x^2 + 6*x - 8", 
					L"(x - 5)/(x + 3)",
					L"x^(1/3) + x^2 - 17"
			});
			this->listBox1->Location = System::Drawing::Point(545, 10);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(267, 84);
			this->listBox1->TabIndex = 35;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(545, 95);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(249, 17);
			this->label12->TabIndex = 36;
			this->label12->Text = L"choose f(x) to find the root or minimize";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(548, 445);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(264, 23);
			this->button3->TabIndex = 37;
			this->button3->Text = L"minimize f(x)";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(712, 417);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 38;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(545, 286);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(55, 17);
			this->label13->TabIndex = 39;
			this->label13->Text = L"left limit";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(545, 316);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(64, 17);
			this->label14->TabIndex = 40;
			this->label14->Text = L"right limit";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(545, 346);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(162, 17);
			this->label15->TabIndex = 41;
			this->label15->Text = L"epsilon, digits after point";
			// 
			// maskedTextBox7
			// 
			this->maskedTextBox7->Location = System::Drawing::Point(712, 310);
			this->maskedTextBox7->Mask = L"####.0000";
			this->maskedTextBox7->Name = L"maskedTextBox7";
			this->maskedTextBox7->Size = System::Drawing::Size(100, 22);
			this->maskedTextBox7->TabIndex = 45;
			// 
			// maskedTextBox8
			// 
			this->maskedTextBox8->Location = System::Drawing::Point(712, 278);
			this->maskedTextBox8->Mask = L"####.0000";
			this->maskedTextBox8->Name = L"maskedTextBox8";
			this->maskedTextBox8->Size = System::Drawing::Size(100, 22);
			this->maskedTextBox8->TabIndex = 46;
			// 
			// maskedTextBox9
			// 
			this->maskedTextBox9->Location = System::Drawing::Point(712, 343);
			this->maskedTextBox9->Mask = L"00000000";
			this->maskedTextBox9->Name = L"maskedTextBox9";
			this->maskedTextBox9->Size = System::Drawing::Size(100, 22);
			this->maskedTextBox9->TabIndex = 47;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(712, 390);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 48;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(548, 390);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 17);
			this->label16->TabIndex = 49;
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(548, 417);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(75, 17);
			this->label17->TabIndex = 50;
			this->label17->Text = L"argmin f(x)";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(548, 389);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(54, 17);
			this->label18->TabIndex = 51;
			this->label18->Text = L"min f(x)";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(825, 643);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->maskedTextBox9);
			this->Controls->Add(this->maskedTextBox8);
			this->Controls->Add(this->maskedTextBox7);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->maskedTextBox6);
			this->Controls->Add(this->maskedTextBox5);
			this->Controls->Add(this->maskedTextBox4);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->maskedTextBox3);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->calculate);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Name = L"MyForm";
			this->Text = L"Chart1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		Application::Exit();

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	}
	private: System::Void listBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void calculate_Click(System::Object^ sender, System::EventArgs^ e) {

	double x0[2]{Convert::ToDouble(maskedTextBox2->Text), Convert::ToDouble(maskedTextBox3->Text) };
	int n = listBox->SelectedIndex;
	double epsilon = pow(10, -Convert::ToDouble(maskedTextBox1->Text));

	std::vector<double> x1;
	std::vector<double> x2;

	CG3(func3d[n].Function, func3d[n].f_x1, func3d[n].f_x2, epsilon, x0, x1, x2);
	textBox4->Text = Convert::ToString(x0[0]);
	textBox5->Text = Convert::ToString(x0[1]);
	textBox6->Text = Convert::ToString(func3d[n].Function(x0[0], x0[1]));
	
	this->chart1->Series["Series1"]->Points->Clear();
	for (int i = 0; i < x1.size(); i++) {
		this->chart1->Series["Series1"]->Points->AddXY(x1[i], x2[i]);
	}
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void maskedTextBox1_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}
private: System::Void maskedTextBox2_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}
private: System::Void maskedTextBox3_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	double lim_left = Convert::ToDouble(maskedTextBox5->Text);
	double lim_right = Convert::ToDouble(maskedTextBox6->Text);
	double epsilon = pow(10, -Convert::ToDouble(maskedTextBox4->Text));

	int n = listBox1->SelectedIndex;

	textBox7->Text = Convert::ToString(bisection_null(func2d[n].Function, lim_left, lim_right, epsilon));

}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void maskedTextBox4_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	double lim_left, lim_right, epsilon;

	lim_left = Convert::ToDouble(maskedTextBox8->Text);
	lim_right = Convert::ToDouble(maskedTextBox7->Text);
	epsilon = pow(10, -Convert::ToDouble(maskedTextBox9->Text));

	int n = listBox1->SelectedIndex;
	double x_min = Fibonacci_minimization(func2d[n].Function, lim_left, lim_right, epsilon);
	textBox1->Text = Convert::ToString(x_min);
	textBox2->Text = Convert::ToString(func2d[n].Function(x_min));
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
