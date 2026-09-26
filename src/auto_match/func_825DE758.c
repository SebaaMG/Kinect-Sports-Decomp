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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_8255A1C8();
extern int fn_82A1DD38();
extern unsigned int lbl_83297910;
extern unsigned int lbl_83297920;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorSubtractFloatingPoint();


void fn_825DE758(int param_1,int param_2,int param_3,int param_4,int param_5,undefined8 param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined8 in_r0;
  uint uVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs33 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float in_register_000100d0;
  float in_register_000100d4;
  float in_register_000100d8;
  float in_vr13;
  float in_register_000104d0;
  float in_register_000104d4;
  float in_register_000104d8;
  float in_vr77;
  
  iVar3 = (int)in_r0;
  puVar2 = (undefined4 *)(iVar3 + param_3 & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  uVar1 = *(uint *)(param_1 + 0x310);
  puVar4 = (undefined4 *)(param_1 + 0x3f0U & 0xfffffff0);
  *puVar4 = *puVar2;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  puVar2 = (undefined4 *)(iVar3 + param_4 & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar4 = (undefined4 *)(param_1 + 0x420U & 0xfffffff0);
  *puVar4 = *puVar2;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  puVar2 = (undefined4 *)(iVar3 + param_5 & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar4 = (undefined4 *)(param_1 + 0x410U & 0xfffffff0);
  *puVar4 = *puVar2;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  if ((uVar1 & 0x100) == 0) {
    uVar6 = (uint)LZCOUNT(*(int *)(param_1 + 0x220) + -2) >> 5;
  }
  else {
    uVar6 = 1;
  }
  if (((*(int *)(param_2 + 0xf28) == 0) && (*(int *)(param_2 + 0xf20) == 0)) &&
     (*(uint *)(param_2 + 0xf2c) == uVar6)) {
    if ((((uVar1 & 0x100) == 0) && (*(int *)(param_1 + 0x220) != 2)) ||
       (*(int *)(param_1 + 0x1ac) == 0)) {
      fn_8255A1C8((double)*(float *)(param_2 + 0x70),(double)*(float *)(param_2 + 0x74),
                        (double)*(float *)(param_2 + 0x78));
      pfVar5 = (float *)((int)in_r0 + param_3 & 0xfffffff0);
      vectorSubtractFloatingPoint(in_vs32,in_vs33);
      loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x40);
      in_register_000104d0 = *pfVar5 * in_register_000100d0;
      in_register_000104d4 = pfVar5[1] * in_register_000100d4;
      in_register_000104d8 = pfVar5[2] * in_register_000100d8;
      in_vr77 = pfVar5[3] * in_vr13;
    }
    else {
      pfVar5 = (float *)(*(int *)(param_1 + 0x1ac) + 0xd0U & 0xfffffff0);
      in_register_000104d0 = *pfVar5;
      in_register_000104d4 = pfVar5[1];
      in_register_000104d8 = pfVar5[2];
      in_vr77 = pfVar5[3];
    }
  }
  else if ((lbl_83297920 & 1) == 0) {
    lbl_83297920 = lbl_83297920 | 1;
    pfVar5 = (float *)((int)&lbl_83297910 + iVar3 & 0xfffffff0);
    *pfVar5 = in_register_000104d0;
    pfVar5[1] = in_register_000104d4;
    pfVar5[2] = in_register_000104d8;
    pfVar5[3] = in_vr77;
  }
  else {
    pfVar5 = (float *)((int)&lbl_83297910 + iVar3 & 0xfffffff0);
    in_register_000104d0 = *pfVar5;
    in_register_000104d4 = pfVar5[1];
    in_register_000104d8 = pfVar5[2];
    in_vr77 = pfVar5[3];
  }
  pfVar5 = (float *)(param_1 + 0x400U & 0xfffffff0);
  *pfVar5 = in_register_000104d0;
  pfVar5[1] = in_register_000104d4;
  pfVar5[2] = in_register_000104d8;
  pfVar5[3] = in_vr77;
  fn_82A1DD38(param_2 + 0x40,param_6,0x50);
  return;
}

