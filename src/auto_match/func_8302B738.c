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


void fn_8302B738(int param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = (ulonglong)param_2 * 0x8421085 >> 0x20;
  uVar2 = ((param_2 - uVar2 & 0xffffffff) >> 1) + uVar2 >> 4;
  iVar3 = (int)(((ulonglong)param_2 - ((uVar2 & 0x7ffffff) * 0x20 - uVar2) & 0xffffffff) << 2);
  iVar1 = *(int *)(iVar3 + param_1);
  iVar5 = 0;
  if (iVar1 == 0) {
    return;
  }
  do {
    iVar4 = iVar1;
    if (*(uint *)(iVar4 + 4) == param_2) {
      if (iVar5 != 0) {
        *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar4 + 8);
        *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
        return;
      }
      *(undefined4 *)(iVar3 + param_1) = *(undefined4 *)(iVar4 + 8);
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
      return;
    }
    iVar1 = *(int *)(iVar4 + 8);
    iVar5 = iVar4;
  } while (*(int *)(iVar4 + 8) != 0);
  return;
}

