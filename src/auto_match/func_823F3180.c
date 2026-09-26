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
#define _uStack00000028 ((*(U64*)&uStack00000028))
extern int fn_82230040();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B775C;
extern unsigned int uStack00000028;
extern unsigned int uStack0000002c;
extern unsigned int uStack_1c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int fn_823F3180(int param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 in_stack_00000020;
  undefined4 uStack00000028;
  undefined4 uStack0000002c;
  undefined **ppuStack_20;
  undefined4 uStack_1c;
  
  _uStack00000028 = param_3;
  puVar1 = (undefined4 *)fn_8265C9E0(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &lbl_821B775C;
    puVar1[1] = in_stack_00000020;
    puVar1[2] = param_2;
    puVar1[3] = uStack00000028;
    puVar1[4] = uStack0000002c;
    *(undefined4 **)(param_1 + 0x10) = puVar1;
    return param_1;
  }
  uStack_1c = 0;
  ppuStack_20 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_20);
}

