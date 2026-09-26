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
extern int fn_82645740();
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_829CB790();
extern int fn_829CB7D8();
extern int fn_829CFA60();
extern int fn_829D0440();
extern int fn_82A93C88();
extern int fn_82A93E40();
extern int fn_82A93F70();
extern unsigned int lbl_83215054;
extern unsigned int lbl_83217138;
extern unsigned int lbl_83217324;
extern unsigned int lbl_83217328;
extern unsigned int lbl_83217334;


ulonglong fn_829D1718(int param_1,int param_2,longlong param_3,ulonglong param_4,
                       undefined8 param_5)

{
  int iVar1;
  bool bVar2;
  undefined1 *puVar3;
  int iVar5;
  int iVar6;
  undefined8 uVar4;
  ulonglong uVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  
  puVar3 = lbl_83217138;
  uVar7 = 0;
  *(undefined4 *)(lbl_83217138 + 0x38) = 1;
  iVar5 = fn_829CFA60(puVar3);
  iVar6 = fn_829CB7D8(1);
  if ((iVar6 != 0) || (iVar5 != 0)) {
    RtlLeaveCriticalSection(0xffffffff8315c428);
    fn_82645740(lbl_83215054);
    while( true ) {
      RtlEnterCriticalSection(0xffffffff8315c428);
      iVar5 = fn_829CFA60(puVar3);
      uVar4 = KfAcquireSpinLock(0xffffffff8321732c);
      if ((lbl_83217324 != 0) || (bVar2 = false, lbl_83217328 != 0)) {
        bVar2 = true;
      }
      KfReleaseSpinLock(0xffffffff8321732c,uVar4);
      if ((!bVar2) && (iVar5 == 0)) break;
      RtlLeaveCriticalSection(0xffffffff8315c428);
      KeSetEvent(0xffffffff83215034,1,0);
    }
  }
  if (3 < *(uint *)(puVar3 + 0x18)) {
    uVar7 = 0xffffffff83010003;
    goto LAB_829d1abc;
  }
  *puVar3 = 1;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(int *)(puVar3 + 0x14) = param_2;
  piVar8 = (int *)(puVar3 + 0x24);
  *(undefined1 **)(puVar3 + 8) = puVar3 + 8;
  *(undefined1 **)(puVar3 + 0xc) = puVar3 + 8;
  *(undefined1 **)(puVar3 + 0x30) = puVar3 + 0x30;
  *(undefined1 **)(puVar3 + 0x34) = puVar3 + 0x30;
  *(int **)(puVar3 + 0x24) = piVar8;
  *(int **)(puVar3 + 0x28) = piVar8;
  if (((param_4 & 0xffffffff) == 0) ||
     (iVar5 = ObReferenceObjectByHandle(param_4,0,puVar3 + 0x10), -1 < iVar5)) {
LAB_829d1894:
    *(int *)(puVar3 + 0x18) = (int)(param_3 + 3);
    iVar5 = fn_8265C940((param_3 + 3) * 0x78,0x209c0000);
    if (iVar5 == 0) {
      uVar7 = 0xffffffff8007000e;
      goto LAB_829d1a6c;
    }
    fn_8265C990(*(undefined4 *)(puVar3 + 0x1c),0x209c0000);
    *(int *)(puVar3 + 0x1c) = iVar5;
    *(undefined4 *)(puVar3 + 0x20) = 0;
    if ((int)uVar7 < 0) goto LAB_829d1a6c;
    iVar5 = fn_8265C940(*(int *)(puVar3 + 0x18) << 0xe,0xffffffffac9c0000);
    if (iVar5 == 0) {
      uVar7 = 0xffffffff8007000e;
      goto LAB_829d1a6c;
    }
    fn_8265C990(*(undefined4 *)(puVar3 + 0x3c),0xffffffffac9c0000);
    *(int *)(puVar3 + 0x3c) = iVar5;
    fn_82A93E40(0x50,0x3c,*(undefined4 *)(puVar3 + 0x18),1,4,0x1a220058,0,1);
    fn_82A93F70(puVar3 + 0x40,*(undefined4 *)(puVar3 + 0x3c));
    uVar9 = 0;
    if (*(int *)(puVar3 + 0x18) != 0) {
      iVar5 = 0;
      iVar6 = 0;
      do {
        piVar11 = (int *)(iVar6 + *(int *)(puVar3 + 0x1c));
        piVar10 = piVar11 + 0xc;
        piVar11[5] = 7;
        piVar11[6] = param_1;
        piVar11[8] = param_2;
        iVar1 = *(int *)(puVar3 + 0x3c);
        piVar11[0x1a] = uVar9 << 0xd;
        piVar11[0x19] = iVar5 + iVar1;
        fn_82A93C88(0x50,0x3c,1,4,0x1a220058,0,1,0);
        fn_82A93F70(piVar10,piVar11[0x19]);
        piVar11[7] = (int)piVar10;
        piVar11[0x1b] = 0;
        fn_829CB790(piVar10);
        iVar1 = *piVar8;
        piVar11[1] = (int)piVar8;
        uVar9 = uVar9 + 1;
        iVar6 = iVar6 + 0x78;
        iVar5 = iVar5 + 0x4000;
        *piVar11 = iVar1;
        *(int **)(iVar1 + 4) = piVar11;
        *piVar8 = (int)piVar11;
      } while (uVar9 < *(uint *)(puVar3 + 0x18));
    }
    iVar5 = ObOpenObjectByPointer(puVar3,param_5);
    if ((iVar5 < 0) && (uVar7 = RtlNtStatusToDosError(), 0 < (int)uVar7)) {
      uVar7 = uVar7 & 0xffff | 0xffffffff80070000;
    }
    if ((int)uVar7 < 0) goto LAB_829d1a6c;
  }
  else {
    uVar7 = RtlNtStatusToDosError();
    if (0 < (int)uVar7) {
      uVar7 = uVar7 & 0xffff | 0xffffffff80070000;
    }
    if (-1 < (int)uVar7) goto LAB_829d1894;
LAB_829d1a6c:
    fn_829D0440(puVar3,0);
    if ((int)uVar7 < 0) goto LAB_829d1abc;
  }
  sync(0);
  if ((*(uint *)(puVar3 + 0x14) & 0x10000) == 0) {
    KeSetEvent(puVar3,1,0);
    if (*(int *)(puVar3 + 0x10) != 0) {
      KeSetEvent(*(int *)(puVar3 + 0x10),1,0);
    }
  }
LAB_829d1abc:
  *(undefined4 *)(puVar3 + 0x38) = 0;
  lbl_83217334 = 0;
  sync(0);
  return uVar7;
}

