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


undefined8 fn_82ABCEC8(int param_1,int param_2,uint param_3,uint param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      iVar3 = ((param_4 >> 5) + 4) * 4;
      uVar1 = 1 << (param_4 & 0x1f);
      uVar4 = *(uint *)(iVar3 + param_1) & ~uVar1;
      iVar2 = ((param_4 >> 5) + 0xec) * 4;
      *(uint *)(iVar3 + param_1) = uVar4;
      *(uint *)(iVar3 + param_1) = (uint)(*param_5 != 0) << (param_4 & 0x1f) | uVar4;
      *(uint *)(iVar2 + param_1) = *(uint *)(iVar2 + param_1) | uVar1;
    }
    else if (param_3 != 1) {
      if (2 < param_3) {
        return 0xffffffff80004005;
      }
      iVar2 = ((param_4 >> 5) + 0xf4) * 4;
      *(int *)((param_4 + 0xc) * 4 + param_1) = *param_5;
      *(uint *)(iVar2 + param_1) = 1 << (param_4 & 0x1f) | *(uint *)(iVar2 + param_1);
    }
  }
  return 0;
}

