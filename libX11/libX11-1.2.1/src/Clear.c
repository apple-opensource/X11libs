/* $Xorg: Clear.c,v 1.4 2001/02/09 02:03:31 xorgcvs Exp $ */
/*

Copyright 1986, 1998  The Open Group

Permission to use, copy, modify, distribute, and sell this software and its
documentation for any purpose is hereby granted without fee, provided that
the above copyright notice appear in all copies and that both that
copyright notice and this permission notice appear in supporting
documentation.

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from The Open Group.

*/
/* $XFree86: xc/lib/X11/Clear.c,v 1.3 2001/01/17 19:41:33 dawes Exp $ */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif
#include "Xlibint.h"

int
XClearWindow(
    register Display *dpy,
    Window w)
{
    register xClearAreaReq *req;

    LockDisplay(dpy);
    GetReq(ClearArea, req);
    req->window = w;
    req->x = req->y = req->width = req->height = 0;
        /* these values mean "clear the entire window" */
    req->exposures = xFalse;
    UnlockDisplay(dpy);
    SyncHandle();
    return 1;
}
