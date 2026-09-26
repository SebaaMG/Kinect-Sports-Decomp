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
extern int fn_8265C9E0();
extern unsigned int lbl_821CAD0C;
extern unsigned int lbl_821CC160;


void fn_825C6228(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)fn_8265C9E0(0xfe0);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = param_3;
    puVar2[0x3ed] = 0;
    uVar1 = lbl_821CC160;
    *puVar2 = &lbl_821CAD0C;
    puVar2[0x3f3] = uVar1;
    puVar2[0x3ee] = 0;
    puVar2[0x3ef] = 0;
    puVar2[0x3f0] = 0;
    puVar2[0x3f2] = 0;
    puVar2[0x3f4] = 0xffffffff;
    puVar2[0x3f5] = 0;
    puVar2[0x3f6] = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82522D98(8);
}

