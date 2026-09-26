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
extern int fn_8251E4D0();
extern int fn_82522ED8();
extern int fn_825D50C0();
extern unsigned int lbl_821C980C;


void fn_825D23D8(undefined4 *param_1)

{
  *param_1 = &lbl_821C980C;
  if (param_1[0x14] != 0) {
                    /* WARNING: Subroutine does not return */
    fn_8251E4D0((ulonglong)*(uint *)(param_1[0xf] + 0xb8) + 8);
  }
  if (param_1[0x1c] != 0) {
    fn_82522ED8();
  }
  fn_825D50C0(param_1);
  return;
}

