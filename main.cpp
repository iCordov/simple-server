#include "./Header/httplib.h"
#include "./Header/home-page.h"
#include "./Header/about-page.h"
using namespace httplib;

int main(void) {
  Server svr;

  // HTTP SERVERS
  // Redirect into /welcome
  svr.Get("/", [=](const Request& /*req*/, Response& res)
  {
    res.set_redirect("/home");
  });

  // Homepage
  svr.Get("/home", [](const Request & /*req*/, Response &res) {
    res.set_content(welcome_page,"text/html");
  });

  // About page
  svr.Get("/about", [](const Request& /*req*/, Response& res)
  {
    res.set_content(about_page, "text/html");
  });

  // Contact page
  svr.Get("/contact", [](const Request& /*req*/, Response& res)
  {
    res.set_content(contact_page, "text/html");
  });

  svr.listen("0.0.0.0", 8080);
}
