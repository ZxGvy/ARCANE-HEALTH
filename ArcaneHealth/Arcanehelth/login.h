#pragma once
#include "menu_utama.h"
#include "halaman_obat.h"




namespace Arcanehelth {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		Form^ frm_menu_utama;
		login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		login(Form^ loginForm) {
			frm_menu_utama = loginForm;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_log;
	protected:

	private: System::Windows::Forms::RichTextBox^ txt_usn;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ btn_reg;
	private: System::Windows::Forms::TextBox^ txt_pass;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(login::typeid));
			this->btn_log = (gcnew System::Windows::Forms::Button());
			this->txt_usn = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_reg = (gcnew System::Windows::Forms::Label());
			this->txt_pass = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btn_log
			// 
			this->btn_log->BackColor = System::Drawing::Color::Transparent;
			this->btn_log->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_log.BackgroundImage")));
			this->btn_log->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btn_log->Cursor = System::Windows::Forms::Cursors::Default;
			this->btn_log->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_log->ForeColor = System::Drawing::Color::Transparent;
			this->btn_log->Location = System::Drawing::Point(86, 455);
			this->btn_log->Name = L"btn_log";
			this->btn_log->Size = System::Drawing::Size(173, 70);
			this->btn_log->TabIndex = 2;
			this->btn_log->UseVisualStyleBackColor = false;
			this->btn_log->Click += gcnew System::EventHandler(this, &login::btn_log_Click);
			// 
			// txt_usn
			// 
			this->txt_usn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_usn->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_usn->Font = (gcnew System::Drawing::Font(L"Eras Demi ITC", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_usn->ForeColor = System::Drawing::Color::Silver;
			this->txt_usn->Location = System::Drawing::Point(99, 287);
			this->txt_usn->Name = L"txt_usn";
			this->txt_usn->Size = System::Drawing::Size(459, 42);
			this->txt_usn->TabIndex = 9;
			this->txt_usn->Text = L"Username";
			this->txt_usn->Click += gcnew System::EventHandler(this, &login::txt_usn_Click);
			this->txt_usn->TextChanged += gcnew System::EventHandler(this, &login::txt_usn_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(427, 446);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 16);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Register \?";
			// 
			// btn_reg
			// 
			this->btn_reg->AutoSize = true;
			this->btn_reg->BackColor = System::Drawing::Color::Transparent;
			this->btn_reg->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_reg->ForeColor = System::Drawing::Color::Green;
			this->btn_reg->Location = System::Drawing::Point(497, 446);
			this->btn_reg->Name = L"btn_reg";
			this->btn_reg->Size = System::Drawing::Size(61, 16);
			this->btn_reg->TabIndex = 12;
			this->btn_reg->Text = L"Klik Here";
			this->btn_reg->Click += gcnew System::EventHandler(this, &login::btn_reg_Click);
			// 
			// txt_pass
			// 
			this->txt_pass->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_pass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_pass->Font = (gcnew System::Drawing::Font(L"Eras Demi ITC", 18));
			this->txt_pass->ForeColor = System::Drawing::Color::Silver;
			this->txt_pass->Location = System::Drawing::Point(99, 385);
			this->txt_pass->Name = L"txt_pass";
			this->txt_pass->PasswordChar = '*';
			this->txt_pass->Size = System::Drawing::Size(459, 35);
			this->txt_pass->TabIndex = 2;
			this->txt_pass->Text = L"Password";
			this->txt_pass->Click += gcnew System::EventHandler(this, &login::txt_pass_Click);
			this->txt_pass->TextChanged += gcnew System::EventHandler(this, &login::txt_pass_TextChanged);
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->txt_pass);
			this->Controls->Add(this->btn_reg);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_usn);
			this->Controls->Add(this->btn_log);
			this->MaximumSize = System::Drawing::Size(1280, 720);
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private:
	System::Void txt_usn_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	System::Void btn_log_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txt_usn->Text == "" && txt_pass->Text == "") {
			MessageBox::Show("Username dan Password wajib diisi!");
		}
		else if (txt_usn->Text == "") {
			MessageBox::Show("Username wajib diisi!");
		}
		else if (txt_pass->Text == "") {
			MessageBox::Show("Password wajib diisi!");
		}
		else if (txt_usn->Text == "Arcane" && txt_pass->Text == "fauzan") {
			MessageBox::Show("Login Berhasil");
			halaman_obat^ a = gcnew halaman_obat();
			login::Hide();
			a->Show();
		}
		else {
			MessageBox::Show("Login Gagal");
		}
	}

	System::Void btn_reg_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		menu_utama^ frm_menu_utama = gcnew menu_utama(this);
		frm_menu_utama->ShowDialog();
	}
	System::Void txt_pass_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txt_pass->Text == "Password")
		{
			txt_pass->Text = "";
		}

		if (txt_usn->Text == "")
		{
			txt_usn->Text = "Username";
		}

	}

	System::Void txt_usn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txt_usn->Text == "Username")
		{
			txt_usn->Text = "";
		}

		if (txt_pass->Text == "")
		{
			txt_pass->Text = "Password";
		}
	}
	System::Void txt_pass_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

};
}
