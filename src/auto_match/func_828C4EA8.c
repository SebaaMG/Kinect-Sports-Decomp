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
extern int fn_828C48B0();
extern unsigned int iStack_40;
extern unsigned int uStack00000010;


void fn_828C4EA8(ulonglong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar4;
  longlong lVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uStack00000010;
  int iStack_40;
  
  uVar8 = param_1 & 0xffffffff;
  lVar2 = (param_2 + 1U & 0x7fffffff) << 1;
  iStack_40 = (int)(param_1 >> 0x20);
  iVar4 = (int)lVar2;
  lVar1 = param_2;
  while (lVar3 = lVar2, iVar4 < (int)param_3) {
    uVar5 = uVar8 + lVar3;
    uVar6 = (uVar5 - 1 & 0xffffffff) >> 2;
    if (*(uint *)(iStack_40 + 8) <= uVar6) {
      uVar6 = uVar6 - *(uint *)(iStack_40 + 8);
    }
    uVar7 = (uVar5 & 0xffffffff) >> 2;
    if (*(uint *)(iStack_40 + 8) <= uVar7) {
      uVar7 = uVar7 - *(uint *)(iStack_40 + 8);
    }
    if (*(uint *)(*(int *)(*(int *)(*(int *)(iStack_40 + 4) + (int)((uVar7 & 0xffffffff) << 2)) +
                          (int)((uVar5 & 3) << 2)) + 8) <
        *(uint *)(*(int *)(*(int *)(*(int *)(iStack_40 + 4) + (int)((uVar6 & 0xffffffff) << 2)) +
                          (int)((uVar5 - 1 & 3) << 2)) + 8)) {
      lVar3 = lVar3 + -1;
    }
    uVar6 = (uVar8 + lVar3 & 0xffffffff) >> 2;
    if (*(uint *)(iStack_40 + 8) <= uVar6) {
      uVar6 = uVar6 - *(uint *)(iStack_40 + 8);
    }
    uVar5 = (uVar8 + lVar1 & 0xffffffff) >> 2;
    if (*(uint *)(iStack_40 + 8) <= uVar5) {
      uVar5 = uVar5 - *(uint *)(iStack_40 + 8);
    }
    lVar2 = (lVar3 + 1U & 0x7fffffff) << 1;
    *(undefined4 *)
     (*(int *)(*(int *)(iStack_40 + 4) + (int)((uVar5 & 0xffffffff) << 2)) +
     (int)((uVar8 + lVar1 & 3) << 2)) =
         *(undefined4 *)
          (*(int *)(*(int *)(iStack_40 + 4) + (int)((uVar6 & 0xffffffff) << 2)) +
          (int)((uVar8 + lVar3 & 3) << 2));
    iVar4 = (int)lVar2;
    lVar1 = lVar3;
  }
  if (iVar4 == (int)param_3) {
    uVar5 = (uVar8 + param_3) - 1;
    uVar6 = (uVar5 & 0xffffffff) >> 2;
    if (*(uint *)(iStack_40 + 8) <= uVar6) {
      uVar6 = uVar6 - *(uint *)(iStack_40 + 8);
    }
    uVar8 = uVar8 + lVar1;
    uVar7 = (uVar8 & 0xffffffff) >> 2;
    if (*(uint *)(iStack_40 + 8) <= uVar7) {
      uVar7 = uVar7 - *(uint *)(iStack_40 + 8);
    }
    lVar1 = param_3 + -1;
    *(undefined4 *)
     (*(int *)(*(int *)(iStack_40 + 4) + (int)((uVar7 & 0xffffffff) << 2)) + (int)((uVar8 & 3) << 2)
     ) = *(undefined4 *)
          (*(int *)(*(int *)(iStack_40 + 4) + (int)((uVar6 & 0xffffffff) << 2)) +
          (int)((uVar5 & 3) << 2));
  }
  uStack00000010 = param_1;
  fn_828C48B0(param_1,lVar1,param_2);
  return;
}

