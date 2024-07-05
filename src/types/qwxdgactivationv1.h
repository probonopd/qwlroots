// Copyright (C) 2023 Dingyuan Zhang <zhangdingyuan@uniontech.com>.
// SPDX-License-Identifier: Apache-2.0 OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

#pragma once

#include <qwobject.h>

extern "C" {
#include <wlr/types/wlr_xdg_activation_v1.h>
}

QW_BEGIN_NAMESPACE
class QW_CLASS_OBJECT(xdg_activation_token_v1)
{
    QW_OBJECT
    Q_OBJECT

public:
    QW_FUNC_STATIC(xdg_activation_token_v1, create)

    QW_FUNC_MEMBER(xdg_activation_token_v1, get_name)

protected:
    QW_FUNC_MEMBER(xdg_activation_token_v1, destroy)
};

class QW_CLASS_OBJECT(xdg_activation_v1)
{
    QW_OBJECT
    Q_OBJECT

    QW_SIGNAL(request_activate, wlr_xdg_activation_v1_request_activate_event*)
    QW_SIGNAL(new_token, wlr_xdg_activation_token_v1*)

public:
    QW_FUNC_STATIC(xdg_activation_v1, create)

    QW_FUNC_MEMBER(xdg_activation_v1, find_token)
    QW_FUNC_MEMBER(xdg_activation_v1, add_token)
};

QW_END_NAMESPACE
