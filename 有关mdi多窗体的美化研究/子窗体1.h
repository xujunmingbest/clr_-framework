#pragma once

namespace �й�mdi�ര��������о� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// �Ӵ���1 ժҪ
	/// </summary>
	public ref class �Ӵ���1 : public System::Windows::Forms::Form
	{
	public:
		�Ӵ���1(void)
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
		~�Ӵ���1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(�Ӵ���1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(12, 62);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(49, 38);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(12, 121);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(49, 38);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(12, 189);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(49, 38);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// �Ӵ���1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(368, 382);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"�Ӵ���1";
			this->Text = L"�Ӵ���1";
			this->Load += gcnew System::EventHandler(this, &�Ӵ���1::�Ӵ���1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void �Ӵ���1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
