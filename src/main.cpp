#include <cstdlib>
#include "Form.h"

using namespace std;

int main(int argc, char** argv)
{
    Gtk::Main kit(argc, argv);
    cForm form;
    
    Gtk::Main::run(form);
    return 0;
}