#pragma once

#include "StudentData.h"

namespace RTU {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Receiptform
	/// </summary>
	public ref class Receiptform : public System::Windows::Forms::Form
	{

	public:
		StudentData^ sd = gcnew StudentData();

	public:
		Receiptform(void)
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
		~Receiptform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ lblFullname;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::Label^ lblCourse;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::Label^ lblCampus;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Label^ lblLRN;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ lblTrank;

	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ lblStrand;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ lblGender;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Receiptform::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->lblFullname = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->lblGender = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->lblStrand = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->lblTrank = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->lblLRN = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->lblCampus = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->lblCourse = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->groupBox8);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->groupBox7);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->groupBox6);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->groupBox5);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(201, 110);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1005, 539);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Receiptform::groupBox1_Enter);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(435, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 45);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Receipt";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(74, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Full Name";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->lblFullname);
			this->groupBox2->Location = System::Drawing::Point(78, 136);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(397, 49);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			// 
			// lblFullname
			// 
			this->lblFullname->AutoSize = true;
			this->lblFullname->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFullname->Location = System::Drawing::Point(6, 16);
			this->lblFullname->Name = L"lblFullname";
			this->lblFullname->Size = System::Drawing::Size(0, 23);
			this->lblFullname->TabIndex = 0;
			this->lblFullname->Click += gcnew System::EventHandler(this, &Receiptform::label3_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->lblGender);
			this->groupBox3->Location = System::Drawing::Point(78, 226);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(96, 43);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			// 
			// lblGender
			// 
			this->lblGender->AutoSize = true;
			this->lblGender->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGender->Location = System::Drawing::Point(7, 13);
			this->lblGender->Name = L"lblGender";
			this->lblGender->Size = System::Drawing::Size(0, 23);
			this->lblGender->TabIndex = 0;
			this->lblGender->Click += gcnew System::EventHandler(this, &Receiptform::lblGender_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(74, 271);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 19);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Gender";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(192, 271);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 19);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Strand";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->lblStrand);
			this->groupBox4->Location = System::Drawing::Point(196, 226);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(131, 43);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			// 
			// lblStrand
			// 
			this->lblStrand->AutoSize = true;
			this->lblStrand->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblStrand->Location = System::Drawing::Point(7, 13);
			this->lblStrand->Name = L"lblStrand";
			this->lblStrand->Size = System::Drawing::Size(0, 23);
			this->lblStrand->TabIndex = 0;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(347, 272);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(45, 19);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Track";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->lblTrank);
			this->groupBox5->Location = System::Drawing::Point(351, 226);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(124, 43);
			this->groupBox5->TabIndex = 5;
			this->groupBox5->TabStop = false;
			// 
			// lblTrank
			// 
			this->lblTrank->AutoSize = true;
			this->lblTrank->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTrank->Location = System::Drawing::Point(7, 13);
			this->lblTrank->Name = L"lblTrank";
			this->lblTrank->Size = System::Drawing::Size(0, 23);
			this->lblTrank->TabIndex = 0;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->lblLRN);
			this->groupBox6->Location = System::Drawing::Point(78, 316);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(397, 49);
			this->groupBox6->TabIndex = 4;
			this->groupBox6->TabStop = false;
			// 
			// lblLRN
			// 
			this->lblLRN->AutoSize = true;
			this->lblLRN->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLRN->Location = System::Drawing::Point(6, 16);
			this->lblLRN->Name = L"lblLRN";
			this->lblLRN->Size = System::Drawing::Size(0, 23);
			this->lblLRN->TabIndex = 0;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(74, 368);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(199, 19);
			this->label11->TabIndex = 3;
			this->label11->Text = L"Learners Reference Number";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->lblCampus);
			this->groupBox7->Location = System::Drawing::Point(78, 400);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(169, 49);
			this->groupBox7->TabIndex = 6;
			this->groupBox7->TabStop = false;
			// 
			// lblCampus
			// 
			this->lblCampus->AutoSize = true;
			this->lblCampus->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCampus->Location = System::Drawing::Point(6, 16);
			this->lblCampus->Name = L"lblCampus";
			this->lblCampus->Size = System::Drawing::Size(0, 23);
			this->lblCampus->TabIndex = 0;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(74, 452);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(62, 19);
			this->label13->TabIndex = 5;
			this->label13->Text = L"Campus";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->lblCourse);
			this->groupBox8->Location = System::Drawing::Point(306, 400);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(169, 49);
			this->groupBox8->TabIndex = 8;
			this->groupBox8->TabStop = false;
			// 
			// lblCourse
			// 
			this->lblCourse->AutoSize = true;
			this->lblCourse->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCourse->Location = System::Drawing::Point(6, 16);
			this->lblCourse->Name = L"lblCourse";
			this->lblCourse->Size = System::Drawing::Size(0, 23);
			this->lblCourse->TabIndex = 0;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(302, 452);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(55, 19);
			this->label15->TabIndex = 7;
			this->label15->Text = L"Course";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(621, 167);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(250, 250);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// Receiptform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1414, 684);
			this->Controls->Add(this->groupBox1);
			this->DoubleBuffered = true;
			this->Name = L"Receiptform";
			this->Text = L"Receiptform";
			this->Load += gcnew System::EventHandler(this, &Receiptform::Receiptform_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblGender_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Receiptform_Load(System::Object^ sender, System::EventArgs^ e) {

	lblFullname->Text = sd->getFullname();
	lblGender->Text = sd->getGender();
	lblStrand->Text = sd->getStrand();
	lblTrank->Text = sd->getTrack();
	lblLRN->Text = sd->getLRN();
	lblCampus->Text = sd->getCampus();
	lblCourse->Text = sd->getCourse();
}
};
}
