//  This file is part of Project Name
//  Copyright (C) Michigan State University, 2017.
//  Released under the MIT Software license; see doc/LICENSE

#include "web/web.h"

namespace UI = emp::web;

UI::Document doc("emp_base");

int main()
{

  for(size_t i = 0; i < 10; ++i) {
    emscripten_run_script(
      (
      std::string()
      + "emp.download("
      "'~empty~'"
      ", 'test_"
      + emp::to_string(i)
      + ".png'"
      ", 'img/png');"
      ).c_str()
    );
  }
  doc << "<h1>Multi download test!</h1>";

}
