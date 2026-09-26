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
extern int fn_82A1DDC0();
extern int fn_82CD3A80();


void fn_82CD42A0(int param_1,longlong param_2,longlong param_3,int param_4,longlong param_5,
                  longlong param_6,longlong param_7,longlong param_8)

{
  undefined1 *puVar1;
  uint uVar3;
  longlong lVar2;
  undefined1 *puVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int in_stack_00000054;
  
  param_8 = param_8 - param_7;
  iVar7 = (int)param_8;
  uVar6 = *(uint *)(in_stack_00000054 + 0x3904);
  uVar3 = *(int *)(in_stack_00000054 + 0x38fc) * (int)param_7;
  uVar8 = uVar6 * (int)param_7;
  lVar5 = (longlong)((int)uVar3 >> 2) + (ulonglong)((int)uVar3 < 0 && (uVar3 & 3) != 0);
  lVar2 = (longlong)((int)uVar8 >> 2) + (ulonglong)((int)uVar8 < 0 && (uVar8 & 3) != 0);
  param_2 = (ulonglong)*(uint *)(in_stack_00000054 + 0x38d0) + lVar5 + param_2;
  param_3 = (ulonglong)*(uint *)(in_stack_00000054 + 0x38d4) + lVar5 + param_3;
  lVar5 = ((ulonglong)*(uint *)(in_stack_00000054 + 0x3934) & 0x7fffffff) * 2;
  param_1 = *(int *)(in_stack_00000054 + 0x38cc) + uVar3 + param_1;
  param_4 = *(int *)(in_stack_00000054 + 0x38a8) + uVar8 + param_4;
  param_5 = (ulonglong)*(uint *)(in_stack_00000054 + 0x38ac) + lVar2 + param_5;
  param_6 = (ulonglong)*(uint *)(in_stack_00000054 + 0x38b0) + lVar2 + param_6;
  if (iVar7 < 0x11) {
    lVar2 = param_8;
    if (0 < iVar7) {
      do {
        fn_82A1DDC0(param_4,param_1,*(undefined4 *)(in_stack_00000054 + 0x3890));
        lVar2 = lVar2 + -1;
        param_4 = *(int *)(in_stack_00000054 + 0x3904) + param_4;
        param_1 = *(int *)(in_stack_00000054 + 0x38fc) + param_1;
      } while (lVar2 != 0);
      if (0 < iVar7) {
        lVar2 = ((param_8 - 1U & 0xffffffff) >> 1) + 1;
        do {
          fn_82A1DDC0(param_5,param_2,*(undefined4 *)(in_stack_00000054 + 0x3898));
          lVar2 = lVar2 + -1;
          param_2 = lVar5 + param_2;
          param_5 = (ulonglong)*(uint *)(in_stack_00000054 + 0x3938) + param_5;
        } while (lVar2 != 0);
        if (0 < iVar7) {
          lVar2 = ((param_8 - 1U & 0xffffffff) >> 1) + 1;
          do {
            fn_82A1DDC0(param_6,param_3,*(undefined4 *)(in_stack_00000054 + 0x3898));
            lVar2 = lVar2 + -1;
            param_3 = lVar5 + param_3;
            param_6 = (ulonglong)*(uint *)(in_stack_00000054 + 0x3938) + param_6;
          } while (lVar2 != 0);
        }
      }
    }
  }
  else {
    if (0 < iVar7) {
      puVar1 = (undefined1 *)(param_4 + -1);
      puVar4 = (undefined1 *)(param_1 + -1);
      lVar2 = param_8;
      do {
        iVar7 = 0;
        if (0 < (int)uVar6) {
          do {
            puVar4 = puVar4 + 1;
            iVar7 = iVar7 + 1;
            puVar1 = puVar1 + 1;
            *puVar1 = *puVar4;
            uVar6 = *(uint *)(in_stack_00000054 + 0x3904);
          } while (iVar7 < (int)uVar6);
        }
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    uVar3 = *(uint *)(in_stack_00000054 + 0x3890);
    fn_82CD3A80(param_2,param_5,*(undefined4 *)(in_stack_00000054 + 0x38c0),
                  (longlong)((int)uVar6 >> 1) + (ulonglong)((int)uVar6 < 0 && (uVar6 & 1) != 0),1,1,
                  (longlong)((int)uVar3 >> 1) + (ulonglong)((int)uVar3 < 0 && (uVar3 & 1) != 0),
                  param_8);
    uVar6 = *(uint *)(in_stack_00000054 + 0x3904);
    fn_82CD3A80(param_3,param_6,*(undefined4 *)(in_stack_00000054 + 0x38c0),
                  (longlong)((int)uVar6 >> 1) + (ulonglong)((int)uVar6 < 0 && (uVar6 & 1) != 0));
  }
  return;
}

