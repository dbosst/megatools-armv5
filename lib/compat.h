#ifndef COMPAT_H
#define COMPAT_H

#include <glib.h>
#include <string.h>

/*
 * GLib compatibility for older systems (e.g. Debian 10 / Synology DSM)
 * Missing in older GLib: g_memdup2
 */
#ifndef g_memdup2
static inline gpointer g_memdup2(gconstpointer mem, gsize byte_size)
{
    if (!mem)
        return NULL;

    gpointer copy = g_malloc(byte_size);
    memcpy(copy, mem, byte_size);
    return copy;
}
#endif

#endif /* COMPAT_H */
