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
extern int fn_82ED5D40();
extern int fn_82ED5DB8();
extern int fn_82ED5EB0();
extern int fn_82ED5FA8();
extern int fn_82F07E00();
extern int fn_82F1C3A0();
extern unsigned int uStack0000001c;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack0000004c;


void fn_82ED61A8(int param_1,undefined4 param_2,uint *param_3,ulonglong param_4,undefined4 param_5
                  ,uint param_6,ulonglong param_7,uint param_8)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined2 *puVar14;
  ulonglong uVar15;
  undefined4 uStack0000001c;
  uint uStack0000002c;
  undefined4 uStack00000034;
  uint uStack0000003c;
  uint uStack0000004c;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  uint in_stack_00000064;
  undefined2 *in_stack_0000006c;
  uint in_stack_00000074;
  int in_stack_0000007c;
  uint in_stack_00000084;
  int in_stack_0000008c;
  uint in_stack_00000094;
  int in_stack_0000009c;
  uint in_stack_000000a4;
  int in_stack_000000ac;
  uint in_stack_000000b4;
  uint in_stack_000000bc;
  uint in_stack_000000c4;
  uint *puStack_ac;
  
  uVar12 = (ulonglong)in_stack_00000074;
  uVar11 = (ulonglong)in_stack_00000064;
  uVar15 = 0;
  uStack0000002c = (uint)param_4;
  lVar9 = in_stack_000000a4 - uVar12;
  uVar10 = (ulonglong)in_stack_000000bc;
  lVar13 = (ulonglong)param_3[0x18] * 0x34 + (ulonglong)*(uint *)(param_1 + 0x6d24);
  lVar8 = in_stack_00000094 - uVar12;
  puVar14 = in_stack_0000006c;
  uStack0000001c = param_2;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  uStack0000004c = param_8;
  puStack_ac = param_3;
  while( true ) {
    puStack_ac = puStack_ac + 1;
    uVar7 = (ulonglong)in_stack_000000c4;
    if (in_stack_000000c4 == 3) {
      uVar7 = (ulonglong)*(byte *)param_3 & 7;
    }
    iVar2 = *(int *)(param_1 + 0x564);
    iVar4 = (int)uVar15;
    lVar6 = (longlong)(int)((uint)((uVar15 & 0xffffffff) << 2) & 8) * (longlong)iVar2 +
            (uVar15 & 1) * 8 + (ulonglong)uStack0000003c;
    if (*(byte *)((int)param_3 + iVar4 + 0x4a) == 0) {
      if (*puStack_ac != 0) {
        if (in_stack_000000c4 == 3) {
          if ((*param_3 & 0x10000000) == 0) {
            uVar7 = (ulonglong)(*param_3 >> 0x18) & 7;
          }
          else {
            uVar7 = (ulonglong)(char)*(byte *)((int)param_3 + iVar4 + 0x38);
          }
        }
        if ((uVar7 & 0xffffffff) < 5) {
          bVar1 = (int)uVar7 != 0;
          if (uVar7 == 1 && bVar1) {
            fn_82ED5DB8(param_1,lVar6,in_stack_00000054,in_stack_0000005c,uVar12,
                              *(undefined2 *)
                               ((in_stack_0000007c - (int)in_stack_0000006c) + (int)puVar14),
                              (in_stack_00000084 - in_stack_00000074) + uVar12,
                              *(undefined2 *)
                               ((in_stack_0000008c - (int)in_stack_0000006c) + (int)puVar14));
          }
          else if (uVar7 == 2 && bVar1) {
            fn_82ED5EB0(param_1,lVar6,in_stack_00000054,in_stack_0000005c,lVar8 + uVar12,
                              *(undefined2 *)
                               ((in_stack_0000009c - (int)in_stack_0000006c) + (int)puVar14),
                              lVar9 + uVar12,
                              *(undefined2 *)
                               ((in_stack_000000ac - (int)in_stack_0000006c) + (int)puVar14));
          }
          else if (uVar7 != 3 || !bVar1) {
            if (bVar1) {
              fn_82ED5FA8(param_1,lVar6,in_stack_00000054,in_stack_0000005c,
                              (in_stack_000000b4 - in_stack_00000064) + uVar11,uVar10,
                              *(byte *)((int)param_3 + iVar4 + 0x8c),iVar2);
            }
            else {
              fn_82ED5D40(param_1,lVar6,in_stack_00000054,in_stack_0000005c,uVar11,*puVar14,
                              iVar2,lVar13);
            }
          }
        }
      }
    }
    else {
      fn_82F1C3A0(param_1,param_4,uStack00000034,lVar6,iVar2,in_stack_00000054,in_stack_0000005c
                      ,uVar11);
    }
    uVar15 = uVar15 + 1;
    puVar14 = puVar14 + 1;
    uVar12 = uVar12 + 0x80;
    uVar10 = uVar10 + 8;
    uVar11 = uVar11 + 0x100;
    if (3 < (int)uVar15) break;
    param_4 = (ulonglong)uStack0000002c;
  }
  uVar10 = 4;
  do {
    uVar11 = (ulonglong)in_stack_000000c4;
    if (in_stack_000000c4 == 3) {
      uVar11 = (ulonglong)*(byte *)param_3 & 7;
    }
    iVar2 = (int)uVar10;
    if (*(byte *)((int)param_3 + iVar2 + 0x4a) == 0) {
      if (*(int *)((int)param_3 + (int)((uVar10 & 0xffffffff) << 2) + 4) != 0) {
        if (in_stack_000000c4 == 3) {
          if ((*param_3 & 0x10000000) == 0) {
            uVar11 = (ulonglong)(*param_3 >> 0x18) & 7;
          }
          else {
            uVar11 = (ulonglong)(char)*(byte *)((int)param_3 + iVar2 + 0x38);
          }
        }
        if ((uVar11 & 0xffffffff) < 5) {
          bVar1 = (int)uVar11 != 0;
          if (uVar11 == 1 && bVar1) {
            iVar2 = (int)((uVar10 & 0xffffffff) << 1);
            lVar8 = (uVar10 & 0x1ffffff) * 0x80;
            fn_82ED5DB8(param_1,param_7,in_stack_00000054,in_stack_0000005c,
                              lVar8 + (ulonglong)in_stack_00000074,
                              *(undefined2 *)(iVar2 + in_stack_0000007c),
                              lVar8 + (ulonglong)in_stack_00000084,
                              *(undefined2 *)(iVar2 + in_stack_0000008c));
          }
          else if (uVar11 == 2 && bVar1) {
            iVar2 = (int)((uVar10 & 0xffffffff) << 1);
            lVar8 = (uVar10 & 0x1ffffff) * 0x80;
            fn_82ED5EB0(param_1,param_7,in_stack_00000054,in_stack_0000005c,
                              lVar8 + (ulonglong)in_stack_00000094,
                              *(undefined2 *)(iVar2 + in_stack_0000009c),
                              lVar8 + (ulonglong)in_stack_000000a4,
                              *(undefined2 *)(iVar2 + in_stack_000000ac));
          }
          else if (uVar11 != 3 || !bVar1) {
            if (bVar1) {
              fn_82ED5FA8(param_1,param_7,in_stack_00000054,in_stack_0000005c,
                              (uVar10 & 0xffffff) * 0x100 + (ulonglong)in_stack_000000b4,
                              (uVar10 & 0x1fffffff) * 8 + (ulonglong)in_stack_000000bc,
                              *(byte *)((int)param_3 + iVar2 + 0x8c),
                              *(undefined4 *)(param_1 + 0x568));
            }
            else {
              uVar3 = *(undefined4 *)(param_1 + 0x568);
              uVar5 = fn_82F07E00(param_1,(uVar10 & 0xffffff) * 0x100 +
                                                (ulonglong)in_stack_00000064,
                                        *(undefined2 *)
                                         ((int)((uVar10 & 0xffffffff) << 1) + (int)in_stack_0000006c
                                         ),in_stack_0000005c,*(undefined4 *)(param_1 + 0x2030),
                                        lVar13);
              (**(code **)(param_1 + 0x1f98))(in_stack_00000054,in_stack_0000005c,8,uVar5);
              (**(code **)(param_1 + 0x1fb4))(param_1,param_7,in_stack_00000054,uVar3,8);
            }
          }
        }
      }
    }
    else {
      fn_82F1C3A0(param_1,uStack0000002c,uStack00000034,param_7,*(undefined4 *)(param_1 + 0x568)
                      ,in_stack_00000054,in_stack_0000005c,
                      (uVar10 & 0xffffff) * 0x100 + (ulonglong)in_stack_00000064);
    }
    uVar10 = uVar10 + 1;
    param_7 = (ulonglong)uStack0000004c;
  } while ((int)uVar10 < 6);
  return;
}

