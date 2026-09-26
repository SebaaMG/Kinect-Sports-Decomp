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
extern unsigned int *auStack_48;
extern int fn_82230040();
extern int fn_823DFD70();
extern int fn_823E1310();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8265BF48();
extern int fn_8265C9E0();
extern int fn_8265CA60();
extern unsigned int iStack0000001c;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B6A48;
extern unsigned int stack0x0000001c;
extern unsigned int uStack_3c;


undefined4 * fn_823DFB10(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar3;
  int *piVar4;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar5;
  longlong lVar6;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 **ppuVar10;
  ulonglong uVar7;
  int iStack0000001c;
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  uint auStack_48 [2];
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  
  *param_1 = &lbl_821B6A48;
  param_1[3] = 0;
  iStack0000001c = param_2;
  iVar3 = fn_8265C9E0(0xa8);
  if (iVar3 == 0) {
    uStack_3c = 0;
    ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_40);
  }
  param_1[2] = iVar3;
  *(int *)iVar3 = iVar3;
  *(undefined4 *)(param_1[2] + 4) = param_1[2];
  *(undefined4 *)(param_1[2] + 8) = param_1[2];
  *(undefined1 *)(param_1[2] + 0xa4) = 1;
  *(undefined1 *)(param_1[2] + 0xa5) = 1;
  param_1[5] = 0;
  param_1[7] = param_3;
  if (param_2 != 0) {
    piVar4 = (int *)fn_8251F720(&stack0x0000001c,0);
    lVar6 = 0;
    piVar8 = piVar4;
    if (piVar4 != (int *)0x0) {
      do {
        if (*piVar8 == 0) break;
        lVar6 = lVar6 + 1;
        piVar8 = (int *)(-(uint)(piVar8[1] != 0) & (uint)(piVar8 + 1));
      } while (piVar8 != (int *)0x0);
      piVar8 = piVar4;
      if (0 < (int)lVar6) {
        do {
          uVar1 = fn_8251F720(piVar8,0);
          auStack_48[0] = fn_8265BF48(uVar1,0);
          puStack_50 = (undefined4 *)param_1[2];
          puVar9 = (undefined4 *)((undefined4 *)param_1[2])[1];
          while (*(char *)((int)puVar9 + 0xa5) == '\0') {
            if ((uint)puVar9[3] < auStack_48[0]) {
              puVar9 = (undefined4 *)puVar9[2];
            }
            else {
              puStack_50 = puVar9;
              puVar9 = (undefined4 *)*puVar9;
            }
          }
          if ((puStack_50 == (undefined4 *)param_1[2]) || (auStack_48[0] < (uint)puStack_50[3])) {
            ppuVar10 = &puStack_4c;
            puStack_4c = (undefined4 *)param_1[2];
          }
          else {
            ppuVar10 = &puStack_50;
          }
          if (*ppuVar10 == (undefined4 *)param_1[2]) {
            uVar2 = fn_823E1310(param_1 + 1,auStack_48);
            fn_823DFD70(uVar2,uVar1);
          }
          fn_8251FA58(uVar1);
          lVar6 = lVar6 + -1;
          piVar8 = piVar8 + 1;
        } while (lVar6 != 0);
      }
    }
    fn_8251FA58(piVar4);
  }
  uVar7 = (ulonglong)(uint)param_1[3];
  if (uVar7 != 0) {
    lVar6 = uVar7 * 0x70;
    if (0x2492492 < uVar7) {
      lVar6 = -1;
    }
    uVar5 = fn_8265CA60(lVar6);
    param_1[5] = uVar5;
    lVar6 = ((ulonglong)(uint)param_1[3] & 0x3fffffff) << 2;
    if (0x3fffffff < (uint)param_1[3]) {
      lVar6 = -1;
    }
    uVar5 = fn_8265CA60(lVar6);
    param_1[6] = uVar5;
  }
  return param_1;
}

