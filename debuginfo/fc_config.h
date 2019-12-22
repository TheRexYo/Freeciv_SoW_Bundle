/* gen_headers/fc_config.h.  Generated from fc_config.h.in by configure.  */
/* gen_headers/fc_config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Enable ai modules */
/* #undef AI_MODULES */

/* Default ai type name */
#define AI_MOD_DEFAULT "classic"

/* classic ai module statically linked */
#define AI_MOD_STATIC_CLASSIC 1

/* stub ai module statically linked */
/* #undef AI_MOD_STATIC_STUB */

/* threaded ai module statically linked */
/* #undef AI_MOD_STATIC_THREADED */

/* Can execute program as root - Amiga */
#define ALWAYS_ROOT 1

/* SDL_Mixer support */
#define AUDIO_SDL 1

/* SDL-1.2 Mixer in use */
#define AUDIO_SDL1_2 1

/* SDL-2 Mixer in use */
/* #undef AUDIO_SDL2 */

/* Bug reporting URL */
#define BUG_URL "https://www.hostedredmine.com/projects/freeciv"

/* this is crosser based build */
/* #undef CROSSER */

/* Version specific subdir for default data path */
#define DATASUBDIR "2.6"

/* Extra debugging support, backward compatibility macro */
/* #undef DEBUG */

/* Connection TCP Port */
#define DEFAULT_SOCK_PORT 5556

/* Emergency version */
/* #undef EMERGENCY_VERSION */

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#define ENABLE_NLS 1

/* Configuration autogenerated */
#define FC_CONFIG_H 1

/* These are the CFLAGS used in compilation */
#define FC_STORE_CFLAGS "-Wno-tautological-compare -Wno-nonnull-compare -Wall -Wpointer-arith -Wcast-align -g -O2"

/* These are the CPPFLAGS used in compilation */
#define FC_STORE_CPPFLAGS "-D_WIN32_WINNT=0x0600 -DBINDIR=\"\\\"${exec_prefix}/bin\\\"\" -DFC_CONF_PATH=\"\\\"etc\\\\\\\\freeciv\\\"\" -DDEFAULT_DATA_PATH=\"\\\".;data;~\\\\\\\\.freeciv\\\\\\\\2.6;${datarootdir}\\\\\\\\freeciv\\\"\" -DDEFAULT_SAVE_PATH=\"\\\".;~\\\\\\\\.freeciv\\\\\\\\saves\\\"\" -DDEFAULT_SCENARIO_PATH=\"\\\".;data\\\\\\\\scenarios;~\\\\\\\\.freeciv\\\\\\\\2.6\\\\\\\\scenarios;~\\\\\\\\.freeciv\\\\\\\\scenarios;${datarootdir}\\\\\\\\freeciv\\\\\\\\scenarios\\\"\""

/* These are the CXXFLAGS used in compilation */
#define FC_STORE_CXXFLAGS "-Wno-tautological-compare -Wno-nonnull-compare -Wall -Wpointer-arith -Wcast-align -g -O2"

/* Version tag to follow */
#define FOLLOWTAG "win32"

/* Max number of AI modules */
#define FREECIV_AI_MOD_LAST (0+1)

/* C11 static assert supported */
#define FREECIV_C11_STATIC_ASSERT 1

/* C++11 static assert supported */
#define FREECIV_CXX11_STATIC_ASSERT 1

/* Extra debugging support */
/* #undef FREECIV_DEBUG */

/* Distribution this freeciv is built for */
#define FREECIV_DISTRIBUTOR ""

/* Native language support enabled */
#define FREECIV_ENABLE_NLS 1

/* inttypes.h available */
#define FREECIV_HAVE_INTTYPES_H 1

/* libbzip2 is available */
#define FREECIV_HAVE_LIBBZ2 1

/* libint.h available */
#define FREECIV_HAVE_LIBINTL_H 1

/* liblzma is available */
#define FREECIV_HAVE_LIBLZMA 1

/* Readline support */
/* #undef FREECIV_HAVE_LIBREADLINE */

/* zlib is available */
#define FREECIV_HAVE_LIBZ 1

/* locale.h available */
#define FREECIV_HAVE_LOCALE_H 1

/* netinet/in.h available */
/* #undef FREECIV_HAVE_NETINET_IN_H */

/* Use pthreads as thread implementation */
/* #undef FREECIV_HAVE_PTHREAD */

/* Have socklen_t type defined */
#define FREECIV_HAVE_SOCKLEN_T 1

/* Have standard compliant stdbool.h */
#define FREECIV_HAVE_STDBOOL_H 1

