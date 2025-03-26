#include <gtkmm.h>

class Frame : public Gtk::Window
{
public:
  Frame();
};

Frame::Frame()
{
  set_title("Eng-Eletric-IN");
  set_default_size(800, 600);
}
                              
int main(int argc, char* argv[])
{
  auto app = Gtk::Application::create("org.gtkmm.examples.base");

  return app->make_window_and_run<Frame>(argc, argv);
}