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
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_8256D3A8();
extern int fn_8256D798();
extern int fn_8256DBA0();
extern int fn_827D9630();
extern int fn_827D96A0();
extern int fn_827D9720();
extern int fn_827D9FB0();
extern int fn_82811400();
extern unsigned int lbl_821CAC50;
extern unsigned int lbl_83156AA0;
extern unsigned int uStack_94;
extern unsigned int uStack_98;


undefined4 * fn_825BDCE8(int param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar5;
  uint uVar6;
  undefined8 uVar4;
  undefined4 *puVar7;
  undefined4 **ppuVar8;
  undefined4 *puVar9;
  undefined4 *puStack_a0;
  undefined4 *puStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 auStack_90 [4];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  puVar5 = (undefined4 *)fn_827D96A0(param_2);
  uVar1 = *(uint *)(param_1 + 0x7c);
  puStack_a0 = puVar5;
  uVar6 = fn_8256DBA0(param_1 + 0x5c,&puStack_a0);
  uVar6 = uVar6 & uVar1;
  if (*(uint *)(param_1 + 0x80) <= uVar6) {
    uVar6 = (uVar6 - (uVar1 >> 1)) - 1;
  }
  puVar9 = *(undefined4 **)(param_1 + 0x60);
  puVar3 = *(undefined4 **)(uVar6 * 8 + *(int *)(param_1 + 0x6c));
  puStack_a0 = puVar3;
  while( true ) {
    puVar7 = puVar9;
    if (puVar3 != puVar9) {
      puVar7 = (undefined4 *)**(undefined4 **)(uVar6 * 8 + *(int *)(param_1 + 0x6c) + 4);
    }
    if (puStack_a0 == puVar7) goto LAB_825bdda0;
    if (puVar5 <= (undefined4 *)puStack_a0[2]) break;
    puStack_a0 = (undefined4 *)*puStack_a0;
  }
  if (puVar5 < (undefined4 *)puStack_a0[2]) {
    ppuVar8 = &puStack_9c;
    puStack_9c = puVar9;
  }
  else {
    ppuVar8 = &puStack_a0;
  }
  puVar9 = *ppuVar8;
LAB_825bdda0:
  if (puVar9 != *(undefined4 **)(param_1 + 0x60)) {
    fn_827D9720(puVar9[3],(ulonglong)*(uint *)(param_1 + 0x8c) + 8);
    iVar2 = *(int *)lbl_83156AA0;
    uVar4 = fn_82811400(auStack_80,4);
    puVar5 = (undefined4 *)(**(code **)(iVar2 + 0xc))(lbl_83156AA0,0x88,uVar4);
    if (puVar5 != (undefined4 *)0x0) {
      iVar2 = puVar9[3];
      puStack_9c = (undefined4 *)0x0;
      puStack_a0 = (undefined4 *)0x0;
      uStack_98 = fn_827D96A0(iVar2);
      uStack_94 = 1;
      auStack_90[0] = 0;
      fn_8256D3A8(auStack_60,0xffffffff82196582);
      fn_827D9FB0(puVar5,auStack_60,auStack_90,&uStack_94,&uStack_98,&puStack_a0,&puStack_9c);
      fn_8256D798(auStack_60,1,0);
      *puVar5 = &lbl_821CAC50;
      fn_827D9630(puVar5 + 0x1a,iVar2);
      puVar5[0x20] = *(undefined4 *)(iVar2 + 0x18);
      return puVar5;
    }
  }
  return (undefined4 *)0x0;
}

