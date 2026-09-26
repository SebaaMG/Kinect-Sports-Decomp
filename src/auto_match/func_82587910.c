typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82522D98();
extern int fn_82522ED8();
extern unsigned int lbl_821BF4BC;
extern unsigned int lbl_831C0BB4;
extern unsigned int lbl_831C0BC0;
extern unsigned int lbl_831C0BC4;
extern unsigned int lbl_831C0BCC;
extern unsigned int lbl_831C0BD0;


void fn_82587910(void)

{
  longlong lVar1;
  int *piVar2;
  ulonglong uVar3;
  
  if (lbl_831C0BCC != 0) {
    fn_82522ED8();
    lbl_831C0BCC = 0;
    lbl_831C0BD0 = 0;
  }
  (&lbl_831C0BC4)[lbl_831C0BC0] = &lbl_821BF4BC;
  lVar1 = (ulonglong)lbl_831C0BC0 + 1;
  uVar3 = (ulonglong)lbl_831C0BB4;
  lbl_831C0BC0 = (uint)lVar1;
  if (lVar1 != 0) {
    piVar2 = (int *)&lbl_831C0BC0;
    do {
      piVar2 = piVar2 + 1;
      uVar3 = *(uint *)(*piVar2 + 4) + uVar3;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  fn_82522D98(uVar3 * 0xc);
}

