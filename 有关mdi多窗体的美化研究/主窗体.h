#pragma once
#include "�Ӵ���1.h"
#include "�Ӵ���2.h"
namespace �й�mdi�ര��������о� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ժҪ
	/// </summary>
	public ref class ������ : public System::Windows::Forms::Form
	{
	public:
		������(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~������()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::PropertyGrid^  propertyGrid1;
	private: System::Windows::Forms::TreeView^  treeView1;
	private: System::Windows::Forms::ToolStripMenuItem^  ״̬��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �ļ���ͼToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  �Ӵ���1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripSplitButton^  toolStripSplitButton1;
	private: System::Windows::Forms::ToolStripProgressBar^  toolStripProgressBar1;
	private: ��־�ؼ�::UserControl1^  userControl11;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripMenuItem^  �Ӵ���2ToolStripMenuItem;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// ����������������
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(������::typeid));
			System::Windows::Forms::TreeNode^  treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"�ڵ�3", 1, 1));
			System::Windows::Forms::TreeNode^  treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"�ڵ�2", gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode1 }));
			System::Windows::Forms::TreeNode^  treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"���"));
			System::Windows::Forms::TreeNode^  treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"�ڵ�0", gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode3 }));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->״̬��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ļ���ͼToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�Ӵ���1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�Ӵ���2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripSplitButton1 = (gcnew System::Windows::Forms::ToolStripSplitButton());
			this->toolStripProgressBar1 = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->propertyGrid1 = (gcnew System::Windows::Forms::PropertyGrid());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->userControl11 = (gcnew ��־�ؼ�::UserControl1());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::White;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"������", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->menuStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Visible;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->��ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->MdiWindowListItem = this->����ToolStripMenuItem;
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1203, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Checked = true;
			this->����ToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->״̬��ToolStripMenuItem,
					this->������ToolStripMenuItem, this->������ToolStripMenuItem, this->�ļ���ͼToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(61, 24);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// ״̬��ToolStripMenuItem
			// 
			this->״̬��ToolStripMenuItem->Checked = true;
			this->״̬��ToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->״̬��ToolStripMenuItem->Name = L"״̬��ToolStripMenuItem";
			this->״̬��ToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->״̬��ToolStripMenuItem->Text = L"״̬��";
			this->״̬��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &������::״̬��ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Checked = true;
			this->������ToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &������::������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Checked = true;
			this->������ToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &������::������ToolStripMenuItem_Click);
			// 
			// �ļ���ͼToolStripMenuItem
			// 
			this->�ļ���ͼToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�ļ���ͼToolStripMenuItem.Image")));
			this->�ļ���ͼToolStripMenuItem->Name = L"�ļ���ͼToolStripMenuItem";
			this->�ļ���ͼToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->�ļ���ͼToolStripMenuItem->Text = L"�ļ���ͼ";
			// 
			// ��ToolStripMenuItem
			// 
			this->��ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�Ӵ���1ToolStripMenuItem,
					this->�Ӵ���2ToolStripMenuItem
			});
			this->��ToolStripMenuItem->Name = L"��ToolStripMenuItem";
			this->��ToolStripMenuItem->Size = System::Drawing::Size(61, 24);
			this->��ToolStripMenuItem->Text = L"��";
			this->��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &������::��ToolStripMenuItem_Click);
			// 
			// �Ӵ���1ToolStripMenuItem
			// 
			this->�Ӵ���1ToolStripMenuItem->Name = L"�Ӵ���1ToolStripMenuItem";
			this->�Ӵ���1ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->�Ӵ���1ToolStripMenuItem->Text = L"�Ӵ���1";
			this->�Ӵ���1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &������::�Ӵ���1ToolStripMenuItem_Click);
			// 
			// �Ӵ���2ToolStripMenuItem
			// 
			this->�Ӵ���2ToolStripMenuItem->Name = L"�Ӵ���2ToolStripMenuItem";
			this->�Ӵ���2ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->�Ӵ���2ToolStripMenuItem->Text = L"�Ӵ���2";
			this->�Ӵ���2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &������::�Ӵ���2ToolStripMenuItem_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2, this->toolStripSplitButton1, this->toolStripProgressBar1
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 603);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1203, 26);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(167, 21);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Click += gcnew System::EventHandler(this, &������::toolStripStatusLabel1_Click);
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(167, 21);
			this->toolStripStatusLabel2->Text = L"toolStripStatusLabel2";
			// 
			// toolStripSplitButton1
			// 
			this->toolStripSplitButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripSplitButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripSplitButton1.Image")));
			this->toolStripSplitButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripSplitButton1->Name = L"toolStripSplitButton1";
			this->toolStripSplitButton1->Size = System::Drawing::Size(39, 24);
			this->toolStripSplitButton1->Text = L"toolStripSplitButton1";
			// 
			// toolStripProgressBar1
			// 
			this->toolStripProgressBar1->Name = L"toolStripProgressBar1";
			this->toolStripProgressBar1->Size = System::Drawing::Size(100, 20);
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripButton1,
					this->toolStripButton2
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 28);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1203, 27);
			this->toolStrip1->TabIndex = 3;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(24, 24);
			this->toolStripButton1->Text = L"toolStripButton1";
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(24, 24);
			this->toolStripButton2->Text = L"toolStripButton2";
			// 
			// propertyGrid1
			// 
			this->propertyGrid1->Dock = System::Windows::Forms::DockStyle::Right;
			this->propertyGrid1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->propertyGrid1->Location = System::Drawing::Point(1063, 55);
			this->propertyGrid1->Name = L"propertyGrid1";
			this->propertyGrid1->Size = System::Drawing::Size(140, 548);
			this->propertyGrid1->TabIndex = 4;
			this->propertyGrid1->Click += gcnew System::EventHandler(this, &������::propertyGrid1_Click);
			// 
			// treeView1
			// 
			this->treeView1->Dock = System::Windows::Forms::DockStyle::Left;
			this->treeView1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->treeView1->ImageIndex = 0;
			this->treeView1->ImageList = this->imageList1;
			this->treeView1->Location = System::Drawing::Point(0, 55);
			this->treeView1->Name = L"treeView1";
			treeNode1->ImageIndex = 1;
			treeNode1->Name = L"�ڵ�3";
			treeNode1->SelectedImageIndex = 1;
			treeNode1->Text = L"�ڵ�3";
			treeNode2->Name = L"�ڵ�2";
			treeNode2->Text = L"�ڵ�2";
			treeNode3->Name = L"�ڵ�1";
			treeNode3->Text = L"���";
			treeNode4->Name = L"�ڵ�0";
			treeNode4->Text = L"�ڵ�0";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) { treeNode2, treeNode4 });
			this->treeView1->SelectedImageIndex = 0;
			this->treeView1->Size = System::Drawing::Size(169, 548);
			this->treeView1->TabIndex = 5;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &������::treeView1_AfterSelect);
			this->treeView1->NodeMouseDoubleClick += gcnew System::Windows::Forms::TreeNodeMouseClickEventHandler(this, &������::treeView1_NodeMouseDoubleClick);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"Gear.ico");
			this->imageList1->Images->SetKeyName(1, L"New.ico");
			this->imageList1->Images->SetKeyName(2, L"Annotate_Default.ico");
			// 
			// userControl11
			// 
			this->userControl11->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->userControl11->Location = System::Drawing::Point(169, 447);
			this->userControl11->Name = L"userControl11";
			this->userControl11->Size = System::Drawing::Size(894, 156);
			this->userControl11->TabIndex = 7;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &������::timer1_Tick);
			// 
			// progressBar1
			// 
			this->progressBar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->progressBar1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->progressBar1->Location = System::Drawing::Point(476, 603);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(456, 23);
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 9;
			// 
			// ������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1203, 629);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->userControl11);
			this->Controls->Add(this->treeView1);
			this->Controls->Add(this->propertyGrid1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"������";
			this->Text = L"������";
			this->Load += gcnew System::EventHandler(this, &������::������_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ״̬��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		״̬��ToolStripMenuItem->Checked = !״̬��ToolStripMenuItem->Checked;
		statusStrip1->Visible = !statusStrip1->Visible;
	}

			 public: ref class class_t
			 {
			 private:
				 int all_num = 1;
				 int km1 = 100;
				 int km2 = 100;
				 int km3 = 100;
				 int km4 = 100;
				 int km5 = 100;
				 int km6 = 100;
				 int km7 = 100;
				 int km8 = 100;
				 int km9 = 100;
			 public:
				 [DescriptionAttribute("��Ŀ1����")]  //���ԵĽ���
				 property int km1_t {
					 int get() {
						 return km1;
					 }
					 void set(int in) {
						 km2 = in;
					 }
				 }
				 [DescriptionAttribute("��Ŀ2����")]  //���ԵĽ���
				 property int km2_t {
					 int get() {
						 return km2;
					 }
					 void set(int in) {
						 km2 = in;
					 }
				 }
				 [DescriptionAttribute("��Ŀ3����")]  //���ԵĽ���
				 property int km3_t {
					 int get() {
						 return km3;
					 }
					 void set(int in) {
						 km3 = in;
					 }
				 }
				 [DescriptionAttribute("��Ŀ4����")]  //���ԵĽ���
				 property int km4_t {
					 int get() {
						 return km4;
					 }
					 void set(int in) {
						 km4 = in;
					 }
				 }
				 [CategoryAttribute("������Ŀ"), DescriptionAttribute("��Ŀ5����")]  //���ԵĽ���
				 property int km5_t {
					 int get() {
						 return km5;
					 }
					 void set(int in) {
						 km5 = in;
					 }
				 }
				 [CategoryAttribute("������Ŀ"), DescriptionAttribute("��Ŀ6����")]  //���ԵĽ���
				 property int km6_t {
					 int get() {
						 return km6;
					 }
					 void set(int in) {
						 km6 = in;
					 }
				 }
				 [CategoryAttribute("������Ŀ"), DescriptionAttribute("��Ŀ7����")]  //���ԵĽ���
				 property int km7_t {
					 int get() {
						 return km7;
					 }
					 void set(int in) {
						 km7 = in;
					 }
				 }
				 [DescriptionAttribute("��Ŀ8����")]  //���ԵĽ���
				 property int km8_t {
					 int get() {
						 return km8;
					 }
					 void set(int in) {
						 km8 = in;
					 }
				 }
				 [DescriptionAttribute("��Ŀ9����")]  //���ԵĽ���
				 property int km9_t {
					 int get() {
						 return km9;
					 }
					 void set(int in) {
						 km9 = in;
					 }
				 }
			 };






private: System::Void ������_Load(System::Object^  sender, System::EventArgs^  e) {

	class_t^t = gcnew class_t;
	propertyGrid1->SelectedObject = t;
	toolStripStatusLabel1->Text = "��ǰʱ��:";
}

		 System::Void A(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("������");

			 Form^ f = this->ActiveMdiChild;
			 if (f->Name == "�Ӵ���1") {
				 Form^ ftemp = GetWindowsChild("�Ӵ���2");
				 if(ftemp!= nullptr)
					 ((�Ӵ���2^)ftemp)->Stop();
			 }
		 
		 }

		 void CloseAllMidchild() {
			 for each(Form^ f in MdiChildren)
			 {
				 f->Close();
			 }
		 }

		 /**
		 ����:���ݴ������ֻ�ȡ�����ǲ����Ѿ���
		 
		 */
		 Form^ ������::GetWindowsChild(String ^FormName) {
			 for each(Form^ f in MdiChildren)
			 {
				 if (f->Name == FormName)
				 {
					 return f;
				 }
			 }
			 return nullptr;
		 }

private: System::Void �Ӵ���1ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Form ^f = GetWindowsChild("�Ӵ���1");

	if (f == nullptr) {
		CloseAllMidchild();
		�Ӵ���1^ f = gcnew �Ӵ���1;
		f->MdiParent = this;
		f->Name = "�Ӵ���1";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		f->BringToFront();
	}
}
private: System::Void ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	������ToolStripMenuItem->Checked = !������ToolStripMenuItem->Checked;
	toolStrip1->Visible = !toolStrip1->Visible;
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	������ToolStripMenuItem->Checked = !������ToolStripMenuItem->Checked;
	propertyGrid1->Visible = !propertyGrid1->Visible;
}
private: System::Void toolStripStatusLabel1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	toolStripStatusLabel2->Text = DateTime::Now.ToString();
	if (progressBar1->Value == progressBar1->Maximum) progressBar1->Value = progressBar1->Minimum;
	progressBar1->Value += 10;
}
private: System::Void treeView1_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {
}
private: System::Void treeView1_NodeMouseDoubleClick(System::Object^  sender, System::Windows::Forms::TreeNodeMouseClickEventArgs^  e) {

	if (treeView1->SelectedNode != nullptr) {
		if (treeView1->SelectedNode->Text == "�ڵ�3") {
			treeView1->BackColor = Color::Red;
		}
		else if (treeView1->SelectedNode->Text == "���") {
			treeView1->BackColor = Color::White;
		}
		
	}
}
private: System::Void propertyGrid1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void �Ӵ���2ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Form ^f = GetWindowsChild("�Ӵ���2");

	if (f == nullptr) {
		CloseAllMidchild();
		�Ӵ���2^ f = gcnew �Ӵ���2;
		f->MdiParent = this;
		f->Name = "�Ӵ���2";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		f->BringToFront();
	}
}
};
}
