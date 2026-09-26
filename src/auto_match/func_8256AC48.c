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
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82522ED8();
extern int fn_82549610();
extern int fn_82549660();
extern int fn_82569B10();
extern int fn_8256A9F8();
extern int fn_8256BE68();
extern int fn_8259C738();
extern int fn_825B4B38();
extern int fn_82628520();
extern int fn_82837D98();
extern int fn_82837DC0();
extern int fn_828387E0();
extern int fn_8284C7C0();
extern int fn_8284C850();
extern int fn_8284C858();
extern int fn_82A1BB18();
extern int iRam83296d40;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821956B4;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_58;
extern U64 storeWordConditionalIndexed();


void fn_8256AC48(int *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar6;
  int iVar7;
  longlong lVar5;
  uint *puVar8;
  int *piVar9;
  char in_RESERVE;
  byte in_cr0;
  double dVar10;
  int aiStack_60 [2];
  undefined8 uStack_58;
  undefined4 auStack_50 [20];
  
  uVar4 = fn_82569B10();
  fn_82549610(auStack_50,uVar4);
  iVar7 = param_1[1];
  if (*param_1 == 0) {
    if ((*(int *)(iVar7 + 8) != 0) && (param_2 == 0)) {
      *(undefined4 *)(iVar7 + 0x14) = *(undefined4 *)(*(int *)(iVar7 + 8) + 0x10);
      iVar7 = fn_8284C858(*(undefined4 *)(*(int *)(param_1[1] + 8) + 0x14));
      uStack_58 = (longlong)iVar7;
      dVar10 = (double)uStack_58;
      iVar7 = fn_8284C850(*(undefined4 *)(*(int *)(param_1[1] + 8) + 0x14));
      uStack_58 = (longlong)iVar7;
      fVar1 = (float)((double)uStack_58 - dVar10);
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                    (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
        dVar10 = (double)uStack_58;
      }
      if (dVar10 <= (double)lbl_821956B4) {
        *(byte *)(param_1[1] + 0x28) = *(byte *)(param_1[1] + 0x28) | 0x10;
      }
    }
  }
  else {
    piVar9 = param_1 + 1;
    in_cr0 = ((*(byte *)(iVar7 + 0x28) & 0xdf) == 0) << 1;
    *(byte *)(iVar7 + 0x28) = *(byte *)(iVar7 + 0x28) & 0xdf;
    iVar7 = param_1[2];
    if (iVar7 != 0) {
      fn_82549610(aiStack_60,0xffffffff83296d4c);
      if (iRam83296d40 == 0) {
        fn_82549660(0x200000,1);
      }
      iVar6 = iRam83296d40;
      *(int *)(iRam83296d40 + 0x14) = *(int *)(iRam83296d40 + 0x14) + 1;
      fn_825B4B38(iVar6,iVar7);
      fn_82A1BB18();
      fn_8259C738(aiStack_60[0]);
    }
    iVar7 = *piVar9;
    if (*(int *)(iVar7 + 4) == 0) {
      fn_8256A9F8(iVar7);
      iVar7 = *piVar9;
      iVar6 = fn_82569B10();
      iVar6 = *(int *)(iVar6 + 100);
      *(int *)(*(int *)(iVar6 + 0x10) + *(int *)(iVar6 + 0xc) * 4) = iVar7;
      *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + 1;
    }
    else if ((*(int *)(iVar7 + 0xc) == 0) || (param_2 != 0)) {
      *(undefined4 *)(iVar7 + 0xc) = 0;
    }
    else {
      fn_828387E0(*(undefined4 *)(*(int *)(iVar7 + 0xc) + 0x14),
                      *(undefined4 *)(*(int *)(iVar7 + 8) + 0x14));
      iVar6 = *(int *)(*(int *)(iVar7 + 0xc) + 0x14);
      iVar2 = *(int *)(iVar7 + 0x10);
      fn_8284C7C0(iVar6,aiStack_60);
      if (aiStack_60[0] == 4) {
        *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(iVar6 + 0x34);
      }
      else {
        fn_82837D98(iVar6,0,&uStack_58);
        fn_82837DC0(iVar2,0,(((U64)(uStack_58) >> 0) & 0xFFFFFFFF));
      }
      *(byte *)(iVar7 + 0x28) =
           (*(int *)(iVar7 + 8) != *(int *)(iVar7 + 0xc)) << 3 | *(byte *)(iVar7 + 0x28) & 0xf7;
      lVar5 = fn_82569B10();
      fn_82628520(lVar5 + 0x54,piVar9);
      iVar7 = fn_82569B10();
      *(int *)(*piVar9 + 0x1c) = (*(int *)(iVar7 + 0x58) - *(int *)(iVar7 + 0x54) >> 2) + -1;
    }
  }
  param_1[2] = 0;
  fn_82522ED8(param_1);
  uStack_58 = 0;
  fn_8256BE68(&uStack_58,0);
  lVar5 = fn_82569B10();
  do {
    puVar8 = (uint *)(lVar5 + 0x78);
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed((ulonglong)*puVar8 - 1,0,lVar5 + 0x78);
      *puVar8 = uVar3;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if ((((U64)(uStack_58) >> 32) & 0xFFFFFFFF) != 0) {
    fn_822315A0();
  }
  fn_82A1BB18();
  fn_8259C738(auStack_50[0]);
  return;
}

