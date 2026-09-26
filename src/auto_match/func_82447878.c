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
extern unsigned int *auStack_3c;
extern unsigned int *auStack_40;
extern unsigned int *auStack_44;
extern unsigned int *auStack_48;
extern unsigned int *auStack_4c;
extern unsigned int *auStack_50;
extern int fn_82261580();
extern int fn_82261660();
extern int fn_82291C30();
extern int fn_822B17A8();
extern int fn_82340AF0();
extern int fn_8242C1B8();
extern int fn_82436190();
extern int fn_82436568();
extern int fn_824365E0();
extern int fn_824395F8();
extern int fn_8243D2D8();
extern int fn_82452CF8();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821CC160;


void fn_82447878(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int *piVar3;
  int iVar4;
  int *piVar5;
  longlong lVar2;
  undefined8 uVar6;
  double dVar7;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  longlong lStack_38;
  
  fn_82452CF8();
  if (param_3 == 0xc) {
    fn_824395F8((double)lbl_821CC160,
                      (ulonglong)*(uint *)(*(int *)param_1[0x10] + 0x174) + 0x1c,7,0);
    iVar4 = fn_8242C1B8(*(undefined4 *)param_1[0x10]);
    fn_82340AF0((ulonglong)*(uint *)(iVar4 + 0x1a0) + 0x194,0xb,1);
    iVar4 = fn_824365E0(param_1);
    if (iVar4 == 0) {
      lVar2 = fn_8242C1B8(*(undefined4 *)param_1[0x10]);
      uVar6 = 0;
    }
    else {
      fn_82436568(param_1,1);
      lVar2 = fn_8242C1B8(*(undefined4 *)param_1[0x10]);
      uVar6 = 0x21;
    }
    fn_82291C30(*(undefined4 *)(*(int *)param_1[0x10] + 0xd4),0x16,uVar6,1,lVar2 + 0x30,1);
    iVar4 = fn_8242C1B8(*(undefined4 *)param_1[0x10]);
    iVar4 = *(int *)(iVar4 + 0x24);
    if (iVar4 == 0) {
      return;
    }
    piVar5 = (int *)(**(code **)(*param_1 + 0x40))(auStack_3c,param_1,0);
    iVar1 = *piVar5;
  }
  else {
    if (param_3 != 0xd) {
      if (param_3 == 0xe) {
        piVar5 = (int *)(**(code **)(*param_1 + 0x40))(auStack_44,param_1,1);
        lStack_38 = (longlong)*piVar5;
        fn_824395F8((double)((float)lStack_38 * lbl_82193AF0),
                          (ulonglong)*(uint *)(*(int *)param_1[0x10] + 0x174) + 0x1c,5,1);
        return;
      }
      if (param_3 != 0xf) {
        return;
      }
      fn_8243D2D8((ulonglong)*(uint *)(*(int *)param_1[0x10] + 0x174) + 8,0xffffffff821b9c2c,0,0);
      piVar5 = (int *)param_1[0x12];
      piVar3 = (int *)(**(code **)(*param_1 + 0x40))(auStack_50,param_1,0);
      if ((*piVar5 < *piVar3) && (*(int *)(param_1[0x10] + 0x148) == 0)) {
        fn_82436190(param_1,1);
      }
      iVar4 = fn_8242C1B8(*(undefined4 *)param_1[0x10]);
      iVar4 = *(int *)(iVar4 + 0x24);
      dVar7 = (double)lbl_82193AF0;
      if (iVar4 != 0) {
        piVar5 = (int *)(**(code **)(*param_1 + 0x40))(auStack_4c,param_1,0);
        lStack_38 = (longlong)*piVar5;
        fn_82261580((double)(float)((double)lStack_38 * dVar7),
                          *(undefined4 *)
                           (*(int *)(*(int *)(*(int *)param_1[0x10] + 0x174) + 0x5c) + 0x1ec),
                          *(undefined4 *)(iVar4 + 0x2c));
      }
      piVar5 = (int *)(**(code **)(*param_1 + 0x40))(auStack_48,param_1,0);
      lStack_38 = (longlong)*piVar5;
      if (lbl_8218E8FC <= (float)((double)lStack_38 * dVar7)) {
        return;
      }
      iVar4 = fn_8242C1B8(*(undefined4 *)param_1[0x10]);
      if (*(int *)(iVar4 + 0x24) == 0) {
        return;
      }
      iVar4 = *(int *)(*(int *)(iVar4 + 0x24) + 0x34);
      if (iVar4 == 0) {
        return;
      }
      fn_822B17A8(iVar4,0x2d,0);
      return;
    }
    iVar4 = fn_8242C1B8(*(undefined4 *)param_1[0x10]);
    fn_82340AF0((ulonglong)*(uint *)(iVar4 + 0x1a0) + 0x194,0xb,1);
    fn_8243D2D8((ulonglong)*(uint *)(*(int *)param_1[0x10] + 0x174) + 8,0xffffffff821b9c2c,0,0);
    lVar2 = fn_8242C1B8(*(undefined4 *)param_1[0x10]);
    fn_82291C30(*(undefined4 *)(*(int *)param_1[0x10] + 0xd4),0x16,0x20,1,lVar2 + 0x30,1);
    iVar4 = fn_8242C1B8(*(undefined4 *)param_1[0x10]);
    iVar4 = *(int *)(iVar4 + 0x24);
    if (iVar4 == 0) {
      return;
    }
    piVar5 = (int *)(**(code **)(*param_1 + 0x40))(auStack_40,param_1,0);
    iVar1 = *piVar5;
  }
  lStack_38 = (longlong)iVar1;
  dVar7 = (double)((float)lStack_38 * lbl_82193AF0);
  fn_8242C1B8(*(undefined4 *)param_1[0x10]);
  fn_82261660(dVar7,*(undefined4 *)
                           (*(int *)(*(int *)(*(int *)param_1[0x10] + 0x174) + 0x5c) + 0x1ec),
                    *(undefined4 *)(iVar4 + 0x2c));
  return;
}

