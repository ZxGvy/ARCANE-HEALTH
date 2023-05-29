#pragma once
#include "halaman_obat.h"
#include "FormBiodata.h"

namespace Arcanehelth {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormBiodata
	/// </summary>
	public ref class FormBiodata : public System::Windows::Forms::Form
	{
	public:
		FormBiodata(void)
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
		~FormBiodata()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ txt_riw_penyakit;
	private: System::Windows::Forms::TextBox^ txt_riw_alergi;
	private: System::Windows::Forms::TextBox^ txt_alamat;
	private: System::Windows::Forms::TextBox^ txt_jenkel;
	private: System::Windows::Forms::TextBox^ txt_goldar;
	private: System::Windows::Forms::TextBox^ txt_lahir;
	private: System::Windows::Forms::TextBox^ txt_nama;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormBiodata::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_riw_penyakit = (gcnew System::Windows::Forms::TextBox());
			this->txt_riw_alergi = (gcnew System::Windows::Forms::TextBox());
			this->txt_alamat = (gcnew System::Windows::Forms::TextBox());
			this->txt_jenkel = (gcnew System::Windows::Forms::TextBox());
			this->txt_goldar = (gcnew System::Windows::Forms::TextBox());
			this->txt_lahir = (gcnew System::Windows::Forms::TextBox());
			this->txt_nama = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(905, 493);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 70);
			this->button1->TabIndex = 26;
			this->button1->Text = L"kjkjk";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormBiodata::button1_Click);
			// 
			// txt_riw_penyakit
			// 
			this->txt_riw_penyakit->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_riw_penyakit->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_riw_penyakit->Font = (gcnew System::Drawing::Font(L"Eras Medium ITC", 12));
			this->txt_riw_penyakit->Location = System::Drawing::Point(480, 435);
			this->txt_riw_penyakit->Multiline = true;
			this->txt_riw_penyakit->Name = L"txt_riw_penyakit";
			this->txt_riw_penyakit->Size = System::Drawing::Size(367, 128);
			this->txt_riw_penyakit->TabIndex = 25;
			// 
			// txt_riw_alergi
			// 
			this->txt_riw_alergi->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_riw_alergi->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_riw_alergi->Font = (gcnew System::Drawing::Font(L"Eras Medium ITC", 12));
			this->txt_riw_alergi->Location = System::Drawing::Point(53, 435);
			this->txt_riw_alergi->Multiline = true;
			this->txt_riw_alergi->Name = L"txt_riw_alergi";
			this->txt_riw_alergi->Size = System::Drawing::Size(367, 128);
			this->txt_riw_alergi->TabIndex = 24;
			// 
			// txt_alamat
			// 
			this->txt_alamat->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_alamat->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_alamat->Font = (gcnew System::Drawing::Font(L"Eras Medium ITC", 12));
			this->txt_alamat->Location = System::Drawing::Point(480, 328);
			this->txt_alamat->Multiline = true;
			this->txt_alamat->Name = L"txt_alamat";
			this->txt_alamat->Size = System::Drawing::Size(367, 43);
			this->txt_alamat->TabIndex = 23;
			// 
			// txt_jenkel
			// 
			this->txt_jenkel->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_jenkel->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_jenkel->Font = (gcnew System::Drawing::Font(L"Eras Medium ITC", 12));
			this->txt_jenkel->Location = System::Drawing::Point(53, 326);
			this->txt_jenkel->Multiline = true;
			this->txt_jenkel->Name = L"txt_jenkel";
			this->txt_jenkel->Size = System::Drawing::Size(367, 43);
			this->txt_jenkel->TabIndex = 22;
			// 
			// txt_goldar
			// 
			this->txt_goldar->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_goldar->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_goldar->Font = (gcnew System::Drawing::Font(L"Eras Medium ITC", 12));
			this->txt_goldar->Location = System::Drawing::Point(905, 210);
			this->txt_goldar->Multiline = true;
			this->txt_goldar->Name = L"txt_goldar";
			this->txt_goldar->Size = System::Drawing::Size(175, 43);
			this->txt_goldar->TabIndex = 21;
			// 
			// txt_lahir
			// 
			this->txt_lahir->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_lahir->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_lahir->Font = (gcnew System::Drawing::Font(L"Eras Medium ITC", 12));
			this->txt_lahir->Location = System::Drawing::Point(480, 210);
			this->txt_lahir->Multiline = true;
			this->txt_lahir->Name = L"txt_lahir";
			this->txt_lahir->Size = System::Drawing::Size(367, 43);
			this->txt_lahir->TabIndex = 20;
			this->txt_lahir->Text = L"dd/mm/yyyy";
			// 
			// txt_nama
			// 
			this->txt_nama->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_nama->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_nama->Font = (gcnew System::Drawing::Font(L"Eras Medium ITC", 12));
			this->txt_nama->Location = System::Drawing::Point(53, 210);
			this->txt_nama->Multiline = true;
			this->txt_nama->Name = L"txt_nama";
			this->txt_nama->Size = System::Drawing::Size(367, 43);
			this->txt_nama->TabIndex = 19;
			// 
			// FormBiodata
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_riw_penyakit);
			this->Controls->Add(this->txt_riw_alergi);
			this->Controls->Add(this->txt_alamat);
			this->Controls->Add(this->txt_jenkel);
			this->Controls->Add(this->txt_goldar);
			this->Controls->Add(this->txt_lahir);
			this->Controls->Add(this->txt_nama);
			this->Name = L"FormBiodata";
			this->Text = L"FormBiodata";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		halaman_obat^ halaman_obat_form = gcnew halaman_obat();
		halaman_obat_form ->Show();
		this->Hide();
	}
};
}