/* stdint.h available */
#define FREECIV_HAVE_STDINT_H 1

/* sys/select.h available */
/* #undef FREECIV_HAVE_SYS_SELECT_H */

/* sys/socket.h available */
/* #undef FREECIV_HAVE_SYS_SOCKET_H */

/* sys/time.h available */
#define FREECIV_HAVE_SYS_TIME_H 1

/* sys/types.h available */
#define FREECIV_HAVE_SYS_TYPES_H 1

/* Has thread condition variable implementation */
/* #undef FREECIV_HAVE_THREAD_COND */

/* unistd.h available */
#define FREECIV_HAVE_UNISTD_H 1

/* Mingw-specific setting - winsock */
#define FREECIV_HAVE_WINSOCK 1

/* Mingw-specific setting - winsock2 */
#define FREECIV_HAVE_WINSOCK2 1

/* Use Windows threads as thread implementation */
#define FREECIV_HAVE_WINTHREADS 1

/* ws2tcpip.h available */
#define FREECIV_HAVE_WS2TCPIP_H 1

/* Build xml-backend for registry */
/* #undef FREECIV_HAVE_XML_REGISTRY */

/* IPv6 Support built in */
/* #undef FREECIV_IPV6_SUPPORT */

/* jansson network protocol in use */
/* #undef FREECIV_JSON_CONNECTION */

/* Metaserver URL */
#define FREECIV_META_URL "http://meta.freeciv.org/metaserver.php"

/* Windows build */
#define FREECIV_MSWINDOWS 1

/* No freeciv specific debugging support at all */
/* #undef FREECIV_NDEBUG */

/* Month next version will be released */
#define FREECIV_RELEASE_MONTH 7

/* Mingw-specific setting - stdin */
#define FREECIV_SOCKET_ZERO_NOT_STDIN 1

/* Testmatic integration enabled */
/* #undef FREECIV_TESTMATIC */

/* Build freeciv-web version */
/* #undef FREECIV_WEB */

/* Xfuncproto */
/* #undef FUNCPROTO */

/* Get git revision information to version number */
/* #undef GITREV */

/* Define to 1 if you have the <arpa/inet.h> header file. */
/* #undef HAVE_ARPA_INET_H */

/* C11 at_quick_exit() available */
/* #undef HAVE_AT_QUICK_EXIT */

/* Define to 1 if you have the `backtrace' function. */
/* #undef HAVE_BACKTRACE */

/* Define to 1 if you have the `bind' function. */
/* #undef HAVE_BIND */

/* Define to 1 if you have the <bzlib.h> header file. */
#define HAVE_BZLIB_H 1

/* Define to 1 if you have the Mac OS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the Mac OS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Define to 1 if you have the `connect' function. */
/* #undef HAVE_CONNECT */

/* Define to 1 if you have the <cstddef> header file. */
#define HAVE_CSTDDEF 1

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
#define HAVE_DCGETTEXT 1

/* Define to 1 if you have the <direct.h> header file. */
#define HAVE_DIRECT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* Define to 1 if you have the <execinfo.h> header file. */
/* #undef HAVE_EXECINFO_H */

/* Database backend available */
#define HAVE_FCDB 1

/* Have MySQL database backend */
/* #undef HAVE_FCDB_MYSQL */

/* Have postgres database backend */
/* #undef HAVE_FCDB_POSTGRES */

/* Have Sqlite3 database backend */
#define HAVE_FCDB_SQLITE3 1

/* fcntl support */
/* #undef HAVE_FCNTL */

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `fdopen' function. */
/* #undef HAVE_FDOPEN */

/* Define to 1 if you have the `fileno' function. */
#define HAVE_FILENO 1

/* Define to 1 if you have the `flock' function. */
/* #undef HAVE_FLOCK */

/* Define to 1 if you have the `fork' function. */
/* #undef HAVE_FORK */

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
/* #undef HAVE_FSEEKO */

/* Define to 1 if you have the `ftime' function. */
#define HAVE_FTIME 1

/* Define to 1 if you have the `getaddrinfo' function. */
#define HAVE_GETADDRINFO 1

/* Define to 1 if you have the `gethostbyname' function. */
/* #undef HAVE_GETHOSTBYNAME */

/* Define to 1 if you have the `gethostname' function. */
/* #undef HAVE_GETHOSTNAME */

/* Define to 1 if you have the `getline' function. */
#define HAVE_GETLINE 1

/* Define to 1 if you have the `getnameinfo' function. */
/* #undef HAVE_GETNAMEINFO */

