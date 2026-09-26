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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int fStack_58;
extern int fn_822B6A58();
extern unsigned int lbl_8218E2B0;
extern unsigned int lbl_821917C0;
extern unsigned int lbl_831C78F0;
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


undefined8 fn_82447E80(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  int in_r0;
  int iVar5;
  undefined1 *puVar6;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float afStack_60 [2];
  float fStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  if (*(int *)(param_2 + 0x24) != 0) {
    iVar5 = fn_822B6A58(afStack_60,param_2,0x13);
    puVar1 = (undefined4 *)(in_r0 + iVar5 & 0xfffffff0);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    puVar2 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    iVar5 = fn_822B6A58(auStack_50,param_2,0x12);
    fVar3 = lbl_831C78F0;
    puVar1 = (undefined4 *)(in_r0 + iVar5 & 0xfffffff0);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    iVar5 = 0;
    puVar2 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    fVar4 = lbl_821917C0;
    puVar6 = auStack_40;
    fVar3 = fVar3 * lbl_8218E2B0;
    do {
      if (*(float *)(puVar6 + 4) < fVar4) {
        puVar1 = (undefined4 *)((uint)(puVar6 + in_r0) & 0xfffffff0);
        uVar7 = puVar1[1];
        uVar8 = puVar1[2];
        uVar9 = puVar1[3];{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs45,in_vs32); memcpy(in_vs45, &_vt0, 16); }
        puVar2 = (undefined4 *)((int)afStack_60 + in_r0 & 0xfffffff0);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
        if (fVar3 < SQRT(fStack_58 * fStack_58 + afStack_60[0] * afStack_60[0])) {
          return 1;
        }
      }
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 0x10;
    } while (iVar5 < 2);
  }
  return 0;
}

