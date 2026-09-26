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
extern int fn_828252D0();
extern int fn_828252D8();
extern int fn_8282F458();
extern int fn_8282F700();
extern int fn_8282F920();
extern int fn_82F678C8();
extern int fn_82F67988();


void fn_8282F988(int param_1)

{
  int iVar1;
  int iVar5;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar6;
  int *piVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  int aiStack_40 [16];
  
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  if (*(int *)(param_1 + 0xd4) == 0) {
    return;
  }
  fn_8282F700(param_1,aiStack_40);
  if (aiStack_40[0] == 0) {
    *(undefined4 *)(param_1 + 0x130) = 1;
    return;
  }
  iVar5 = fn_8282F458(param_1 + 0x80,aiStack_40[0]);
  *(int *)(param_1 + 0x130) = iVar5;
  if (iVar5 == 0) {
    if (*(longlong *)(param_1 + 0x14) == *(longlong *)(param_1 + 0x98)) {
      uVar9 = ((ulonglong)*(uint *)(param_1 + 0xac) * 5 +
               ((ulonglong)*(uint *)(param_1 + 0xa0) & 0x1fffffff) * 8 +
               (ulonglong)*(uint *)(param_1 + 0xa4) & 0x3fffffff) * 4 +
              (ulonglong)*(uint *)(param_1 + 0xa8);
      lVar2 = fn_828252D0(uVar9);
      uVar3 = fn_82F678C8(lVar2,1,uVar9,aiStack_40[0]);
      if ((uVar3 & 0xffffffff) == (uVar9 & 0xffffffff)) {
        *(int *)(param_1 + 0x120) = (int)lVar2;
        lVar2 = ((ulonglong)*(uint *)(param_1 + 0xa0) & 0x7ffffff) * 0x20 + lVar2;
        lVar6 = ((ulonglong)*(uint *)(param_1 + 0xa4) & 0x3fffffff) * 4 + lVar2;
        *(int *)(param_1 + 0x124) = (int)lVar2;
        *(int *)(param_1 + 0x128) = (int)lVar6;
        lVar6 = (ulonglong)*(uint *)(param_1 + 0xa8) + lVar6;
        uVar4 = fn_828252D0(*(int *)(param_1 + 0x28) << 2);
        *(int *)(param_1 + 300) = (int)uVar4;
        fn_8282F920(param_1,lVar6,uVar4);
        uVar3 = (ulonglong)*(uint *)(param_1 + 0xa4);
        iVar5 = 0;
        if (uVar3 != 0) {
          piVar7 = (int *)(*(int *)(param_1 + 0x124) + -4);
          do {
            iVar1 = piVar7[1];
            piVar7 = piVar7 + 1;
            *piVar7 = iVar5;
            iVar5 = iVar1 + iVar5;
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
        }
        iVar5 = *(int *)(param_1 + 0xac) * 0x14 + (int)lVar6;
        *(int *)(param_1 + 0x10c) = iVar5;
        *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0xb0) * 8 + iVar5;
        goto LAB_8282faf8;
      }
      fn_828252D8(lVar2);
      uVar8 = 5;
    }
    else {
      uVar8 = 2;
    }
    *(undefined4 *)(param_1 + 0x130) = uVar8;
  }
LAB_8282faf8:
  fn_82F67988(aiStack_40[0]);
  return;
}

