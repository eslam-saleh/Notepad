#pragma once

#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <conio.h>
#include <vector>
#include <msclr/marshal_cppstd.h>

namespace Project5 {

	using namespace std;
	using namespace msclr::interop;
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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Beige;
			this->label1->Font = (gcnew System::Drawing::Font(L"Poor Richard", 13, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(450, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 21);
			this->label1->TabIndex = 46;
			this->label1->Text = L"The File";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Beige;
			this->label6->Font = (gcnew System::Drawing::Font(L"Poor Richard", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(38, 280);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 14);
			this->label6->TabIndex = 45;
			this->label6->Text = L"Second Word";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Beige;
			this->label5->Font = (gcnew System::Drawing::Font(L"Poor Richard", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(50, 237);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 14);
			this->label5->TabIndex = 44;
			this->label5->Text = L"First Word";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Beige;
			this->label4->Font = (gcnew System::Drawing::Font(L"Poor Richard", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(264, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 14);
			this->label4->TabIndex = 43;
			this->label4->Text = L"Letters";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Beige;
			this->label3->Font = (gcnew System::Drawing::Font(L"Poor Richard", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(135, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 14);
			this->label3->TabIndex = 42;
			this->label3->Text = L"Words";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::LightYellow;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(7, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 15);
			this->label2->TabIndex = 41;
			this->label2->Text = L"Write to Add";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(24, 293);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 40;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::OrangeRed;
			this->button9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::LemonChiffon;
			this->button9->Location = System::Drawing::Point(286, 254);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(90, 54);
			this->button9->TabIndex = 39;
			this->button9->Text = L"Clear";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(24, 254);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 38;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(243, 169);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 37;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(24, 169);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 36;
			this->textBox5->Text = L"Enter a Word..";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(232, 71);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 35;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(106, 72);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 34;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(85, 28);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(137, 20);
			this->textBox2->TabIndex = 33;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::LightSteelBlue;
			this->button8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Indigo;
			this->button8->Location = System::Drawing::Point(130, 267);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(84, 36);
			this->button8->TabIndex = 32;
			this->button8->Text = L"Replace";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::LightSteelBlue;
			this->button7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Indigo;
			this->button7->Location = System::Drawing::Point(205, 201);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(94, 33);
			this->button7->TabIndex = 31;
			this->button7->Text = L"DeCipher";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LightSteelBlue;
			this->button6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Indigo;
			this->button6->Location = System::Drawing::Point(69, 202);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(92, 32);
			this->button6->TabIndex = 30;
			this->button6->Text = L"Cipher";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LightSteelBlue;
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Indigo;
			this->button5->Location = System::Drawing::Point(220, 107);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(88, 37);
			this->button5->TabIndex = 29;
			this->button5->Text = L"ToUpper";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightSteelBlue;
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Indigo;
			this->button4->Location = System::Drawing::Point(69, 107);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(85, 37);
			this->button4->TabIndex = 28;
			this->button4->Text = L"ToLower";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightSteelBlue;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Indigo;
			this->button3->Location = System::Drawing::Point(138, 157);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(91, 39);
			this->button3->TabIndex = 27;
			this->button3->Text = L"Search";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Indigo;
			this->button2->Location = System::Drawing::Point(18, 65);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(82, 32);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Counter";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(382, 72);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(220, 250);
			this->textBox1->TabIndex = 25;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSteelBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Indigo;
			this->button1->Location = System::Drawing::Point(243, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 32);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Append";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(608, 334);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"EslamNotePad";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		String ^ FileContent;
		FileContent = System::Convert::ToString(textBox1->Text);
		String ^ App = System::Convert::ToString(textBox2->Text);
		FileContent += " ";
		FileContent += App;
		textBox1->Text = System::Convert::ToString(FileContent);

	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ FileContent;
	int counter = 1, counter2 = 0, temp = 0;
	FileContent = System::Convert::ToString(textBox1->Text);
	string str = marshal_as<string>(FileContent); //String^ to std
	for (int i = 0; i<str.length(); i++) {
		if (str[i] == ' ' || str[i] == '\n') {
			counter += 1;
		}
		else {
			counter2 += 1;
		}
	}

	textBox3->Text = System::Convert::ToString(counter);
	textBox4->Text = System::Convert::ToString(counter2);


}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ FileContent;
	String ^word1, ^word2;
	bool isOk = false;
	FileContent = System::Convert::ToString(textBox1->Text);
	string str = marshal_as<string>(FileContent);
	word1 = System::Convert::ToString(textBox5->Text);
	string word11 = marshal_as<string>(word1);
	for (int i = 0; i<str.size(); i++) {
		if (str[i] == word11[0] && str[i + 1] == word11[1] && str[i + 2] == word11[2]) {
			isOk = true;
			break;
		}
	}
	if (isOk) {
		textBox6->Text = System::Convert::ToString("Word has found !");
	}
	else {
		textBox6->Text = System::Convert::ToString("Word didn't find !");
	}

}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ FileContent;
	FileContent = System::Convert::ToString(textBox1->Text);
	string str = marshal_as<string>(FileContent);
	string temp = "";
	for (int i = 0; i<str.length(); i++) {
		if (str[i] != ' ' || str[i] != '\n') {
			temp += tolower(str[i]);
		}
		else {
			temp += ' ';
		}
	}
	String^ tempo = gcnew String(temp.c_str());
	textBox1->Text = System::Convert::ToString(tempo);

}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ FileContent;
	FileContent = System::Convert::ToString(textBox1->Text);
	string str = marshal_as<string>(FileContent);
	string temp = "";
	for (int i = 0; i<str.length(); i++) {
		if (str[i] != ' ' || str[i] != '\n') {
			temp += toupper(str[i]);
		}
		else {  
			temp += ' '; 
		}
	} 
	String^ tempo = gcnew String(temp.c_str());
	textBox1->Text = System::Convert::ToString(tempo);

}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ FileContent;
	FileContent = System::Convert::ToString(textBox1->Text);
	string str = marshal_as<string>(FileContent); //String^ to std
	string temp = "";
	for (int i = 0; i<str.length(); i++)
	{
		if (str[i] != ' ' || str[i] != '\n')
		{
			if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
				str[i] = str[i] + 13;

			else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'm' && str[i] <= 'z'))
				str[i] = str[i] - 13;
		}
	}
	String^ tempo = gcnew String(str.c_str());
	textBox1->Text = System::Convert::ToString(tempo);

}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ FileContent;
	FileContent = System::Convert::ToString(textBox1->Text);
	string str = marshal_as<string>(FileContent); //String^ to std
	string temp = "";
	for (int i = 0; i<str.length(); i++)
	{
		if (str[i] != ' ' || str[i] != '\n')
		{
			if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
				str[i] = str[i] + 13;

			else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'm' && str[i] <= 'z'))
				str[i] = str[i] - 13;
		}
	}
	String^ tempo = gcnew String(str.c_str());
	textBox1->Text = System::Convert::ToString(tempo);

}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ FileContent;
	String ^word1, ^word2;
	bool isOk = false;
	bool isFin = false;
	FileContent = System::Convert::ToString(textBox1->Text);
	string str = marshal_as<string>(FileContent); //String^ to std
	word1 = System::Convert::ToString(textBox7->Text);
	string word11 = marshal_as<string>(word1); //String^ to std
	word2 = System::Convert::ToString(textBox8->Text);
	string word22 = marshal_as<string>(word2); //String^ to std
	string temp = "";
	for (int i = 0; i<str.size(); i++) {
		if (!isFin) {
			temp = temp + str[i];
		}
		if (str[i] == word11[0] && str[i + 1] == word11[1] && str[i + 2] == word11[2]) {
			temp.erase(i - 1, i);
			temp = temp + ' ';
			temp += word22;
			isOk = true;
			isFin = true;
		}
		if (str[i] == ' '&& isOk) {
			temp += ' ';
			temp = temp + str[i];
			isOk = false;
			isFin = false;
		}
	}
	String^ tempo = gcnew String(temp.c_str());
	textBox1->Text = System::Convert::ToString(tempo);


}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = "";
	MessageBox::Show("Thanks 4 your visit ^^");

}
};
}
