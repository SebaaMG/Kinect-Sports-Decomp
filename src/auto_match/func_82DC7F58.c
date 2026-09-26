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
extern int fn_82DC74A8();
extern unsigned int lbl_82141C14;


undefined4 * fn_82DC7F58(undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  param_1[2] = 0;
  *param_1 = &lbl_82141C14;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[3] = param_1 + 6;
  param_1[5] = 0x80000008;
  param_1[4] = 0;
  param_1[9] = param_2;
  lVar3 = ((ulonglong)*(byte *)(param_4 + 0xd1) + (ulonglong)*(byte *)(param_3 + 0xd1) + 0xd) * 4;
  trapWord(6,lVar3,0);
  iVar1 = fn_82DC74A8(1,(ulonglong)*(byte *)(param_3 + 0xd1),(ulonglong)*(byte *)(param_4 + 0xd1),
                        0x3400 / (uint)lVar3);
  param_1[10] = iVar1;
  *(undefined2 *)(iVar1 + 0x10) = 0;
  *(undefined2 *)(iVar1 + 0x12) = 3;
  puVar2 = (undefined4 *)(iVar1 + 0x10);
  lVar3 = 7;
  do {
    puVar2 = puVar2 + 1;
    *puVar2 = 0;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[0xb] = (uint)*(ushort *)(param_1[10] + 2);
  return param_1;
}

