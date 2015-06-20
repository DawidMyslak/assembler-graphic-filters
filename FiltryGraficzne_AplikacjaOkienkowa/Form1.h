#pragma once


namespace FiltryGraficzne_AplikacjaOkienkowa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Label^  label4;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

	private: System::Windows::Forms::Label^  label5;
			 Bitmap^ bmp;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  comboBox3;
			 Bitmap^ bmpDest;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(10, 10);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(250, 90);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ustawienia";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Enabled = false;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"3x3", L"5x5", L"7x7"});
			this->comboBox2->Location = System::Drawing::Point(105, 53);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(130, 21);
			this->comboBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Rozmiar maski:";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"dolnoprzepustowy", L"górnoprzepustowy", L"krawêdziowy", 
				L"konturowy"});
			this->comboBox1->Location = System::Drawing::Point(105, 22);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(130, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Rodzaj filtru:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(10, 110);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(250, 90);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Plik graficzny";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(160, 52);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Wczytaj...";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(85, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBox1->Size = System::Drawing::Size(150, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Œcie¿ka:";
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(9, 310);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Filtruj";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(141, 310);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 40);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Wyczyœæ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->pictureBox1);
			this->groupBox3->Location = System::Drawing::Point(270, 10);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(660, 515);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Obraz";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(10, 20);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(640, 480);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"Pliki bitmap (*.bmp)|*.bmp";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::Color::DimGray;
			this->label4->Location = System::Drawing::Point(7, 512);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Autor: Dawid Myœlak";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Algorytm:";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->comboBox3);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->textBox2);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Location = System::Drawing::Point(10, 210);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(250, 90);
			this->groupBox4->TabIndex = 8;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Pomiary";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 57);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Czas wykonania:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(115, 54);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(120, 20);
			this->textBox2->TabIndex = 8;
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Asembler", L"C++/CLI"});
			this->comboBox3->Location = System::Drawing::Point(115, 22);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 10;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(940, 534);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(956, 572);
			this->MinimumSize = System::Drawing::Size(956, 572);
			this->Name = L"Form1";
			this->Text = L"Filtry graficzne";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					textBox1->Text = openFileDialog1->FileName;
					button2->Enabled = true;
					button3->Enabled = false;
					bmp = gcnew Bitmap(openFileDialog1->FileName);
					bmpDest = gcnew Bitmap(openFileDialog1->FileName);
					pictureBox1->Image = dynamic_cast<Image^>(bmp);
					textBox2->Text = "";
				}
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				if (comboBox1->SelectedIndex != -1 && comboBox2->SelectedIndex != -1 && comboBox3->SelectedIndex != -1) {
					
					Rectangle rect = Rectangle(0, 0, bmp->Width, bmp->Height);
					Rectangle rectDest = Rectangle(0, 0, bmpDest->Width, bmpDest->Height);
					System::Drawing::Imaging::BitmapData^ bmpData = bmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, bmp->PixelFormat);
					System::Drawing::Imaging::BitmapData^ bmpDataDest = bmpDest->LockBits(rectDest, System::Drawing::Imaging::ImageLockMode::ReadWrite, bmpDest->PixelFormat);

					IntPtr ptr = bmpData->Scan0;
					IntPtr ptrDest = bmpDataDest->Scan0;

					int bytes = Math::Abs(bmpData->Stride) * bmp->Height;
					int bytesDest = Math::Abs(bmpDataDest->Stride) * bmpDest->Height;
					array<Byte>^rgbValues = gcnew array<Byte>(bytes);
					array<Byte>^rgbValuesDest = gcnew array<Byte>(bytesDest);

					System::Runtime::InteropServices::Marshal::Copy(ptr, rgbValues, 0, bytes);
					System::Runtime::InteropServices::Marshal::Copy(ptrDest, rgbValuesDest, 0, bytesDest);

					int maskSize = 2 * comboBox2->SelectedIndex + 3;

					short int **maskTemp = new short int * [maskSize];
					for (int i = 0; i < maskSize; i++)
						maskTemp[i] = new short int[maskSize];

					short int *mask = new short int[maskSize * maskSize];

					if (comboBox1->SelectedIndex == 0)
					{
						for (int i = 0; i < maskSize; i++)
							for (int j = 0; j < maskSize; j++)
								maskTemp[i][j] = 1;
					}
					else if (comboBox1->SelectedIndex == 1)
					{
						for (int i = 0; i < maskSize; i++)
							for (int j = 0; j < maskSize; j++)
								maskTemp[i][j] = -1;
						maskTemp[maskSize / 2][maskSize / 2] = 9;
					}
					else if (comboBox1->SelectedIndex == 2)
					{
						for (int i = 0; i < maskSize; i++)
						{
							for (int j = 0; j < maskSize; j++)
							{
								if (i < maskSize / 2 && j == maskSize / 2)
									maskTemp[i][j] = -1;
								else if (i == maskSize / 2 && j == maskSize / 2)
									maskTemp[i][j] = 1;
								else
									maskTemp[i][j] = 0;
							}
						}
					}
					else if (comboBox1->SelectedIndex == 3)
					{
						for (int i = 0; i < maskSize; i++)
						{
							for (int j = 0; j < maskSize; j++)
							{
								if (i < maskSize / 2)
									maskTemp[i][j] = -1;
								else if (i == maskSize / 2 && j == maskSize / 2)
									maskTemp[i][j] = -2;
								else
									maskTemp[i][j] = 1;
							}
						}
					}

					for (int i = 0; i < maskSize; i++)
						for (int j = 0; j < maskSize; j++)
							mask[i * maskSize + j] = maskTemp[i][j];

					System::DateTime start;
					System::DateTime stop;
					TimeSpan Time;

					if (comboBox3->SelectedIndex == 0) {

						// ############# ASM ############# //

						start = System::DateTime::Now;

						FiltryGraficzne(ptr.ToPointer(), rgbValues->Length, bmp->Width, ptrDest.ToPointer(), mask, maskSize);

						stop = System::DateTime::Now;
						Time = (stop - start);

						System::Runtime::InteropServices::Marshal::Copy(ptrDest, rgbValuesDest, 0, bytes);
					}
					else if (comboBox3->SelectedIndex == 1) {

						// ############# C ############# //

						start = System::DateTime::Now;

						int sum = 0;
						for (int i = 0; i < maskSize * maskSize; i++)
							sum += mask[i];
						if (sum == 0) sum = 1;

						int r, g, b, position, maskPosition;
						int center = maskSize / 2;

						for (int counter = 0; counter < rgbValues->Length; counter += 3)
						{
							r = 0;
							g = 0;
							b = 0;

							for (int i = 0; i < maskSize; i++)
							{
								for (int j = 0; j < maskSize; j++)
								{
									position = counter + (i - center) * 3 + (j - center) * bmp->Width * 3;
									maskPosition = i * maskSize + j;
									if (position >= rgbValues->Length)
										position -= rgbValues->Length;
									else if (position < 0)
										position += rgbValues->Length;

									b += mask[maskPosition] * rgbValues[position];
									g += mask[maskPosition] * rgbValues[position + 1];
									r += mask[maskPosition] * rgbValues[position + 2];
								}
							}

							b /= sum;
							g /= sum;
							r /= sum;

							if (b > 255) b = 255;
							else if (b < 0) b = 0;
							if (g > 255) g = 255;
							else if (g < 0) g = 0;
							if (r > 255) r = 255;
							else if (r < 0) r = 0;

							rgbValuesDest[counter] = b;
							rgbValuesDest[counter + 1] = g;
							rgbValuesDest[counter + 2] = r;
						}

						stop = System::DateTime::Now;
						Time = (stop - start);

						System::Runtime::InteropServices::Marshal::Copy(rgbValuesDest, 0, ptrDest, bytesDest);
					}

					for (int i = 0; i < maskSize; i++)
						delete [] maskTemp[i];
					delete [] maskTemp;

					delete [] mask;

					System::Runtime::InteropServices::Marshal::Copy(rgbValues, 0, ptr, bytes);

					bmp->UnlockBits(bmpData);
					bmpDest->UnlockBits(bmpDataDest);

					pictureBox1->Image = dynamic_cast<Image^>(bmpDest);
					button2->Enabled = false;
					button3->Enabled = true;
					textBox2->Text = Time.ToString();
				}
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				pictureBox1->Image = dynamic_cast<Image^>(bmp);
				button2->Enabled = true;
				button3->Enabled = false;
				textBox2->Text = "";
			 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				if (comboBox1->SelectedIndex == 0)
					comboBox2->Enabled = true;
				else if (comboBox1->SelectedIndex == 1)
				{
					comboBox2->Enabled = false;
					comboBox2->SelectedIndex = 0;
				}
				else if (comboBox1->SelectedIndex == 2)
				{
					comboBox2->Enabled = false;
					comboBox2->SelectedIndex = 0;
				}
				else if (comboBox1->SelectedIndex == 3)
				{
					comboBox2->Enabled = false;
					comboBox2->SelectedIndex = 0;
				}
		 }
};
}

