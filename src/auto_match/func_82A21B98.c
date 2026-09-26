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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82A1DDC0();
extern int fn_82A20370();
extern int fn_82A208A8();
extern int fn_82A20988();
extern int fn_82F691F0();
extern int fn_82F6DF30();


undefined8 fn_82A21B98(int param_1,char *param_2,longlong param_3)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  short sVar8;
  short sVar10;
  undefined1 *puVar9;
  uint uVar11;
  char *pcVar12;
  ulonglong uVar13;
  char *pcStack_50;
  int aiStack_4c [19];
  
  aiStack_4c[0] = (int)param_3;
  uVar11 = 0xffffffff;
  pcStack_50 = param_2;
  fn_82A20370(&pcStack_50,aiStack_4c,0x3a);
  iVar5 = aiStack_4c[0];
  pcVar12 = pcStack_50;
  if ((aiStack_4c[0] != 0) && (*pcStack_50 == '\\')) {
    iVar5 = aiStack_4c[0] + -1;
    pcVar12 = pcStack_50 + 1;
  }
  uVar3 = CONCAT44(iVar5,iVar5);
  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    uVar13 = fn_82F6DF30(cVar1);
    uVar3 = (uVar13 ^ (uVar3 & 0xff) * 0x11) & 0xffffffff;
  }
  uVar2 = *(ushort *)(param_1 + 6);
  lVar6 = 0;
  uVar13 = (ulonglong)uVar2 + param_3 + 1;
  if ((uint)*(ushort *)(param_1 + 8) < (uint)*(ushort *)(param_1 + 0xc)) {
    pbVar4 = (byte *)(((uint)*(ushort *)(param_1 + 8) - (uint)*(ushort *)(param_1 + 0xc)) * 4 +
                      (uint)*(ushort *)(param_1 + 4) + param_1);
    if (*(short *)(pbVar4 + 2) == -1) {
      uVar11 = (uint)*pbVar4;
      uVar13 = uVar13 - uVar2;
    }
  }
  else {
    lVar6 = 0x10;
  }
  sVar8 = (short)*(uint *)(param_1 + 8);
  sVar10 = (short)*(uint *)(param_1 + 0xc);
  uVar7 = *(uint *)(param_1 + 8) & 0xffff;
  if ((((((ulonglong)*(uint *)(param_1 + 0xc) & 0xffff) -
        (longlong)(int)uVar7 * (longlong)(int)(uint)uVar2) - 0x10 & 0xffffffff) <
       (lVar6 * 4 + uVar13 & 0xffffffff)) || (lVar6 != 0)) {
    if (lVar6 == 0) {
      fn_82A208A8(param_1);
    }
    else {
      iVar5 = fn_82A20988();
      if (iVar5 == 0) {
        return 0;
      }
    }
    sVar8 = (short)*(uint *)(param_1 + 8);
    sVar10 = (short)*(uint *)(param_1 + 0xc);
    uVar7 = *(uint *)(param_1 + 8) & 0xffff;
    if (((((ulonglong)*(uint *)(param_1 + 0xc) & 0xffff) -
         (longlong)(int)(uint)*(ushort *)(param_1 + 6) * (longlong)(int)uVar7) - 0x10 & 0xffffffff)
        < (uVar13 & 0xffffffff)) {
      return 0;
    }
  }
  *(short *)(param_1 + 0xe) = (sVar10 - (short)param_3) + -1;
  if (uVar11 == 0xffffffff) {
    *(short *)(param_1 + 10) = sVar8 + 1;
    uVar11 = uVar7;
  }
  puVar9 = (undefined1 *)
           (((uint)*(ushort *)(param_1 + 8) - (uint)*(ushort *)(param_1 + 0xc)) * 4 +
            (uint)*(ushort *)(param_1 + 4) + param_1);
  *puVar9 = (char)uVar11;
  puVar9[1] = (char)param_3 + '\x01';
  *(short *)(puVar9 + 2) = (short)*(undefined4 *)(param_1 + 0xc);
  puVar9 = (undefined1 *)((*(uint *)(param_1 + 0xc) & 0xffff) + param_1);
  *puVar9 = (char)uVar3;
  fn_82A1DDC0(puVar9 + 1,param_2,param_3);
  iVar5 = (*(uint *)(param_1 + 4) & 0xffff) * uVar11 + param_1;
  *(undefined2 *)(iVar5 + 0x12) = 0;
  *(short *)(iVar5 + 0x10) = ((short)iVar5 + 0x10) - (short)param_1;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(iVar5 + 0x14,0,(ulonglong)*(ushort *)(param_1 + 6) - 4);
}

