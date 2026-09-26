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
extern int fn_82C4DE40();
extern unsigned int iStack00000024;
extern unsigned int stack0x00000024;


void fn_82C4E1D0(longlong *param_1,byte *param_2,int param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  int iStack00000024;
  
  *(int *)((int)param_1 + 0x1c) = param_5;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xfffffff0;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(byte **)(param_1 + 2) = param_2 + param_3 + -1;
  if (param_5 != 0) {
    *(undefined4 *)((int)param_1 + 0x24) = 0;
    iStack00000024 = param_3;
    param_1 = (longlong *)fn_82C4DE40(param_1,param_2,&stack0x00000024);
    param_2 = *(byte **)((int)param_1 + 0xc);
  }
  if (param_2 <= *(byte **)(param_1 + 2)) {
    do {
      iVar2 = *(int *)(param_1 + 1);
      if (0x28 < iVar2) break;
      bVar1 = *param_2;
      *(int *)(param_1 + 1) = iVar2 + 8;
      param_2 = param_2 + 1;
      *param_1 = ((ulonglong)bVar1 << ((longlong)(0x28 - iVar2) & 0x7fU)) + *param_1;
    } while (param_2 <= *(byte **)(param_1 + 2));
  }
  *(byte **)((int)param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 3) = param_4;
  return;
}

