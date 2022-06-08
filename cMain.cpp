#include "cMain.h"



cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Minesweeper", wxPoint(30,30), wxSize(800, 600))
{
	m_btn1 = new wxButton(this, wxID_ANY, "Click Me", wxPoint(10, 10), wxSize(150,50) );
	m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 70), wxSize(300, 30));
}

cMain::~cMain()
{

}


