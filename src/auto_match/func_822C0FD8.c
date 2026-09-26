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
extern unsigned int *auStack_54;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822C13D0();
extern int fn_822C1730();
extern int fn_822C18B8();
extern int fn_82321818();
extern int fn_825354B8();
extern int fn_82536288();
extern int fn_82552D10();
extern int fn_82560100();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


void fn_822C0FD8(int param_1,uint *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  int *piVar4;
  int iVar5;
  bool bVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int aiStack_a0 [4];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [28];
  undefined1 auStack_54 [84];
  
  uVar1 = *param_2;
  if ((uVar1 < 3) || (uVar1 == 6)) {
    iVar5 = param_1 + 0x310;
  }
  else {
    iVar5 = param_1 + 0x3f8;
  }
  puVar2 = (undefined4 *)(param_1 + 0x80U & 0xfffffff0);
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  puVar3 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar8;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  if (param_3 == 0) {
    piVar4 = (int *)((param_5 * 0xd + param_4) * 4 + iVar5);
    if (piVar4 == (int *)0x0) {
      bVar6 = false;
    }
    else {
      bVar6 = *piVar4 != 0;
    }
    if (bVar6) {
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      fn_82230110(auStack_70,0xffffffff821acd0c);
      fn_82230110(auStack_54,0xffffffff821acd04);
      fn_822C1730(&uStack_90,auStack_70);
      fn_82230300(auStack_54,1,0);
      fn_82230300(auStack_70,1,0);
      fn_82552D10((ulonglong)*(uint *)(param_1 + 0x7ec) + 0x84c,piVar4,auStack_80,&uStack_90);
      fn_822C18B8(&uStack_90);
    }
    fn_822C13D0(param_1,param_5,param_4,uVar1);
  }
  else {
    piVar4 = (int *)((param_4 + 0x34) * 4 + iVar5);
    if (piVar4 == (int *)0x0) {
      bVar6 = false;
    }
    else {
      bVar6 = *piVar4 != 0;
    }
    if (bVar6) {
      aiStack_a0[0] = *piVar4;
      aiStack_a0[0] =
           fn_825354B8(aiStack_a0,auStack_80,0,
                             *(undefined4 *)(*(int *)(param_1 + 0x7ec) + 0x84c),0xffffffff83296bc0,
                             0xffffffff83296bd0);
      fn_82536288(aiStack_a0);
    }
    if (*(int *)(param_1 + 0x2c) == 0) {
      piVar4 = (int *)(iVar5 + 0xe0);
    }
    else {
      piVar4 = (int *)(iVar5 + 0xe4);
    }
    if (*piVar4 != 0) {
      fn_82321818(auStack_80,*(undefined4 *)(param_1 + 0x7dc));
      fn_82321818(&uStack_90,*(undefined4 *)(param_1 + 0x7e4));
      dVar7 = (double)lbl_821CC160;
      fn_82560100(dVar7,*(undefined4 *)(param_1 + 0x7ec),piVar4,auStack_80);
      fn_82560100(dVar7,*(undefined4 *)(param_1 + 0x7ec),piVar4,&uStack_90);
    }
  }
  return;
}

