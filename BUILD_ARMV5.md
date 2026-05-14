- Uses Debian Jessie armel sysroot from NAS
- Requires:
  PKG_CONFIG_SYSROOT_DIR
  PKG_CONFIG_LIBDIR

- Meson cross file: armv5.txt
- Must use:
  needs_exe_wrapper = true
  exe_wrapper = /bin/true

- Requires -lpcre in LDFLAGS

- Code patched for OpenSSL 1.0
