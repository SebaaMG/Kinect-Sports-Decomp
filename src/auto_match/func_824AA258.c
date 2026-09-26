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
#define NAN(x) ((x) != (x))
extern unsigned int iStack_48;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int stack0x00000000;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern V16 loadVectorLeftIndexed128();


undefined8 fn_824AA258(undefined8 param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined8 in_r0;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float in_register_00010000;
  float in_ACC;
  float in_register_00010008;
  float in_vr0;
  float in_register_000104d0;
  float in_register_000104d4;
  float in_register_000104d8;
  float in_vr77;
  uint uStack_50;
  uint uStack_4c;
  int iStack_48;
  uint uStack_44;
  
  uVar6 = ZEXT48(&stack0x00000000);
  (**(code **)*param_3)(param_3,uVar6 - 0x50,uVar6 - 0x4c);
  fVar2 = (float)((uStack_4c - param_4) + 1);
  iVar1 = *(int *)(param_2 + 0x3c);
  fVar3 = (float)uStack_50 - fVar2;
  fVar4 = (float)uStack_50;
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar3 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar3) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    fVar4 = fVar2;
  }
  uVar8 = (ulonglong)fVar4;
  uStack_44 = (uint)uVar8;
  uVar7 = uVar8 & 0xffffffff;
  if (uStack_44 <= uStack_4c) {
    do {
      (**(code **)(*param_3 + 4))(param_3,uVar7,uVar6 - 0x48);
      iStack_48 = (int)(uVar8 >> 0x20);
      uVar7 = uVar7 + 1;
      pfVar5 = (float *)(*(int *)(iStack_48 + 0x40) +
                         ((-(uint)(iVar1 != 0) & 0xfffffffc) + 10) * 0x40 + 0x10 & 0xfffffff0);
      in_register_00010000 = *pfVar5;
      in_ACC = pfVar5[1];
      in_register_00010008 = pfVar5[2];
      in_vr0 = pfVar5[3];
      in_register_000104d0 = in_register_000104d0 + in_register_00010000;
      in_register_000104d4 = in_register_000104d4 + in_ACC;
      in_register_000104d8 = in_register_000104d8 + in_register_00010008;
      in_vr77 = in_vr77 + in_vr0;
    } while ((uVar7 & 0xffffffff) <= (ulonglong)uStack_4c);
  }
  loadVectorLeftIndexed128(in_r0,uVar6 - 0x48);
  pfVar5 = (float *)((int)in_r0 + (int)param_1 & 0xfffffff0);
  *pfVar5 = in_register_000104d0 * in_register_00010000;
  pfVar5[1] = in_register_000104d4 * in_ACC;
  pfVar5[2] = in_register_000104d8 * in_register_00010008;
  pfVar5[3] = in_vr77 * in_vr0;
  return param_1;
}

