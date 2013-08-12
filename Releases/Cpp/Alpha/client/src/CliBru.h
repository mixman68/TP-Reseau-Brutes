#pragma once

#include "Client.h"
#include "ConnexionIHM.h"
#include "Writer.h"
#include "Reader.h"
#include "Brute.h"
#include "Bonuses.h"
#using<system.dll>

namespace clientIHM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Description résumée de CliBru
	/// </summary>
	public ref class CliBru : public System::Windows::Forms::Form
	{
	public:
		CliBru(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			//c = new Client();
		}
	private: System::Windows::Forms::Label^  userLbl;
	private: System::Windows::Forms::Button^  brute_me;
	private: System::Windows::Forms::Button^  brute_other;
	private: System::Windows::Forms::Button^  Win;
	private: System::Windows::Forms::Button^  loose;
	private: System::Windows::Forms::GroupBox^  brute_me_gp;
	private: System::Windows::Forms::Label^  me_LevelLbl;
	private: System::Windows::Forms::Label^  me_nameLbl;

	private: System::Windows::Forms::PictureBox^  me_img;
	private: System::Windows::Forms::Label^  me_speedLbl;
	private: System::Windows::Forms::Label^  me_strenchLbl;
	private: System::Windows::Forms::Label^  me_lifeLbl;
	private: System::Windows::Forms::Label^  me_nom;
	private: System::Windows::Forms::GroupBox^  me_bonuses;
	private: System::Windows::Forms::Label^  me_speed;
	private: System::Windows::Forms::Label^  me_strench;
	private: System::Windows::Forms::Label^  me_life;
	private: System::Windows::Forms::Label^  me_level;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::PictureBox^  imgb3_me;

	private: System::Windows::Forms::GroupBox^  bonus2_gpe;
	private: System::Windows::Forms::PictureBox^  imgb2_me;


	private: System::Windows::Forms::GroupBox^  bonus1_gp;
	private: System::Windows::Forms::Label^  spb1_me;
	private: System::Windows::Forms::PictureBox^  imgb1_me;



	private: System::Windows::Forms::Label^  strb1_me;

	private: System::Windows::Forms::Label^  lifeb1lbl;
	private: System::Windows::Forms::Label^  lifeb1_me;


	private: System::Windows::Forms::Label^  lvlb1_me;



	private: System::Windows::Forms::Label^  lb1lbl;
	private: System::Windows::Forms::Label^  nameb1_me;



	private: System::Windows::Forms::Label^  strb1lbl;
	private: System::Windows::Forms::Label^  spb1lbl;
	private: System::Windows::Forms::Label^  spb3_me;

	private: System::Windows::Forms::Label^  strb3_me;

	private: System::Windows::Forms::Label^  lvlb3_me;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  lifeb3_me;

	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  nameb3_me;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  spb2_me;

	private: System::Windows::Forms::Label^  strb2_me;

	private: System::Windows::Forms::Label^  lvlb2_me;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  lifeb2_me;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  nameb2_me;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  spb3_other;

	private: System::Windows::Forms::Label^  strb3_other;

	private: System::Windows::Forms::Label^  lvlb3_other;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  lifeb3_other;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  nameb3_other;

	private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::PictureBox^  imgb3_other;

	private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::Label^  spb2_other;
private: System::Windows::Forms::PictureBox^  imgb2_other;


private: System::Windows::Forms::Label^  strb2_other;

private: System::Windows::Forms::Label^  lvlb2_other;

	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  lifeb2_other;

	private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  nameb2_other;

	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::Label^  spb1_other;
private: System::Windows::Forms::PictureBox^  imgb1_other;


private: System::Windows::Forms::Label^  strb1_other;

	private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  lifeb1_other;

private: System::Windows::Forms::Label^  lvlb1_other;

	private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  nameb1_other;

	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  other_speed;
	private: System::Windows::Forms::Label^  other_strench;



	private: System::Windows::Forms::Label^  other_life;

	private: System::Windows::Forms::Label^  other_level;

	private: System::Windows::Forms::Label^  other_nom;

	private: System::Windows::Forms::PictureBox^  other_img;

	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label45;



	public: 


	public:
		Client *c;
		Client getClient()
		{
			return (*c);
		}

	private: bool state;
	private: System::Windows::Forms::Button^  connectBtn;
	private: System::Windows::Forms::Label^  hostLbl;

			 ConnexionIHM^ connex;



	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~CliBru()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CliBru::typeid));
			this->userLbl = (gcnew System::Windows::Forms::Label());
			this->connectBtn = (gcnew System::Windows::Forms::Button());
			this->hostLbl = (gcnew System::Windows::Forms::Label());
			this->brute_me = (gcnew System::Windows::Forms::Button());
			this->brute_other = (gcnew System::Windows::Forms::Button());
			this->Win = (gcnew System::Windows::Forms::Button());
			this->loose = (gcnew System::Windows::Forms::Button());
			this->brute_me_gp = (gcnew System::Windows::Forms::GroupBox());
			this->me_bonuses = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->spb3_me = (gcnew System::Windows::Forms::Label());
			this->strb3_me = (gcnew System::Windows::Forms::Label());
			this->lvlb3_me = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->lifeb3_me = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->nameb3_me = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->imgb3_me = (gcnew System::Windows::Forms::PictureBox());
			this->bonus2_gpe = (gcnew System::Windows::Forms::GroupBox());
			this->spb2_me = (gcnew System::Windows::Forms::Label());
			this->imgb2_me = (gcnew System::Windows::Forms::PictureBox());
			this->strb2_me = (gcnew System::Windows::Forms::Label());
			this->lvlb2_me = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->lifeb2_me = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->nameb2_me = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->bonus1_gp = (gcnew System::Windows::Forms::GroupBox());
			this->spb1_me = (gcnew System::Windows::Forms::Label());
			this->imgb1_me = (gcnew System::Windows::Forms::PictureBox());
			this->strb1_me = (gcnew System::Windows::Forms::Label());
			this->lifeb1lbl = (gcnew System::Windows::Forms::Label());
			this->lifeb1_me = (gcnew System::Windows::Forms::Label());
			this->lvlb1_me = (gcnew System::Windows::Forms::Label());
			this->lb1lbl = (gcnew System::Windows::Forms::Label());
			this->nameb1_me = (gcnew System::Windows::Forms::Label());
			this->strb1lbl = (gcnew System::Windows::Forms::Label());
			this->spb1lbl = (gcnew System::Windows::Forms::Label());
			this->me_speed = (gcnew System::Windows::Forms::Label());
			this->me_strench = (gcnew System::Windows::Forms::Label());
			this->me_life = (gcnew System::Windows::Forms::Label());
			this->me_level = (gcnew System::Windows::Forms::Label());
			this->me_nom = (gcnew System::Windows::Forms::Label());
			this->me_img = (gcnew System::Windows::Forms::PictureBox());
			this->me_speedLbl = (gcnew System::Windows::Forms::Label());
			this->me_strenchLbl = (gcnew System::Windows::Forms::Label());
			this->me_lifeLbl = (gcnew System::Windows::Forms::Label());
			this->me_LevelLbl = (gcnew System::Windows::Forms::Label());
			this->me_nameLbl = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->spb3_other = (gcnew System::Windows::Forms::Label());
			this->strb3_other = (gcnew System::Windows::Forms::Label());
			this->lvlb3_other = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lifeb3_other = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->nameb3_other = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->imgb3_other = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->spb2_other = (gcnew System::Windows::Forms::Label());
			this->imgb2_other = (gcnew System::Windows::Forms::PictureBox());
			this->strb2_other = (gcnew System::Windows::Forms::Label());
			this->lvlb2_other = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->lifeb2_other = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->nameb2_other = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->spb1_other = (gcnew System::Windows::Forms::Label());
			this->imgb1_other = (gcnew System::Windows::Forms::PictureBox());
			this->strb1_other = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->lifeb1_other = (gcnew System::Windows::Forms::Label());
			this->lvlb1_other = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->nameb1_other = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->other_speed = (gcnew System::Windows::Forms::Label());
			this->other_strench = (gcnew System::Windows::Forms::Label());
			this->other_life = (gcnew System::Windows::Forms::Label());
			this->other_level = (gcnew System::Windows::Forms::Label());
			this->other_nom = (gcnew System::Windows::Forms::Label());
			this->other_img = (gcnew System::Windows::Forms::PictureBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->brute_me_gp->SuspendLayout();
			this->me_bonuses->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->imgb3_me))->BeginInit();
			this->bonus2_gpe->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->imgb2_me))->BeginInit();
			this->bonus1_gp->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->imgb1_me))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->me_img))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->imgb3_other))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->imgb2_other))->BeginInit();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->imgb1_other))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->other_img))->BeginInit();
			this->SuspendLayout();
			// 
			// userLbl
			// 
			this->userLbl->AutoSize = true;
			this->userLbl->Location = System::Drawing::Point(13, 13);
			this->userLbl->Name = L"userLbl";
			this->userLbl->Size = System::Drawing::Size(153, 13);
			this->userLbl->TabIndex = 0;
			this->userLbl->Text = L"Connecté sous : non connecté";
			// 
			// connectBtn
			// 
			this->connectBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->connectBtn->AutoSize = true;
			this->connectBtn->Location = System::Drawing::Point(720, 8);
			this->connectBtn->Name = L"connectBtn";
			this->connectBtn->Size = System::Drawing::Size(83, 23);
			this->connectBtn->TabIndex = 1;
			this->connectBtn->Text = L"Connexion...";
			this->connectBtn->UseVisualStyleBackColor = true;
			this->connectBtn->Click += gcnew System::EventHandler(this, &CliBru::connectBtn_Click);
			// 
			// hostLbl
			// 
			this->hostLbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->hostLbl->Location = System::Drawing::Point(509, 13);
			this->hostLbl->Name = L"hostLbl";
			this->hostLbl->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->hostLbl->Size = System::Drawing::Size(201, 18);
			this->hostLbl->TabIndex = 2;
			this->hostLbl->Text = L"Adresse du serveur : non connecté";
			// 
			// brute_me
			// 
			this->brute_me->Enabled = false;
			this->brute_me->Location = System::Drawing::Point(185, 8);
			this->brute_me->Name = L"brute_me";
			this->brute_me->Size = System::Drawing::Size(75, 23);
			this->brute_me->TabIndex = 3;
			this->brute_me->Text = L"Brute Me";
			this->brute_me->UseVisualStyleBackColor = true;
			this->brute_me->Click += gcnew System::EventHandler(this, &CliBru::brute_me_Click);
			// 
			// brute_other
			// 
			this->brute_other->Enabled = false;
			this->brute_other->Location = System::Drawing::Point(266, 8);
			this->brute_other->Name = L"brute_other";
			this->brute_other->Size = System::Drawing::Size(75, 23);
			this->brute_other->TabIndex = 4;
			this->brute_other->Text = L"Brute Other";
			this->brute_other->UseVisualStyleBackColor = true;
			this->brute_other->Click += gcnew System::EventHandler(this, &CliBru::brute_other_Click);
			// 
			// Win
			// 
			this->Win->Enabled = false;
			this->Win->Location = System::Drawing::Point(347, 8);
			this->Win->Name = L"Win";
			this->Win->Size = System::Drawing::Size(75, 23);
			this->Win->TabIndex = 5;
			this->Win->Text = L"Win";
			this->Win->UseVisualStyleBackColor = true;
			this->Win->Click += gcnew System::EventHandler(this, &CliBru::Win_Click);
			// 
			// loose
			// 
			this->loose->Enabled = false;
			this->loose->Location = System::Drawing::Point(428, 8);
			this->loose->Name = L"loose";
			this->loose->Size = System::Drawing::Size(75, 23);
			this->loose->TabIndex = 6;
			this->loose->Text = L"Loose";
			this->loose->UseVisualStyleBackColor = true;
			this->loose->Click += gcnew System::EventHandler(this, &CliBru::loose_Click);
			// 
			// brute_me_gp
			// 
			this->brute_me_gp->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->brute_me_gp->Controls->Add(this->me_bonuses);
			this->brute_me_gp->Controls->Add(this->me_speed);
			this->brute_me_gp->Controls->Add(this->me_strench);
			this->brute_me_gp->Controls->Add(this->me_life);
			this->brute_me_gp->Controls->Add(this->me_level);
			this->brute_me_gp->Controls->Add(this->me_nom);
			this->brute_me_gp->Controls->Add(this->me_img);
			this->brute_me_gp->Controls->Add(this->me_speedLbl);
			this->brute_me_gp->Controls->Add(this->me_strenchLbl);
			this->brute_me_gp->Controls->Add(this->me_lifeLbl);
			this->brute_me_gp->Controls->Add(this->me_LevelLbl);
			this->brute_me_gp->Controls->Add(this->me_nameLbl);
			this->brute_me_gp->ImeMode = System::Windows::Forms::ImeMode::On;
			this->brute_me_gp->Location = System::Drawing::Point(12, 38);
			this->brute_me_gp->Name = L"brute_me_gp";
			this->brute_me_gp->Size = System::Drawing::Size(391, 546);
			this->brute_me_gp->TabIndex = 7;
			this->brute_me_gp->TabStop = false;
			this->brute_me_gp->Text = L"Ma brute";
			// 
			// me_bonuses
			// 
			this->me_bonuses->Controls->Add(this->groupBox4);
			this->me_bonuses->Controls->Add(this->bonus2_gpe);
			this->me_bonuses->Controls->Add(this->bonus1_gp);
			this->me_bonuses->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->me_bonuses->Location = System::Drawing::Point(10, 247);
			this->me_bonuses->Name = L"me_bonuses";
			this->me_bonuses->Size = System::Drawing::Size(362, 293);
			this->me_bonuses->TabIndex = 11;
			this->me_bonuses->TabStop = false;
			this->me_bonuses->Text = L"Bonus";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->spb3_me);
			this->groupBox4->Controls->Add(this->strb3_me);
			this->groupBox4->Controls->Add(this->lvlb3_me);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Controls->Add(this->lifeb3_me);
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Controls->Add(this->nameb3_me);
			this->groupBox4->Controls->Add(this->label18);
			this->groupBox4->Controls->Add(this->imgb3_me);
			this->groupBox4->Location = System::Drawing::Point(240, 20);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(114, 267);
			this->groupBox4->TabIndex = 2;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Bonus 3";
			// 
			// spb3_me
			// 
			this->spb3_me->AutoSize = true;
			this->spb3_me->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->spb3_me->ForeColor = System::Drawing::Color::Coral;
			this->spb3_me->Location = System::Drawing::Point(51, 214);
			this->spb3_me->Name = L"spb3_me";
			this->spb3_me->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->spb3_me->Size = System::Drawing::Size(53, 16);
			this->spb3_me->TabIndex = 39;
			this->spb3_me->Text = L"Vitesse";
			// 
			// strb3_me
			// 
			this->strb3_me->AutoSize = true;
			this->strb3_me->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->strb3_me->ForeColor = System::Drawing::Color::Coral;
			this->strb3_me->Location = System::Drawing::Point(61, 190);
			this->strb3_me->Name = L"strb3_me";
			this->strb3_me->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->strb3_me->Size = System::Drawing::Size(43, 16);
			this->strb3_me->TabIndex = 38;
			this->strb3_me->Text = L"Force";
			// 
			// lvlb3_me
			// 
			this->lvlb3_me->AutoSize = true;
			this->lvlb3_me->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lvlb3_me->ForeColor = System::Drawing::Color::Coral;
			this->lvlb3_me->Location = System::Drawing::Point(53, 147);
			this->lvlb3_me->Name = L"lvlb3_me";
			this->lvlb3_me->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lvlb3_me->Size = System::Drawing::Size(51, 16);
			this->lvlb3_me->TabIndex = 36;
			this->lvlb3_me->Text = L"Niveau";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(11, 171);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(31, 13);
			this->label13->TabIndex = 32;
			this->label13->Text = L"Vie : ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(11, 215);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(23, 13);
			this->label14->TabIndex = 34;
			this->label14->Text = L"Sp:";
			// 
			// lifeb3_me
			// 
			this->lifeb3_me->AutoSize = true;
			this->lifeb3_me->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lifeb3_me->ForeColor = System::Drawing::Color::Coral;
			this->lifeb3_me->Location = System::Drawing::Point(75, 168);
			this->lifeb3_me->Name = L"lifeb3_me";
			this->lifeb3_me->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lifeb3_me->Size = System::Drawing::Size(29, 16);
			this->lifeb3_me->TabIndex = 37;
			this->lifeb3_me->Text = L"Life";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(10, 193);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(23, 13);
			this->label16->TabIndex = 33;
			this->label16->Text = L"Str:";
			// 
			// nameb3_me
			// 
			this->nameb3_me->AutoSize = true;
			this->nameb3_me->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->nameb3_me->ForeColor = System::Drawing::Color::Coral;
			this->nameb3_me->Location = System::Drawing::Point(38, 117);
			this->nameb3_me->Name = L"nameb3_me";
			this->nameb3_me->Size = System::Drawing::Size(37, 16);
			this->nameb3_me->TabIndex = 35;
			this->nameb3_me->Text = L"Nom";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(11, 149);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(24, 13);
			this->label18->TabIndex = 31;
			this->label18->Text = L"Lvl:";
			// 
			// imgb3_me
			// 
			this->imgb3_me->Location = System::Drawing::Point(6, 19);
			this->imgb3_me->Name = L"imgb3_me";
			this->imgb3_me->Size = System::Drawing::Size(98, 94);
			this->imgb3_me->TabIndex = 1;
			this->imgb3_me->TabStop = false;
			// 
			// bonus2_gpe
			// 
			this->bonus2_gpe->Controls->Add(this->spb2_me);
			this->bonus2_gpe->Controls->Add(this->imgb2_me);
			this->bonus2_gpe->Controls->Add(this->strb2_me);
			this->bonus2_gpe->Controls->Add(this->lvlb2_me);
			this->bonus2_gpe->Controls->Add(this->label3);
			this->bonus2_gpe->Controls->Add(this->label9);
			this->bonus2_gpe->Controls->Add(this->lifeb2_me);
			this->bonus2_gpe->Controls->Add(this->label8);
			this->bonus2_gpe->Controls->Add(this->nameb2_me);
			this->bonus2_gpe->Controls->Add(this->label6);
			this->bonus2_gpe->Location = System::Drawing::Point(123, 20);
			this->bonus2_gpe->Name = L"bonus2_gpe";
			this->bonus2_gpe->Size = System::Drawing::Size(114, 267);
			this->bonus2_gpe->TabIndex = 1;
			this->bonus2_gpe->TabStop = false;
			this->bonus2_gpe->Text = L"Bonus 2";
			// 
			// spb2_me
			// 
			this->spb2_me->AutoSize = true;
			this->spb2_me->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->spb2_me->ForeColor = System::Drawing::Color::Coral;
			this->spb2_me->Location = System::Drawing::Point(50, 213);
			this->spb2_me->Name = L"spb2_me";
			this->spb2_me->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->spb2_me->Size = System::Drawing::Size(53, 16);
			this->spb2_me->TabIndex = 30;
			this->spb2_me->Text = L"Vitesse";
			// 
			// imgb2_me
			// 
			this->imgb2_me->Location = System::Drawing::Point(6, 19);
			this->imgb2_me->Name = L"imgb2_me";
			this->imgb2_me->Size = System::Drawing::Size(98, 94);
			this->imgb2_me->TabIndex = 1;
			this->imgb2_me->TabStop = false;
			// 
			// strb2_me
			// 
			this->strb2_me->AutoSize = true;
			this->strb2_me->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->strb2_me->ForeColor = System::Drawing::Color::Coral;
			this->strb2_me->Location = System::Drawing::Point(60, 189);
			this->strb2_me->Name = L"strb2_me";
			this->strb2_me->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->strb2_me->Size = System::Drawing::Size(43, 16);
			this->strb2_me->TabIndex = 29;
			this->strb2_me->Text = L"Force";
			// 
			// lvlb2_me
			// 
			this->lvlb2_me->AutoSize = true;
			this->lvlb2_me->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lvlb2_me->ForeColor = System::Drawing::Color::Coral;
			this->lvlb2_me->Location = System::Drawing::Point(52, 146);
			this->lvlb2_me->Name = L"lvlb2_me";
			this->lvlb2_me->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lvlb2_me->Size = System::Drawing::Size(51, 16);
			this->lvlb2_me->TabIndex = 27;
			this->lvlb2_me->Text = L"Niveau";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 170);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 13);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Vie : ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(10, 214);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(23, 13);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Sp:";
			// 
			// lifeb2_me
			// 
			this->lifeb2_me->AutoSize = true;
			this->lifeb2_me->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lifeb2_me->ForeColor = System::Drawing::Color::Coral;
			this->lifeb2_me->Location = System::Drawing::Point(74, 167);
			this->lifeb2_me->Name = L"lifeb2_me";
			this->lifeb2_me->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lifeb2_me->Size = System::Drawing::Size(29, 16);
			this->lifeb2_me->TabIndex = 28;
			this->lifeb2_me->Text = L"Life";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(9, 192);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(23, 13);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Str:";
			// 
			// nameb2_me
			// 
			this->nameb2_me->AutoSize = true;
			this->nameb2_me->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->nameb2_me->ForeColor = System::Drawing::Color::Coral;
			this->nameb2_me->Location = System::Drawing::Point(37, 116);
			this->nameb2_me->Name = L"nameb2_me";
			this->nameb2_me->Size = System::Drawing::Size(37, 16);
			this->nameb2_me->TabIndex = 26;
			this->nameb2_me->Text = L"Nom";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(10, 148);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(24, 13);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Lvl:";
			// 
			// bonus1_gp
			// 
			this->bonus1_gp->Controls->Add(this->spb1_me);
			this->bonus1_gp->Controls->Add(this->imgb1_me);
			this->bonus1_gp->Controls->Add(this->strb1_me);
			this->bonus1_gp->Controls->Add(this->lifeb1lbl);
			this->bonus1_gp->Controls->Add(this->lifeb1_me);
			this->bonus1_gp->Controls->Add(this->lvlb1_me);
			this->bonus1_gp->Controls->Add(this->lb1lbl);
			this->bonus1_gp->Controls->Add(this->nameb1_me);
			this->bonus1_gp->Controls->Add(this->strb1lbl);
			this->bonus1_gp->Controls->Add(this->spb1lbl);
			this->bonus1_gp->Location = System::Drawing::Point(7, 20);
			this->bonus1_gp->Name = L"bonus1_gp";
			this->bonus1_gp->Size = System::Drawing::Size(110, 267);
			this->bonus1_gp->TabIndex = 0;
			this->bonus1_gp->TabStop = false;
			this->bonus1_gp->Text = L"Bonus 1";
			// 
			// spb1_me
			// 
			this->spb1_me->AutoSize = true;
			this->spb1_me->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->spb1_me->ForeColor = System::Drawing::Color::Coral;
			this->spb1_me->Location = System::Drawing::Point(51, 212);
			this->spb1_me->Name = L"spb1_me";
			this->spb1_me->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->spb1_me->Size = System::Drawing::Size(53, 16);
			this->spb1_me->TabIndex = 21;
			this->spb1_me->Text = L"Vitesse";
			this->spb1_me->Click += gcnew System::EventHandler(this, &CliBru::label1_Click);
			// 
			// imgb1_me
			// 
			this->imgb1_me->Location = System::Drawing::Point(6, 19);
			this->imgb1_me->Name = L"imgb1_me";
			this->imgb1_me->Size = System::Drawing::Size(98, 94);
			this->imgb1_me->TabIndex = 0;
			this->imgb1_me->TabStop = false;
			this->imgb1_me->Click += gcnew System::EventHandler(this, &CliBru::pictuimgb1_me_Click);
			// 
			// strb1_me
			// 
			this->strb1_me->AutoSize = true;
			this->strb1_me->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->strb1_me->ForeColor = System::Drawing::Color::Coral;
			this->strb1_me->Location = System::Drawing::Point(61, 190);
			this->strb1_me->Name = L"strb1_me";
			this->strb1_me->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->strb1_me->Size = System::Drawing::Size(43, 16);
			this->strb1_me->TabIndex = 20;
			this->strb1_me->Text = L"Force";
			this->strb1_me->Click += gcnew System::EventHandler(this, &CliBru::label2_Click);
			// 
			// lifeb1lbl
			// 
			this->lifeb1lbl->AutoSize = true;
			this->lifeb1lbl->Location = System::Drawing::Point(9, 170);
			this->lifeb1lbl->Name = L"lifeb1lbl";
			this->lifeb1lbl->Size = System::Drawing::Size(31, 13);
			this->lifeb1lbl->TabIndex = 14;
			this->lifeb1lbl->Text = L"Vie : ";
			this->lifeb1lbl->Click += gcnew System::EventHandler(this, &CliBru::label8_Click);
			// 
			// lifeb1_me
			// 
			this->lifeb1_me->AutoSize = true;
			this->lifeb1_me->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lifeb1_me->ForeColor = System::Drawing::Color::Coral;
			this->lifeb1_me->Location = System::Drawing::Point(75, 167);
			this->lifeb1_me->Name = L"lifeb1_me";
			this->lifeb1_me->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lifeb1_me->Size = System::Drawing::Size(29, 16);
			this->lifeb1_me->TabIndex = 19;
			this->lifeb1_me->Text = L"Life";
			this->lifeb1_me->Click += gcnew System::EventHandler(this, &CliBru::label3_Click);
			// 
			// lvlb1_me
			// 
			this->lvlb1_me->AutoSize = true;
			this->lvlb1_me->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lvlb1_me->ForeColor = System::Drawing::Color::Coral;
			this->lvlb1_me->Location = System::Drawing::Point(53, 146);
			this->lvlb1_me->Name = L"lvlb1_me";
			this->lvlb1_me->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lvlb1_me->Size = System::Drawing::Size(51, 16);
			this->lvlb1_me->TabIndex = 18;
			this->lvlb1_me->Text = L"Niveau";
			this->lvlb1_me->Click += gcnew System::EventHandler(this, &CliBru::label4_Click);
			// 
			// lb1lbl
			// 
			this->lb1lbl->AutoSize = true;
			this->lb1lbl->Location = System::Drawing::Point(9, 148);
			this->lb1lbl->Name = L"lb1lbl";
			this->lb1lbl->Size = System::Drawing::Size(24, 13);
			this->lb1lbl->TabIndex = 13;
			this->lb1lbl->Text = L"Lvl:";
			this->lb1lbl->Click += gcnew System::EventHandler(this, &CliBru::label9_Click);
			// 
			// nameb1_me
			// 
			this->nameb1_me->AutoSize = true;
			this->nameb1_me->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->nameb1_me->ForeColor = System::Drawing::Color::Coral;
			this->nameb1_me->Location = System::Drawing::Point(36, 116);
			this->nameb1_me->Name = L"nameb1_me";
			this->nameb1_me->Size = System::Drawing::Size(37, 16);
			this->nameb1_me->TabIndex = 17;
			this->nameb1_me->Text = L"Nom";
			this->nameb1_me->Click += gcnew System::EventHandler(this, &CliBru::label5_Click);
			// 
			// strb1lbl
			// 
			this->strb1lbl->AutoSize = true;
			this->strb1lbl->Location = System::Drawing::Point(8, 192);
			this->strb1lbl->Name = L"strb1lbl";
			this->strb1lbl->Size = System::Drawing::Size(23, 13);
			this->strb1lbl->TabIndex = 15;
			this->strb1lbl->Text = L"Str:";
			this->strb1lbl->Click += gcnew System::EventHandler(this, &CliBru::label7_Click);
			// 
			// spb1lbl
			// 
			this->spb1lbl->AutoSize = true;
			this->spb1lbl->Location = System::Drawing::Point(9, 214);
			this->spb1lbl->Name = L"spb1lbl";
			this->spb1lbl->Size = System::Drawing::Size(23, 13);
			this->spb1lbl->TabIndex = 16;
			this->spb1lbl->Text = L"Sp:";
			this->spb1lbl->Click += gcnew System::EventHandler(this, &CliBru::label6_Click);
			// 
			// me_speed
			// 
			this->me_speed->AutoSize = true;
			this->me_speed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->me_speed->ForeColor = System::Drawing::Color::Coral;
			this->me_speed->Location = System::Drawing::Point(61, 107);
			this->me_speed->Name = L"me_speed";
			this->me_speed->Size = System::Drawing::Size(53, 16);
			this->me_speed->TabIndex = 10;
			this->me_speed->Text = L"Vitesse";
			// 
			// me_strench
			// 
			this->me_strench->AutoSize = true;
			this->me_strench->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->me_strench->ForeColor = System::Drawing::Color::Coral;
			this->me_strench->Location = System::Drawing::Point(61, 85);
			this->me_strench->Name = L"me_strench";
			this->me_strench->Size = System::Drawing::Size(43, 16);
			this->me_strench->TabIndex = 9;
			this->me_strench->Text = L"Force";
			// 
			// me_life
			// 
			this->me_life->AutoSize = true;
			this->me_life->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->me_life->ForeColor = System::Drawing::Color::Coral;
			this->me_life->Location = System::Drawing::Point(61, 62);
			this->me_life->Name = L"me_life";
			this->me_life->Size = System::Drawing::Size(29, 16);
			this->me_life->TabIndex = 8;
			this->me_life->Text = L"Life";
			// 
			// me_level
			// 
			this->me_level->AutoSize = true;
			this->me_level->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->me_level->ForeColor = System::Drawing::Color::Coral;
			this->me_level->Location = System::Drawing::Point(61, 41);
			this->me_level->Name = L"me_level";
			this->me_level->Size = System::Drawing::Size(51, 16);
			this->me_level->TabIndex = 7;
			this->me_level->Text = L"Niveau";
			// 
			// me_nom
			// 
			this->me_nom->AutoSize = true;
			this->me_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->me_nom->ForeColor = System::Drawing::Color::Coral;
			this->me_nom->Location = System::Drawing::Point(61, 20);
			this->me_nom->Name = L"me_nom";
			this->me_nom->Size = System::Drawing::Size(37, 16);
			this->me_nom->TabIndex = 6;
			this->me_nom->Text = L"Nom";
			this->me_nom->Click += gcnew System::EventHandler(this, &CliBru::me_nom_Click);
			// 
			// me_img
			// 
			this->me_img->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->me_img->ImageLocation = L"";
			this->me_img->Location = System::Drawing::Point(216, 19);
			this->me_img->Name = L"me_img";
			this->me_img->Size = System::Drawing::Size(169, 221);
			this->me_img->TabIndex = 5;
			this->me_img->TabStop = false;
			// 
			// me_speedLbl
			// 
			this->me_speedLbl->AutoSize = true;
			this->me_speedLbl->Location = System::Drawing::Point(7, 109);
			this->me_speedLbl->Name = L"me_speedLbl";
			this->me_speedLbl->Size = System::Drawing::Size(50, 13);
			this->me_speedLbl->TabIndex = 4;
			this->me_speedLbl->Text = L"Vitesse : ";
			// 
			// me_strenchLbl
			// 
			this->me_strenchLbl->AutoSize = true;
			this->me_strenchLbl->Location = System::Drawing::Point(6, 87);
			this->me_strenchLbl->Name = L"me_strenchLbl";
			this->me_strenchLbl->Size = System::Drawing::Size(40, 13);
			this->me_strenchLbl->TabIndex = 3;
			this->me_strenchLbl->Text = L"Force :";
			// 
			// me_lifeLbl
			// 
			this->me_lifeLbl->AutoSize = true;
			this->me_lifeLbl->Location = System::Drawing::Point(7, 65);
			this->me_lifeLbl->Name = L"me_lifeLbl";
			this->me_lifeLbl->Size = System::Drawing::Size(31, 13);
			this->me_lifeLbl->TabIndex = 2;
			this->me_lifeLbl->Text = L"Vie : ";
			// 
			// me_LevelLbl
			// 
			this->me_LevelLbl->AutoSize = true;
			this->me_LevelLbl->Location = System::Drawing::Point(7, 43);
			this->me_LevelLbl->Name = L"me_LevelLbl";
			this->me_LevelLbl->Size = System::Drawing::Size(50, 13);
			this->me_LevelLbl->TabIndex = 1;
			this->me_LevelLbl->Text = L"Niveau : ";
			// 
			// me_nameLbl
			// 
			this->me_nameLbl->AutoSize = true;
			this->me_nameLbl->Location = System::Drawing::Point(7, 20);
			this->me_nameLbl->Name = L"me_nameLbl";
			this->me_nameLbl->Size = System::Drawing::Size(38, 13);
			this->me_nameLbl->TabIndex = 0;
			this->me_nameLbl->Text = L"Nom : ";
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->other_speed);
			this->groupBox1->Controls->Add(this->other_strench);
			this->groupBox1->Controls->Add(this->other_life);
			this->groupBox1->Controls->Add(this->other_level);
			this->groupBox1->Controls->Add(this->other_nom);
			this->groupBox1->Controls->Add(this->other_img);
			this->groupBox1->Controls->Add(this->label41);
			this->groupBox1->Controls->Add(this->label42);
			this->groupBox1->Controls->Add(this->label43);
			this->groupBox1->Controls->Add(this->label44);
			this->groupBox1->Controls->Add(this->label45);
			this->groupBox1->ImeMode = System::Windows::Forms::ImeMode::On;
			this->groupBox1->Location = System::Drawing::Point(409, 38);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(398, 546);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Adversaire";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Controls->Add(this->groupBox5);
			this->groupBox2->Controls->Add(this->groupBox6);
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox2->Location = System::Drawing::Point(10, 247);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(362, 293);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Bonus";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->spb3_other);
			this->groupBox3->Controls->Add(this->strb3_other);
			this->groupBox3->Controls->Add(this->lvlb3_other);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->lifeb3_other);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->nameb3_other);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->imgb3_other);
			this->groupBox3->Location = System::Drawing::Point(240, 20);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(114, 267);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Bonus 3";
			// 
			// spb3_other
			// 
			this->spb3_other->AutoSize = true;
			this->spb3_other->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->spb3_other->ForeColor = System::Drawing::Color::Coral;
			this->spb3_other->Location = System::Drawing::Point(51, 214);
			this->spb3_other->Name = L"spb3_other";
			this->spb3_other->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->spb3_other->Size = System::Drawing::Size(53, 16);
			this->spb3_other->TabIndex = 39;
			this->spb3_other->Text = L"Vitesse";
			// 
			// strb3_other
			// 
			this->strb3_other->AutoSize = true;
			this->strb3_other->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->strb3_other->ForeColor = System::Drawing::Color::Coral;
			this->strb3_other->Location = System::Drawing::Point(61, 190);
			this->strb3_other->Name = L"strb3_other";
			this->strb3_other->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->strb3_other->Size = System::Drawing::Size(43, 16);
			this->strb3_other->TabIndex = 38;
			this->strb3_other->Text = L"Force";
			// 
			// lvlb3_other
			// 
			this->lvlb3_other->AutoSize = true;
			this->lvlb3_other->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lvlb3_other->ForeColor = System::Drawing::Color::Coral;
			this->lvlb3_other->Location = System::Drawing::Point(53, 147);
			this->lvlb3_other->Name = L"lvlb3_other";
			this->lvlb3_other->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lvlb3_other->Size = System::Drawing::Size(51, 16);
			this->lvlb3_other->TabIndex = 36;
			this->lvlb3_other->Text = L"Niveau";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(11, 171);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 13);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Vie : ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(11, 215);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(23, 13);
			this->label7->TabIndex = 34;
			this->label7->Text = L"Sp:";
			// 
			// lifeb3_other
			// 
			this->lifeb3_other->AutoSize = true;
			this->lifeb3_other->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lifeb3_other->ForeColor = System::Drawing::Color::Coral;
			this->lifeb3_other->Location = System::Drawing::Point(75, 168);
			this->lifeb3_other->Name = L"lifeb3_other";
			this->lifeb3_other->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lifeb3_other->Size = System::Drawing::Size(29, 16);
			this->lifeb3_other->TabIndex = 37;
			this->lifeb3_other->Text = L"Life";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(10, 193);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(23, 13);
			this->label11->TabIndex = 33;
			this->label11->Text = L"Str:";
			// 
			// nameb3_other
			// 
			this->nameb3_other->AutoSize = true;
			this->nameb3_other->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->nameb3_other->ForeColor = System::Drawing::Color::Coral;
			this->nameb3_other->Location = System::Drawing::Point(38, 117);
			this->nameb3_other->Name = L"nameb3_other";
			this->nameb3_other->Size = System::Drawing::Size(37, 16);
			this->nameb3_other->TabIndex = 35;
			this->nameb3_other->Text = L"Nom";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(11, 149);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(24, 13);
			this->label15->TabIndex = 31;
			this->label15->Text = L"Lvl:";
			// 
			// imgb3_other
			// 
			this->imgb3_other->Location = System::Drawing::Point(6, 19);
			this->imgb3_other->Name = L"imgb3_other";
			this->imgb3_other->Size = System::Drawing::Size(98, 94);
			this->imgb3_other->TabIndex = 1;
			this->imgb3_other->TabStop = false;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->spb2_other);
			this->groupBox5->Controls->Add(this->imgb2_other);
			this->groupBox5->Controls->Add(this->strb2_other);
			this->groupBox5->Controls->Add(this->lvlb2_other);
			this->groupBox5->Controls->Add(this->label21);
			this->groupBox5->Controls->Add(this->label22);
			this->groupBox5->Controls->Add(this->lifeb2_other);
			this->groupBox5->Controls->Add(this->label24);
			this->groupBox5->Controls->Add(this->nameb2_other);
			this->groupBox5->Controls->Add(this->label26);
			this->groupBox5->Location = System::Drawing::Point(123, 20);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(114, 267);
			this->groupBox5->TabIndex = 1;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Bonus 2";
			// 
			// spb2_other
			// 
			this->spb2_other->AutoSize = true;
			this->spb2_other->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->spb2_other->ForeColor = System::Drawing::Color::Coral;
			this->spb2_other->Location = System::Drawing::Point(50, 213);
			this->spb2_other->Name = L"spb2_other";
			this->spb2_other->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->spb2_other->Size = System::Drawing::Size(53, 16);
			this->spb2_other->TabIndex = 30;
			this->spb2_other->Text = L"Vitesse";
			// 
			// imgb2_other
			// 
			this->imgb2_other->Location = System::Drawing::Point(6, 19);
			this->imgb2_other->Name = L"imgb2_other";
			this->imgb2_other->Size = System::Drawing::Size(98, 94);
			this->imgb2_other->TabIndex = 1;
			this->imgb2_other->TabStop = false;
			// 
			// strb2_other
			// 
			this->strb2_other->AutoSize = true;
			this->strb2_other->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->strb2_other->ForeColor = System::Drawing::Color::Coral;
			this->strb2_other->Location = System::Drawing::Point(60, 189);
			this->strb2_other->Name = L"strb2_other";
			this->strb2_other->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->strb2_other->Size = System::Drawing::Size(43, 16);
			this->strb2_other->TabIndex = 29;
			this->strb2_other->Text = L"Force";
			// 
			// lvlb2_other
			// 
			this->lvlb2_other->AutoSize = true;
			this->lvlb2_other->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lvlb2_other->ForeColor = System::Drawing::Color::Coral;
			this->lvlb2_other->Location = System::Drawing::Point(52, 146);
			this->lvlb2_other->Name = L"lvlb2_other";
			this->lvlb2_other->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lvlb2_other->Size = System::Drawing::Size(51, 16);
			this->lvlb2_other->TabIndex = 27;
			this->lvlb2_other->Text = L"Niveau";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(10, 170);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(31, 13);
			this->label21->TabIndex = 23;
			this->label21->Text = L"Vie : ";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(10, 214);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(23, 13);
			this->label22->TabIndex = 25;
			this->label22->Text = L"Sp:";
			// 
			// lifeb2_other
			// 
			this->lifeb2_other->AutoSize = true;
			this->lifeb2_other->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lifeb2_other->ForeColor = System::Drawing::Color::Coral;
			this->lifeb2_other->Location = System::Drawing::Point(74, 167);
			this->lifeb2_other->Name = L"lifeb2_other";
			this->lifeb2_other->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lifeb2_other->Size = System::Drawing::Size(29, 16);
			this->lifeb2_other->TabIndex = 28;
			this->lifeb2_other->Text = L"Life";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(9, 192);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(23, 13);
			this->label24->TabIndex = 24;
			this->label24->Text = L"Str:";
			// 
			// nameb2_other
			// 
			this->nameb2_other->AutoSize = true;
			this->nameb2_other->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->nameb2_other->ForeColor = System::Drawing::Color::Coral;
			this->nameb2_other->Location = System::Drawing::Point(37, 116);
			this->nameb2_other->Name = L"nameb2_other";
			this->nameb2_other->Size = System::Drawing::Size(37, 16);
			this->nameb2_other->TabIndex = 26;
			this->nameb2_other->Text = L"Nom";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(10, 148);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(24, 13);
			this->label26->TabIndex = 22;
			this->label26->Text = L"Lvl:";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->spb1_other);
			this->groupBox6->Controls->Add(this->imgb1_other);
			this->groupBox6->Controls->Add(this->strb1_other);
			this->groupBox6->Controls->Add(this->label29);
			this->groupBox6->Controls->Add(this->lifeb1_other);
			this->groupBox6->Controls->Add(this->lvlb1_other);
			this->groupBox6->Controls->Add(this->label32);
			this->groupBox6->Controls->Add(this->nameb1_other);
			this->groupBox6->Controls->Add(this->label34);
			this->groupBox6->Controls->Add(this->label35);
			this->groupBox6->Location = System::Drawing::Point(7, 20);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(110, 267);
			this->groupBox6->TabIndex = 0;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Bonus 1";
			// 
			// spb1_other
			// 
			this->spb1_other->AutoSize = true;
			this->spb1_other->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->spb1_other->ForeColor = System::Drawing::Color::Coral;
			this->spb1_other->Location = System::Drawing::Point(51, 212);
			this->spb1_other->Name = L"spb1_other";
			this->spb1_other->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->spb1_other->Size = System::Drawing::Size(53, 16);
			this->spb1_other->TabIndex = 21;
			this->spb1_other->Text = L"Vitesse";
			// 
			// imgb1_other
			// 
			this->imgb1_other->Location = System::Drawing::Point(6, 19);
			this->imgb1_other->Name = L"imgb1_other";
			this->imgb1_other->Size = System::Drawing::Size(98, 94);
			this->imgb1_other->TabIndex = 0;
			this->imgb1_other->TabStop = false;
			// 
			// strb1_other
			// 
			this->strb1_other->AutoSize = true;
			this->strb1_other->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->strb1_other->ForeColor = System::Drawing::Color::Coral;
			this->strb1_other->Location = System::Drawing::Point(61, 190);
			this->strb1_other->Name = L"strb1_other";
			this->strb1_other->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->strb1_other->Size = System::Drawing::Size(43, 16);
			this->strb1_other->TabIndex = 20;
			this->strb1_other->Text = L"Force";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(9, 170);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(31, 13);
			this->label29->TabIndex = 14;
			this->label29->Text = L"Vie : ";
			// 
			// lifeb1_other
			// 
			this->lifeb1_other->AutoSize = true;
			this->lifeb1_other->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lifeb1_other->ForeColor = System::Drawing::Color::Coral;
			this->lifeb1_other->Location = System::Drawing::Point(75, 167);
			this->lifeb1_other->Name = L"lifeb1_other";
			this->lifeb1_other->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lifeb1_other->Size = System::Drawing::Size(29, 16);
			this->lifeb1_other->TabIndex = 19;
			this->lifeb1_other->Text = L"Life";
			// 
			// lvlb1_other
			// 
			this->lvlb1_other->AutoSize = true;
			this->lvlb1_other->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lvlb1_other->ForeColor = System::Drawing::Color::Coral;
			this->lvlb1_other->Location = System::Drawing::Point(53, 146);
			this->lvlb1_other->Name = L"lvlb1_other";
			this->lvlb1_other->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->lvlb1_other->Size = System::Drawing::Size(51, 16);
			this->lvlb1_other->TabIndex = 18;
			this->lvlb1_other->Text = L"Niveau";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(9, 148);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(24, 13);
			this->label32->TabIndex = 13;
			this->label32->Text = L"Lvl:";
			// 
			// nameb1_other
			// 
			this->nameb1_other->AutoSize = true;
			this->nameb1_other->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->nameb1_other->ForeColor = System::Drawing::Color::Coral;
			this->nameb1_other->Location = System::Drawing::Point(36, 116);
			this->nameb1_other->Name = L"nameb1_other";
			this->nameb1_other->Size = System::Drawing::Size(37, 16);
			this->nameb1_other->TabIndex = 17;
			this->nameb1_other->Text = L"Nom";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(8, 192);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(23, 13);
			this->label34->TabIndex = 15;
			this->label34->Text = L"Str:";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(9, 214);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(23, 13);
			this->label35->TabIndex = 16;
			this->label35->Text = L"Sp:";
			// 
			// other_speed
			// 
			this->other_speed->AutoSize = true;
			this->other_speed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->other_speed->ForeColor = System::Drawing::Color::Coral;
			this->other_speed->Location = System::Drawing::Point(61, 107);
			this->other_speed->Name = L"other_speed";
			this->other_speed->Size = System::Drawing::Size(53, 16);
			this->other_speed->TabIndex = 10;
			this->other_speed->Text = L"Vitesse";
			// 
			// other_strench
			// 
			this->other_strench->AutoSize = true;
			this->other_strench->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->other_strench->ForeColor = System::Drawing::Color::Coral;
			this->other_strench->Location = System::Drawing::Point(61, 85);
			this->other_strench->Name = L"other_strench";
			this->other_strench->Size = System::Drawing::Size(43, 16);
			this->other_strench->TabIndex = 9;
			this->other_strench->Text = L"Force";
			// 
			// other_life
			// 
			this->other_life->AutoSize = true;
			this->other_life->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->other_life->ForeColor = System::Drawing::Color::Coral;
			this->other_life->Location = System::Drawing::Point(61, 62);
			this->other_life->Name = L"other_life";
			this->other_life->Size = System::Drawing::Size(29, 16);
			this->other_life->TabIndex = 8;
			this->other_life->Text = L"Life";
			// 
			// other_level
			// 
			this->other_level->AutoSize = true;
			this->other_level->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->other_level->ForeColor = System::Drawing::Color::Coral;
			this->other_level->Location = System::Drawing::Point(61, 41);
			this->other_level->Name = L"other_level";
			this->other_level->Size = System::Drawing::Size(51, 16);
			this->other_level->TabIndex = 7;
			this->other_level->Text = L"Niveau";
			// 
			// other_nom
			// 
			this->other_nom->AutoSize = true;
			this->other_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->other_nom->ForeColor = System::Drawing::Color::Coral;
			this->other_nom->Location = System::Drawing::Point(61, 20);
			this->other_nom->Name = L"other_nom";
			this->other_nom->Size = System::Drawing::Size(37, 16);
			this->other_nom->TabIndex = 6;
			this->other_nom->Text = L"Nom";
			// 
			// other_img
			// 
			this->other_img->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->other_img->Location = System::Drawing::Point(223, 19);
			this->other_img->Name = L"other_img";
			this->other_img->Size = System::Drawing::Size(169, 221);
			this->other_img->TabIndex = 5;
			this->other_img->TabStop = false;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(7, 109);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(50, 13);
			this->label41->TabIndex = 4;
			this->label41->Text = L"Vitesse : ";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(6, 87);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(40, 13);
			this->label42->TabIndex = 3;
			this->label42->Text = L"Force :";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(7, 65);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(31, 13);
			this->label43->TabIndex = 2;
			this->label43->Text = L"Vie : ";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(7, 43);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(50, 13);
			this->label44->TabIndex = 1;
			this->label44->Text = L"Niveau : ";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(7, 20);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(38, 13);
			this->label45->TabIndex = 0;
			this->label45->Text = L"Nom : ";
			// 
			// CliBru
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(815, 595);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->brute_me_gp);
			this->Controls->Add(this->loose);
			this->Controls->Add(this->Win);
			this->Controls->Add(this->brute_other);
			this->Controls->Add(this->brute_me);
			this->Controls->Add(this->hostLbl);
			this->Controls->Add(this->connectBtn);
			this->Controls->Add(this->userLbl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"CliBru";
			this->Text = L"Les brutes by xpenradio.com";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &CliBru::CliBru_FormClosing);
			this->brute_me_gp->ResumeLayout(false);
			this->brute_me_gp->PerformLayout();
			this->me_bonuses->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->imgb3_me))->EndInit();
			this->bonus2_gpe->ResumeLayout(false);
			this->bonus2_gpe->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->imgb2_me))->EndInit();
			this->bonus1_gp->ResumeLayout(false);
			this->bonus1_gp->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->imgb1_me))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->me_img))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->imgb3_other))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->imgb2_other))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->imgb1_other))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->other_img))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CliBru_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void connectBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(state)
				 {
					 c->close();
					 this->connectBtn->Text = L"Connexion...";
					 this->userLbl->Text = "Connecté sous : non connecté";
					 this->hostLbl->Text = "Adresse du serveur : non connecté";
					 this->brute_me->Enabled = false;
					 this->brute_other->Enabled = false;
					 this->Win->Enabled = false;
					 this->loose->Enabled = false;
					 state=false;
				 } else
				 {
					 connex = gcnew ConnexionIHM();
					 connex->Owner=this;
					 connex->c=c;
					 connex->ShowDialog();

					 //fermeture de la fille
					 c=connex->c;

					 if(connex->state) {
						 std::string userstd;
						 using namespace Runtime::InteropServices;
						 const char* chars = 
							 (const char*)(Marshal::StringToHGlobalAnsi(connex->userstr)).ToPointer();
						 userstd = chars;
						 Marshal::FreeHGlobal(IntPtr((void*)chars));

						 std::string passwdstd;
						 using namespace Runtime::InteropServices;
						 chars = 
							 (const char*)(Marshal::StringToHGlobalAnsi(connex->passwdstr)).ToPointer();
						 passwdstd = chars;
						 Marshal::FreeHGlobal(IntPtr((void*)chars));

						 if(c->Login(userstd,passwdstd))
						 {
							 if(connex->state)
								 state=true;
							 else
								 state=false;
							 this->connectBtn->Text = L"Déconnexion...";
							 this->userLbl->Text = "Connecté sous : "+connex->userstr;
							 this->hostLbl->Text = "Adresse du serveur : "+connex->hoststr;
							 this->brute_me->Enabled = true;
							 this->brute_other->Enabled = true;
							 this->Win->Enabled = true;
							 this->loose->Enabled = true;
						 }
					 }
				 }
			 }
	private: System::Void me_nom_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void pictuimgb1_me_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void brute_me_Click(System::Object^  sender, System::EventArgs^  e) {
				 Brute b;
				 Bonuses b1,b2,b3;
				 if(c->Get_BruteMe(b,b1,b2,b3))
				 {

					 //Brute
					 String^ meName = gcnew String(b.getName().c_str());
					 char buff[16];
					 itoa(b.getLevel(),buff,10);
					 String^ meLevel = gcnew String(buff);
					 itoa(b.getLife(),buff,10);
					 String^ meLife = gcnew String(buff);
					 itoa(b.getSpeed(),buff,10);
					 String^ meSpeed = gcnew String(buff);
					 itoa(b.getStrenght(),buff,10);
					 String^ meStrench = gcnew String(buff);

					 this->me_nom->Text = meName;
					 this->me_level->Text = meLevel;
					 this->me_speed->Text = meSpeed;
					 this->me_strench->Text = meStrench;
					 this->me_life->Text = meLife;


					 //Bonus1
					 String^ meNameb1 = gcnew String(b1.getName().c_str());
					 itoa(b1.getLevel(),buff,10);
					 String^ meLevelb1 = gcnew String(buff);
					 itoa(b1.getLife(),buff,10);
					 String^ meLifeb1 = gcnew String(buff);
					 itoa(b1.getSpeed(),buff,10);
					 String^ meSpeedb1 = gcnew String(buff);
					 itoa(b1.getStrenght(),buff,10);
					 String^ meStrenchb1 = gcnew String(buff);

					 this->nameb1_me->Text = meNameb1;
					 this->lvlb1_me->Text = meLevelb1;
					 this->spb1_me->Text = meSpeedb1;
					 this->strb1_me->Text = meStrenchb1;
					 this->lifeb1_me->Text = meLifeb1;

					 //Bonus2
					 String^ meNameb2 = gcnew String(b2.getName().c_str());
					 itoa(b2.getLevel(),buff,10);
					 String^ meLevelb2 = gcnew String(buff);
					 itoa(b2.getLife(),buff,10);
					 String^ meLifeb2 = gcnew String(buff);
					 itoa(b2.getSpeed(),buff,10);
					 String^ meSpeedb2 = gcnew String(buff);
					 itoa(b2.getStrenght(),buff,10);
					 String^ meStrenchb2 = gcnew String(buff);

					 this->nameb2_me->Text = meNameb2;
					 this->lvlb2_me->Text = meLevelb2;
					 this->spb2_me->Text = meSpeedb2;
					 this->strb2_me->Text = meStrenchb2;
					 this->lifeb2_me->Text = meLifeb2;
					 //Bonus3
					 String^ meNameb3 = gcnew String(b3.getName().c_str());
					 itoa(b3.getLevel(),buff,10);
					 String^ meLevelb3 = gcnew String(buff);
					 itoa(b3.getLife(),buff,10);
					 String^ meLifeb3 = gcnew String(buff);
					 itoa(b3.getSpeed(),buff,10);
					 String^ meSpeedb3 = gcnew String(buff);
					 itoa(b3.getStrenght(),buff,10);
					 String^ meStrenchb3 = gcnew String(buff);

					 this->nameb3_me->Text = meNameb3;
					 this->lvlb3_me->Text = meLevelb3;
					 this->spb3_me->Text = meSpeedb3;
					 this->strb3_me->Text = meStrenchb3;
					 this->lifeb3_me->Text = meLifeb3;

					 if(IMGACT)
					 {
						 string image,imageb1,imageb2,imageb3;
						 
						 if(c->ImageMe(image,imageb1,imageb2,imageb3))
						 {
							 //Brute
							 if(image.length()!=0)
							 {
								 char *imgage = new char[image.length()]; 
								imgage=const_cast<char*>(image.c_str());

								array<Byte>^ data = gcnew array<Byte>(image.size());
								System::Runtime::InteropServices::Marshal::Copy(IntPtr(&image[0]), data, 0, image.size());

								 FileStream^ fs = gcnew FileStream("bruteme.jpg", FileMode::Create);
								BinaryWriter^ w = gcnew BinaryWriter(fs);

								//String^ example2 = gcnew String( imgage,0,image.length()); 
								w->Write(data);
								w->Close();
								this->me_img->ImageLocation = L"bruteme.jpg";
							 } else
								 this->me_img->ImageLocation = L"";

							 //Bonus1
							 if(imageb1.length()!=0)
							 {
								 char *imgage = new char[imageb1.length()]; 
								imgage=const_cast<char*>(imageb1.c_str());

								array<Byte>^ data = gcnew array<Byte>(imageb1.size());
								System::Runtime::InteropServices::Marshal::Copy(IntPtr(&imageb1[0]), data, 0, imageb1.size());

								 FileStream^ fs = gcnew FileStream("brutemeb1.jpg", FileMode::Create);
								BinaryWriter^ w = gcnew BinaryWriter(fs);

								//String^ example2 = gcnew String( imgage,0,image.length()); 
								w->Write(data);
								w->Close();
								this->imgb1_me->ImageLocation = L"brutemeb1.jpg";
							 } else
								 this->imgb1_me->ImageLocation = L"";

							 //Bonus2
							 if(imageb2.length()!=0)
							 {
								 char *imgage = new char[imageb2.length()]; 
								imgage=const_cast<char*>(imageb2.c_str());

								array<Byte>^ data = gcnew array<Byte>(imageb2.size());
								System::Runtime::InteropServices::Marshal::Copy(IntPtr(&imageb2[0]), data, 0, imageb2.size());

								 FileStream^ fs = gcnew FileStream("brutemeb2.jpg", FileMode::Create);
								BinaryWriter^ w = gcnew BinaryWriter(fs);

								//String^ example2 = gcnew String( imgage,0,image.length()); 
								w->Write(data);
								w->Close();
								this->imgb2_me->ImageLocation = L"brutemeb2.jpg";
							 } else
								 this->imgb2_me->ImageLocation = L"";
							 //Bonus 3
							 if(imageb3.length()!=0)
							 {
								 char *imgage = new char[imageb3.length()]; 
								imgage=const_cast<char*>(imageb3.c_str());

								array<Byte>^ data = gcnew array<Byte>(imageb3.size());
								System::Runtime::InteropServices::Marshal::Copy(IntPtr(&imageb3[0]), data, 0, imageb3.size());

								 FileStream^ fs = gcnew FileStream("brutemeb3.jpg", FileMode::Create);
								BinaryWriter^ w = gcnew BinaryWriter(fs);

								//String^ example2 = gcnew String( imgage,0,image.length()); 
								w->Write(data);
								w->Close();
								this->imgb3_me->ImageLocation = L"brutemeb3.jpg";
							 } else
								 this->imgb3_me->ImageLocation = L"";
						 }
					 }

				 }
			 }

	private: System::Void brute_other_Click(System::Object^  sender, System::EventArgs^  e) {
				 Brute b;
				 Bonuses b1,b2,b3;
				 if(c->Get_BruteOther(b,b1,b2,b3))
				 {

					 String^ meName = gcnew String(b.getName().c_str());
					 char buff[16];
					 itoa(b.getLevel(),buff,10);
					 String^ meLevel = gcnew String(buff);
					 itoa(b.getLife(),buff,10);
					 String^ meLife = gcnew String(buff);
					 itoa(b.getSpeed(),buff,10);
					 String^ meSpeed = gcnew String(buff);
					 itoa(b.getStrenght(),buff,10);
					 String^ meStrench = gcnew String(buff);

					 this->other_nom->Text = meName;
					 this->other_level->Text = meLevel;
					 this->other_speed->Text = meSpeed;
					 this->other_strench->Text = meStrench;
					 this->other_life->Text = meLife;

					 //Bonus1
					 String^ otherNameb1 = gcnew String(b1.getName().c_str());
					 itoa(b1.getLevel(),buff,10);
					 String^ otherLevelb1 = gcnew String(buff);
					 itoa(b1.getLife(),buff,10);
					 String^ otherLifeb1 = gcnew String(buff);
					 itoa(b1.getSpeed(),buff,10);
					 String^ otherSpeedb1 = gcnew String(buff);
					 itoa(b1.getStrenght(),buff,10);
					 String^ otherStrenchb1 = gcnew String(buff);

					 this->nameb1_other->Text = otherNameb1;
					 this->lvlb1_other->Text = otherLevelb1;
					 this->spb1_other->Text = otherSpeedb1;
					 this->strb1_other->Text = otherStrenchb1;
					 this->lifeb1_other->Text = otherLifeb1;

					 //Bonus2
					 String^ otherNameb2 = gcnew String(b2.getName().c_str());
					 itoa(b2.getLevel(),buff,10);
					 String^ otherLevelb2 = gcnew String(buff);
					 itoa(b2.getLife(),buff,10);
					 String^ otherLifeb2 = gcnew String(buff);
					 itoa(b2.getSpeed(),buff,10);
					 String^ otherSpeedb2 = gcnew String(buff);
					 itoa(b2.getStrenght(),buff,10);
					 String^ otherStrenchb2 = gcnew String(buff);

					 this->nameb2_other->Text = otherNameb2;
					 this->lvlb2_other->Text = otherLevelb2;
					 this->spb2_other->Text = otherSpeedb2;
					 this->strb2_other->Text = otherStrenchb2;
					 this->lifeb2_other->Text = otherLifeb2;
					 //Bonus3
					 String^ otherNameb3 = gcnew String(b3.getName().c_str());
					 itoa(b3.getLevel(),buff,10);
					 String^ otherLevelb3 = gcnew String(buff);
					 itoa(b3.getLife(),buff,10);
					 String^ otherLifeb3 = gcnew String(buff);
					 itoa(b3.getSpeed(),buff,10);
					 String^ otherSpeedb3 = gcnew String(buff);
					 itoa(b3.getStrenght(),buff,10);
					 String^ otherStrenchb3 = gcnew String(buff);

					 this->nameb3_other->Text = otherNameb3;
					 this->lvlb3_other->Text = otherLevelb3;
					 this->spb3_other->Text = otherSpeedb3;
					 this->strb3_other->Text = otherStrenchb3;
					 this->lifeb3_other->Text = otherLifeb3;

					 if(IMGACT)
					 {
						 string image,imageb1,imageb2,imageb3;
						 
						 if(c->ImageOther(image,imageb1,imageb2,imageb3))
						 {
							 //Brute
							 if(image.length()!=0)
							 {
								 char *imgage = new char[image.length()]; 
								imgage=const_cast<char*>(image.c_str());

								array<Byte>^ data = gcnew array<Byte>(image.size());
								System::Runtime::InteropServices::Marshal::Copy(IntPtr(&image[0]), data, 0, image.size());

								 FileStream^ fs = gcnew FileStream("bruteother.jpg", FileMode::Create);
								BinaryWriter^ w = gcnew BinaryWriter(fs);

								//String^ example2 = gcnew String( imgage,0,image.length()); 
								w->Write(data);
								w->Close();
								this->other_img->ImageLocation = L"bruteother.jpg";
							 } else
								 this->other_img->ImageLocation = L"";

							 //Bonus1
							 if(imageb1.length()!=0)
							 {
								 char *imgage = new char[imageb1.length()]; 
								imgage=const_cast<char*>(imageb1.c_str());

								array<Byte>^ data = gcnew array<Byte>(imageb1.size());
								System::Runtime::InteropServices::Marshal::Copy(IntPtr(&imageb1[0]), data, 0, imageb1.size());

								 FileStream^ fs = gcnew FileStream("bruteotherb1.jpg", FileMode::Create);
								BinaryWriter^ w = gcnew BinaryWriter(fs);

								//String^ example2 = gcnew String( imgage,0,image.length()); 
								w->Write(data);
								w->Close();
								this->imgb1_other->ImageLocation = L"bruteotherb1.jpg";
							 } else
								 this->imgb1_other->ImageLocation = L"";

							 //Bonus2
							 if(imageb2.length()!=0)
							 {
								 char *imgage = new char[imageb2.length()]; 
								imgage=const_cast<char*>(imageb2.c_str());

								array<Byte>^ data = gcnew array<Byte>(imageb2.size());
								System::Runtime::InteropServices::Marshal::Copy(IntPtr(&imageb2[0]), data, 0, imageb2.size());

								 FileStream^ fs = gcnew FileStream("bruteotherb2.jpg", FileMode::Create);
								BinaryWriter^ w = gcnew BinaryWriter(fs);

								//String^ example2 = gcnew String( imgage,0,image.length()); 
								w->Write(data);
								w->Close();
								this->imgb2_other->ImageLocation = L"bruteotherb2.jpg";
							 } else
								 this->imgb2_other->ImageLocation = L"";
							 //Bonus 3
							 if(imageb3.length()!=0)
							 {
								 char *imgage = new char[imageb3.length()]; 
								imgage=const_cast<char*>(imageb3.c_str());

								array<Byte>^ data = gcnew array<Byte>(imageb3.size());
								System::Runtime::InteropServices::Marshal::Copy(IntPtr(&imageb3[0]), data, 0, imageb3.size());

								 FileStream^ fs = gcnew FileStream("bruteotherb3.jpg", FileMode::Create);
								BinaryWriter^ w = gcnew BinaryWriter(fs);

								//String^ example2 = gcnew String( imgage,0,image.length()); 
								w->Write(data);
								w->Close();
								this->imgb3_other->ImageLocation = L"bruteotherb3.jpg";
							 } else
								 this->imgb3_other->ImageLocation = L"";
						 }
					 }
				 }
			 }
	private: System::Void Win_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(c->Win())
					 MessageBox::Show(
					 "Gagné", 
					 "Combat", MessageBoxButtons::OK, 
					 MessageBoxIcon::Information);
				 else
					 MessageBox::Show(
					 "Tu combat avec quoi/ ou contre quoi ?", 
					 "Combat", MessageBoxButtons::OK, 
					 MessageBoxIcon::Error);
			 }
	private: System::Void loose_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(c->Loose())
					 MessageBox::Show(
					 "Perdu", 
					 "Combat", MessageBoxButtons::OK, 
					 MessageBoxIcon::Information);
				 else
					 MessageBox::Show(
					 "Tu combat avec quoi/ ou contre quoi ?", 
					 "Combat", MessageBoxButtons::OK, 
					 MessageBoxIcon::Error);
			 }
	private: System::Void CliBru_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
				 if(state)
					c->close();
			 }
};
}
