#pragma once
#include "子窗体1.h"
#include "子窗体2.h"
namespace 有关mdi多窗体的美化研究 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 主窗体 摘要
	/// </summary>
	public ref class 主窗体 : public System::Windows::Forms::Form
	{
	public:
		主窗体(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~主窗体()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  窗体ToolStripMenuItem;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::PropertyGrid^  propertyGrid1;
	private: System::Windows::Forms::TreeView^  treeView1;
	private: System::Windows::Forms::ToolStripMenuItem^  状态栏ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  工具栏ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  属性栏ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  文件视图ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  打开ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  子窗体1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripSplitButton^  toolStripSplitButton1;
	private: System::Windows::Forms::ToolStripProgressBar^  toolStripProgressBar1;
	private: 日志控件::UserControl1^  userControl11;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripMenuItem^  子窗体2ToolStripMenuItem;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(主窗体::typeid));
			System::Windows::Forms::TreeNode^  treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"节点3", 1, 1));
			System::Windows::Forms::TreeNode^  treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"节点2", gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode1 }));
			System::Windows::Forms::TreeNode^  treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"变白"));
			System::Windows::Forms::TreeNode^  treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"节点0", gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode3 }));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->窗体ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->状态栏ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->工具栏ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->属性栏ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->文件视图ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打开ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->子窗体1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->子窗体2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->userControl11 = (gcnew 日志控件::UserControl1());
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
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"新宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->menuStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Visible;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->窗体ToolStripMenuItem,
					this->打开ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->MdiWindowListItem = this->窗体ToolStripMenuItem;
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1203, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 窗体ToolStripMenuItem
			// 
			this->窗体ToolStripMenuItem->Checked = true;
			this->窗体ToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->窗体ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->状态栏ToolStripMenuItem,
					this->工具栏ToolStripMenuItem, this->属性栏ToolStripMenuItem, this->文件视图ToolStripMenuItem
			});
			this->窗体ToolStripMenuItem->Name = L"窗体ToolStripMenuItem";
			this->窗体ToolStripMenuItem->Size = System::Drawing::Size(61, 24);
			this->窗体ToolStripMenuItem->Text = L"窗体";
			// 
			// 状态栏ToolStripMenuItem
			// 
			this->状态栏ToolStripMenuItem->Checked = true;
			this->状态栏ToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->状态栏ToolStripMenuItem->Name = L"状态栏ToolStripMenuItem";
			this->状态栏ToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->状态栏ToolStripMenuItem->Text = L"状态栏";
			this->状态栏ToolStripMenuItem->Click += gcnew System::EventHandler(this, &主窗体::状态栏ToolStripMenuItem_Click);
			// 
			// 工具栏ToolStripMenuItem
			// 
			this->工具栏ToolStripMenuItem->Checked = true;
			this->工具栏ToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->工具栏ToolStripMenuItem->Name = L"工具栏ToolStripMenuItem";
			this->工具栏ToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->工具栏ToolStripMenuItem->Text = L"工具栏";
			this->工具栏ToolStripMenuItem->Click += gcnew System::EventHandler(this, &主窗体::工具栏ToolStripMenuItem_Click);
			// 
			// 属性栏ToolStripMenuItem
			// 
			this->属性栏ToolStripMenuItem->Checked = true;
			this->属性栏ToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->属性栏ToolStripMenuItem->Name = L"属性栏ToolStripMenuItem";
			this->属性栏ToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->属性栏ToolStripMenuItem->Text = L"属性栏";
			this->属性栏ToolStripMenuItem->Click += gcnew System::EventHandler(this, &主窗体::属性栏ToolStripMenuItem_Click);
			// 
			// 文件视图ToolStripMenuItem
			// 
			this->文件视图ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"文件视图ToolStripMenuItem.Image")));
			this->文件视图ToolStripMenuItem->Name = L"文件视图ToolStripMenuItem";
			this->文件视图ToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->文件视图ToolStripMenuItem->Text = L"文件视图";
			// 
			// 打开ToolStripMenuItem
			// 
			this->打开ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->子窗体1ToolStripMenuItem,
					this->子窗体2ToolStripMenuItem
			});
			this->打开ToolStripMenuItem->Name = L"打开ToolStripMenuItem";
			this->打开ToolStripMenuItem->Size = System::Drawing::Size(61, 24);
			this->打开ToolStripMenuItem->Text = L"打开";
			this->打开ToolStripMenuItem->Click += gcnew System::EventHandler(this, &主窗体::打开ToolStripMenuItem_Click);
			// 
			// 子窗体1ToolStripMenuItem
			// 
			this->子窗体1ToolStripMenuItem->Name = L"子窗体1ToolStripMenuItem";
			this->子窗体1ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->子窗体1ToolStripMenuItem->Text = L"子窗体1";
			this->子窗体1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &主窗体::子窗体1ToolStripMenuItem_Click);
			// 
			// 子窗体2ToolStripMenuItem
			// 
			this->子窗体2ToolStripMenuItem->Name = L"子窗体2ToolStripMenuItem";
			this->子窗体2ToolStripMenuItem->Size = System::Drawing::Size(181, 26);
			this->子窗体2ToolStripMenuItem->Text = L"子窗体2";
			this->子窗体2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &主窗体::子窗体2ToolStripMenuItem_Click);
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
			this->toolStripStatusLabel1->Click += gcnew System::EventHandler(this, &主窗体::toolStripStatusLabel1_Click);
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
			this->propertyGrid1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->propertyGrid1->Location = System::Drawing::Point(1063, 55);
			this->propertyGrid1->Name = L"propertyGrid1";
			this->propertyGrid1->Size = System::Drawing::Size(140, 548);
			this->propertyGrid1->TabIndex = 4;
			this->propertyGrid1->Click += gcnew System::EventHandler(this, &主窗体::propertyGrid1_Click);
			// 
			// treeView1
			// 
			this->treeView1->Dock = System::Windows::Forms::DockStyle::Left;
			this->treeView1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->treeView1->ImageIndex = 0;
			this->treeView1->ImageList = this->imageList1;
			this->treeView1->Location = System::Drawing::Point(0, 55);
			this->treeView1->Name = L"treeView1";
			treeNode1->ImageIndex = 1;
			treeNode1->Name = L"节点3";
			treeNode1->SelectedImageIndex = 1;
			treeNode1->Text = L"节点3";
			treeNode2->Name = L"节点2";
			treeNode2->Text = L"节点2";
			treeNode3->Name = L"节点1";
			treeNode3->Text = L"变白";
			treeNode4->Name = L"节点0";
			treeNode4->Text = L"节点0";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) { treeNode2, treeNode4 });
			this->treeView1->SelectedImageIndex = 0;
			this->treeView1->Size = System::Drawing::Size(169, 548);
			this->treeView1->TabIndex = 5;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &主窗体::treeView1_AfterSelect);
			this->treeView1->NodeMouseDoubleClick += gcnew System::Windows::Forms::TreeNodeMouseClickEventHandler(this, &主窗体::treeView1_NodeMouseDoubleClick);
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
			this->timer1->Tick += gcnew System::EventHandler(this, &主窗体::timer1_Tick);
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
			// 主窗体
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
			this->Name = L"主窗体";
			this->Text = L"主窗体";
			this->Load += gcnew System::EventHandler(this, &主窗体::主窗体_Load);
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
	private: System::Void 状态栏ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		状态栏ToolStripMenuItem->Checked = !状态栏ToolStripMenuItem->Checked;
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
				 [DescriptionAttribute("科目1分数")]  //属性的解释
				 property int km1_t {
					 int get() {
						 return km1;
					 }
					 void set(int in) {
						 km2 = in;
					 }
				 }
				 [DescriptionAttribute("科目2分数")]  //属性的解释
				 property int km2_t {
					 int get() {
						 return km2;
					 }
					 void set(int in) {
						 km2 = in;
					 }
				 }
				 [DescriptionAttribute("科目3分数")]  //属性的解释
				 property int km3_t {
					 int get() {
						 return km3;
					 }
					 void set(int in) {
						 km3 = in;
					 }
				 }
				 [DescriptionAttribute("科目4分数")]  //属性的解释
				 property int km4_t {
					 int get() {
						 return km4;
					 }
					 void set(int in) {
						 km4 = in;
					 }
				 }
				 [CategoryAttribute("其他科目"), DescriptionAttribute("科目5分数")]  //属性的解释
				 property int km5_t {
					 int get() {
						 return km5;
					 }
					 void set(int in) {
						 km5 = in;
					 }
				 }
				 [CategoryAttribute("其他科目"), DescriptionAttribute("科目6分数")]  //属性的解释
				 property int km6_t {
					 int get() {
						 return km6;
					 }
					 void set(int in) {
						 km6 = in;
					 }
				 }
				 [CategoryAttribute("其他科目"), DescriptionAttribute("科目7分数")]  //属性的解释
				 property int km7_t {
					 int get() {
						 return km7;
					 }
					 void set(int in) {
						 km7 = in;
					 }
				 }
				 [DescriptionAttribute("科目8分数")]  //属性的解释
				 property int km8_t {
					 int get() {
						 return km8;
					 }
					 void set(int in) {
						 km8 = in;
					 }
				 }
				 [DescriptionAttribute("科目9分数")]  //属性的解释
				 property int km9_t {
					 int get() {
						 return km9;
					 }
					 void set(int in) {
						 km9 = in;
					 }
				 }
			 };






