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
extern int fn_82F68CC0();


void fn_82ED5AA0(undefined8 param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int in_stack_0000005c;
  int in_stack_0000006c;
  uint in_stack_00000074;
  int in_stack_0000007c;
  uint in_stack_00000084;
  int in_stack_0000008c;
  
  if (in_stack_0000008c == 0) {
    uVar4 = (ulonglong)in_stack_00000074;
    if (0 < (int)in_stack_00000074) {
      do {
        fn_82F68CC0(param_2,param_5,param_8);
        uVar4 = uVar4 - 1;
        param_5 = param_5 + in_stack_0000006c;
        param_2 = param_2 + param_8;
      } while (uVar4 != 0);
    }
    uVar5 = (ulonglong)in_stack_00000084;
    uVar4 = uVar5;
    if (0 < (int)in_stack_00000084) {
      do {
        fn_82F68CC0(param_3,param_6,in_stack_0000005c);
        uVar4 = uVar4 - 1;
        param_6 = param_6 + in_stack_0000007c;
        param_3 = param_3 + in_stack_0000005c;
      } while (uVar4 != 0);
    }
    if (0 < (int)in_stack_00000084) {
      do {
        fn_82F68CC0(param_4,param_7,in_stack_0000005c);
        uVar5 = uVar5 - 1;
        param_7 = param_7 + in_stack_0000007c;
        param_4 = param_4 + in_stack_0000005c;
      } while (uVar5 != 0);
    }
  }
  else {
    uVar4 = (ulonglong)in_stack_00000074;
    iVar1 = param_2 + param_8 + -1;
    if (0 < (int)in_stack_00000074) {
      do {
        if (param_8 != 0) {
          puVar2 = (undefined1 *)(iVar1 + 1);
          puVar3 = (undefined1 *)(param_5 + -1);
          iVar6 = param_8;
          do {
            puVar3 = puVar3 + 1;
            puVar2 = puVar2 + -1;
            *puVar2 = *puVar3;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        uVar4 = uVar4 - 1;
        param_5 = param_5 + in_stack_0000006c;
        iVar1 = iVar1 + param_8;
      } while (uVar4 != 0);
    }
    uVar5 = (ulonglong)in_stack_00000084;
    iVar1 = param_3 + in_stack_0000005c + -1;
    uVar4 = uVar5;
    if (0 < (int)in_stack_00000084) {
      do {
        if (in_stack_0000005c != 0) {
          puVar2 = (undefined1 *)(iVar1 + 1);
          puVar3 = (undefined1 *)(param_6 + -1);
          iVar6 = in_stack_0000005c;
          do {
            puVar3 = puVar3 + 1;
            puVar2 = puVar2 + -1;
            *puVar2 = *puVar3;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        uVar4 = uVar4 - 1;
        param_6 = param_6 + in_stack_0000007c;
        iVar1 = iVar1 + in_stack_0000005c;
      } while (uVar4 != 0);
    }
    iVar1 = param_4 + in_stack_0000005c + -1;
    if (0 < (int)in_stack_00000084) {
      do {
        if (in_stack_0000005c != 0) {
          puVar2 = (undefined1 *)(iVar1 + 1);
          puVar3 = (undefined1 *)(param_7 + -1);
          iVar6 = in_stack_0000005c;
          do {
            puVar3 = puVar3 + 1;
            puVar2 = puVar2 + -1;
            *puVar2 = *puVar3;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        uVar5 = uVar5 - 1;
        param_7 = param_7 + in_stack_0000007c;
        iVar1 = iVar1 + in_stack_0000005c;
      } while (uVar5 != 0);
    }
  }
  return;
}

