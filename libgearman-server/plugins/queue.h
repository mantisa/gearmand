/* - mode: c; c-basic-offset: 2; indent-tabs-mode: nil; -*-
 *  vim:expandtab:shiftwidth=2:tabstop=2:smarttab:
 *
 *  Copyright (C) 2011 Data Differential, http://datadifferential.com/
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#pragma once

#ifdef HAVE_LIBDRIZZLE
#include <libgearman-server/plugins/queue/drizzle/queue.h>
#endif

#ifdef HAVE_LIBMEMCACHED
#include <libgearman-server/plugins/queue/libmemcached/queue.h>
#endif

#ifdef HAVE_LIBSQLITE3
#include <libgearman-server/plugins/queue/sqlite/queue.h>
#endif

#ifdef HAVE_LIBPQ
#include <libgearman-server/plugins/queue/postgres/queue.h>
#endif

#ifdef HAVE_LIBTOKYOCABINET
#include <libgearman-server/plugins/queue/tokyocabinet/queue.h>
#endif
