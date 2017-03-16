# See LICENSE file for copyright and license details.

PREFIX = /usr
MANPREFIX = ${PREFIX}/share/man

X11INC = /usr/include/X11
X11LIB = /usr/lib/X11

INCS = -I/usr/include -I${X11INC}
LIBS = -L/usr/lib -lc -L${X11LIB} -lX11

CPPFLAGS = -D_GNU_SOURCE
# -Wno-unused-function for routines not activated by user
CFLAGS = -std=c99 -pedantic -Wno-unused-function -Wall -Wextra -Os ${INCS} ${CPPFLAGS}
LDFLAGS = ${LIBS}

CC = cc
LD = ld
