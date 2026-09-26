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
extern unsigned int fStack_1ac;
extern unsigned int fStack_1b0;
extern unsigned int fStack_1b8;
extern int fn_8265C940();
extern int fn_82A2AD30();
extern int fn_82F672D8();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821954CC;
extern unsigned int lbl_821957E8;
extern unsigned int lbl_821957F0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831BD8E4;
extern unsigned int uStack00000024;
extern unsigned int uStack_1a4;
extern unsigned int uStack_1a8;
extern unsigned int uStack_1b4;
extern unsigned int uStack_1c0;
extern unsigned int uStack_9d;
extern U64 storeVectorLeftIndexed128();
extern U64 storeVectorRightIndexed128();
extern V16 loadVectorForShiftLeft();
extern V16 vectorPermute();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Removing unreachable block (ram,0x82656950) */
/* WARNING: Removing unreachable block (ram,0x82656790) */
/* WARNING: Removing unreachable block (ram,0x82656948) */
/* WARNING: Removing unreachable block (ram,0x82656ab8) */
/* WARNING: Removing unreachable block (ram,0x82656798) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82656570(longlong param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  undefined8 in_r0;
  int iVar7;
  undefined8 uVar6;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  char *pcVar12;
  ulonglong uVar11;
  uint uVar13;
  uint uVar14;
  undefined1 in_vs32 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uStack00000024;
  undefined8 uStack_1c0;
  float fStack_1b8;
  undefined4 uStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  char acStack_1a0 [259];
  undefined1 uStack_9d;
  
  iVar3 = (int)param_1;
  *(uint *)(iVar3 + 0x5e78) = *(uint *)(iVar3 + 0x5e78) & 0x1fffffff;
  sVar5 = ((ushort)((uint)*(undefined4 *)(param_2 + 0x28) >> 0x1e) & 2) + 1;
  sVar4 = ((ushort)*(uint *)(param_2 + 0x24) & 0x1fff) + sVar5;
  sVar5 = ((ushort)(*(uint *)(param_2 + 0x24) >> 0xd) & 0x1fff) + sVar5;
  *(short *)(iVar3 + 0x5d8c) = sVar4;
  *(short *)(iVar3 + 0x5d8e) = sVar5;
  *(ushort *)(iVar3 + 0x5d90) = sVar4 + 0x1fU & 0xffe0;
  *(ushort *)(iVar3 + 0x5d92) = sVar5 + 0x1fU & 0xffe0;
  uStack_1b4 = lbl_821957F0;
  fStack_1b8 = lbl_821957E8;
  uStack_1a4 = lbl_821954CC;
  uStack_1a8 = lbl_821916FC;
  fStack_1b0 = (float)*(ushort *)(iVar3 + 0x5d90);
  fStack_1ac = lbl_821CA460 / fStack_1b0;
  uStack_1c0 = CONCAT44(fStack_1ac,lbl_821CA460);
  fStack_1b0 = fStack_1b0 * lbl_821957E8;
  storeVectorLeftIndexed128(in_vs32,in_r0,param_1 + 0x5db4);{ V16 _vt0 = loadVectorForShiftLeft(in_r0,0xffffffff8218c990); memcpy(auVar15, &_vt0, 16); }
  storeVectorRightIndexed128(in_vs32,param_1 + 0x5db4,0x10);{ V16 _vt1 = vectorPermute(in_vs32,in_vs45,auVar15); memcpy(auVar15, &_vt1, 16); }
  storeVectorLeftIndexed128(auVar15,in_r0,param_1 + 0x5dc4);{ V16 _vt2 = loadVectorForShiftLeft(in_r0,0xffffffff8218c9a0); memcpy(auVar16, &_vt2, 16); }
  storeVectorRightIndexed128(auVar15,param_1 + 0x5dc4,0x10);{ V16 _vt3 = vectorPermute(auVar15,in_vs45,auVar16); memcpy(auVar15, &_vt3, 16); }{ V16 _vt4 = loadVectorForShiftLeft(in_r0,0xffffffff8218c9b0); memcpy(auVar16, &_vt4, 16); }
  storeVectorLeftIndexed128(auVar15,in_r0,param_1 + 0x5dd4);
  storeVectorRightIndexed128(auVar15,param_1 + 0x5dd4,0x10);
  lVar9 = param_1 + 0x5e44;{ V16 _vt5 = vectorPermute(auVar15,in_vs45,auVar16); memcpy(auVar15, &_vt5, 16); }
  storeVectorLeftIndexed128(auVar15,in_r0,param_1 + 0x5de4);
  storeVectorRightIndexed128(auVar15,param_1 + 0x5de4,0x10);
  storeVectorLeftIndexed128(auVar15,in_r0,param_1 + 0x5df4);
  storeVectorRightIndexed128(auVar15,param_1 + 0x5df4,0x10);
  storeVectorLeftIndexed128(auVar15,in_r0,param_1 + 0x5e04);
  storeVectorRightIndexed128(auVar15,param_1 + 0x5e04,0x10);
  storeVectorLeftIndexed128(auVar15,in_r0,param_1 + 0x5e14);
  storeVectorRightIndexed128(auVar15,param_1 + 0x5e14,0x10);
  storeVectorLeftIndexed128(auVar15,in_r0,param_1 + 0x5e24);
  storeVectorRightIndexed128(auVar15,param_1 + 0x5e24,0x10);
  storeVectorLeftIndexed128(in_vs44,in_r0,param_1 + 0x5e34);
  storeVectorRightIndexed128(in_vs44,param_1 + 0x5e34,0x10);
  storeVectorLeftIndexed128(auVar15,in_r0,lVar9);
  storeVectorRightIndexed128(auVar15,lVar9,0x10);
  *(uint *)(iVar3 + 0x5d94) =
       (uint)*(ushort *)(iVar3 + 0x5d92) * (uint)*(ushort *)(iVar3 + 0x5d90) >> 5 & 0x7ffffe0;
  uVar10 = (ulonglong)lbl_831BD8E4;
  *(int *)(iVar3 + 0x5da0) = *(int *)(iVar3 + 0x5d94) * 0xc;
  uVar11 = ((longlong)*(int *)(iVar3 + 0x5d94) * 0x30 + 0x1ffU & 0xffffffff) >> 9;
  *(short *)(iVar3 + 0x5c2a) = (short)uVar11;
  uVar10 = uVar10 * 0x100000;
  lVar2 = ((uVar11 & 0xffff) + 0xac) * 0x200;
  uStack00000024 = param_3;
  fn_82F672D8(acStack_1a0,param_3,0x104,lVar9);
  uStack_9d = 0;
  pcVar12 = acStack_1a0;
  do {
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  pcVar12 = pcVar12 + (int)(acStack_1a0 + (-2 - (int)acStack_1a0));
  if (acStack_1a0 <= pcVar12) {
    do {
      if (*pcVar12 == '\\') break;
      pcVar12 = pcVar12 + -1;
    } while (acStack_1a0 <= pcVar12);
  }
  pcVar12[1] = '\0';
  iVar7 = fn_82A2AD30(acStack_1a0,&uStack_1c0,0,0);
  if ((iVar7 != 0) && (uStack_1c0 < uVar10 + 0x2800000)) {
    if (uStack_1c0 < 0x2800001) {
      uVar10 = 0;
    }
    else {
      uVar10 = uStack_1c0 - 0x2800000;
    }
  }
  if (uVar10 < lVar2 + 0x800U) {
    uVar6 = 0xffffffff80004005;
  }
  else {
    uVar14 = 0;
    uVar11 = (uVar10 + 0xffefffff) / 0xfff00000;
    *(uint *)(iVar3 + 0x5e70) =
         (uint)((uVar11 & 0x3f) << 0xe) | *(uint *)(iVar3 + 0x5e70) & 0xfff03fff;
    *(int *)(iVar3 + 0x5d9c) = (int)(((uVar11 & 0x3f) - 1 & 0xffffffff) << 0x14) + (int)uVar10;
    do {
      if ((uVar14 == 0) || (iVar7 = 0, *(int *)(iVar3 + 0x5e80) >> 0x1e != 2)) {
        iVar7 = *(int *)(iVar3 + 0x5e84);
      }
      lVar9 = 0;
      iVar8 = MmAllocatePhysicalMemoryEx(2,lVar2,0x404,0,0xffffffffffffffff,0x1000);
      if (iVar8 == 0) {
        iVar8 = fn_8265C940(lVar2,0xffffffffb9800000);
        if (iVar8 == 0) {
          if (iVar7 != 0) {
            lVar9 = 2;
            iVar8 = iVar7;
          }
        }
        else {
          lVar9 = 1;
        }
      }
      *(int *)(uVar14 * 4 + iVar3 + 0x5c1c) = iVar8;
      if (iVar8 == 0) {
        return 0xffffffff8007000e;
      }
      if (uVar14 == 0) {
        uVar13 = (uint)(lVar9 << 0x1e) | *(uint *)(iVar3 + 0x5e80) & 0x3fffffff;
      }
      else {
        uVar13 = (uint)(lVar9 << 0x1c) | *(uint *)(iVar3 + 0x5e80) & 0xcfffffff;
      }
      uVar14 = uVar14 + 1;
      *(uint *)(iVar3 + 0x5e80) = uVar13;
    } while (uVar14 < 2);
    iVar7 = MmAllocatePhysicalMemoryEx(2,0x600,4,0,0xffffffffffffffff,0x1000);
    *(int *)(iVar3 + 0x5e6c) = iVar7;
    if (iVar7 == 0) {
      iVar7 = fn_8265C940(0x600,0x24800000);
      *(int *)(iVar3 + 0x5e6c) = iVar7;
      if (iVar7 == 0) {
        return 0xffffffff8007000e;
      }
      uVar14 = *(uint *)(iVar3 + 0x5e80) | 0x8000000;
    }
    else {
      uVar14 = *(uint *)(iVar3 + 0x5e80) & 0xf7ffffff;
    }
    *(uint *)(iVar3 + 0x5e80) = uVar14;
    uVar6 = 0;
    *(byte *)(iVar3 + 0x5e7c) = *(byte *)(iVar3 + 0x5e7c) | 0x10;
  }
  return uVar6;
}

