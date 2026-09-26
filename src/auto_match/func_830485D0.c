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
extern unsigned int *auStack_60;
extern int fn_82A1DDC0();
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_8304D650();
extern int fn_8304DF58();
extern unsigned int lbl_831BC770;
extern unsigned int uStack_50;
extern unsigned int uStack_69;


void fn_830485D0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  undefined2 uVar10;
  longlong lVar9;
  undefined1 uStack_69;
  undefined1 auStack_60 [16];
  undefined1 uStack_50;
  
  puVar8 = (uint *)(param_1 + 0x3c);
  iVar7 = 0x2d;
  if ((*(int *)(param_1 + 0x3c) == 0) && (*(char *)(param_1 + 0x40) == '\0')) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0xc))(*(int **)(param_1 + 0x28),auStack_60);
    uStack_69 = (undefined1)(int)*(float *)(*(int *)(param_1 + 8) + 0xdc);
    uStack_50 = uStack_69;
    (**(code **)(**(int **)(param_1 + 0x28) + 0x10))(*(int **)(param_1 + 0x28),auStack_60);
    iVar3 = (**(code **)(**(int **)(param_1 + 0x28) + 0x2c))
                      (*(int **)(param_1 + 0x28),param_1 + 0x34,puVar8,0);
    if (iVar3 == 0x2e) {
      param_2[0xd0] = 0x2e;
      return;
    }
    if (iVar3 == 2) goto LAB_830486a8;
    if (*puVar8 == 0) {
      if (*(char *)(param_1 + 0x40) == '\0') goto LAB_830486a8;
    }
    else {
      iVar3 = fn_8304DF58(param_1);
      if (iVar3 != 1) goto LAB_830486a8;
    }
  }
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x6c);
  uVar4 = (ulonglong)(*(uint *)(iVar3 + 0x24) >> 3) & 0x1f;
  trapWord(6,uVar4,0);
  uVar5 = *puVar8 / uVar4;
  if ((*(char *)(param_1 + 0x40) != '\0') && (uVar5 <= *(ushort *)(param_2 + 3))) {
    iVar7 = 0x11;
  }
  if ((*puVar8 == 0) && (iVar7 != 0x11)) {
LAB_830486a8:
    param_2[0xd0] = 2;
    return;
  }
  uVar6 = (uint)uVar5;
  if (*(ushort *)(param_2 + 3) < uVar5) {
    uVar6 = (uint)*(ushort *)(param_2 + 3);
  }
  uVar10 = (undefined2)uVar6;
  if (*(short *)(param_1 + 0x60) == 0) {
    if (*(int *)(param_1 + 0x5c) != 0) {
      fn_82FA5190(lbl_831BC770);
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    uVar1 = *(uint *)(iVar3 + 0x24);
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    uVar5 = (longlong)(int)(uVar6 & 0xffff) * (longlong)(int)uVar4;
    *(undefined2 *)(param_2 + 3) = uVar10;
    *(undefined2 *)((int)param_2 + 0xe) = uVar10;
    *param_2 = uVar2;
    param_2[1] = uVar1 >> 0xe;
    *(short *)(param_1 + 0x62) = (short)uVar5;
    if (((ulonglong)*puVar8 - (uVar5 & 0xffff) & 0xffffffff) < uVar4) {
      uVar5 = fn_82FA5060(lbl_831BC770,uVar4 << 10);
      *(int *)(param_1 + 0x5c) = (int)uVar5;
      if ((uVar5 & 0xffffffff) == 0) goto LAB_830486a8;
      *(ushort *)(param_1 + 0x60) = (short)*puVar8 - *(ushort *)(param_1 + 0x62);
      fn_82A1DDC0(uVar5,(ulonglong)*(ushort *)(param_1 + 0x62) +
                              (ulonglong)*(uint *)(param_1 + 0x38));
      *(short *)(param_1 + 0x62) = *(short *)(param_1 + 0x62) + *(short *)(param_1 + 0x60);
    }
  }
  else {
    lVar9 = (longlong)(int)(uVar6 & 0xffff) * (longlong)(int)uVar4 -
            (ulonglong)*(ushort *)(param_1 + 0x60);
    fn_82A1DDC0((ulonglong)*(ushort *)(param_1 + 0x60) + (ulonglong)*(uint *)(param_1 + 0x5c),
                      *(undefined4 *)(param_1 + 0x38),lVar9);
    uVar2 = *(undefined4 *)(param_1 + 0x5c);
    *(short *)(param_1 + 0x62) = (short)lVar9;
    *(undefined2 *)(param_1 + 0x60) = 0;
    uVar6 = *(uint *)(iVar3 + 0x24);
    *(undefined2 *)(param_2 + 3) = uVar10;
    *param_2 = uVar2;
    *(undefined2 *)((int)param_2 + 0xe) = uVar10;
    param_2[1] = uVar6 >> 0xe;
  }
  lVar9 = 0;
  if ((*(char *)(param_1 + 0x58) != '\0') &&
     (*(uint *)(param_1 + 0x24) <= *(int *)(param_1 + 0x48) + (uint)*(ushort *)((int)param_2 + 0xe))
     ) {
    lVar9 = 1;
    *(char *)(param_1 + 0x58) = *(char *)(param_1 + 0x58) + -1;
  }
  fn_8304D650(param_1,param_2,*(undefined4 *)(param_1 + 0x48),lVar9);
  if ((*(uint *)(*(int *)(param_1 + 8) + 8) & 0x10000) != 0) {
    trapWord(6,uVar4,0);
    param_2[9] = *(undefined4 *)(iVar3 + 0x20);
    param_2[6] = *(undefined4 *)(param_1 + 0x48);
    param_2[8] = (int)(*(uint *)(param_1 + 0x2c) / uVar4);
  }
  if (lVar9 != 0) {
    *(uint *)(param_1 + 0x48) =
         (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x24)) +
         (uint)*(ushort *)((int)param_2 + 0xe) + *(int *)(param_1 + 0x48);
    param_2[0xd0] = iVar7;
    return;
  }
  *(uint *)(param_1 + 0x48) = (uint)*(ushort *)((int)param_2 + 0xe) + *(int *)(param_1 + 0x48);
  param_2[0xd0] = iVar7;
  return;
}

