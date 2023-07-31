#pragma once

#include "AllTracks.h"
#include "track.h"
#include "CreatePlaylist.h"
#include "Playlists.h"
#include "SaveList.h"


namespace MusicPlayer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreatePlaylist
	/// </summary>
	public ref class CreatePlaylist : public System::Windows::Forms::Form
	{
	public:
		CreatePlaylist(void)
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
		~CreatePlaylist()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;


	private:
		AllTracks^ object;

	private:
		String^ path;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(12, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter the Name : ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(379, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(12, 78);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Select Tracks :";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(15, 97);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(377, 308);
			this->checkedListBox1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(15, 433);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Refresh";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CreatePlaylist::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(317, 433);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Create";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &CreatePlaylist::button2_Click);
			// 
			// CreatePlaylist
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(404, 480);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"CreatePlaylist";
			this->Text = L"CreatePlaylist";
			this->Load += gcnew System::EventHandler(this, &CreatePlaylist::CreatePlaylist_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	public: void getAllAudios(AllTracks^ obj) {
		this->object = obj;
	}

	public: void getPath(String^ path) {
		this->path = path;
	}

	private: System::Void CreatePlaylist_Load(System::Object^ sender, System::EventArgs^ e) {
		this->checkedListBox1->Items->Clear();
	}

	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		for each (track ^ tra in this->object->allAudios) {
			checkedListBox1->Items->Add(tra->GetTitle());
		}
	}



	//The Playlist is Created Here
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		if (textBox1->Text == "") {
			MessageBox::Show("Please enter the Playlist name!");
			return;
		}

		if (checkedListBox1->CheckedItems->Count == 0) {
			MessageBox::Show("Please select some tracks to add to the Playlist!");
			return;
		}

		Playlists^ newPlaylist = gcnew Playlists();

		newPlaylist->name = this->textBox1->Text;

		for (int i = 0; i < checkedListBox1->CheckedItems->Count; i++) {
			newPlaylist->AddTrack(checkedListBox1->CheckedItems[i]->ToString());
		}


		SaveList^ saveList = gcnew SaveList(newPlaylist , this->path + "/" + newPlaylist->name + ".txt");


		MessageBox::Show("Playlist Successfully Created!");


	}

};
}
