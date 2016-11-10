#include <Fl/Fl.H>                     
#include <Fl/Fl_Window.H>      
#include <FL/Fl_Button.H>   
#include <FL/Fl_Text_Display.H>
#include <FL/Fl_Text_Editor.H>
#include <stdio.h>   
#include "product_manager.h"
#include "sales_associate.h"
#include "customer.h"




void My_Callback1(Fl_Widget*w, void* userdata)
{
	// open login_menu
	win->hide();
	pm();
}
void My_Callback2(Fl_Widget*w, void* userdata)
{
	win->hide();
	cm();

}
void My_Callback3(Fl_Widget*w, void* userdata)
{
	// open login_menu 
	win->hide();
	sa();

}



int main()
{
	win = new Fl_Window{ 600, 400, "Robbie Robot Shop Manager" };
	Fl_Button button1(50, 50, 200, 30, "Product Manager");
	Fl_Button button2(50, 100, 200, 30, "Customer");
	Fl_Button button3(50, 150, 200, 30, "Sales Assosciate");

	button1.callback(My_Callback1);
	button2.callback(My_Callback2);
	button3.callback(My_Callback3);
	win->end();
	win->show();

	return(Fl::run());
}