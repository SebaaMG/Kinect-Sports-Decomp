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
extern int fn_8265CA60();
extern int fn_827F3C20();
extern int fn_827FA1E8();
extern int fn_82F691F0();


void fn_8260B278(int param_1)

{
  undefined8 uVar1;
  int iVar4;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uVar5;
  
  uVar1 = fn_827F3C20();
  if ((*(int *)(*(int *)(param_1 + 0xb4) + 0x110) != 0) && (iVar4 = fn_827FA1E8(), iVar4 != 0)) {
    uVar2 = fn_827FA1E8(uVar1);
    lVar3 = (uVar2 & 0x3fffffff) << 2;
    if (0x3fffffff < (uVar2 & 0xffffffff)) {
      lVar3 = -1;
    }
    uVar5 = fn_8265CA60(lVar3);
    *(undefined4 *)(param_1 + 0xbc) = uVar5;
    uVar2 = fn_827FA1E8(uVar1);
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(*(undefined4 *)(param_1 + 0xbc),0,(uVar2 & 0x3fffffff) << 2);
  }
  *(undefined4 *)(param_1 + 0xbc) = 0;
  return;
}

