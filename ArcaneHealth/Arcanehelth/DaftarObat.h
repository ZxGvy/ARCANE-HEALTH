#pragma once

namespace Arcanehelth {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DaftarObat
	/// </summary>
	public ref class DaftarObat : public System::Windows::Forms::Form
	{
	public:
		DaftarObat(void)
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
		~DaftarObat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ NomorBox;
	private: System::Windows::Forms::Label^ txtKodeObat;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::TextBox^ lblKodeObat;





	private: System::Windows::Forms::Label^ lblKeterangan;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DaftarObat::typeid));
			this->NomorBox = (gcnew System::Windows::Forms::ListBox());
			this->txtKodeObat = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->lblKodeObat = (gcnew System::Windows::Forms::TextBox());
			this->lblKeterangan = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// NomorBox
			// 
			this->NomorBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NomorBox->FormattingEnabled = true;
			this->NomorBox->ItemHeight = 18;
			this->NomorBox->Location = System::Drawing::Point(219, 136);
			this->NomorBox->Name = L"NomorBox";
			this->NomorBox->Size = System::Drawing::Size(165, 238);
			this->NomorBox->TabIndex = 0;
			// 
			// txtKodeObat
			// 
			this->txtKodeObat->AutoSize = true;
			this->txtKodeObat->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->txtKodeObat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtKodeObat->ForeColor = System::Drawing::SystemColors::ControlText;
			this->txtKodeObat->Location = System::Drawing::Point(405, 153);
			this->txtKodeObat->Name = L"txtKodeObat";
			this->txtKodeObat->Size = System::Drawing::Size(88, 18);
			this->txtKodeObat->TabIndex = 1;
			this->txtKodeObat->Text = L"Kode Obat";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(405, 209);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Keterangan";
			// 
			// btnSearch
			// 
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSearch->Location = System::Drawing::Point(432, 364);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(91, 31);
			this->btnSearch->TabIndex = 3;
			this->btnSearch->Text = L"Search";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &DaftarObat::btnSearch_Click);
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->Location = System::Drawing::Point(529, 364);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(91, 31);
			this->btnExit->TabIndex = 4;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &DaftarObat::btnExit_Click);
			// 
			// lblKodeObat
			// 
			this->lblKodeObat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblKodeObat->Location = System::Drawing::Point(499, 153);
			this->lblKodeObat->Name = L"lblKodeObat";
			this->lblKodeObat->Size = System::Drawing::Size(137, 24);
			this->lblKodeObat->TabIndex = 5;
			// 
			// lblKeterangan
			// 
			this->lblKeterangan->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblKeterangan->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblKeterangan->Location = System::Drawing::Point(499, 204);
			this->lblKeterangan->Name = L"lblKeterangan";
			this->lblKeterangan->Size = System::Drawing::Size(137, 111);
			this->lblKeterangan->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(12, 509);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 32);
			this->button1->TabIndex = 7;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DaftarObat::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(12, 326);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 32);
			this->button2->TabIndex = 8;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(12, 373);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(129, 32);
			this->button3->TabIndex = 9;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Location = System::Drawing::Point(12, 411);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(170, 32);
			this->button4->TabIndex = 10;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Location = System::Drawing::Point(12, 458);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(129, 32);
			this->button5->TabIndex = 11;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// DaftarObat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(948, 553);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblKeterangan);
			this->Controls->Add(this->lblKodeObat);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtKodeObat);
			this->Controls->Add(this->NomorBox);
			this->Name = L"DaftarObat";
			this->Text = L"DaftarObat";
			this->Load += gcnew System::EventHandler(this, &DaftarObat::DaftarObat_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		const int ListSeize = 1000;

		private: System::Void FillNumber()
		{
			int i;

			Random^ rnd = gcnew Random();

			for (i = 0; i < ListSeize; i++)
			{
				int RandomNumber = rnd->Next(0, 1000);
				NomorBox->Items->Add(RandomNumber);
			}
			txtKodeObat->Focus();
		}


	private: System::Void DaftarObat_Load(System::Object^ sender, System::EventArgs^ e) {
		
		FillNumber();
		lblKeterangan->Text = "";
		lblKodeObat->Text = "";
	}
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {

	int index = 0;
	bool Found = false;
	int target;

	String^ setTarget = Convert::ToString(lblKodeObat->Text);
	target = Convert::ToInt32(setTarget);

	index = target;

	do
	{
		if (NomorBox->Items->Contains(index))
		{
			Found = true;
		}
		else
		{
			index = index + 1;
		}
	} while ((Found == false) && (index <= ListSeize));
	if (Found == true)
	{
		String^ cTarget = Convert::ToString(target);
		lblKeterangan->Text = "Paracetamol adalah obat pereda demam dan sakit kepala. || " + cTarget;

	}
	else
	{
		String^ iTarget = Convert::ToString(target);
		lblKeterangan->Text = iTarget  + " Not Found ";
	}



}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
