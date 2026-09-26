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


undefined8 fn_82FAE1F0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  uVar5 = 1;
  iVar2 = *(int *)(param_1 + 0xa4) - iVar1 >> 3;
  if (iVar2 != 2) {
    iVar4 = 8;
    iVar3 = iVar1 + 8;
    do {
      if ((uint)(*(int *)(iVar1 + 4) + param_2) < *(uint *)(iVar3 + 4)) {
        *param_3 = *(int *)(uVar5 * 8 + *(int *)(param_1 + 0xa0) + 4) -
                   *(int *)(*(int *)(param_1 + 0xa0) + 4);
        return 1;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 8;
      iVar3 = iVar4 + iVar1;
    } while (uVar5 <= iVar2 - 2U);
  }
  return 2;
}

