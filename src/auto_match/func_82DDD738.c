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
extern unsigned int *auStack_2ec0;
extern unsigned int *auStack_2ef0;
extern unsigned int *auStack_2f10;
extern unsigned int fStack_2f28;
extern unsigned int fStack_2f2c;
extern unsigned int fStack_2f30;
extern int fn_82DDC940();
extern int fn_82DDCA78();
extern int fn_82DDCBA8();
extern int fn_82DDCE28();
extern int fn_82DDDE48();
extern int fn_82DDDFE0();
extern unsigned int iStack_2f08;
extern unsigned int lbl_82002D08;
extern unsigned int lbl_8208E088;
extern unsigned int lbl_8208ED40;
extern V16 vectorAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


int fn_82DDD738(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 in_r0;
  int iVar4;
  undefined8 uVar3;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int aiStack_2f40 [4];
  float fStack_2f30;
  float fStack_2f2c;
  float fStack_2f28;
  longlong lStack_2f20;
  undefined1 auStack_2f10 [8];
  int iStack_2f08;
  undefined1 auStack_2ef0 [48];
  undefined4 auStack_2ec0 [2992];
  
  dVar7 = (double)lbl_8208ED40;
  dVar8 = (double)lbl_82002D08;
  dVar6 = (double)lbl_8208E088;
  do {
    aiStack_2f40[0] = 0;
    iVar4 = fn_82DDCE28(param_1,param_2,aiStack_2f40);
    if (iVar4 == 1) {
      if (aiStack_2f40[0] != 3) {
        return aiStack_2f40[0];
      }
    }
    else {
      fn_82DDDE48(auStack_2f10,*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
                        *(undefined4 *)(param_1 + 0x68));
      uVar3 = fn_82DDDFE0(auStack_2f10);
      iVar4 = iStack_2f08 * 0x40;
      auStack_2ec0[iStack_2f08 * 0x10] = 0;
      iStack_2f08 = iStack_2f08 + 1;
      fn_82DDC940(param_1,uVar3,auStack_2ef0 + iVar4);
      iVar4 = fn_82DDCA78(param_1,auStack_2f10,uVar3,auStack_2ef0 + iVar4,aiStack_2f40);
      while (iVar2 = iStack_2f08, iVar4 != 1) {
        if (0x36 < iStack_2f08) {
          iVar4 = 2;
          goto LAB_82ddd924;
        }
        uVar3 = fn_82DDDFE0(auStack_2f10);
        iStack_2f08 = iVar2 + 1;
        auStack_2ec0[iVar2 * 0x10] = 0;
        fn_82DDC940(param_1,uVar3,auStack_2ef0 + iVar2 * 0x40);
        iVar4 = fn_82DDCA78(param_1,auStack_2f10,uVar3,auStack_2ef0 + iVar2 * 0x40,
                                  aiStack_2f40);
      }
      iVar4 = aiStack_2f40[0];
      if (aiStack_2f40[0] != 3) {
LAB_82ddd924:
        fn_82DDCBA8(param_1,auStack_2f10,uVar3,param_2);
        return iVar4;
      }
    }
    iVar4 = *(int *)(param_1 + 0x5c) + 1;
    *(int *)(param_1 + 0x5c) = iVar4;
    if (iVar4 == 1) {
      *(undefined4 *)(param_1 + 0x6c) = 1;
    }
    else {
      if (0x13 < iVar4) {
        return aiStack_2f40[0];
      }
      *(undefined4 *)(param_1 + 0x6c) = 0;
      lStack_2f20 = (longlong)(int)(iVar4 * -0x3e39b193 + 0x3039U & 0x7fffffff);
      iVar4 = (int)in_r0;
      puVar1 = (undefined4 *)(iVar4 + param_1 + 0x30 & 0xfffffff0);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      uVar11 = puVar1[2];
      uVar12 = puVar1[3];
      dVar5 = (double)(float)((double)lStack_2f20 * dVar6);
      fStack_2f30 = (float)((double)(float)(dVar5 - dVar8) * dVar7);
      fStack_2f2c = (float)((double)(float)(dVar5 - dVar8) * dVar7);
      fStack_2f28 = (float)((double)(float)(dVar5 - dVar8) * dVar7);{ V16 _vt0 = vectorAddFloatingPoint(in_vs45,in_vs32); memcpy(in_vs32, &_vt0, 16); }
      puVar1 = (undefined4 *)((int)&fStack_2f30 + iVar4 & 0xfffffff0);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      puVar1 = (undefined4 *)(iVar4 + param_1 + 0x30 & 0xfffffff0);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
    }
  } while( true );
}

