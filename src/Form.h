#include <gtkmm-2.4/gtkmm.h>
#include <string.h>

class cForm : public Gtk::Window
{
public:
    cForm();
    virtual ~cForm();

protected:
    void on_train();
    void on_get_answer();
    void on_button_choose_dialog_cliked();

    Gtk::VButtonBox m_button_box;
    Gtk::Button m_button_add_to_train, m_button_folder;

    Gtk::VBox m_left_box, m_center_box;

    Gtk::HBox m_main_box, m_hbox_button_left, m_hbox_wrap_left;

    Gtk::HBox m_hbox_button_center, m_hbox_wrap_center;
    Gtk::Frame m_frame_vertical_center;

    Gtk::Frame m_frame_vertical_left;

    Gtk::Image m_image, m_list;

private:
    double _min_value;
    std::string _min_filename;
    std::string _directory_name;

    void _BuildLeftBox();
    void _BuildCenterBox();
    void _ShowOriginalImg();
    
};