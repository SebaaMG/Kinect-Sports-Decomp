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


void fn_82D8EFF8(undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = 0;
  if (0 < param_2[1]) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(*param_2 + iVar5);
      iVar3 = *(int *)(*(int *)*param_1 + iVar5) * 4;
      *(undefined4 *)(*param_3 + iVar3) = 1;
      uVar1 = *(ushort *)(iVar2 + 0xb0);
      uVar6 = 1;
      if (uVar1 != 0) {
        uVar6 = (uint)uVar1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      *(uint *)(iVar3 + *param_4) = *(int *)(iVar3 + *param_4) + uVar6;
    } while (iVar4 < param_2[1]);
  }
  return;
}

