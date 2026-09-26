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
extern int fn_82CA8A18();


void fn_82CA91C8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  longlong param_7,longlong param_8)

{
  ulonglong uVar1;
  uint *puVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint in_stack_00000054;
  uint in_stack_0000005c;
  int in_stack_00000064;
  int in_stack_0000006c;
  int in_stack_00000074;
  
  if (0 < (int)param_7) {
    param_1 = param_1 - param_4;
    do {
      if (0 < (int)param_8) {
        puVar2 = (uint *)(in_stack_00000074 + -4);
        pbVar4 = (byte *)((param_1 - in_stack_00000064) + param_4);
        lVar8 = param_8;
        do {
          pbVar4 = pbVar4 + in_stack_00000064;
          puVar2 = puVar2 + 1;
          *puVar2 = (uint)*pbVar4;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      in_stack_00000074 = fn_82CA8A18();
      if (0 < (int)param_8) {
        puVar5 = (undefined4 *)(in_stack_00000074 + -4);
        puVar3 = (undefined1 *)(param_4 - in_stack_00000064);
        lVar8 = param_8;
        do {
          puVar5 = puVar5 + 1;
          puVar3 = puVar3 + in_stack_00000064;
          *puVar3 = (char)*puVar5;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      param_7 = param_7 + -1;
      param_4 = param_4 + 1;
    } while (param_7 != 0);
  }
  uVar6 = (ulonglong)in_stack_00000054;
  uVar1 = (ulonglong)in_stack_0000005c;
  if (0 < (int)in_stack_00000054) {
    param_2 = param_2 - param_5;
    uVar7 = uVar6;
    do {
      if (0 < (int)uVar1) {
        puVar2 = (uint *)(in_stack_00000074 + -4);
        pbVar4 = (byte *)((param_2 - in_stack_0000006c) + param_5);
        uVar9 = uVar1;
        do {
          pbVar4 = pbVar4 + in_stack_0000006c;
          puVar2 = puVar2 + 1;
          *puVar2 = (uint)*pbVar4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      in_stack_00000074 = fn_82CA8A18();
      if (0 < (int)uVar1) {
        puVar5 = (undefined4 *)(in_stack_00000074 + -4);
        puVar3 = (undefined1 *)(param_5 - in_stack_0000006c);
        uVar9 = uVar1;
        do {
          puVar5 = puVar5 + 1;
          puVar3 = puVar3 + in_stack_0000006c;
          *puVar3 = (char)*puVar5;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      uVar7 = uVar7 - 1;
      param_5 = param_5 + 1;
    } while (uVar7 != 0);
    if (0 < (int)in_stack_00000054) {
      param_3 = param_3 - param_6;
      do {
        if (0 < (int)uVar1) {
          puVar2 = (uint *)(in_stack_00000074 + -4);
          pbVar4 = (byte *)((param_3 - in_stack_0000006c) + param_6);
          uVar7 = uVar1;
          do {
            pbVar4 = pbVar4 + in_stack_0000006c;
            puVar2 = puVar2 + 1;
            *puVar2 = (uint)*pbVar4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        in_stack_00000074 = fn_82CA8A18();
        if (0 < (int)uVar1) {
          puVar5 = (undefined4 *)(in_stack_00000074 + -4);
          puVar3 = (undefined1 *)(param_6 - in_stack_0000006c);
          uVar7 = uVar1;
          do {
            puVar5 = puVar5 + 1;
            puVar3 = puVar3 + in_stack_0000006c;
            *puVar3 = (char)*puVar5;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        uVar6 = uVar6 - 1;
        param_6 = param_6 + 1;
      } while (uVar6 != 0);
    }
  }
  return;
}

