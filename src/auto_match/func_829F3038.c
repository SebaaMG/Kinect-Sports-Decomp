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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_829F2AA0();
extern int fn_829F2E18();
extern unsigned int iStack_9c;
extern unsigned int iStack_a0;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int iStack_b4;
extern unsigned int iStack_b8;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_a8;


void fn_829F3038(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uStack0000001c;
  int aiStack_c0 [2];
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  int iStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  iVar1 = *(int *)(param_4 + 0x5c);
  iVar2 = *(int *)(param_4 + 0x58);
  uStack_a8 = *(undefined4 *)(param_4 + 0x60);
  *(undefined4 *)(param_5 + 0x104) = 1;
  iVar6 = iVar1 + 1;
  uStack_98 = 5;
  uStack_94 = 6;
  iVar7 = param_3 + 0x144;
  uStack0000001c = (undefined4)param_2;
  iVar3 = param_5;
  iStack_a0 = iVar2;
  iStack_9c = iVar6;
  fn_829F2AA0(param_1,param_2,*(undefined2 *)(param_3 + 0x144),0x500000006,CONCAT44(iVar2,iVar6));
  iVar5 = iVar2 + 1;
  uStack_98 = 6;
  uStack_94 = 5;
  iStack_a0 = iVar5;
  iStack_9c = iVar1;
  fn_829F2AA0();
  uStack_98 = 6;
  uStack_94 = 6;
  iStack_a0 = iVar5;
  iStack_9c = iVar6;
  fn_829F2AA0();
  iVar12 = 1;
  if (1 < *(int *)(iVar3 + 0x240)) {
    do {
      iStack_b4 = -iVar12;
      iVar11 = iStack_b4 + 5;
      iVar8 = (iVar12 + 1) * 2;
      iVar9 = iStack_b4 + iVar2;
      iStack_b4 = iStack_b4 + iVar1;
      iVar3 = iVar9;
      aiStack_c0[0] = iVar8;
      iStack_b0 = iVar11;
      if (iVar12 == 5) {
        iVar3 = iVar9 + 1;
        iStack_b0 = 1;
        aiStack_c0[0] = 10;
      }
      uStack_98 = 1;
      uStack_94 = 0;
      iStack_a0 = 0;
      iStack_9c = 1;
      iStack_b8 = iVar3;
      if (iVar3 < 1) {
        iStack_b8 = 1;
        iStack_b0 = (iStack_b0 - iVar3) + 1;
        aiStack_c0[0] = iVar3 + aiStack_c0[0] + -1;
      }
      if (0x4e < iStack_b8 + aiStack_c0[0]) {
        aiStack_c0[0] = 0x4e - iStack_b8;
      }
      if (0 < iStack_b4) {
        iStack_ac = iVar11;
        fn_829F2E18(param_1,&stack0x0000001c,iVar7,&iStack_b0,&iStack_b8,&uStack_98,&iStack_a0,
                      aiStack_c0);
      }
      iVar4 = iVar6 + iVar12;
      iVar10 = iVar12 + 6;
      iVar3 = iVar9;
      aiStack_c0[0] = iVar8;
      iStack_b0 = iVar11;
      if (iVar12 == 5) {
        iVar3 = iVar9 + 1;
        iStack_b0 = 1;
        aiStack_c0[0] = 10;
      }
      uStack_98 = 1;
      uStack_94 = 0;
      iStack_a0 = 0;
      iStack_9c = 0xffffffff;
      iStack_b8 = iVar3;
      if (iVar3 < 1) {
        iStack_b8 = 1;
        iStack_b0 = (iStack_b0 - iVar3) + 1;
        aiStack_c0[0] = iVar3 + aiStack_c0[0] + -1;
      }
      if (0x4e < iStack_b8 + aiStack_c0[0]) {
        aiStack_c0[0] = 0x4e - iStack_b8;
      }
      if (iVar4 < 0x3c) {
        iStack_b4 = iVar4;
        iStack_ac = iVar10;
        fn_829F2E18(param_1,&stack0x0000001c,iVar7,&iStack_b0,&iStack_b8,&uStack_98,&iStack_a0,
                      aiStack_c0);
      }
      iVar3 = iVar4;
      aiStack_c0[0] = iVar8;
      iStack_ac = iVar10;
      if (iVar12 == 5) {
        iVar3 = iVar4 + -1;
        iStack_ac = 10;
        aiStack_c0[0] = 10;
      }
      uStack_98 = 0;
      uStack_94 = 0xffffffff;
      iStack_a0 = 1;
      iStack_9c = 0;
      if (iVar3 - aiStack_c0[0] < 1) {
        aiStack_c0[0] = iVar3 + -1;
      }
      iStack_b4 = iVar3;
      if (0x3a < iVar3) {
        iStack_b4 = 0x3a;
        iStack_ac = (iStack_ac - iVar3) + 0x3a;
        aiStack_c0[0] = (aiStack_c0[0] - iVar3) + 0x3a;
      }
      if (0 < iVar9) {
        iStack_b8 = iVar9;
        iStack_b0 = iVar11;
        fn_829F2E18(param_1,&stack0x0000001c,iVar7,&iStack_b0,&iStack_b8,&uStack_98,&iStack_a0,
                      aiStack_c0);
      }
      iStack_b8 = iVar5 + iVar12;
      aiStack_c0[0] = iVar8;
      iStack_ac = iVar10;
      if (iVar12 == 5) {
        iVar4 = iVar4 + -1;
        iStack_ac = 10;
        aiStack_c0[0] = 10;
      }
      uStack_98 = 0;
      uStack_94 = 0xffffffff;
      iStack_a0 = -1;
      iStack_9c = 0;
      if (iVar4 - aiStack_c0[0] < 1) {
        aiStack_c0[0] = iVar4 + -1;
      }
      iStack_b4 = iVar4;
      if (0x3a < iVar4) {
        iStack_b4 = 0x3a;
        iStack_ac = (iStack_ac - iVar4) + 0x3a;
        aiStack_c0[0] = (aiStack_c0[0] - iVar4) + 0x3a;
      }
      if (iStack_b8 < 0x50) {
        iStack_b0 = iVar10;
        fn_829F2E18(param_1,&stack0x0000001c,iVar7,&iStack_b0,&iStack_b8,&uStack_98,&iStack_a0,
                      aiStack_c0);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(param_5 + 0x240));
  }
  return;
}

