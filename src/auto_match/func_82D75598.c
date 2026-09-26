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
#define TBLr 0
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_82CE6820();
extern int fn_82DD6E28();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;


void fn_82D75598(longlong param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int *param_5
                  )

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int in_r0;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 *puStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined4 *puStack_90;
  undefined4 *puStack_8c;
  undefined1 auStack_80 [128];
  
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = "TtGsk";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  fn_82CE6820(auStack_80,param_2[2],param_3[2]);
  uStack_e8 = *param_2;
  uStack_e4 = *param_3;
  puStack_f0 = auStack_80;
  uStack_ec = param_2[2];
  uStack_e0 = *(undefined4 *)(param_4 + 8);
  iVar5 = fn_82DD6E28(&puStack_f0,param_1 + 0xc,auStack_c0,auStack_d0);
  if (iVar5 == 0) {
    iVar5 = *param_5;
    puVar1 = (undefined4 *)((uint)(auStack_d0 + in_r0) & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar4 = (undefined4 *)((uint)(auStack_c0 + in_r0) & 0xfffffff0);
    uVar9 = *puVar4;
    uVar10 = puVar4[1];
    uVar11 = puVar4[2];
    uVar12 = puVar4[3];
    puVar4 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
    *puVar4 = *puVar1;
    puVar4[1] = uVar6;
    puVar4[2] = uVar7;
    puVar4[3] = uVar8;
    pcVar2 = *(code **)(iVar5 + 4);
    puVar1 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
    *puVar1 = uVar9;
    puVar1[1] = uVar10;
    puVar1[2] = uVar11;
    puVar1[3] = uVar12;
    puStack_90 = param_2;
    puStack_8c = param_3;
    (*pcVar2)(param_5,auStack_b0);
  }
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  return;
}

