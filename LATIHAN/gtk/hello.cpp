#include <gtkmm.h>

class HelloWorld : public Gtk::Window {
public:
    HelloWorld() {
        set_title("Hello GTKmm");
        set_default_size(400, 200);

        // Tambahkan tombol
        button.set_label("Click Me");
        button.signal_clicked().connect(sigc::mem_fun(*this, &HelloWorld::on_button_clicked));
        add(button);

        show_all_children();
    }

protected:
    void on_button_clicked() {
        button.set_label("Hello, World!");
    }

    Gtk::Button button;
};

int main(int argc, char* argv[]) {
    auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");

    HelloWorld window;

    return app->run(window);
}

