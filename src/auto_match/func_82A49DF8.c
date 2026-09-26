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
extern int fn_82F68CC0();
extern unsigned int lbl_82089AB0;
extern unsigned int lbl_82089AC0;
extern unsigned int lbl_8208E054;
extern unsigned int lbl_8208E058;
extern unsigned int lbl_8208E05C;
extern unsigned int lbl_8315D960;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82A49DF8(ushort *param_1,int param_2,ushort param_3,ushort param_4,int param_5,
                  uint param_6,ushort param_7,int param_8)

{
  ushort *puVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ushort in_stack_00000056;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  param_6 = param_6 & 0xffff;
  if (param_6 == 0) {
    if (param_3 == 2) {
      param_6 = 4;
    }
    else {
      param_6 = -(uint)(param_3 == 3) & 0x20;
    }
  }
  param_1[1] = param_4;
  *(int *)(param_1 + 2) = param_5;
  param_1[7] = (ushort)param_6;
  param_1[8] = (short)param_2 - 0x12;
  uVar2 = (uint)param_4;
  if (param_3 == 2) {
    param_1[10] = 7;
    lVar8 = 7;
    param_1[9] = in_stack_00000056;
    trapWord(6,(ulonglong)in_stack_00000056,0);
    uVar4 = (in_stack_00000056 - 2) * (uint)param_4;
    uVar6 = uVar4 * 4;
    uVar4 = uVar6 | uVar4 >> 0x1e;
    puVar3 = param_1 + 10;
    iVar5 = 0;
    uVar6 = ((int)uVar4 >> 3) + (uint)((int)uVar4 < 0 && (uVar6 & 4) != 0) + uVar2 * 7;
    param_1[6] = (ushort)uVar6;
    *(int *)(param_1 + 4) =
         (int)(((longlong)(int)(uVar6 & 0xffff) * (longlong)param_5 & 0xffffffffU) /
              (ulonglong)in_stack_00000056);
    do {
      puVar3[1] = *(ushort *)(&lbl_82089AB0 + iVar5);
      puVar1 = (ushort *)(&lbl_82089AC0 + iVar5);
      iVar5 = iVar5 + 2;
      puVar3 = puVar3 + 2;
      *puVar3 = *puVar1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  else {
    uVar6 = param_6 * param_4;
    uVar6 = ((int)uVar6 >> 3) + (uint)((int)uVar6 < 0 && (uVar6 & 7) != 0);
    param_1[6] = (ushort)uVar6;
    *(uint *)(param_1 + 4) = (uVar6 & 0xffff) * param_5;
  }
  if (param_2 == 0x28) {
    *param_1 = 0xfffe;
    uStack_48 = lbl_8208E058;
    uStack_44 = lbl_8208E05C;
    uStack_4c = lbl_8208E054;
    uStack_50 = (uint)param_3;
    fn_82F68CC0(param_1 + 0xc,&uStack_50,0x10);
    if (param_7 == 0) {
      param_7 = (ushort)param_6;
    }
    param_1[9] = param_7;
    if (param_8 == -1) {
      uVar7 = 0;
      if ((uVar2 != 0) && (uVar2 < 9)) {
        uVar7 = *(undefined4 *)(&lbl_8315D960 + (uint)param_4 * 4);
      }
      *(undefined4 *)(param_1 + 10) = uVar7;
    }
    else {
      *(int *)(param_1 + 10) = param_8;
    }
  }
  else {
    *param_1 = param_3;
  }
  return;
}

