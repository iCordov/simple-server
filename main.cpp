#include "httplib.h"

using namespace httplib;

int main(void) {
  Server svr;

  // HTTP SERVERS
  // Redirect into /welcome
  svr.Get("/", [=](const Request& /*req*/, Response& res)
  {
    res.set_redirect("/welcome");
  });

  // Homepage
  svr.Get("/welcome", [](const Request & /*req*/, Response &res) {
    res.set_content("Welcome", "text/plain");
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

  // Products page
  svr.Get("/products", [](const Request& /*req*/, Response& res)
  {
    res.set_content("Products", "text/plain");
  });
  svr.listen("0.0.0.0", 8080);
}
