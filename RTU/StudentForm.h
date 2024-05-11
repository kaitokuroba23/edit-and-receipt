#pragma once

#include "Receiptform.h"
#include "StudentData.h"

namespace RTU {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentForm
	/// </summary>
	public ref class StudentForm : public System::Windows::Forms::Form
	{
	public:
		StudentForm(void)
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
		~StudentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txbSurname;
	private: System::Windows::Forms::TextBox^ txbLRN;





	private: System::Windows::Forms::ComboBox^ cbTrack;


	private: System::Windows::Forms::ComboBox^ cbStrand;
	private: System::Windows::Forms::ComboBox^ cbCourse;


	private: System::Windows::Forms::ComboBox^ cbCampus;
	private: System::Windows::Forms::Button^ btnSave;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txbMiddlename;

	private: System::Windows::Forms::TextBox^ txbGivenname;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cbGender;
	private: System::Windows::Forms::Label^ label5;

	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txbMiddlename = (gcnew System::Windows::Forms::TextBox());
			this->txbGivenname = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->cbCourse = (gcnew System::Windows::Forms::ComboBox());
			this->cbCampus = (gcnew System::Windows::Forms::ComboBox());
			this->cbTrack = (gcnew System::Windows::Forms::ComboBox());
			this->cbStrand = (gcnew System::Windows::Forms::ComboBox());
			this->cbGender = (gcnew System::Windows::Forms::ComboBox());
			this->txbLRN = (gcnew System::Windows::Forms::TextBox());
			this->txbSurname = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->txbMiddlename);
			this->groupBox1->Controls->Add(this->txbGivenname);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->btnSave);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->cbCourse);
			this->groupBox1->Controls->Add(this->cbCampus);
			this->groupBox1->Controls->Add(this->cbTrack);
			this->groupBox1->Controls->Add(this->cbStrand);
			this->groupBox1->Controls->Add(this->cbGender);
			this->groupBox1->Controls->Add(this->txbLRN);
			this->groupBox1->Controls->Add(this->txbSurname);
			this->groupBox1->Location = System::Drawing::Point(177, 113);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1093, 519);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &StudentForm::groupBox1_Enter);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(445, 160);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 19);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Middle Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(251, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 19);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Given Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(101, 160);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 19);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Surname";
			// 
			// txbMiddlename
			// 
			this->txbMiddlename->BackColor = System::Drawing::SystemColors::Control;
			this->txbMiddlename->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txbMiddlename->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbMiddlename->Location = System::Drawing::Point(446, 116);
			this->txbMiddlename->Multiline = true;
			this->txbMiddlename->Name = L"txbMiddlename";
			this->txbMiddlename->Size = System::Drawing::Size(93, 41);
			this->txbMiddlename->TabIndex = 11;
			// 
			// txbGivenname
			// 
			this->txbGivenname->BackColor = System::Drawing::SystemColors::Control;
			this->txbGivenname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txbGivenname->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbGivenname->Location = System::Drawing::Point(255, 116);
			this->txbGivenname->Multiline = true;
			this->txbGivenname->Name = L"txbGivenname";
			this->txbGivenname->Size = System::Drawing::Size(171, 41);
			this->txbGivenname->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(496, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 45);
			this->label1->TabIndex = 9;
			this->label1->Text = L"EDIT";
			// 
			// btnSave
			// 
			this->btnSave->BackColor = System::Drawing::Color::RoyalBlue;
			this->btnSave->FlatAppearance->BorderSize = 0;
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->ForeColor = System::Drawing::Color::White;
			this->btnSave->Location = System::Drawing::Point(770, 405);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(122, 39);
			this->btnSave->TabIndex = 8;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &StudentForm::btnSave_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Location = System::Drawing::Point(706, 116);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(250, 250);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// cbCourse
			// 
			this->cbCourse->BackColor = System::Drawing::SystemColors::Control;
			this->cbCourse->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbCourse->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbCourse->FormattingEnabled = true;
			this->cbCourse->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"BSIT", L"BSA", L"BSME", L"BSCE", L"BSBS", L"BSPOGIKO" });
			this->cbCourse->Location = System::Drawing::Point(337, 387);
			this->cbCourse->Name = L"cbCourse";
			this->cbCourse->Size = System::Drawing::Size(205, 27);
			this->cbCourse->TabIndex = 6;
			// 
			// cbCampus
			// 
			this->cbCampus->BackColor = System::Drawing::SystemColors::Control;
			this->cbCampus->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbCampus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbCampus->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbCampus->FormattingEnabled = true;
			this->cbCampus->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"PASIG ", L"BONI" });
			this->cbCampus->Location = System::Drawing::Point(103, 387);
			this->cbCampus->Name = L"cbCampus";
			this->cbCampus->Size = System::Drawing::Size(195, 27);
			this->cbCampus->TabIndex = 5;
			this->cbCampus->SelectedIndexChanged += gcnew System::EventHandler(this, &StudentForm::comboBox4_SelectedIndexChanged);
			// 
			// cbTrack
			// 
			this->cbTrack->BackColor = System::Drawing::SystemColors::Control;
			this->cbTrack->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbTrack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbTrack->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbTrack->FormattingEnabled = true;
			this->cbTrack->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"STEM", L"ABM", L"ICT", L"TVL", L"HUMMS" });
			this->cbTrack->Location = System::Drawing::Point(406, 206);
			this->cbTrack->Name = L"cbTrack";
			this->cbTrack->Size = System::Drawing::Size(133, 27);
			this->cbTrack->TabIndex = 4;
			// 
			// cbStrand
			// 
			this->cbStrand->BackColor = System::Drawing::SystemColors::Control;
			this->cbStrand->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbStrand->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbStrand->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbStrand->FormattingEnabled = true;
			this->cbStrand->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"STEM", L"ABM", L"ICT", L"TVL", L"HUMMS" });
			this->cbStrand->Location = System::Drawing::Point(255, 206);
			this->cbStrand->Name = L"cbStrand";
			this->cbStrand->Size = System::Drawing::Size(133, 27);
			this->cbStrand->TabIndex = 3;
			// 
			// cbGender
			// 
			this->cbGender->BackColor = System::Drawing::SystemColors::Control;
			this->cbGender->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbGender->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbGender->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbGender->FormattingEnabled = true;
			this->cbGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->cbGender->Location = System::Drawing::Point(103, 206);
			this->cbGender->Name = L"cbGender";
			this->cbGender->Size = System::Drawing::Size(133, 27);
			this->cbGender->TabIndex = 2;
			this->cbGender->Tag = L"";
			// 
			// txbLRN
			// 
			this->txbLRN->BackColor = System::Drawing::SystemColors::Control;
			this->txbLRN->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txbLRN->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbLRN->Location = System::Drawing::Point(105, 285);
			this->txbLRN->Multiline = true;
			this->txbLRN->Name = L"txbLRN";
			this->txbLRN->Size = System::Drawing::Size(436, 41);
			this->txbLRN->TabIndex = 1;
			this->txbLRN->TextChanged += gcnew System::EventHandler(this, &StudentForm::txbLRN_TextChanged);
			// 
			// txbSurname
			// 
			this->txbSurname->BackColor = System::Drawing::SystemColors::Control;
			this->txbSurname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txbSurname->Font = (gcnew System::Drawing::Font(L"Calibri", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbSurname->Location = System::Drawing::Point(103, 116);
			this->txbSurname->Multiline = true;
			this->txbSurname->Name = L"txbSurname";
			this->txbSurname->Size = System::Drawing::Size(133, 41);
			this->txbSurname->TabIndex = 0;
			this->txbSurname->TextChanged += gcnew System::EventHandler(this, &StudentForm::textBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(101, 329);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(190, 19);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Learners Reference Number";
			// 
			// StudentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1416, 669);
			this->Controls->Add(this->groupBox1);
			this->DoubleBuffered = true;
			this->Name = L"StudentForm";
			this->Text = L"StudentForm";
			this->Load += gcnew System::EventHandler(this, &StudentForm::StudentForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ Surname;
	String^ Givenname;
	String^ Middlename;
	String^ Gender;
	String^ Strand;
	String^ Track;
	String^ LRN;
	String^ Campus;
	String^ Course;

	bool isValid = true;

	if (txbSurname->Text->Trim()->Length > 1) Surname = txbSurname->Text;
	else isValid = false;

	if (txbGivenname->Text->Trim()->Length > 1) Givenname = txbGivenname->Text;
	else isValid = false;

	if (txbMiddlename->Text->Trim()->Length > 1) Middlename = txbMiddlename->Text;
	else isValid = false;
	
	Gender = cbGender->Text;
	Strand = cbStrand->Text;
	Track = cbTrack->Text;
	Campus = cbCampus->Text;
	Course = cbCourse->Text;

	if (isValid) {

		StudentData^ sd = gcnew StudentData();
		sd->setCredentials(Surname, Givenname, Middlename, Gender, Strand, Track, LRN, Campus, Course);

		Receiptform^ rf = gcnew Receiptform();
		rf->sd = sd;
		rf->Show();
		Hide();
	}
	else {
		MessageBox::Show("Please fill up all the item","ERROR",MessageBoxButtons::OK,MessageBoxIcon::Error);
	}

}
private: System::Void txbLRN_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void StudentForm_Load(System::Object^ sender, System::EventArgs^ e) {
	cbGender->SelectedIndex = 0;
	cbStrand->SelectedIndex = 0;
	cbTrack->SelectedIndex = 0;
	cbCampus->SelectedIndex = 0;
	cbCourse->SelectedIndex = 0;
}
};
}
