#pragma once
#include "FormBiodata.h"

namespace Arcanehelth {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for menu_utama
	/// </summary>
	public ref class menu_utama : public System::Windows::Forms::Form
	{

	public:
		Form^ loginForm;

	public:
		menu_utama(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		menu_utama(Form^ menuForm) {
			loginForm = menuForm;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~menu_utama()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_reg;
	private: System::Windows::Forms::LinkLabel^ btn_log_back;
	protected:


	private: System::Windows::Forms::RichTextBox^ txt_email;
	private: System::Windows::Forms::RichTextBox^ txt_usr_reg;
	private: System::Windows::Forms::RichTextBox^ txt_pass_reg;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menu_utama::typeid));
			this->btn_reg = (gcnew System::Windows::Forms::Button());
			this->btn_log_back = (gcnew System::Windows::Forms::LinkLabel());
			this->txt_email = (gcnew System::Windows::Forms::RichTextBox());
			this->txt_usr_reg = (gcnew System::Windows::Forms::RichTextBox());
			this->txt_pass_reg = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// btn_reg
			// 
			this->btn_reg->BackColor = System::Drawing::Color::Transparent;
			this->btn_reg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_reg.BackgroundImage")));
			this->btn_reg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_reg->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn_reg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_reg->ForeColor = System::Drawing::Color::Transparent;
			this->btn_reg->Location = System::Drawing::Point(249, 519);
			this->btn_reg->Name = L"btn_reg";
			this->btn_reg->Size = System::Drawing::Size(173, 70);
			this->btn_reg->TabIndex = 1;
			this->btn_reg->UseVisualStyleBackColor = false;
			this->btn_reg->Click += gcnew System::EventHandler(this, &menu_utama::btn_reg_Click);
			// 
			// btn_log_back
			// 
			this->btn_log_back->AutoSize = true;
			this->btn_log_back->BackColor = System::Drawing::Color::Transparent;
			this->btn_log_back->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_log_back->LinkColor = System::Drawing::Color::DarkGreen;
			this->btn_log_back->Location = System::Drawing::Point(459, 491);
			this->btn_log_back->Name = L"btn_log_back";
			this->btn_log_back->Size = System::Drawing::Size(92, 20);
			this->btn_log_back->TabIndex = 7;
			this->btn_log_back->TabStop = true;
			this->btn_log_back->Text = L"Login Here";
			this->btn_log_back->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &menu_utama::login_link_LinkClicked);
			// 
			// txt_email
			// 
			this->txt_email->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_email->Font = (gcnew System::Drawing::Font(L"Eras Medium ITC", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_email->Location = System::Drawing::Point(157, 223);
			this->txt_email->Name = L"txt_email";
			this->txt_email->Size = System::Drawing::Size(370, 44);
			this->txt_email->TabIndex = 8;
			this->txt_email->Text = L"@gmail.com";
			this->txt_email->TextChanged += gcnew System::EventHandler(this, &menu_utama::txt_email_TextChanged);
			// 
			// txt_usr_reg
			// 
			this->txt_usr_reg->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_usr_reg->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_usr_reg->Font = (gcnew System::Drawing::Font(L"Eras Medium ITC", 12));
			this->txt_usr_reg->Location = System::Drawing::Point(157, 327);
			this->txt_usr_reg->Name = L"txt_usr_reg";
			this->txt_usr_reg->Size = System::Drawing::Size(370, 40);
			this->txt_usr_reg->TabIndex = 9;
			this->txt_usr_reg->Text = L"";
			this->txt_usr_reg->TextChanged += gcnew System::EventHandler(this, &menu_utama::txt_usr_reg_TextChanged);
			// 
			// txt_pass_reg
			// 
			this->txt_pass_reg->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_pass_reg->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_pass_reg->Font = (gcnew System::Drawing::Font(L"Eras Medium ITC", 12));
			this->txt_pass_reg->Location = System::Drawing::Point(157, 428);
			this->txt_pass_reg->Name = L"txt_pass_reg";
			this->txt_pass_reg->Size = System::Drawing::Size(370, 44);
			this->txt_pass_reg->TabIndex = 10;
			this->txt_pass_reg->Text = L"";
			this->txt_pass_reg->TextChanged += gcnew System::EventHandler(this, &menu_utama::txt_pass_reg_TextChanged);
			// 
			// menu_utama
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->txt_pass_reg);
			this->Controls->Add(this->txt_usr_reg);
			this->Controls->Add(this->txt_email);
			this->Controls->Add(this->btn_log_back);
			this->Controls->Add(this->btn_reg);
			this->DoubleBuffered = true;
			this->MaximumSize = System::Drawing::Size(1280, 720);
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"menu_utama";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"v";
			this->Load += gcnew System::EventHandler(this, &menu_utama::menu_utama_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: 
	System::Void menu_utama_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	System::Void txt_email_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	System::Void txt_usr_reg_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	System::Void txt_pass_reg_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	void login_link_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->Hide();
		loginForm->Show();
	}
	System::Void btn_reg_Click(System::Object^ sender, System::EventArgs^ e) {
		FormBiodata^ Biodata_form = gcnew FormBiodata();
		Biodata_form->Show();
		this->Hide();
	}
};
}
