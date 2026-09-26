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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int fStack_80;
extern int fn_82DDD738();
extern int fn_82DE3730();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;


undefined8
fn_82DDD950(double param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar5;
  undefined8 uVar4;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_register_00010090;
  undefined4 in_register_00010094;
  undefined4 in_register_00010098;
  undefined4 in_vr9;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 in_stack_00000054;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  float afStack_90 [4];
  float fStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = "TtPenetration";
    uVar4 = TBLr;
    puVar1[1] = (int)uVar4;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  afStack_90[0] = (float)param_1;
  puVar1 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  fStack_80 = (float)(param_1 * param_1);
  puVar3 = (undefined4 *)((uint)(auStack_d0 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  puVar1 = (undefined4 *)(param_4 + 0x10U & 0xfffffff0);
  uVar10 = puVar1[1];
  uVar11 = puVar1[2];
  uVar12 = puVar1[3];
  uStack_7c = (undefined4)param_2;
  puVar3 = (undefined4 *)(param_4 + 0x20U & 0xfffffff0);
  uVar6 = *puVar3;
  uVar7 = puVar3[1];
  uVar8 = puVar3[2];
  uVar9 = puVar3[3];
  uStack_78 = (undefined4)param_3;
  puVar3 = (undefined4 *)((uint)(auStack_c0 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar10;
  puVar3[2] = uVar11;
  puVar3[3] = uVar12;
  uStack_70 = (undefined4)param_6;
  puVar1 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  puVar1 = (undefined4 *)(param_4 + 0x30U & 0xfffffff0);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  uStack_6c = (undefined4)param_7;
  puVar3 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  uStack_74 = 0;
  puVar1 = (undefined4 *)((int)afStack_90 + in_r0 & 0xfffffff0);
  *puVar1 = in_register_00010090;
  puVar1[1] = in_register_00010094;
  puVar1[2] = in_register_00010098;
  puVar1[3] = in_vr9;
  uStack_68 = param_8;
  uStack_64 = param_9;
  uVar4 = fn_82DDD738(auStack_d0,in_stack_00000054);
  if ((int)uVar4 == 3) {
    fn_82DE3730(param_2,param_3,param_4,param_6,param_7,in_stack_00000054);
    uVar4 = 1;
  }
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  return uVar4;
}

