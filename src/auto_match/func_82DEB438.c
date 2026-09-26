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
extern unsigned int *auStack_464;
extern unsigned int *auStack_4f0;
extern unsigned int *auStack_550;
extern unsigned int *auStack_55c;
extern unsigned int *auStack_55f;
extern int fn_825BF828();
extern int fn_82CE3F80();
extern int fn_82CE3FE8();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CEAAA0();
extern int fn_82D81000();
extern int fn_82D89248();
extern int fn_82D94360();
extern int fn_82D94918();
extern int fn_82D94B58();
extern int fn_82D94BD8();
extern int fn_82DEACE8();
extern unsigned int iStack_46c;
extern unsigned int iStack_544;
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82131F88;
extern unsigned int uStack_468;
extern unsigned int uStack_4f4;
extern unsigned int uStack_4f8;
extern unsigned int uStack_500;
extern unsigned int uStack_548;


void fn_82DEB438(int param_1,short *param_2)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  char cStack_560;
  undefined1 auStack_55f [3];
  uint auStack_55c [3];
  undefined1 auStack_550 [8];
  undefined4 uStack_548;
  int iStack_544;
  uint uStack_500;
  undefined1 *puStack_4fc;
  uint uStack_4f8;
  uint uStack_4f4;
  undefined1 auStack_4f0 [128];
  undefined1 *puStack_470;
  int iStack_46c;
  uint uStack_468;
  undefined1 auStack_464 [1124];
  
  fn_82D94B58(auStack_550);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  RtlEnterCriticalSection(uVar3);
  cStack_560 = '\0';
  iVar6 = fn_82DEACE8((ulonglong)*(uint *)(param_2 + 2) - 0x44,*(undefined4 *)(param_2 + 4),
                        &cStack_560,auStack_55c,auStack_55f);
  if (iVar6 == 0) {
    RtlLeaveCriticalSection(uVar3);
    fn_82D94BD8(auStack_550);
  }
  else {
    iStack_46c = 0;
    puStack_470 = auStack_464;
    puStack_4fc = auStack_4f0;
    uStack_468 = 0x80000100;
    uVar4 = *(uint *)(iVar6 + 0x10);
    uVar5 = *(uint *)(*(int *)(param_2 + 2) + 0x18) ^ *(uint *)(*(int *)(param_2 + 2) + 0x14) ^
            uVar4;
    uStack_4f8 = 0;
    uStack_4f4 = 0x80000004;
    uStack_500 = uVar4;
    iVar7 = fn_82CE5410();
    if (uStack_4f8 == (uStack_4f4 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(undefined4 *)(iVar7 + 0x10),&puStack_4fc,0x20);
    }
    iVar7 = uStack_4f8 * 0x20;
    uStack_4f8 = uStack_4f8 + 1;
    puVar9 = (uint *)(puStack_4fc + iVar7);
    *puVar9 = uVar5;
    puVar9[1] = auStack_55c[0];
    if (*param_2 == 0) {
      uVar10 = *(uint *)(*(int *)(param_2 + 2) + -8);
      bVar2 = *(byte *)(uVar10 + 10);
      trapWord(6,(ulonglong)bVar2,0);
      uVar8 = (((ulonglong)*(uint *)(param_2 + 4) + (ulonglong)*(ushort *)(uVar10 + 6) * -0x20) -
              (ulonglong)uVar10) - 0x30;
      uVar10 = ((int)uVar8 / (int)(uint)bVar2) * 0x20 + uVar10 + 0x30;
      trapWord(5,(ulonglong)bVar2 &
                 ~(((uVar8 & 0x7fffffff) << 1 | (uVar8 & 0xffffffff) >> 0x1f) - 1),0xffff);
    }
    else {
      uVar10 = *(uint *)(param_2 + 6);
    }
    puVar9[5] = uVar10;
    uVar10 = *(uint *)(param_2 + 4);
    puVar9[6] = uVar10;
    puVar9[3] = *(uint *)(&lbl_82131F88 + (uint)*(byte *)(uVar10 + 0xe) * 4);
    uVar10 = lbl_8200133C;
    if (uVar4 == *(uint *)(*(int *)(param_2 + 2) + 0x14)) {
      uVar10 = lbl_82002AE0;
    }
    puVar9[4] = uVar10;
    *(undefined1 *)(puVar9 + 2) = 1;
    iVar7 = (**(code **)(**(int **)(param_1 + 0x20) + 4))
                      (*(int **)(param_1 + 0x20),&uStack_500,&puStack_470,auStack_550);
    if (iVar7 == 1) {
      fn_825BF828(&uStack_500);
      iVar6 = fn_82CE5410();
      iStack_46c = 0;
      if ((uStack_468 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar6 + 0x10) + 0x10))
                  (*(int **)(iVar6 + 0x10),puStack_470,uStack_468 & 0x3fffffff,4);
      }
      puStack_470 = (undefined1 *)0x0;
      uStack_468 = 0x80000000;
      RtlLeaveCriticalSection(uVar3);
      fn_82D94BD8(auStack_550);
    }
    else {
      bVar1 = iStack_46c != 0;
      iVar7 = 0;
      if (0 < iStack_46c) {
        iVar11 = 0;
        do {
          fn_82CEAAA0(iVar6 + 0x1c,*(undefined4 *)(puStack_470 + iVar11));
          iVar7 = iVar7 + 1;
          iVar11 = iVar11 + 4;
        } while (iVar7 < iStack_46c);
      }
      if (cStack_560 != '\0') {
        *(undefined1 *)(iVar6 + 0x14) = 0xff;
      }
      fn_825BF828(&uStack_500);
      iVar6 = fn_82CE5410();
      iStack_46c = 0;
      if ((uStack_468 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar6 + 0x10) + 0x10))
                  (*(int **)(iVar6 + 0x10),puStack_470,uStack_468 & 0x3fffffff,4);
      }
      puStack_470 = (undefined1 *)0x0;
      uStack_468 = 0x80000000;
      RtlLeaveCriticalSection(uVar3);
      if (*(char *)(uVar4 + 0xe8) == '\x05') {
        uVar4 = uVar5;
      }
      fn_82D89248(*(undefined4 *)(param_1 + 0x18),auStack_550);
      if (bVar1) {
        fn_82CE3F80();
        fn_82D94918(auStack_550,uVar4);
        fn_82CE3FE8();
      }
      if (iStack_544 != 0) {
        fn_82D81000(*(undefined4 *)(param_1 + 0x18),uStack_548,iStack_544,4);
        fn_82CE3F80();
        fn_82D94360(auStack_550);
        fn_82CE3FE8();
      }
      fn_82D94BD8(auStack_550);
    }
  }
  return;
}

