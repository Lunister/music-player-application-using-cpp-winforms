#pragma once
#include "Session.h"
#include "Drives.h"
#include "track.h"
#include "DeleteList.h"
#include "LoadList.h"
#include "Playlists.h"
#include "SaveList.h"
#include "ShuffleList.h"
#include "USBDetector.h"
#include "AllTracks.h"
#include "CreatePlaylist.h"


namespace MusicPlayer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Home
	/// </summary>

	public ref class Home : public System::Windows::Forms::Form
	{

	public:
		bool start;
		Home(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			obj = gcnew Session();
			changes = false;
			this->initalAllow = false;
			this->start = false;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;





	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox2;


	//Related to the session class
	private: Session ^ obj;
	private: bool changes;
	private: Drives^ drive;
	private: AllTracks^ allTracks;


	//Related to the Drives Class
	private: bool initalAllow;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Power";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Home::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::Desktop;
			this->richTextBox1->Location = System::Drawing::Point(40, 418);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(271, 70);
			this->richTextBox1->TabIndex = 6;
			this->richTextBox1->Text = L"";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(40, 91);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(115, 21);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Create Playlist";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Home::button5_Click);
			// 
			// button6
			// 
			this->button6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button6->Location = System::Drawing::Point(161, 91);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(115, 21);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Edit Playlist";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(323, 433);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Padding = System::Windows::Forms::Padding(5);
			this->pictureBox1->Size = System::Drawing::Size(40, 40);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Home::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(598, 436);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(33, 35);
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Home::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(645, 437);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(45, 28);
			this->pictureBox3->TabIndex = 11;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(544, 443);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(41, 23);
			this->pictureBox4->TabIndex = 12;
			this->pictureBox4->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(446, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 15);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Choose Mode : ";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"USB Drive", L"CD/DVD Drive" });
			this->comboBox2->Location = System::Drawing::Point(569, 34);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 14;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Home::comboBox2_SelectedIndexChanged);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Location = System::Drawing::Point(40, 174);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(297, 202);
			this->listBox1->TabIndex = 15;
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 18;
			this->listBox2->Location = System::Drawing::Point(377, 174);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(297, 202);
			this->listBox2->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(37, 144);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 18);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Playlists : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(374, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 18);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Tracks :";
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(730, 521);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Home";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Music Player";
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Home_Load(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
		listBox2->Items->Clear();

	}
	
	// Function to disable/enable features

	public: void power_switch() {
		
		if (this->obj->power == false) {
		
			this->button1->BackColor = System::Drawing::Color::Red;
			
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			//this->button7->BackColor = System::Drawing::SystemColors::ButtonShadow;


			this->button5->Enabled = false;
			this->button6->Enabled = false;
			this->comboBox2->Enabled = false;
			//this->button7->Enabled = false;


		}
		else {
			
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));

			this->button5->Enabled = true;
			this->button6->Enabled = true;
			this->comboBox2->Enabled = true;
			//this->button7->Enabled = true;

			this->button5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			//this->button7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;

		}


	}
	

	// Power Button function

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		//Check the color of the button (if Green)
		
		if ( this->obj->power == true ) 
		{
			this->obj->power = false;

			if (this->changes) {
				//this->obj->SaveChanges();
			}

		}
		else 
		{
			this->obj->power = true;
			//if (this->changes) {
			//	records^ temp;
			//	temp = this->obj->retrieveChanges("records.txt");
			//	//Incomplete
			//}
		}

		power_switch();
	}


	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {



	}


	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {

	}


	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {


		if (comboBox2->Text == "USB Drive") {


			USBDetector^ detector = gcnew USBDetector();
			detector->Start();

			if (detector->pluggedin) {

				this->start = true;

				this->drive = gcnew Drives(obj);
				this->drive->usb = true;

				this->drive->path = detector->findPath();

				this->allTracks = gcnew AllTracks(this->drive->path);
				this->allTracks->findAudioFiles(this->allTracks->path);


				for each (track ^ tra in allTracks->allAudios) {
					listBox2->Items->Add(tra->GetTitle());
				}



			}
			else {
				MessageBox::Show("USB Drive not plugged in");
				start = false;
			}
		}

		if (comboBox2->Text == "CD/DVD Drive") {

			MessageBox::Show("No CD/DVD Rom detected");
			start = false;
		}

		//if (start) {

		//// Get the list of drives and add them to the ComboBox
		//array<String^>^ drives = Environment::GetLogicalDrives();
		//for (int i = 0; i < drives->Length; i++) {
		//	comboBox2->Items->Add(drives[i]);
		//}
		//}
		//start = false;

	}


	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

		if (this->obj->power && start) {
			CreatePlaylist^ window = gcnew CreatePlaylist();

			window->Show();
			window->getAllAudios(this->allTracks);
			window->getPath(this->drive->path);


		}
		else if (!this->obj->power) {
			MessageBox::Show("Please turn on the power!");
		}
		else if (!start) {
			MessageBox::Show("Please select a Drive first!");
		}


	}
};
}
