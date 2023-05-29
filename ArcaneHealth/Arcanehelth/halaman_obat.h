#pragma once
#include "DaftarObat.h"

namespace Arcanehelth {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for halaman_obat
	/// </summary>
	public ref class halaman_obat : public System::Windows::Forms::Form
	{
	public:
		halaman_obat(void)
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
		~halaman_obat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ txt_kode;
	private: System::Windows::Forms::RichTextBox^ txt_dosis;
	protected:

	protected:

	private: System::Windows::Forms::RichTextBox^ txt_nama_obat;
	private: System::Windows::Forms::RichTextBox^ txt_izin;
	private: System::Windows::Forms::RichTextBox^ txt_efek;
	private: System::Windows::Forms::RichTextBox^ txt_cara;
	private: System::Windows::Forms::RichTextBox^ txt_inter;
	private: System::Windows::Forms::RichTextBox^ txt_kontra;
	private: System::Windows::Forms::RichTextBox^ txt_deskripsi;

	private: System::Windows::Forms::Label^ label_user;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(halaman_obat::typeid));
			this->txt_kode = (gcnew System::Windows::Forms::RichTextBox());
			this->txt_dosis = (gcnew System::Windows::Forms::RichTextBox());
			this->txt_nama_obat = (gcnew System::Windows::Forms::RichTextBox());
			this->txt_izin = (gcnew System::Windows::Forms::RichTextBox());
			this->txt_efek = (gcnew System::Windows::Forms::RichTextBox());
			this->txt_cara = (gcnew System::Windows::Forms::RichTextBox());
			this->txt_inter = (gcnew System::Windows::Forms::RichTextBox());
			this->txt_kontra = (gcnew System::Windows::Forms::RichTextBox());
			this->txt_deskripsi = (gcnew System::Windows::Forms::RichTextBox());
			this->label_user = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txt_kode
			// 
			this->txt_kode->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_kode->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_kode->Font = (gcnew System::Drawing::Font(L"Eras Medium ITC", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_kode->Location = System::Drawing::Point(274, 144);
			this->txt_kode->Margin = System::Windows::Forms::Padding(2);
			this->txt_kode->Name = L"txt_kode";
			this->txt_kode->Size = System::Drawing::Size(123, 18);
			this->txt_kode->TabIndex = 10;
			this->txt_kode->Text = L"OBT001";
			// 
			// txt_dosis
			// 
			this->txt_dosis->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_dosis->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_dosis->Font = (gcnew System::Drawing::Font(L"Eras Medium ITC", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_dosis->Location = System::Drawing::Point(274, 181);
			this->txt_dosis->Margin = System::Windows::Forms::Padding(2);
			this->txt_dosis->Name = L"txt_dosis";
			this->txt_dosis->Size = System::Drawing::Size(123, 18);
			this->txt_dosis->TabIndex = 11;
			this->txt_dosis->Text = L"500gr";
			// 
			// txt_nama_obat
			// 
			this->txt_nama_obat->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_nama_obat->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_nama_obat->Font = (gcnew System::Drawing::Font(L"Eras Medium ITC", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_nama_obat->Location = System::Drawing::Point(488, 144);
			this->txt_nama_obat->Margin = System::Windows::Forms::Padding(2);
			this->txt_nama_obat->Name = L"txt_nama_obat";
			this->txt_nama_obat->Size = System::Drawing::Size(149, 18);
			this->txt_nama_obat->TabIndex = 12;
			this->txt_nama_obat->Text = L"Paracetamol";
			// 
			// txt_izin
			// 
			this->txt_izin->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_izin->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_izin->Font = (gcnew System::Drawing::Font(L"Eras Medium ITC", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_izin->Location = System::Drawing::Point(488, 181);
			this->txt_izin->Margin = System::Windows::Forms::Padding(2);
			this->txt_izin->Name = L"txt_izin";
			this->txt_izin->Size = System::Drawing::Size(149, 18);
			this->txt_izin->TabIndex = 13;
			this->txt_izin->Text = L"BPOM";
			// 
			// txt_efek
			// 
			this->txt_efek->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_efek->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_efek->Font = (gcnew System::Drawing::Font(L"Eras Medium ITC", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_efek->Location = System::Drawing::Point(219, 252);
			this->txt_efek->Margin = System::Windows::Forms::Padding(2);
			this->txt_efek->Name = L"txt_efek";
			this->txt_efek->Size = System::Drawing::Size(178, 58);
			this->txt_efek->TabIndex = 14;
			this->txt_efek->Text = L"Paracetamol adalah obat pereda demam dan sakit kepala.";
			// 
			// txt_cara
			// 
			this->txt_cara->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_cara->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_cara->Font = (gcnew System::Drawing::Font(L"Eras Medium ITC", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_cara->Location = System::Drawing::Point(425, 252);
			this->txt_cara->Margin = System::Windows::Forms::Padding(2);
			this->txt_cara->Name = L"txt_cara";
			this->txt_cara->Size = System::Drawing::Size(212, 58);
			this->txt_cara->TabIndex = 15;
			this->txt_cara->Text = L"Bila dikonsumsi bersamaan dengan alkohol dapat meningkatkan risiko kerusakan hati"
				L"\', \'Diminum 3 kali sehari setelah makan";
			// 
			// txt_inter
			// 
			this->txt_inter->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_inter->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_inter->Font = (gcnew System::Drawing::Font(L"Eras Medium ITC", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_inter->Location = System::Drawing::Point(219, 349);
			this->txt_inter->Margin = System::Windows::Forms::Padding(2);
			this->txt_inter->Name = L"txt_inter";
			this->txt_inter->Size = System::Drawing::Size(178, 66);
			this->txt_inter->TabIndex = 16;
			this->txt_inter->Text = L"Tidak dianjurkan bagi pasien dengan gangguan hati";
			// 
			// txt_kontra
			// 
			this->txt_kontra->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_kontra->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_kontra->Font = (gcnew System::Drawing::Font(L"Eras Medium ITC", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_kontra->Location = System::Drawing::Point(425, 349);
			this->txt_kontra->Margin = System::Windows::Forms::Padding(2);
			this->txt_kontra->Name = L"txt_kontra";
			this->txt_kontra->Size = System::Drawing::Size(212, 66);
			this->txt_kontra->TabIndex = 17;
			this->txt_kontra->Text = L"Jarang terjadi";
			// 
			// txt_deskripsi
			// 
			this->txt_deskripsi->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_deskripsi->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txt_deskripsi->Font = (gcnew System::Drawing::Font(L"Eras Medium ITC", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_deskripsi->Location = System::Drawing::Point(219, 451);
			this->txt_deskripsi->Margin = System::Windows::Forms::Padding(2);
			this->txt_deskripsi->Name = L"txt_deskripsi";
			this->txt_deskripsi->Size = System::Drawing::Size(418, 63);
			this->txt_deskripsi->TabIndex = 18;
			this->txt_deskripsi->Text = L"Paracetamol adalah obat pereda demam dan sakit kepala.";
			// 
			// label_user
			// 
			this->label_user->AutoSize = true;
			this->label_user->BackColor = System::Drawing::Color::Transparent;
			this->label_user->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label_user->Font = (gcnew System::Drawing::Font(L"Eras Medium ITC", 10.2F));
			this->label_user->ForeColor = System::Drawing::Color::White;
			this->label_user->Location = System::Drawing::Point(21, 154);
			this->label_user->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_user->Name = L"label_user";
			this->label_user->Size = System::Drawing::Size(171, 17);
			this->label_user->TabIndex = 19;
			this->label_user->Text = L"Muhammad Fauzan Arkan";
			this->label_user->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(12, 320);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 34);
			this->button1->TabIndex = 20;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &halaman_obat::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(12, 501);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 34);
			this->button2->TabIndex = 21;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &halaman_obat::button2_Click);
			// 
			// halaman_obat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(946, 547);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label_user);
			this->Controls->Add(this->txt_deskripsi);
			this->Controls->Add(this->txt_kontra);
			this->Controls->Add(this->txt_inter);
			this->Controls->Add(this->txt_cara);
			this->Controls->Add(this->txt_efek);
			this->Controls->Add(this->txt_izin);
			this->Controls->Add(this->txt_nama_obat);
			this->Controls->Add(this->txt_dosis);
			this->Controls->Add(this->txt_kode);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"halaman_obat";
			this->Text = L"    ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		DaftarObat^ ObatObat = gcnew DaftarObat();
		ObatObat->Show();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
