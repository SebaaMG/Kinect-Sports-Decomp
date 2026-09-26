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


ulonglong fn_8245D150(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar5 = 0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x10);
  iVar1 = -1;
  uVar2 = uVar4;
  if (uVar4 != 0) {
    iVar3 = 0;
    do {
      iVar6 = iVar3 + *(int *)(param_1 + 4);
      if ((*(int *)(iVar6 + 0xc) != 0) && (*(int *)(iVar6 + 0x18) == 0)) {
        if (iVar1 < *(int *)(iVar6 + 8)) {
          uVar2 = uVar5;
          iVar1 = *(int *)(iVar6 + 8);
        }
      }
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 0x20;
    } while ((uVar5 & 0xffffffff) < uVar4);
  }
  if ((uVar2 & 0xffffffff) < uVar4) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)((int)((uVar2 & 0xffffffff) << 5) + *(int *)(param_1 + 4));
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)((int)((uVar2 & 0xffffffff) << 5) + *(int *)(param_1 + 4) + 4);
    }
  }
  return uVar2;
}

