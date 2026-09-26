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
extern int fn_82CFBB08();


void fn_82CE82A8(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  ulonglong uVar5;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    puVar3 = (undefined4 *)(param_1 + 0x78);
    puVar4 = (ushort *)(param_2 + 0x22);
    do {
      uVar1 = *puVar4;
      uVar5 = (ulonglong)uVar1;
      *puVar4 = 0;
      if (uVar1 != 0) {
        do {
          fn_82CFBB08(*puVar3,1);
          uVar5 = uVar5 - 1;
        } while (0 < (longlong)uVar5);
      }
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x88));
  }
  return;
}

