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
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int fStack_4c;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_82D401F8();
extern float lbl_82002C5C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_54;


void fn_82E00530(int param_1,int param_2,ulonglong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_r0;
  longlong lVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  uVar1 = *(uint *)(param_1 + 0x10);
  iVar4 = (int)(param_3 & 0xff);
  pfVar6 = (float *)(*(int *)(*(int *)(param_2 + 0x1c) + 0x8c) +
                    (iVar4 + ((uint)param_3 & 0xff) * 4) * 8);
  fStack_60 = *pfVar6;
  fStack_58 = pfVar6[2] * lbl_82002C5C;
  uStack_54 = lbl_821AAD20;
  uStack_50 = lbl_821AAD20;
  uStack_48 = lbl_821AAD20;
  lVar5 = (param_3 & 0xff) + (param_3 & 0xff) * 2;
  uStack_44 = lbl_821AAD20;
  fStack_5c = (*(float *)(*(int *)(*(int *)(param_2 + 0x34) + 8) +
                          (iVar4 + ((uint)param_3 & 0xff) * 2) * 0x10 + 0x20) + fStack_60) *
              lbl_82002C5C;
  puVar2 = (undefined4 *)((int)&fStack_60 + in_r0 & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar3 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  fStack_4c = -fStack_5c;
  puVar2 = (undefined4 *)((int)&uStack_50 + in_r0 & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar3 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  fn_82D401F8(lVar5 * 0x20 + (ulonglong)uVar1 + 0x10,auStack_30,auStack_40,lVar5,param_4);
  return;
}

