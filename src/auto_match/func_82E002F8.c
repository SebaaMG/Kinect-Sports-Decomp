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
extern unsigned int fStack_10;
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern U64 storeVectorElementWordIndexed();
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82E002F8(undefined8 param_1,int param_2,uint param_3,int param_4,int param_5)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  longlong lVar4;
  int iVar5;
  undefined1 in_vs34 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 in_vs50 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 in_vs56 [16];
  undefined1 in_vs57 [16];
  undefined1 in_vs58 [16];
  undefined1 in_vs59 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fStack_10;
  
  puVar2 = (undefined4 *)(in_r0 + param_4 & 0xfffffff0);
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  fVar1 = *(float *)(*(int *)(*(int *)(param_2 + 0x34) + 8) +
                     ((param_3 & 0xff) + (param_3 & 0xff) * 2) * 0x10 + 0x20);
  puVar3 = (undefined4 *)(in_r0 + param_5 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar8;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  puVar2 = (undefined4 *)(param_4 + 0x10U & 0xfffffff0);
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  puVar3 = (undefined4 *)(in_r0 + param_5 + 0x10 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar8;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  iVar5 = *(int *)(param_4 + 0x28);
  if (*(char *)(iVar5 + 0x18) == '\x01') {
    iVar5 = *(char *)(iVar5 + 0x10) + iVar5;
  }
  else {
    iVar5 = 0;
  }
  *(int *)(param_5 + 0x24) = iVar5;
  *(undefined4 *)(param_5 + 0x20) = *(undefined4 *)(iVar5 + 0x90);
  *(undefined4 *)(param_5 + 0x28) = *(undefined4 *)(param_4 + 0x2c);
  *(undefined4 *)(param_5 + 0x2c) = 0xffffffff;
  *(float *)(param_5 + 0x48) = *(float *)(param_4 + 0x1c) * fVar1;
  lVar4 = ZEXT48(&stack0x00000000) - 0x10;
  uVar8 = storeVectorElementWordIndexed(in_vs44,0,lVar4);
  *(undefined4 *)lVar4 = uVar8;
  if (fStack_10 < -*(float *)(*(int *)(param_2 + 0x1c) + 0x84)) {
    lVar4 = ZEXT48(&stack0x00000000) - 0x10;
    vectorSubtractFloatingPoint(in_vs45,in_vs44);
    vectorSubtractFloatingPoint(in_vs45,in_vs43);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs57,in_vs59); memcpy(auVar7, &_vt0, 16); }{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs56,in_vs58); memcpy(auVar6, &_vt1, 16); }{ V16 _vt2 = vectorAddFloatingPoint(auVar7,in_vs36); memcpy(auVar7, &_vt2, 16); }{ V16 _vt3 = vectorAddFloatingPoint(auVar6,in_vs34); memcpy(auVar6, &_vt3, 16); }
    vectorSubtractFloatingPoint(auVar6,auVar7);
    uVar8 = storeVectorElementWordIndexed(in_vs50,0,lVar4);
    *(undefined4 *)lVar4 = uVar8;
    fVar1 = lbl_8200133C / fStack_10;
    *(float *)(param_5 + 0x50) = fVar1;
    *(float *)(param_5 + 0x4c) = fStack_10 * fVar1;
    return;
  }
  *(undefined4 *)(param_5 + 0x4c) = lbl_821AAD20;
  *(float *)(param_5 + 0x50) = lbl_82002AE0 / *(float *)(*(int *)(param_2 + 0x1c) + 0x84);
  return;
}

