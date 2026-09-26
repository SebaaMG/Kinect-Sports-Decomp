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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82282340();
extern int fn_82297E28();
extern int fn_82298138();
extern int fn_825603C8();
extern int fn_825604A0();
extern int fn_8257C8F0();
extern int fn_8257CB40();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F4EBC0();
extern int fn_82F4EF10();
extern int fn_82F4EF20();
extern int fn_82F4EFF0();
extern int fn_82F4F008();
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


void fn_82463098(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 in_r0;
  int iVar3;
  char cVar8;
  undefined8 uVar4;
  undefined1 uVar9;
  int iVar6;
  ulonglong uVar5;
  undefined4 uVar7;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [112];
  
  iVar10 = (int)param_2;
  if (*(int *)(param_1 + 0x2e0) == iVar10) {
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  for (puVar12 = *(undefined4 **)(param_1 + 0x28); iVar3 = (int)in_r0, puVar12 != puVar1;
      puVar12 = puVar12 + 2) {
    iVar3 = puVar12[1];
    piVar2 = (int *)*puVar12;
    iVar6 = 0;
    piVar11 = (int *)0x0;
    if ((iVar3 != 0) && (cVar8 = fn_8223AAC0(iVar3), cVar8 != '\0')) {
      iVar6 = iVar3;
      piVar11 = piVar2;
    }
    cVar8 = (**(code **)(*piVar11 + 0x1c))(piVar11);
    if (cVar8 != '\0') {
      if (iVar6 == 0) {
        return;
      }
      fn_822315A0(iVar6);
      return;
    }
    if (iVar6 != 0) {
      fn_822315A0(iVar6);
    }
  }
  if (*(int *)(param_1 + 0x2e0) == 6) {
    *(undefined1 *)(param_1 + 0x244) = 0;
  }
  if (iVar10 == 4) {
    *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_1 + 0x234);
  }
  else if (iVar10 == 7) {
    *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 0x23c);
  }
  else {
    if (iVar10 == 8) {
      uStack_90 = 0x71;
      uStack_8c = 8;
      fn_8257C8F0(*(undefined4 *)(param_1 + 4),&uStack_90);
      puVar12 = &uStack_90;
    }
    else {
      if (iVar10 != 9) {
        if (iVar10 == 10) {
          uVar4 = fn_82F4EBC0(0);
          uVar9 = fn_82F4EFF0();
          *(undefined1 *)(param_1 + 0x280) = uVar9;
          iVar6 = fn_82F4EF10(auStack_80,uVar4);
          puVar12 = (undefined4 *)(iVar3 + iVar6 & 0xfffffff0);
          uVar7 = puVar12[1];
          uVar13 = puVar12[2];
          uVar14 = puVar12[3];
          puVar1 = (undefined4 *)(param_1 + 0x290U & 0xfffffff0);
          *puVar1 = *puVar12;
          puVar1[1] = uVar7;
          puVar1[2] = uVar13;
          puVar1[3] = uVar14;
          iVar6 = fn_82F4EF20(auStack_70,uVar4,0,0);
          puVar12 = (undefined4 *)(iVar3 + iVar6 & 0xfffffff0);
          uVar7 = puVar12[1];
          uVar13 = puVar12[2];
          uVar14 = puVar12[3];
          puVar1 = (undefined4 *)(param_1 + 0x2a0U & 0xfffffff0);
          *puVar1 = *puVar12;
          puVar1[1] = uVar7;
          puVar1[2] = uVar13;
          puVar1[3] = uVar14;
          uVar9 = fn_82F4F008(uVar4);
          *(undefined1 *)(param_1 + 0x282) = uVar9;
          fn_825603C8(0,param_1 + 0x40,1);
          uVar5 = fn_8265C9E0(0x88);
          if ((uVar5 & 0xffffffff) == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = fn_82297E28(uVar5,param_1 + 0x2e4,0);
          }
          *(undefined4 *)(param_1 + 0x248) = uVar7;
        }
        else if (iVar10 == 0xb) {
          iVar3 = *(int *)(param_1 + 0x248);
          if (iVar3 != 0) {
            fn_82298138(iVar3);
            fn_8265CA20(iVar3);
            *(undefined4 *)(param_1 + 0x248) = 0;
          }
        }
        else if (iVar10 == 0xc) {
          uStack_a0 = 0x72;
          uStack_9c = 8;
          fn_8257C8F0(*(undefined4 *)(param_1 + 4),&uStack_a0);
          fn_8257CB40((ulonglong)*(uint *)(param_1 + 4) + 0x78,&uStack_a0,1);
          fn_825604A0(param_1 + 0x40);
        }
        goto LAB_824632f0;
      }
      uStack_98 = 0x71;
      uStack_94 = 8;
      fn_8257C8F0(*(undefined4 *)(param_1 + 4),&uStack_98);
      puVar12 = &uStack_98;
    }
    fn_8257CB40((ulonglong)*(uint *)(param_1 + 4) + 0x78,puVar12,1);
  }
LAB_824632f0:
  puVar12 = *(undefined4 **)(param_1 + 0x28);
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  *(int *)(param_1 + 0x2e0) = iVar10;
  for (; puVar12 != puVar1; puVar12 = puVar12 + 2) {
    fn_82282340(*puVar12,param_2);
  }
  return;
}

