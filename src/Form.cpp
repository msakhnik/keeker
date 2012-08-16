#include "Form.h"
#include <iostream>
#include <gtkmm-2.4/gtkmm.h>
#include <gtkmm-3.0/gtkmm/enums.h>
#include <gdkmm-2.4/gdkmm/pixbuf.h>

using namespace std;
using Glib::ustring;

cForm::cForm() :
m_button_add_to_train("Face object"),
m_button_folder("Start video"),
m_frame_vertical_center("Video"),
m_frame_vertical_left("Controls"),
_min_value(0.0),
_min_filename(""),
_directory_name("")
{
    set_title("Twin");

    add(m_main_box);
    m_main_box.set_size_request(550, 350);
    m_main_box.add(m_left_box);
    m_main_box.add(m_center_box);

    _BuildLeftBox();
    _BuildCenterBox();

    show_all_children();
}

cForm::~cForm()
{
}

void cForm::_BuildLeftBox()
{
    m_left_box.pack_start(m_hbox_wrap_left, Gtk::PACK_SHRINK, 10);
    m_hbox_wrap_left.pack_start(m_frame_vertical_left, Gtk::PACK_SHRINK, 10);

    m_frame_vertical_left.set_size_request(160, 120);
    m_frame_vertical_left.set_tooltip_text("Controls");
    m_hbox_button_left.set_border_width(10);
    m_frame_vertical_left.add(m_hbox_button_left);
    m_button_box.add(m_button_add_to_train);
    m_button_box.add(m_button_folder);
    m_hbox_button_left.pack_start(m_button_box,
                                  Gtk::PACK_EXPAND_WIDGET, 5);
}

void cForm::_BuildCenterBox()
{
    m_center_box.pack_start(m_hbox_wrap_center, Gtk::PACK_SHRINK, 10);
    m_hbox_wrap_center.pack_start(m_frame_vertical_center,
                                    Gtk::PACK_SHRINK, 10);

    m_frame_vertical_center.set_size_request(300, 300);
    m_frame_vertical_center.add(m_image);
}

void cForm::_ShowOriginalImg()
{
    Glib::RefPtr<Gdk::Pixbuf> pixbuf;
    pixbuf = Gdk::Pixbuf::create_from_file(_min_filename, 300, 300);
    m_image.set(pixbuf);
    m_image.show();
}
