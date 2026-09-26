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
extern int fn_82A21458();
extern int fn_82A21DC0();


int fn_82A23408(int param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  RtlEnterCriticalSection();
  uVar4 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar5 = 0;
    do {
      iVar2 = 0;
      iVar1 = *(int *)(iVar5 + *(int *)(param_1 + 0x1c));
      while (iVar2 = fn_82A21DC0(iVar1,iVar2,param_3,param_4,param_5), iVar2 != -1) {
        iVar3 = (uint)*(byte *)((iVar2 - (uint)*(ushort *)(iVar1 + 0xc)) * 4 +
                                (uint)*(ushort *)(iVar1 + 4) + iVar1) *
                (*(uint *)(iVar1 + 4) & 0xffff) + iVar1;
        iVar6 = iVar3 + 0x14;
        if (((*(uint *)(iVar3 + 0x30) & 0x10) != 0) || (*(byte *)(iVar3 + 0x2d) == param_2)) {
          fn_82A21458(param_1,iVar6);
          goto LAB_82a234dc;
        }
        iVar2 = iVar2 + 1;
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar4 < *(uint *)(param_1 + 0x20));
  }
  iVar6 = 0;
LAB_82a234dc:
  RtlLeaveCriticalSection(param_1);
  return iVar6;
}