/* Define to 1 if you have the `getpwuid' function. */
/* #undef HAVE_GETPWUID */

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define if the gettimeofday function works and is sane. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `gmtime_r' function. */
/* #undef HAVE_GMTIME_R */

/* Define if you have the iconv() function and it works. */
#define HAVE_ICONV 1

/* Define to 1 if you have the `inet_aton' function. */
/* #undef HAVE_INET_ATON */

/* Define to 1 if you have the `inet_ntop' function. */
/* #undef HAVE_INET_NTOP */

/* Define to 1 if you have the `inet_pton' function. */
/* #undef HAVE_INET_PTON */

/* Define to 1 if the system has the type `intptr_t'. */
#define HAVE_INTPTR_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* ioctl support */
/* #undef HAVE_IOCTL */

/* struct ip_mreqn available */
/* #undef HAVE_IP_MREQN */

/* Define if you have <langinfo.h> and nl_langinfo(CODESET). */
/* #undef HAVE_LANGINFO_CODESET */

/* Define if you have <libcharset.h> and locale_charset(). */
#define HAVE_LIBCHARSET 1

/* Define to 1 if you have the <libgen.h> header file. */
#define HAVE_LIBGEN_H 1

/* Define to 1 if you have the <libintl.h> header file. */
#define HAVE_LIBINTL_H 1

/* Define to 1 if you have the `nls' library (-lnls). */
/* #undef HAVE_LIBNLS */

/* Define if the X11 lib is available */
/* #undef HAVE_LIBX11 */

/* Define if the Xaw lib is to be used */
/* #undef HAVE_LIBXAW */

/* Define if the Xaw3d lib is to be used */
/* #undef HAVE_LIBXAW3D */

/* Define if the Xext lib is available */
/* #undef HAVE_LIBXEXT */

/* Define if the Xmu lib is available */
/* #undef HAVE_LIBXMU */

/* Define if the Xpm lib is available */
/* #undef HAVE_LIBXPM */

/* Define if the Xt lib is available */
/* #undef HAVE_LIBXT */

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the `localtime_r' function. */
/* #undef HAVE_LOCALTIME_R */

/* Define to 1 if you have the <lzma.h> header file. */
#define HAVE_LZMA_H 1

/* Have magicwand mapimg toolkit */
#define HAVE_MAPIMG_MAGICKWAND 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Have working mkstemp */
#define HAVE_MKSTEMP 1

/* Define to 1 if you have the <netdb.h> header file. */
/* #undef HAVE_NETDB_H */

/* Define to 1 if you have the <netinet/in.h> header file. */
/* #undef HAVE_NETINET_IN_H */

/* Define to 1 if you have the `pclose' function. */
#define HAVE_PCLOSE 1

/* Define to 1 if you have the `popen' function. */
#define HAVE_POPEN 1

/* Define to 1 if you have the <pwd.h> header file. */
/* #undef HAVE_PWD_H */

/* Define to 1 if you have the `select' function. */
/* #undef HAVE_SELECT */

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* sigpipe support */
/* #undef HAVE_SIGPIPE */

/* Define to 1 if you have the `snooze' function. */
/* #undef HAVE_SNOOZE */

/* Define to 1 if the system has the type `socklen_t'. */
#define HAVE_SOCKLEN_T 1

/* Define to 1 if stdbool.h conforms to C99. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strcasecoll' function. */
/* #undef HAVE_STRCASECOLL */

/* Define to 1 if you have the `strcasestr' function. */
/* #undef HAVE_STRCASESTR */

/* Define to 1 if you have the `strcoll' function and it is properly defined.
   */
#define HAVE_STRCOLL 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the `stricoll' function. */
#define HAVE_STRICOLL 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcat' function. */
/* #undef HAVE_STRLCAT */

/* Define to 1 if you have the `strlcpy' function. */
/* #undef HAVE_STRLCPY */

/* Define to 1 if you have the `strncasecmp' function. */
#define HAVE_STRNCASECMP 1

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
/* #undef HAVE_SYS_IOCTL_H */

/* Define to 1 if you have the <sys/select.h> header file. */
/* #undef HAVE_SYS_SELECT_H */

/* Define to 1 if you have the <sys/signal.h> header file. */
/* #undef HAVE_SYS_SIGNAL_H */

/* Define to 1 if you have the <sys/socket.h> header file. */
/* #undef HAVE_SYS_SOCKET_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/termio.h> header file. */
/* #undef HAVE_SYS_TERMIO_H */

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
/* #undef HAVE_SYS_UIO_H */

