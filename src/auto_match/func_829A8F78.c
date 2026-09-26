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


undefined8 fn_829A8F78(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (*(uint *)(param_2 + 4) != 0) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(*(int *)(iVar4 + *(int *)(param_2 + 8)) * 4 + *(int *)(param_1 + 0x14));
      if (((*(int *)(param_1 + 0x88) == *(int *)(iVar2 + 4)) &&
          (uVar1 = *(uint *)(iVar2 + 0x50), uVar1 < param_3)) &&
         ((**(uint **)(uVar1 * 4 + *(int *)(param_1 + 0x18)) & 0xfff00000) != 0)) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar3 < *(uint *)(param_2 + 4));
  }
  return 0;
}

