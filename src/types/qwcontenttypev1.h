// Copyright (C) 2023 rewine <luhongxu@deepin.org>.
// SPDX-License-Identifier: Apache-2.0 OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

#pragma once

#include <qwobject.h>

extern "C" {
#include <wlr/types/wlr_content_type_v1.h>
}

QW_BEGIN_NAMESPACE

class QW_CLASS_OBJECT(content_type_manager_v1)
{
    QW_OBJECT
    Q_OBJECT

public:
    // wl_display *display, uint32_t version
    QW_FUNC_STATIC(content_type_manager_v1, create)

    // wlr_surface *surface
    QW_FUNC_MEMBER(surface, get_content_type_v1)
};

QW_END_NAMESPACE
