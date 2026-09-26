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
extern unsigned int *auStack_74;
extern unsigned int *auStack_78;
extern unsigned int *auStack_7c;
extern unsigned int *auStack_80;
extern int fn_822611B0();
extern int fn_822612A0();
extern int fn_82291C30();
extern int fn_822B17A8();
extern int fn_82340AF0();
extern int fn_8242C1B8();
extern int fn_82436190();
extern int fn_824395F8();
extern int fn_8243D2D8();
extern int fn_82452CF8();
extern int fn_824E17D8();
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_824493B8(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar4;
  int *piVar5;
  longlong lVar3;
  undefined8 uVar6;
  double dVar7;
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  longlong lStack_70;
  
  fn_82452CF8();
  uVar1 = lbl_821CA460;
  if (param_3 == 9) {
    iVar4 = *(int *)(*(int *)param_1[0x10] + 0x174);
    *(undefined4 *)(*(int *)(iVar4 + 100) + 0x7c) = 1;
    *(undefined4 *)(*(int *)(iVar4 + 100) + 0x84) = uVar1;
    goto LAB_824497c4;
  }
  if (param_3 < 0xc) goto LAB_824497c4;
  if (0xd < param_3) {
    if (param_3 == 0xe) {
      piVar5 = (int *)(**(code **)(*param_1 + 0x40))(auStack_78,param_1,1);
      lStack_70 = (longlong)*piVar5;
      fn_824395F8((double)((float)lStack_70 * lbl_82193AF0),
                        (ulonglong)*(uint *)(*(int *)param_1[0x10] + 0x174) + 0x1c,4,1);
    }
    else if (param_3 == 0xf) {
      fn_8243D2D8((ulonglong)*(uint *)(*(int *)param_1[0x10] + 0x174) + 8,0xffffffff821b9d44,0,0);
      if (*(char *)(*(int *)(param_1[0x11] + 0x14) + 0xb0) == '\x06') {
        iVar4 = fn_8242C1B8(*(undefined4 *)param_1[0x10]);
        if ((*(int *)(iVar4 + 0x24) != 0) &&
           (iVar4 = *(int *)(*(int *)(iVar4 + 0x24) + 0x34), iVar4 != 0)) {
          fn_822B17A8(iVar4,0x2b,0);
        }
      }
      iVar4 = param_1[0x12];
      piVar5 = (int *)(**(code **)(*param_1 + 0x40))(auStack_80,param_1,0);
      if ((*(int *)(iVar4 + 0x10) < *piVar5) && (*(int *)(param_1[0x10] + 0x148) == 0)) {
        fn_82436190(param_1,1);
      }
      iVar4 = fn_8242C1B8(*(undefined4 *)param_1[0x10]);
      iVar4 = *(int *)(iVar4 + 0x24);
      if (iVar4 != 0) {
        fn_8242C1B8(*(undefined4 *)param_1[0x10]);
        piVar5 = (int *)(**(code **)(*param_1 + 0x40))(auStack_7c,param_1,0);
        lStack_70 = (longlong)*piVar5;
        fn_822611B0((double)((float)lStack_70 * lbl_82193AF0),
                          *(undefined4 *)
                           (*(int *)(*(int *)(*(int *)param_1[0x10] + 0x174) + 0x5c) + 0x1ec),
                          *(undefined4 *)(iVar4 + 0x2c));
      }
    }
    goto LAB_824497c4;
  }
  fn_824395F8((double)lbl_821CC160,(ulonglong)*(uint *)(*(int *)param_1[0x10] + 0x174) + 0x1c,
                    6,0);
  iVar4 = fn_8242C1B8(*(undefined4 *)param_1[0x10]);
  fn_82340AF0((ulonglong)*(uint *)(iVar4 + 0x1a0) + 0x194,0xf,1);
  if (param_2 == 0xe) {
    fn_8243D2D8((ulonglong)*(uint *)(*(int *)param_1[0x10] + 0x174) + 8,0xffffffff821b9d44,0,0);
    iVar4 = (**(code **)(*param_1 + 0x48))(param_1);
    if (iVar4 == 0) goto LAB_82449680;
    lVar3 = fn_8242C1B8(*(undefined4 *)param_1[0x10]);
    uVar6 = 0x1e;
  }
  else {
LAB_82449680:
    if (param_3 == 0xd) {
      lVar3 = fn_8242C1B8(*(undefined4 *)param_1[0x10]);
      uVar6 = 0x1f;
    }
    else {
      lVar3 = fn_8242C1B8(*(undefined4 *)param_1[0x10]);
      uVar6 = 0x1d;
    }
  }
  fn_82291C30(*(undefined4 *)(*(int *)param_1[0x10] + 0xd4),0x16,uVar6,1,lVar3 + 0x30,1);
  iVar4 = fn_8242C1B8(*(undefined4 *)param_1[0x10]);
  iVar4 = *(int *)(iVar4 + 0x24);
  if (iVar4 != 0) {
    fn_8242C1B8(*(undefined4 *)param_1[0x10]);
    piVar5 = (int *)(**(code **)(*param_1 + 0x40))(auStack_74,param_1,0);
    uVar1 = *(undefined4 *)(iVar4 + 0x2c);
    lStack_70 = (longlong)*piVar5;
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(*(int *)param_1[0x10] + 0x174) + 0x5c) + 0x1ec);
    dVar7 = (double)((float)lStack_70 * lbl_82193AF0);
    uVar6 = fn_824E17D8(iVar4);
    fn_822612A0(uVar6,dVar7,uVar2,uVar1);
  }
LAB_824497c4:
  if (param_2 == 0xe) {
    fn_8243D2D8((ulonglong)*(uint *)(*(int *)param_1[0x10] + 0x174) + 8,0xffffffff821b9d44,0,0);
  }
  return;
}

