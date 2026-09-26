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
extern unsigned int *auStack_140;
extern unsigned int *auStack_180;
extern unsigned int *auStack_1c0;
extern unsigned int *auStack_70;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_f0;
extern int fn_82F4EEC0();
extern int fn_82F595A0();
extern int fn_82F59668();
extern int fn_82F59850();
extern int fn_82F68CC0();
extern int fn_8306ED70();
extern unsigned int uStack_100;
extern unsigned int uStack_108;
extern unsigned int uStack_110;
extern unsigned int uStack_118;
extern unsigned int uStack_120;
extern unsigned int uStack_128;
extern unsigned int uStack_130;
extern unsigned int uStack_148;
extern unsigned int uStack_150;
extern unsigned int uStack_158;
extern unsigned int uStack_160;
extern unsigned int uStack_168;
extern unsigned int uStack_170;
extern unsigned int uStack_178;


int fn_82F4FF38(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_1c0 [64];
  undefined1 auStack_180 [8];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 auStack_140 [2];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [88];
  
  if (param_3 == 2) {
    puVar4 = (undefined8 *)(param_1 + -8);
    puVar5 = (undefined8 *)0x832623f8;
    lVar6 = 8;
    do {
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar5;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  else {
    if (param_3 == 1) {
      fn_82F4EEC0(auStack_180,param_2);
    }
    else if (param_3 == 3) {
      fn_82F4EEC0(auStack_180,param_2);
      fn_8306ED70();
    }
    fn_82F595A0(auStack_f0);
    fn_82F595A0(&uStack_130);
    fn_82F59850((double)*(float *)(param_2 + 0xce0),(double)*(float *)(param_2 + 0xce4),
                  (double)*(float *)(param_2 + 0xce8),auStack_b0);
    fn_82F68CC0(auStack_1c0,auStack_b0,0x40);
    fn_82F59668(&uStack_170,uStack_130,uStack_128,uStack_120,uStack_118,uStack_110,uStack_108,
                 uStack_100);
    fn_82F68CC0(auStack_1c0,auStack_f0,0x40);
    iVar3 = fn_82F59668(auStack_70,uStack_170,uStack_168,uStack_160,uStack_158,uStack_150,
                         uStack_148,auStack_140[0]);
    puVar1 = (undefined4 *)(in_r0 + iVar3 & 0xfffffff0);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    puVar2 = (undefined4 *)((int)&uStack_170 + in_r0 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    puVar1 = (undefined4 *)(iVar3 + 0x10U & 0xfffffff0);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    puVar2 = (undefined4 *)((int)&uStack_160 + in_r0 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    puVar1 = (undefined4 *)(iVar3 + 0x20U & 0xfffffff0);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    puVar5 = &uStack_178;
    puVar2 = (undefined4 *)((int)&uStack_150 + in_r0 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    puVar4 = (undefined8 *)(param_1 + -8);
    puVar1 = (undefined4 *)(iVar3 + 0x30U & 0xfffffff0);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    lVar6 = 8;
    puVar2 = (undefined4 *)((int)auStack_140 + in_r0 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    do {
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar5;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return param_1;
}

