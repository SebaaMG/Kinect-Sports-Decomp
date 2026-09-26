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
extern int fn_8267C498();


void fn_82698FC8(int *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = (ulonglong)(uint)param_1[1];
  if (uVar2 != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(iVar3 + *param_1);
      if (iVar1 != 0) {
        *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
      }
      if (((-1 < *(int *)(iVar1 + 0x14)) && (*(int *)(iVar1 + 0x14) < 0x4000)) &&
         (param_2 < *(uint *)(iVar1 + 0x18))) {
        *(byte *)(*(int *)(iVar3 + *param_1) + 0x66) =
             *(byte *)(*(int *)(iVar3 + *param_1) + 0x66) | 0x40;
      }
      fn_8267C498();
      uVar2 = uVar2 - 1;
      iVar3 = iVar3 + 4;
    } while (uVar2 != 0);
  }
  return;
}

