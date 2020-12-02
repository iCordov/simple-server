#include "httplib.h"
#include "home-page.h"
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
    res.set_content("About", "text/plain");
  });

  // Contact page
  svr.Get("/contact", [](const Request& /*req*/, Response& res)
  {
    res.set_content("Contact Us", "text/plain");
  });

  svr.listen("0.0.0.0", 8080);
}
