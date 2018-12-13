// clang-format off
// Generated file (from: sin.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace sin {
// Generated sin test
#include "generated/examples/sin.example.cpp"
// Generated model constructor
#include "generated/models/sin.model.cpp"
} // namespace sin

TEST_F(GeneratedTests, sin) {
    execute(sin::CreateModel,
            sin::is_ignored,
            sin::get_examples());
}

TEST_F(GeneratedTests, sin_relaxed) {
    execute(sin::CreateModel_relaxed,
            sin::is_ignored_relaxed,
            sin::get_examples_relaxed());
}

TEST_F(GeneratedTests, sin_float16) {
    execute(sin::CreateModel_float16,
            sin::is_ignored_float16,
            sin::get_examples_float16());
}
