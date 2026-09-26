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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_8253D448();
extern int fn_82D81CC8();
extern unsigned int iStack_3c;
extern unsigned int iStack_70;
extern unsigned int lbl_821C91AC;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


int fn_825CD180(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 *param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 uStack_90;
  undefined4 uStack_8c;
  undefined **ppuStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [20];
  int iStack_3c;
  
  iVar1 = *(int *)(param_1 + 0x1f8);
  if (iVar1 == 0) {
    iStack_3c = 0;
  }
  else {
    puVar2 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    puVar3 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
    uVar7 = *puVar3;
    uVar8 = puVar3[1];
    uVar9 = puVar3[2];
    uVar10 = puVar3[3];
    puVar3 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar4;
    puVar3[2] = uVar5;
    puVar3[3] = uVar6;
    puVar2 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
    *puVar2 = uVar7;
    puVar2[1] = uVar8;
    puVar2[2] = uVar9;
    puVar2[3] = uVar10;
    uStack_90 = 0;
    uStack_8c = 0;
    fn_8253D448(param_1 + 0x1f0,param_7);
    uStack_8c = 0xe;
    uStack_90 = 1;
    uStack_68 = 0;
    iStack_3c = 0;
    uStack_7c = lbl_821CA460;
    ppuStack_80 = &lbl_821C91AC;
    puVar2 = (undefined4 *)((uint)(auStack_a0 + in_r0) & 0xfffffff0);
    uVar4 = *puVar2;
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    uStack_78 = *param_6;
    uStack_74 = param_6[1];
    puVar2 = (undefined4 *)((uint)(auStack_b0 + in_r0) & 0xfffffff0);
    uVar8 = puVar2[1];
    uVar9 = puVar2[2];
    uVar10 = puVar2[3];
    puVar3 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar8;
    puVar3[2] = uVar9;
    puVar3[3] = uVar10;
    puVar2 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
    *puVar2 = uVar4;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    iStack_70 = param_5;
    uStack_6c = param_4;
    fn_82D81CC8(iVar1,auStack_b0,&ppuStack_80);
    if (iStack_3c != 0) {
      puVar2 = (undefined4 *)(in_r0 + param_5 & 0xfffffff0);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      puVar3[2] = uVar5;
      puVar3[3] = uVar6;
    }
  }
  return iStack_3c;
}

