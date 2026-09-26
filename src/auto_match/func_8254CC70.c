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
extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8254FD18();
extern int fn_8254FE78();
extern int fn_8260D428();
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


ulonglong fn_8254CC70(int param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *****pppppuVar5;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 *puStack_c0;
  undefined4 *apuStack_bc [3];
  undefined4 ****appppuStack_b0 [4];
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined4 auStack_90 [36];
  
  if ((param_2 & 0xffffffff) == 0) {
    param_2 = 0xffffffff82196582;
  }
  fn_82230110(appppuStack_b0,param_2);
  puStack_c0 = *(undefined4 **)(param_1 + 0xa8);
  puVar6 = (undefined4 *)(*(undefined4 **)(param_1 + 0xa8))[1];
  while (*(char *)((int)puVar6 + 0x2d) == '\0') {
    pppppuVar5 = (undefined4 *****)appppuStack_b0[0];
    if (uStack_9c < 0x10) {
      pppppuVar5 = appppuStack_b0;
    }
    iVar3 = fn_8260D428(puVar6 + 3,0,puVar6[7],pppppuVar5,uStack_a0);
    if (iVar3 < 0) {
      puVar6 = (undefined4 *)puVar6[2];
    }
    else {
      puStack_c0 = puVar6;
      puVar6 = (undefined4 *)*puVar6;
    }
  }
  if (puStack_c0 != *(undefined4 **)(param_1 + 0xa8)) {
    puVar6 = puStack_c0 + 3;
    if (0xf < (uint)puStack_c0[8]) {
      puVar6 = (undefined4 *)*puVar6;
    }
    iVar3 = fn_8260D428(appppuStack_b0,0,uStack_a0,puVar6,puStack_c0[7]);
    if (-1 < iVar3) {
      ppuVar7 = &puStack_c0;
      goto LAB_8254cd54;
    }
  }
  apuStack_bc[0] = *(undefined4 **)(param_1 + 0xa8);
  ppuVar7 = apuStack_bc;
LAB_8254cd54:
  if (*ppuVar7 == *(undefined4 **)(param_1 + 0xa8)) {
    lVar10 = 10;
    puVar2 = &uStack_98;
    do {
      puVar8 = puVar2;
      puVar2 = puVar8 + 1;
      *puVar2 = 0;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    iVar3 = *(int *)(param_1 + 0xb8);
    iVar1 = *(int *)(param_1 + 0xb4);
    *(undefined4 *)(puVar8 + 2) = 0;
    auStack_90[0] = (undefined4)param_2;
    iVar3 = (iVar3 - iVar1) / 0x54;
    uVar9 = (ulonglong)iVar3;
    piVar4 = (int *)fn_8254FD18(param_1 + 0xa4,appppuStack_b0);
    *piVar4 = iVar3;
    fn_8254FE78(param_1 + 0xb4,auStack_90);
  }
  else {
    uVar9 = (ulonglong)(uint)(*ppuVar7)[10];
  }
  fn_82230300(appppuStack_b0,1,0);
  return uVar9;
}

