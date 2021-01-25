#pragma once
#include "integral_methods.h"
#include <cstdlib>
#include <ctime>
#include <cmath>

namespace week3 {

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->maskedTextBox4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 338);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(260, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"integrate f(X)";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"left rectangles", L"middle rectangles", L"right rectangles",
					L"trapezoid", L"simpson\'s"
			});
			this->listBox1->Location = System::Drawing::Point(12, 33);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(254, 84);
			this->listBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"choose integration method:";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"sin(x)", L"x^(1/x)", L"-x^2 + 3x +7", L"-x^3 + 4x^2 - 6x + 24",
					L"..."
			});
			this->listBox2->Location = System::Drawing::Point(12, 146);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(254, 84);
			this->listBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(158, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"choose f(x) to integrate:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 250);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"left limit";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(10, 280);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"right limit";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(160, 250);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(106, 22);
			this->maskedTextBox1->TabIndex = 9;
			this->maskedTextBox1->Text = L"0.00001";
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(160, 280);
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(106, 22);
			this->maskedTextBox2->TabIndex = 10;
			this->maskedTextBox2->Text = L"3.141592653";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 375);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(260, 22);
			this->textBox1->TabIndex = 12;
			// 
			// maskedTextBox4
			// 
			this->maskedTextBox4->Location = System::Drawing::Point(160, 310);
			this->maskedTextBox4->Name = L"maskedTextBox4";
			this->maskedTextBox4->Size = System::Drawing::Size(106, 22);
			this->maskedTextBox4->TabIndex = 14;
			this->maskedTextBox4->Text = L"100";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(10, 310);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(122, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"fragments amount";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(303, 9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(736, 388);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1054, 407);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->maskedTextBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L" Vosstanie Mashin";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		pointFunc2d Func[5]{f_x, f_x0, f_x1, f_x2, f_x3};

		double integral;
		int method = listBox1->SelectedIndex;
		int f = listBox2->SelectedIndex;
		int N = Convert::ToInt16(maskedTextBox4->Text);
		double a = Convert::ToDouble(maskedTextBox1->Text);
		double b = Convert::ToDouble(maskedTextBox2->Text);

		if (method < 3)
			integral = integral_rectangles(Func[f], a, b, N, method);
		else if(method == 3)
			integral = integral_trapezoid(Func[f], a, b, N);
		else
			integral = integral_simpson(Func[f], a, b, N);
		textBox1->Text = Convert::ToString(integral);

		System::Drawing::Graphics^ graph = this->pictureBox1->CreateGraphics();
		System::Drawing::Rectangle rect;
		System::Windows::Forms::PaintEventArgs^ e1 = gcnew System::Windows::Forms::PaintEventArgs(graph, rect);
		this->pictureBox1_Paint(sender, e1);
	}
	
private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	pointFunc2d Func[5]{ f_x, f_x0, f_x1, f_x2, f_x3 };
	double integral;
	int method = listBox1->SelectedIndex;
	int f = listBox2->SelectedIndex;
	int N = Convert::ToInt16(maskedTextBox4->Text);
	double a = Convert::ToDouble(maskedTextBox1->Text);
	double b = Convert::ToDouble(maskedTextBox2->Text);

	double wr = b - a;//real width
	int wg = this->pictureBox1->Width;//graphical width
	int hg = this->pictureBox1->Height;//graphical height
	double RtoG_x = wr / wg;//coefs
	
	double h_highest = Func[f](a);
	for (int i = 0; i <= wg; i++)
		if (Func[f](a + i * RtoG_x) > h_highest)
			h_highest = Func[f](a + i * RtoG_x);

	double h_lowest = Func[f](a);
	for (int i = 0; i <= wg; i++)
		if (Func[f](a + i * RtoG_x) < h_lowest)
			h_lowest = Func[f](a + i * RtoG_x);
	double hr = h_highest - h_lowest;//real height
	double RtoG_y = hr / hg;//coefs

	Point ltp(0, 0);Point rbp(wg - 1, hg - 1);
	e->Graphics->FillRectangle(Brushes::White, ltp.X, ltp.Y, rbp.X - ltp.X, rbp.Y - ltp.Y);
	e->Graphics->DrawRectangle(Pens::Black, ltp.X, ltp.Y, rbp.X- ltp.X, rbp.Y - ltp.Y);

	for (int i = 0; i <= wg; i++) {
		Point p1(i, hg - ((Func[f](a + i * RtoG_x) - h_lowest) / RtoG_y));
		Point p2(i + 1, hg - ((Func[f](a + (i + 1) * RtoG_x) - h_lowest) / RtoG_y));
		e->Graphics->DrawLine(Pens::Red, p1, p2);
	}


	int xOy_g, yOx_g;
	xOy_g = (hr + h_lowest) / RtoG_y;
	yOx_g = (wr - b) / RtoG_x;

	Point p1(0, xOy_g);
	Point p2(wg, xOy_g);
	e->Graphics->DrawLine(Pens::Black, p1, p2);//OY

	Point p3(yOx_g, 0);
	Point p4(yOx_g, hg);
	e->Graphics->DrawLine(Pens::Black, p3, p4);//OX
	

	double step = (b - a) / N;
	if (method < 3) {
		a += method * step / 2;
		for (int i = 0; i <= N; i++) {
			p1.Y = xOy_g;
			p1.X = i * (step) / RtoG_x;
			p2.X = p1.X;
			p2.Y = hg - ((Func[f](a + i * (step)) - h_lowest) / RtoG_y);
			e->Graphics->DrawLine(Pens::Blue, p1, p2);

			p3.Y = p2.Y;
			p3.X = (i + 1) * (step) / RtoG_x;
			e->Graphics->DrawLine(Pens::Blue, p2, p3);

			p4.X = p3.X;
			p4.Y = hg - ((Func[f](a + (i + 1) * (step)) - h_lowest) / RtoG_y);
			e->Graphics->DrawLine(Pens::Blue, p3, p4);
		}
	}
	else if (method == 3) {
		for (int i = 0; i <= N; i++) {
			p1.Y = xOy_g;
			p1.X = i * (step) / RtoG_x;
			p2.X = p1.X;
			p2.Y = hg - ((Func[f](a + i * (step)) - h_lowest) / RtoG_y);
			e->Graphics->DrawLine(Pens::Blue, p1, p2);

			p3.Y = hg - ((Func[f](a + (i + 1) * (step)) - h_lowest) / RtoG_y);
			p3.X = (i + 1) * (step) / RtoG_x;
			e->Graphics->DrawLine(Pens::Blue, p2, p3);
		}
	}
	else {
		//simpson's?
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	listBox1->SelectedIndex = 0;
	listBox2->SelectedIndex = 0;
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
