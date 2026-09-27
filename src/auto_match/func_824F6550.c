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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_824FA188();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82520158();
extern int fn_8253B7C0();
extern int fn_82559EF0();
extern int fn_82574340();
extern int fn_8257E880();
extern int fn_8257E950();
extern int fn_825920F8();
extern int fn_82592238();
extern int fn_8262FEC8();
extern int fn_82631488();
extern int fn_82645838();
extern int fn_82F65FE0();
extern unsigned int lbl_8218E1AC;
extern unsigned int lbl_8219174C;
extern unsigned int lbl_8219248C;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C3120;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_824F6550(int param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined8 in_r0;
  ulonglong uVar4;
  int iVar6;
  undefined8 uVar5;
  undefined4 uVar7;
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  undefined1 in_vr0 [16];
  undefined1 auVar11 [16];
  undefined1 in_vr1 [16];
  undefined1 in_vr12 [16];
  undefined1 in_vr13 [16];
  float fStack_70;
  float fStack_6c;
  float fStack_60;
  float fStack_5c;

  uVar4 = ZEXT48(&stack0x00000000);
  if (*param_2 == 0x45) {
    iVar2 = *(int *)(param_1 + 0x30);
    iVar6 = (**(code **)(**(int **)(param_1 + 0x200) + 0x1c))();
    if ((iVar6 != 0) && (piVar3 = *(int **)(*(int *)(iVar6 + 0x10) + 0x10), piVar3 != (int *)0x0)) {
      piVar10 = piVar3 + 1;
      piVar8 = piVar10 + *piVar3 * 0x11;
      for (; piVar10 < piVar8; piVar10 = piVar10 + 0x11) {
        if (*(short *)piVar10 == 0) goto LAB_824f65e8;
      }
      piVar10 = (int *)0x0;
LAB_824f65e8:
      iVar6 = param_1 + 700;
      lVar9 = 2;
      do {
        uVar5 = fn_8253B7C0();
        fn_82574340(piVar10,uVar5);
        fStack_60 = -fStack_70;
        fStack_5c = -fStack_6c;
        memcpy((void *)(in_vr1), (const void *)((int)&fStack_60 + (int)in_r0 & 0xfffffff0), 16);
        fn_82559EF0(iVar6,iVar6 + -4);
        sVar1 = *(short *)piVar10;
        do {
          piVar10 = piVar10 + 0x11;
          if (piVar3 + *piVar3 * 0x11 + 1 <= piVar10) {
            piVar10 = (int *)0x0;
            break;
          }
        } while (*(short *)piVar10 != sVar1);
        lVar9 = lVar9 + -1;
        iVar6 = iVar6 + 0x10;
      } while (lVar9 != 0);
      fn_82F65FE0(param_1 + 0x2b8,2,0x10,0xffffffff824f67f8);
      if (((lbl_831C3120 == 3) || (lbl_831C3120 == 4)) || (lbl_831C3120 == 5)) {
        fn_824FA188(param_1,0);
      }
    }
    fn_82520158(0xffffffff821c2008,uVar4 - 0x80,0);
    if (iVar2 + 0x9c0 != 0) {
      if ((*(int *)(iVar2 + 0x9e0) == 0) || (*(int *)(iVar2 + 0x9e4) == 0)) {
        fn_825920F8(iVar2 + 0x9c0);
      }
      if (*(int *)(iVar2 + 0x9e4) != 0) {
        fn_82645838();
        fn_8262FEC8(*(undefined4 *)(iVar2 + 0x9e4));
      }
      uVar5 = fn_8251F720(uVar4 - 0x80,0);
      uVar7 = fn_82631488();
      *(undefined4 *)(iVar2 + 0x9e4) = uVar7;
      fn_8251FA58(uVar5);
    }
    if (iVar2 != -0x9c0) {
      *(undefined4 *)(iVar2 + 0xa00) = 8;
      *(undefined4 *)(iVar2 + 0x9fc) = lbl_821CC160;
      *(undefined1 *)(iVar2 + 0x9f8) = 1;
    }
    fn_8257E880((double)lbl_8219174C,iVar2);
    loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
    loadVectorLeftIndexed128(0xffffffff831c3100,0x14);
    loadVectorLeftIndexed128(in_r0,uVar4 - 0x80);
    vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr0,4,3);
    loadVectorLeftIndexed128(0xffffffff831c3100,0x1c);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr0,in_vr12,4,3); memcpy(auVar11, &_vt0, 16); }
    vectorRotateLeftImmediateMaskInsert128(in_vr1,auVar11,3,2);
    fn_8257E950((double)lbl_8218E1AC,(double)lbl_8219248C,iVar2,0,1);
  }
  fn_82592238(param_1,param_2);
  return;
}
