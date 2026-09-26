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
extern unsigned int lbl_82132D10;
extern unsigned int lbl_82134B90;
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorNegativeMultiplySubtractFloatingPoint();
extern V16 vectorReciprocalEstimateFloatingPoint();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D35080(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined1 auVar3 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  *param_1 = &lbl_82134B90;
  param_1[9] = 0x80000000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xc] = 0x80000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  puVar1 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar1 = (undefined4 *)((uint)(param_1 + 0x10) & 0xfffffff0);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(param_1 + 0x14) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar9;
  puVar2[2] = uVar10;
  puVar2[3] = uVar11;
  puVar1 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  puVar2 = (undefined4 *)((uint)(param_1 + 0x18) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar9;
  puVar2[2] = uVar10;
  puVar2[3] = uVar11;
  vectorRotateLeftImmediateMaskInsert128
            (*(undefined1 (*) [16])(in_r0 + param_4 & 0xfffffff0),
             *(undefined1 (*) [16])((uint)(&lbl_82132D10 + in_r0) & 0xfffffff0),1,0);
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 5) = 0x7fff;{ V16 _vt0 = vectorReciprocalEstimateFloatingPoint(in_vs42); memcpy(auVar3, &_vt0, 16); }{ V16 _vt1 = vectorNegativeMultiplySubtractFloatingPoint(auVar3,in_vs42,in_vs43); memcpy(auVar4, &_vt1, 16); }
  vectorMultiplyAddFloatingPoint(auVar4,auVar3,auVar3);
  puVar1 = (undefined4 *)((uint)(param_1 + 0x1c) & 0xfffffff0);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  return;
}

