#pragma once

#include <fty/rest/runner.h>

namespace fty {

class Get : public rest::Runner
{
public:
    INIT_REST("rest_communication_GET");

public:
    unsigned run() override;

private:
    // clang-format off
    Permissions m_permissions = {
        { rest::User::Profile::Admin, rest::Access::Read }
    };
    // clang-format on
};

} // namespace fty
