#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Diagnostics;


namespace coremark_lib {

	/// <summary>
	/// coremark_lib ���K�n
	/// </summary>
	public ref class coremark_lib :  public System::ComponentModel::Component
	{
	public:
		coremark_lib(void)
		{
			InitializeComponent();
			//
			//TODO:  �b���[�J�غc�禡�{���X
			//
		}
		coremark_lib(System::ComponentModel::IContainer ^container)
		{
			/// <summary>
			/// Windows.Forms ���O�զX�]�p�u��䴩�һݪ��{���X
			/// </summary>

			container->Add(this);
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
		/// </summary>
		~coremark_lib()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// �]�p�u��һݪ��ܼơC
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边�ק�
		/// �o�Ӥ�k�����e�C
		/// </summary>
		void InitializeComponent(void)
		{
			components = gcnew System::ComponentModel::Container();
		}
#pragma endregion
	public:
		double DoWork(void);
	};
}
