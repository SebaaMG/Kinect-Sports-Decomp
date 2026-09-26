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
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82365BD8();
extern int fn_82373AC0();
extern int fn_82376640();
extern int fn_82376CE0();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8265C9E0();
extern unsigned int iStack_78;
extern unsigned int iStack_9c;
extern unsigned int lbl_8219564C;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831E4E38;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_832975B0;
extern unsigned int stack0x0000002c;
extern unsigned int stack0x00000034;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack_58;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;


int * fn_82374268(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  float fVar1;
  undefined4 *puVar2;
  int *piVar5;
  ulonglong uVar3;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar4;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uStack0000002c;
  undefined4 uStack00000034;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  int iStack_78;
  undefined8 uStack_58;
  undefined1 auStack_50 [80];
  
  uStack_a0 = 0;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  if ((param_3 == 0) || (*(int *)(param_2 + 0x1b8) == 0)) {
    iStack_9c = *(int *)(param_2 + 0x180);
  }
  else {
    piVar5 = (int *)fn_8251F720(param_2 + 0x1b8,0);
    iVar6 = 0;
    for (piVar10 = piVar5; (piVar10 != (int *)0x0 && (*piVar10 != 0));
        piVar10 = (int *)(-(uint)(piVar10[1] != 0) & (uint)(piVar10 + 1))) {
      iVar6 = iVar6 + 1;
    }
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    iVar6 = (int)((float)(longlong)iVar6 *
                 ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460));
    lStack_90 = (longlong)iVar6;
    iStack_9c = piVar5[iVar6];
    fn_8251FA58();
    uStack_a0 = 1;
  }
  uStack_98 = *(undefined4 *)(param_2 + 0x9c);
  puVar8 = &uStack_58;
  puVar9 = &uStack_88;
  lStack_90 = (ulonglong)*(uint *)(param_2 + 0x98) << 0x20;
  lVar12 = 5;
  uStack_80 = 0x823755f000000000;
  do {
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
    *puVar8 = *puVar9;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  iStack_78 = param_2;
  uVar3 = fn_8265C9E0(0x21b0);
  if ((uVar3 & 0xffffffff) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = fn_82376CE0(uVar3,&iStack_9c,param_2 + 0x7e0,auStack_50,&uStack_a0,
                              &stack0x0000002c,&stack0x00000034,&lStack_90);
  }
  param_1[1] = iVar6;
  *param_1 = iVar6 + 0x10;
  puVar7 = (undefined4 *)(param_2 + 0x1a0U & 0xfffffff0);
  uVar11 = puVar7[1];
  uVar13 = puVar7[2];
  uVar14 = puVar7[3];
  puVar2 = (undefined4 *)(iVar6 + 0x1a0U & 0xfffffff0);
  *puVar2 = *puVar7;
  puVar2[1] = uVar11;
  puVar2[2] = uVar13;
  puVar2[3] = uVar14;
  uVar11 = lbl_821CC160;
  *(undefined4 *)(iVar6 + 0x128) = lbl_821CC160;
  *(undefined4 *)(iVar6 + 300) = uVar11;
  *(undefined4 *)(*param_1 + 0x2180) = *(undefined4 *)(param_2 + 0x26c);
  fn_82376640(param_2 + 0x184,param_1);
  iVar6 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar6 = fn_82250A18();
  }
  if (*(char *)(iVar6 + 4) != '\0') {
    piVar10 = *(int **)(*(int *)(param_2 + 0xcc) * 4 + **(int **)(param_2 + 8));
    fVar1 = *(float *)(*(int *)(piVar10[4] * 4 + *piVar10) + 0x14);
    if ((fVar1 <= lbl_831E4E38) || (uVar11 = 1, lbl_8219564C < fVar1)) {
      uVar11 = 2;
    }
    *(undefined4 *)(*param_1 + 0x2168) = uVar11;
  }
  puVar7 = (undefined4 *)fn_82373AC0(&uStack_88,param_2);
  piVar10 = (int *)*puVar7;
  iVar6 = *piVar10;
  uVar4 = fn_82365BD8(&lStack_90,param_1);
  (**(code **)(iVar6 + 0x1c))(piVar10,uVar4);
  if ((((U64)(uStack_88) >> 32) & 0xFFFFFFFF) != 0) {
    fn_822315A0();
  }
  return param_1;
}