private: System::Void 主窗体_Load(System::Object^  sender, System::EventArgs^  e) {

	class_t^t = gcnew class_t;
	propertyGrid1->SelectedObject = t;
	toolStripStatusLabel1->Text = "当前时间:";
}

		 System::Void A(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("激活了");

			 Form^ f = this->ActiveMdiChild;
			 if (f->Name == "子窗体1") {
				 Form^ ftemp = GetWindowsChild("子窗体2");
				 if(ftemp!= nullptr)
					 ((子窗体2^)ftemp)->Stop();
			 }
		 
		 }

		 void CloseAllMidchild() {
			 for each(Form^ f in MdiChildren)
			 {
				 f->Close();
			 }
		 }

		 /**
		 功能:根据窗体名字获取窗体是不是已经打开
		 
		 */
		 Form^ 主窗体::GetWindowsChild(String ^FormName) {
			 for each(Form^ f in MdiChildren)
			 {
				 if (f->Name == FormName)
				 {
					 return f;
				 }
			 }
			 return nullptr;
		 }

private: System::Void 子窗体1ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Form ^f = GetWindowsChild("子窗体1");

	if (f == nullptr) {
		CloseAllMidchild();
		子窗体1^ f = gcnew 子窗体1;
		f->MdiParent = this;
		f->Name = "子窗体1";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		f->BringToFront();
	}
}
private: System::Void 打开ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void 工具栏ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	工具栏ToolStripMenuItem->Checked = !工具栏ToolStripMenuItem->Checked;
	toolStrip1->Visible = !toolStrip1->Visible;
}
private: System::Void 属性栏ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	属性栏ToolStripMenuItem->Checked = !属性栏ToolStripMenuItem->Checked;
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
		if (treeView1->SelectedNode->Text == "节点3") {
			treeView1->BackColor = Color::Red;
		}
		else if (treeView1->SelectedNode->Text == "变白") {
			treeView1->BackColor = Color::White;
		}
		
	}
}
private: System::Void propertyGrid1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void 子窗体2ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Form ^f = GetWindowsChild("子窗体2");

	if (f == nullptr) {
		CloseAllMidchild();
		子窗体2^ f = gcnew 子窗体2;
		f->MdiParent = this;
		f->Name = "子窗体2";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		f->BringToFront();
	}
}
};
}
