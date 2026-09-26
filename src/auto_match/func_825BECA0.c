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
extern unsigned int *auStack_90;
extern int fn_8256D798();
extern int fn_8256DBA0();
extern int fn_827D9630();
extern int fn_827D96A0();
extern int fn_827D9ED8();
extern int fn_827D9EE0();
extern int fn_827D9FB0();
extern int fn_827DA090();
extern int fn_82811400();
extern unsigned int lbl_821CAC50;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_a8;


/* WARNING: Type propagation algorithm not settling */

undefined4 * fn_825BECA0(int param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar6;
  uint uVar7;
  undefined8 uVar5;
  undefined4 *puVar8;
  undefined4 **ppuVar9;
  undefined4 *puStack_b0;
  undefined4 *puStack_ac;
  undefined4 uStack_a8;
  int aiStack_a4 [5];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  aiStack_a4[1] = 0;
  puVar6 = (undefined4 *)fn_827D96A0(param_2);
  uVar1 = *(uint *)(param_1 + 0x1e4);
  puStack_b0 = puVar6;
  uVar7 = fn_8256DBA0(param_1 + 0x1c4,&puStack_b0);
  uVar7 = uVar7 & uVar1;
  if (*(uint *)(param_1 + 0x1e8) <= uVar7) {
    uVar7 = (uVar7 - (uVar1 >> 1)) - 1;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x1c8);
  puVar4 = *(undefined4 **)(uVar7 * 8 + *(int *)(param_1 + 0x1d4));
  puStack_b0 = puVar4;
  while( true ) {
    puVar8 = puVar2;
    if (puVar4 != puVar2) {
      puVar8 = (undefined4 *)**(undefined4 **)(uVar7 * 8 + *(int *)(param_1 + 0x1d4) + 4);
    }
    if (puStack_b0 == puVar8) goto LAB_825bed68;
    if (puVar6 <= (undefined4 *)puStack_b0[2]) break;
    puStack_b0 = (undefined4 *)*puStack_b0;
  }
  if (puVar6 < (undefined4 *)puStack_b0[2]) {
    ppuVar9 = &puStack_ac;
    puStack_ac = puVar2;
  }
  else {
    ppuVar9 = &puStack_b0;
  }
  puVar2 = *ppuVar9;
LAB_825bed68:
  if (puVar2 == *(undefined4 **)(param_1 + 0x1c8)) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    iVar3 = *(int *)lbl_83156AA0;
    uVar5 = fn_82811400(auStack_90,4);
    puVar6 = (undefined4 *)(**(code **)(iVar3 + 0xc))(lbl_83156AA0,0x88,uVar5);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      uStack_a8 = fn_827D9EE0(*(undefined4 *)(param_1 + 0x54));
      iVar3 = puVar2[10];
      aiStack_a4[0] = fn_827D9ED8(*(undefined4 *)(param_1 + 0x54));
      aiStack_a4[0] = aiStack_a4[0] + *(int *)(iVar3 + 4);
      iVar3 = puVar2[10];
      uVar5 = fn_827DA090(auStack_70,*(undefined4 *)(param_1 + 0x54));
      puStack_ac = (undefined4 *)fn_827D96A0(puVar2 + 4);
      puStack_b0 = (undefined4 *)0x1;
      aiStack_a4[1] = 0;
      fn_827D9FB0(puVar6,uVar5,aiStack_a4 + 1,&puStack_b0,&puStack_ac,aiStack_a4,&uStack_a8);
      *puVar6 = &lbl_821CAC50;
      puVar6[0x1a] = *(undefined4 *)(iVar3 + 8);
      fn_827D9630(puVar6 + 0x1c,puVar2 + 4);
      fn_8256D798(auStack_70,1,0);
    }
  }
  return puVar6;
}

