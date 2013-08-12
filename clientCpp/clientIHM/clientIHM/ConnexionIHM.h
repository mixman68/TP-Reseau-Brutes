#pragma once

#include "Client.h"
namespace clientIHM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using System::Runtime::InteropServices::Marshal;

	/// <summary>
	/// Description résumée de ConnexionIHM
	/// </summary>
	public ref class ConnexionIHM : public System::Windows::Forms::Form
	{
	public:
		ConnexionIHM(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}


	public: String^ userstr;
			String^ hoststr;
			String^ passwdstr;
			Boolean^ state;
			Client *c;

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~ConnexionIHM()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  msgwelc;
	private: System::Windows::Forms::GroupBox^  Connexion;
	private: System::Windows::Forms::Button^  connection;
	private: System::Windows::Forms::TextBox^  passwd;

	private: System::Windows::Forms::Label^  passwdmsg;
	private: System::Windows::Forms::TextBox^  login;

	private: System::Windows::Forms::Label^  loginmsg;
	private: System::Windows::Forms::TextBox^  host;
	private: System::Windows::Forms::Label^  hostmsg;
	protected: 

	protected: 

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ConnexionIHM::typeid));
			this->msgwelc = (gcnew System::Windows::Forms::Label());
			this->Connexion = (gcnew System::Windows::Forms::GroupBox());
			this->host = (gcnew System::Windows::Forms::TextBox());
			this->hostmsg = (gcnew System::Windows::Forms::Label());
			this->passwd = (gcnew System::Windows::Forms::TextBox());
			this->passwdmsg = (gcnew System::Windows::Forms::Label());
			this->login = (gcnew System::Windows::Forms::TextBox());
			this->loginmsg = (gcnew System::Windows::Forms::Label());
			this->connection = (gcnew System::Windows::Forms::Button());
			this->Connexion->SuspendLayout();
			this->SuspendLayout();
			// 
			// msgwelc
			// 
			this->msgwelc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->msgwelc->Location = System::Drawing::Point(13, 13);
			this->msgwelc->Name = L"msgwelc";
			this->msgwelc->Size = System::Drawing::Size(520, 18);
			this->msgwelc->TabIndex = 0;
			this->msgwelc->Text = L"Bienvenue dans les Brutes par xpenradio.com";
			this->msgwelc->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Connexion
			// 
			this->Connexion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->Connexion->Controls->Add(this->host);
			this->Connexion->Controls->Add(this->hostmsg);
			this->Connexion->Controls->Add(this->passwd);
			this->Connexion->Controls->Add(this->passwdmsg);
			this->Connexion->Controls->Add(this->login);
			this->Connexion->Controls->Add(this->loginmsg);
			this->Connexion->Controls->Add(this->connection);
			this->Connexion->Location = System::Drawing::Point(13, 35);
			this->Connexion->Name = L"Connexion";
			this->Connexion->Size = System::Drawing::Size(520, 135);
			this->Connexion->TabIndex = 1;
			this->Connexion->TabStop = false;
			this->Connexion->Text = L"Connexion";
			// 
			// host
			// 
			this->host->Location = System::Drawing::Point(102, 69);
			this->host->Name = L"host";
			this->host->Size = System::Drawing::Size(412, 20);
			this->host->TabIndex = 4;
			this->host->Text = L"localhost";
			this->host->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ConnexionIHM::ConnexionIHM_KeyDown);
			// 
			// hostmsg
			// 
			this->hostmsg->AutoSize = true;
			this->hostmsg->Location = System::Drawing::Point(7, 72);
			this->hostmsg->Name = L"hostmsg";
			this->hostmsg->Size = System::Drawing::Size(36, 13);
			this->hostmsg->TabIndex = 5;
			this->hostmsg->Text = L"Hôte :";
			// 
			// passwd
			// 
			this->passwd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->passwd->Location = System::Drawing::Point(102, 43);
			this->passwd->Name = L"passwd";
			this->passwd->PasswordChar = '*';
			this->passwd->Size = System::Drawing::Size(412, 20);
			this->passwd->TabIndex = 3;
			this->passwd->Text = L"nicopassword";
			// 
			// passwdmsg
			// 
			this->passwdmsg->AutoSize = true;
			this->passwdmsg->Location = System::Drawing::Point(7, 47);
			this->passwdmsg->Name = L"passwdmsg";
			this->passwdmsg->Size = System::Drawing::Size(80, 13);
			this->passwdmsg->TabIndex = 2;
			this->passwdmsg->Text = L"Mot de passe : ";
			// 
			// login
			// 
			this->login->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->login->Location = System::Drawing::Point(102, 17);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(412, 20);
			this->login->TabIndex = 1;
			this->login->Text = L"nico";
			// 
			// loginmsg
			// 
			this->loginmsg->AutoSize = true;
			this->loginmsg->Location = System::Drawing::Point(7, 20);
			this->loginmsg->Name = L"loginmsg";
			this->loginmsg->Size = System::Drawing::Size(62, 13);
			this->loginmsg->TabIndex = 0;
			this->loginmsg->Text = L"Utilisateur : ";
			// 
			// connection
			// 
			this->connection->Location = System::Drawing::Point(439, 106);
			this->connection->Name = L"connection";
			this->connection->Size = System::Drawing::Size(75, 23);
			this->connection->TabIndex = 6;
			this->connection->Text = L"Connexion...";
			this->connection->UseVisualStyleBackColor = true;
			this->connection->Click += gcnew System::EventHandler(this, &ConnexionIHM::connection_Click);
			// 
			// ConnexionIHM
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(545, 182);
			this->Controls->Add(this->Connexion);
			this->Controls->Add(this->msgwelc);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"ConnexionIHM";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Les brutes by xpenradio.com - Connexion";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &ConnexionIHM::ConnexionIHM_FormClosing);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ConnexionIHM::ConnexionIHM_KeyDown);
			this->Connexion->ResumeLayout(false);
			this->Connexion->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void connection_Click(System::Object^  sender, System::EventArgs^  e) {
				 userstr=login->Text;
				 passwdstr=passwd->Text;
				 hoststr=host->Text;

				 if(host->Text->Length == 0 || login->Text->Length == 0 || passwd->Text->Length == 0)
				 {
					 MessageBox::Show(
						 "Tous les champs sont requis", 
						 "Erreur !!!", MessageBoxButtons::OK, 
						 MessageBoxIcon::Error);
				 }
				 else
				 {
					 std::string hoststd;

					 using namespace Runtime::InteropServices;
					 const char* chars = 
						 (const char*)(Marshal::StringToHGlobalAnsi(hoststr)).ToPointer();
					 hoststd = chars;
					 Marshal::FreeHGlobal(IntPtr((void*)chars));

					 c = new Client(hoststd);

					 if(c->connectCli())
					 {
						 state=true;
						 this->Close();
					 } else {
						 MessageBox::Show(
							 "mot de passe invalide ou serveur innaccessible !", 
							 "Erreur !", MessageBoxButtons::OK, 
							 MessageBoxIcon::Error);
					 }
				 }

			 }
	private: System::Void ConnexionIHM_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {

			 }
	private: System::Void ConnexionIHM_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 }
	private: System::Void ConnexionIHM_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 if(e->KeyCode == Keys::Enter)
				 {
					 userstr=login->Text;
					 passwdstr=passwd->Text;
					 hoststr=host->Text;

					 if(host->Text->Length == 0 || login->Text->Length == 0 || passwd->Text->Length == 0)
					 {
						 MessageBox::Show(
							 "Tous les champs sont requis", 
							 "Erreur !!!", MessageBoxButtons::OK, 
							 MessageBoxIcon::Error);
					 }
					 else
					 {
						 std::string hoststd;

						 using namespace Runtime::InteropServices;
						 const char* chars = 
							 (const char*)(Marshal::StringToHGlobalAnsi(hoststr)).ToPointer();
						 hoststd = chars;
						 Marshal::FreeHGlobal(IntPtr((void*)chars));

						 c = new Client(hoststd);

						 if(c->connectCli())
						 {
							 state=true;
							 this->Close();
						 } else {
							 MessageBox::Show(
								 "mot de passe invalide !", 
								 "Erreur !!!", MessageBoxButtons::OK, 
								 MessageBoxIcon::Error);
						 }
					 }
				 }
			 }
	};
}