/* Define to 1 if you have the <sys/utsname.h> header file. */
/* #undef HAVE_SYS_UTSNAME_H */

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
/* #undef HAVE_SYS_WAIT_H */

/* Define to 1 if you have the <termios.h> header file. */
/* #undef HAVE_TERMIOS_H */

/* Define to 1 if you have the `uname' function. */
/* #undef HAVE_UNAME */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `usleep' function. */
#define HAVE_USLEEP 1

/* Define to 1 if you have the `vfork' function. */
/* #undef HAVE_VFORK */

/* Define to 1 if you have the <vfork.h> header file. */
/* #undef HAVE_VFORK_H */

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define to 1 if you have the `vsnprintf' function. */
/* #undef HAVE_VSNPRINTF */

/* Define to 1 if `fork' works. */
/* #undef HAVE_WORKING_FORK */

/* Define to 1 if `vfork' works. */
/* #undef HAVE_WORKING_VFORK */

/* Define if you have a version of the 'vsnprintf' function that honours the
   size argument and has a proper return value. */
/* #undef HAVE_WORKING_VSNPRINTF */

/* Define to 1 if you have the <ws2tcpip.h> header file. */
#define HAVE_WS2TCPIP_H 1

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define to 1 if you have the `_longjmp' function. */
/* #undef HAVE__LONGJMP */

/* Define to 1 if you have the `_mkdir' function. */
#define HAVE__MKDIR 1

/* Define to 1 if you have the `_setjmp' function. */
#define HAVE__SETJMP 1

/* Define to 1 if you have the `_strcoll' function. */
/* #undef HAVE__STRCOLL */

/* Define to 1 if you have the `_stricoll' function. */
#define HAVE__STRICOLL 1

/* Define as const if the declaration of iconv() needs const. */
#define ICONV_CONST 

/* Beginning of C99 structure initializer */
#define INIT_BRACE_BEGIN {

/* End of C99 structure initializer */
#define INIT_BRACE_END }

/* Is this a beta version */
#define IS_BETA_VERSION 0

/* Is this a devel version */
#define IS_DEVEL_VERSION 0

/* Is this a frozen version */
#define IS_FREEZE_VERSION 0

/* Locale directory (windows) */
#define LOCALEDIR ".\\share\\locale"

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Lua Api checks */
/* #undef LUA_USE_APICHECK */

/* Major version */
#define MAJOR_VERSION 2

/* It's ok to call malloc() for zero bytes */
#define MALLOC_ZERO_OK 1

/* Build freeciv-manual with html formatting */
/* #undef MANUAL_USE_HTML */

/* Minor version */
#define MINOR_VERSION 6

/* Default modpack list URL */
/* #undef MODPACK_LIST_URL */

/* Narrowproto */
/* #undef NARROWPROTO */

/* No debugging support at all */
/* #undef NDEBUG */

/* Network capability string */
#define NETWORK_CAPSTRING_MANDATORY "+Freeciv-2.6-network"

/* Additional optional network capabilities */
#define NETWORK_CAPSTRING_OPTIONAL "techloss_forgiveness"

/* Version number of next release */
#define NEXT_STABLE_VERSION "2.6.0"

/* nonblocking sockets support */
#define NONBLOCKING_SOCKETS 1

/* Name of package */
#define PACKAGE "freeciv"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://www.hostedredmine.com/projects/freeciv"

/* Define to the full name of this package. */
#define PACKAGE_NAME "Freeciv"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Freeciv 2.6.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "freeciv"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.6.1"

/* Patch version */
#define PATCH_VERSION 1

/* Qt debugging support disabled */
#define QT_NO_DEBUG 1

/* sdl2 headers must be included without path */
/* #undef SDL2_PLAIN_INCLUDE */

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Version number of package */
#define VERSION "2.6.1"

/* Version label */
#define VERSION_LABEL ""

/* Version string */
#define VERSION_STRING "2.6.1"

/* Informational URL */
#define WIKI_URL "http://www.freeciv.org/"

/* Mingw-specific setting - native */
#define WIN32_NATIVE 1

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* XPM support */
/* #undef XPM_H_NO_X11 */

/* Define to 1 if the X Window System is missing or not being used. */
#define X_DISPLAY_MISSING 1

/* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
/* #undef _LARGEFILE_SOURCE */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to the type of a signed integer type wide enough to hold a pointer,
   if such a type exists, and if the system does not define it. */
/* #undef intptr_t */

/* Fallback since C++11 nullptr not available */
/* #undef nullptr */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define as `fork' if `vfork' does not work. */
#define vfork fork
