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
extern int fn_82A21DC0();


int fn_82A22B20(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1[1] != 0) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(*param_1 + iVar4);
      iVar2 = fn_82A21DC0(iVar1,0,param_2,param_3,param_4);
      if (iVar2 != -1) {
        return (uint)*(byte *)((iVar2 - (uint)*(ushort *)(iVar1 + 0xc)) * 4 +
                               (uint)*(ushort *)(iVar1 + 4) + iVar1) *
               (*(uint *)(iVar1 + 4) & 0xffff) + iVar1 + 0x14;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar3 < (uint)param_1[1]);
  }
  return 0;
}

