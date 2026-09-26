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
extern int fn_8265C990();
extern int fn_82A3FF60();
extern int fn_82A403E8();
extern int fn_82A42E20();
extern int fn_82A484F8();
extern int fn_82A49B30();
extern int fn_82A4F4E0();
extern int fn_82A4FA40();
extern int fn_82A507C0();
extern U64 storeWordConditionalIndexed();


longlong fn_82A4FDC8(int *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  bool bVar3;
  int *piVar5;
  ulonglong uVar4;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong lVar13;
  undefined4 *puVar14;
  char in_RESERVE;
  byte in_cr0;
  int *piStack_90;
  int *piStack_8c;
  int aiStack_88 [34];
  
  lVar13 = 0;
  piVar5 = (int *)((int *)param_1[4])[0x21];
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)(**(code **)(*(int *)param_1[4] + 0x68))();
  }
  uVar9 = 0;
  uVar11 = (ulonglong)*(uint *)(param_1[4] + 0x78);
  iVar8 = *(int *)(param_1[4] + 0x3c);
  if (*param_2 != 0) {
    iVar10 = 0;
    do {
      if ((int)lVar13 < 0) {
        return lVar13;
      }
      puVar14 = (undefined4 *)(param_2[1] + iVar10);
      puVar2 = *(undefined4 **)(param_2[1] + iVar10);
      (**(code **)*puVar2)(puVar2,0xffffffff82089748,&piStack_8c);
      (**(code **)(*piStack_8c + 0xc))(piStack_8c,aiStack_88);
      uVar1 = *(uint *)(aiStack_88[0] + 0x418);
      fn_8265C990(aiStack_88[0],0x20970000);
      (**(code **)(*piStack_8c + 8))();
      bVar3 = (uVar1 & 0x20) == 0;
      uVar4 = uVar11;
      if ((bVar3) && ((bVar3 = (uVar1 & 0x10) == 0, bVar3 || (iVar8 != puVar14[2])))) {
        uVar4 = fn_82A42E20((ulonglong)*(uint *)(param_1[4] + 0x30) + 0x250,0,puVar14[2],0,
                                  *(undefined4 *)(param_1[4] + 0x40));
        if (uVar4 == 0) {
          bVar3 = true;
          lVar13 = -0x7ff8fff2;
          goto LAB_82a4fefc;
        }
LAB_82a4ff04:
        piStack_90 = (int *)0x0;
        lVar13 = fn_82A507C0(param_1[4],*puVar14,piVar5,*(undefined4 *)((int)uVar11 + 4),
                                   *(undefined4 *)((int)uVar4 + 4),&piStack_90);
        in_cr0 = (lVar13 == 0) << 1;
        if (-1 < lVar13) {
          if (puVar14[1] == 0) {
            lVar13 = (**(code **)(*piStack_90 + 0x14))(piStack_90,0,0x1337f001);
          }
          if (-1 < (int)lVar13) {
            piVar6 = (int *)fn_82A3FF60(0xffffffff83219d50,8,0x20970004,0);
            in_cr0 = (piVar6 == (int *)0x0) << 1;
            if (piVar6 == (int *)0x0) {
              piVar6 = (int *)0x0;
            }
            else {
              piVar6[1] = puVar14[2];
              *piVar6 = (int)piStack_90;
            }
            lVar13 = -0x7ff8fff2;
            if (piVar6 != (int *)0x0) {
              iVar7 = fn_82A484F8(param_1 + 5,piVar6);
              in_cr0 = (iVar7 == 0) << 1;
              if (iVar7 != 0) {
                lVar13 = 0;
                iVar8 = puVar14[2];
                param_1[3] = (int)piStack_90;
                uVar11 = uVar4;
                piVar5 = piStack_90;
                goto LAB_82a50000;
              }
              fn_82A4F4E0(piVar6);
              lVar13 = -0x7ff8fff2;
            }
          }
          fn_82A403E8(*(undefined4 *)(param_1[4] + 0x30),piStack_90);
        }
      }
      else {
LAB_82a4fefc:
        in_cr0 = bVar3 << 1;
        if (-1 < (int)lVar13) goto LAB_82a4ff04;
      }
LAB_82a50000:
      uVar9 = uVar9 + 1;
      iVar10 = iVar10 + 0xc;
    } while (uVar9 < *param_2);
    if ((int)lVar13 < 0) {
      return lVar13;
    }
  }
  do {
    puVar12 = (uint *)uVar11;
    if (in_RESERVE != '\0') {
      uVar9 = storeWordConditionalIndexed((ulonglong)*puVar12 + 1,0,uVar11);
      *puVar12 = uVar9;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  param_1[2] = (int)puVar12;
  *param_1 = iVar8;
  if (iVar8 == ((int *)param_1[4])[0xf]) {
    iVar8 = (**(code **)(*(int *)param_1[4] + 0x6c))();
  }
  else {
    iVar8 = fn_82A49B30(iVar8);
  }
  param_1[1] = iVar8;
  if (*(int *)(param_1[4] + 4) != 1) {
    lVar13 = fn_82A4FA40(param_1,0x1337f001);
  }
  return lVar13;
}

