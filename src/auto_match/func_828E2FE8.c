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
extern int fn_82230040();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_82027180;
extern unsigned int stack0x0000001c;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack_1c;


void fn_828E2FE8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined **ppuStack_20;
  undefined4 uStack_1c;
  
  uStack00000020 = param_2;
  uStack00000028 = param_3;
  uStack00000030 = param_4;
  puVar1 = (undefined4 *)fn_8265C9E0(0x20);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)&stack0x0000001c;
    *puVar1 = &lbl_82027180;
    puVar2 = puVar1 + 1;
    lVar4 = 6;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    *(undefined4 **)(param_1 + 0x10) = puVar1;
    return;
  }
  uStack_1c = 0;
  ppuStack_20 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_20);
}

