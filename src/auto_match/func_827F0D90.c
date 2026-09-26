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
extern int fn_827F0898();


void fn_827F0D90(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ushort uVar7;
  
  iVar1 = (int)param_1;
  uVar6 = (ulonglong)*(ushort *)(iVar1 + 0xe8) - 1;
  if (-1 < (longlong)uVar6) {
    lVar5 = ((ulonglong)*(ushort *)(iVar1 + 0xe8) + 0x27) * 4 + param_1;
    do {
      if (*(int *)lVar5 == param_2) {
        uVar6 = uVar6 & 0xffff;
        goto LAB_827f0ddc;
      }
      uVar6 = uVar6 - 1;
      lVar5 = lVar5 + -4;
    } while (-1 < (longlong)uVar6);
  }
  uVar6 = 0xffff;
LAB_827f0ddc:
  if (uVar6 != 0xffff) {
    if (((*(ushort *)(iVar1 + 0xea) >> 1 & 1) != 0) &&
       (*(ushort *)(iVar1 + 0xea) = *(ushort *)(iVar1 + 0xea) & 0xfffe,
       *(uint *)(iVar1 + 0xf0) == uVar6)) {
      *(ushort *)(iVar1 + 0xea) = *(ushort *)(iVar1 + 0xea) & 0xfffd;
    }
    fn_827F0898(param_1);
    uVar7 = *(short *)(iVar1 + 0xe8) - 1;
    *(ushort *)(iVar1 + 0xe8) = uVar7;
    if (uVar6 < uVar7) {
      uVar4 = (uint)uVar6 & 0xf;
      uVar2 = (uint)(uVar6 >> 3) & 0x1ffffffe;
      *(undefined4 *)(((uint)uVar6 + 0x28) * 4 + iVar1) =
           *(undefined4 *)((uVar7 + 0x28) * 4 + iVar1);
      uVar3 = (uint)(uVar6 >> 3) & 0x1ffffffe;
      *(ushort *)(uVar2 + iVar1 + 0xec) =
           (ushort)((*(ushort *)(((*(ushort *)(iVar1 + 0xe8) >> 4) + 0x76) * 2 + iVar1) >>
                     (*(ushort *)(iVar1 + 0xe8) & 0xf) & 1) << uVar4) |
           *(ushort *)(uVar2 + iVar1 + 0xec) & ~(ushort)(1 << uVar4);
      *(ushort *)(uVar3 + iVar1 + 0xee) =
           (ushort)((*(ushort *)(((*(ushort *)(iVar1 + 0xe8) >> 4) + 0x77) * 2 + iVar1) >>
                     (*(ushort *)(iVar1 + 0xe8) & 0xf) & 1) << uVar4) |
           *(ushort *)(uVar3 + iVar1 + 0xee) & ~(ushort)(1 << uVar4);
    }
  }
  return;
}

