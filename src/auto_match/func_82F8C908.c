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
extern int fn_82F8C3B8();
extern unsigned int lbl_8216ACBC;


void fn_82F8C908(int param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x16bc);
  if ((int)uVar2 < 0xc) {
    *(uint *)(param_1 + 0x16bc) = uVar2 + 5;
    *(ushort *)(param_1 + 0x16b8) =
         (ushort)((int)param_2 + 0xfeff << (uVar2 & 0x3f)) | *(ushort *)(param_1 + 0x16b8);
  }
  else {
    uVar3 = (int)param_2 - 0x101;
    uVar2 = uVar3 << (uVar2 & 0x3f) | (uint)*(ushort *)(param_1 + 0x16b8);
    *(short *)(param_1 + 0x16b8) = (short)uVar2;
    *(char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = (char)uVar2;
    iVar4 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar4;
    *(undefined1 *)(iVar4 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b8);
    iVar4 = *(int *)(param_1 + 0x16bc);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16bc) = iVar4 + -0xb;
    *(short *)(param_1 + 0x16b8) = (short)((uVar3 & 0xffff) >> (0x10U - iVar4 & 0x3f));
  }
  uVar2 = *(uint *)(param_1 + 0x16bc);
  if ((int)uVar2 < 0xc) {
    *(uint *)(param_1 + 0x16bc) = uVar2 + 5;
    *(ushort *)(param_1 + 0x16b8) =
         (ushort)((int)param_3 + 0xffff << (uVar2 & 0x3f)) | *(ushort *)(param_1 + 0x16b8);
  }
  else {
    uVar3 = (int)param_3 - 1;
    uVar2 = uVar3 << (uVar2 & 0x3f) | (uint)*(ushort *)(param_1 + 0x16b8);
    *(short *)(param_1 + 0x16b8) = (short)uVar2;
    *(char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = (char)uVar2;
    iVar4 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar4;
    *(undefined1 *)(iVar4 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b8);
    iVar4 = *(int *)(param_1 + 0x16bc);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16bc) = iVar4 + -0xb;
    *(short *)(param_1 + 0x16b8) = (short)((uVar3 & 0xffff) >> (0x10U - iVar4 & 0x3f));
  }
  uVar2 = *(uint *)(param_1 + 0x16bc);
  iVar4 = (int)param_4;
  if ((int)uVar2 < 0xd) {
    *(uint *)(param_1 + 0x16bc) = uVar2 + 4;
    uVar6 = (ushort)(iVar4 + 0xfffc << (uVar2 & 0x3f)) | *(ushort *)(param_1 + 0x16b8);
  }
  else {
    uVar2 = iVar4 - 4U << (uVar2 & 0x3f) | (uint)*(ushort *)(param_1 + 0x16b8);
    *(short *)(param_1 + 0x16b8) = (short)uVar2;
    *(char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = (char)uVar2;
    iVar5 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar5;
    *(undefined1 *)(iVar5 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b8);
    iVar5 = *(int *)(param_1 + 0x16bc);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16bc) = iVar5 + -0xc;
    uVar6 = (ushort)((iVar4 - 4U & 0xffff) >> (0x10U - iVar5 & 0x3f));
  }
  *(ushort *)(param_1 + 0x16b8) = uVar6;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      uVar2 = *(uint *)(param_1 + 0x16bc);
      uVar6 = *(ushort *)((uint)(byte)(&lbl_8216ACBC)[iVar5] * 4 + param_1 + 0xa7e);
      if ((int)uVar2 < 0xe) {
        *(uint *)(param_1 + 0x16bc) = uVar2 + 3;
        uVar6 = uVar6 << (uVar2 & 0x3f) | *(ushort *)(param_1 + 0x16b8);
      }
      else {
        uVar2 = (uint)uVar6 << (uVar2 & 0x3f) | (uint)*(ushort *)(param_1 + 0x16b8);
        *(short *)(param_1 + 0x16b8) = (short)uVar2;
        *(char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) = (char)uVar2;
        iVar4 = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x14) = iVar4;
        *(undefined1 *)(iVar4 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b8);
        iVar4 = *(int *)(param_1 + 0x16bc);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x16bc) = iVar4 + -0xd;
        uVar6 = uVar6 >> (0x10U - iVar4 & 0x3f);
      }
      *(ushort *)(param_1 + 0x16b8) = uVar6;
      iVar5 = iVar5 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  lVar1 = fn_82F8C3B8(param_1,param_1 + 0x94,param_2 + -1);
  fn_82F8C3B8(lVar1,lVar1 + 0x988,param_3 + -1);
  return;
}

