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
extern int fn_82E9AC18();
extern int fn_82EAA320();
extern int fn_82F26110();
extern int fn_82F26F98();
extern unsigned int stack0x00000094;
extern unsigned int stack0x0000009c;
extern unsigned int stack0x000000a4;
extern unsigned int stack0x000000ac;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_82EC6AE0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  code *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  uint in_stack_00000064;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000074;
  undefined4 in_stack_0000007c;
  int in_stack_00000084;
  int in_stack_00000094;
  int in_stack_0000009c;
  int in_stack_000000a4;
  int in_stack_000000ac;
  undefined4 *in_stack_000000b4;
  int *in_stack_000000bc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int aiStack_b0 [4];
  int aiStack_a0 [40];
  
  uVar8 = (ulonglong)in_stack_00000064;
  pcVar1 = (code *)*in_stack_000000b4;
  pcVar2 = (code *)in_stack_000000b4[3];
  lVar7 = uVar8 + 0x100;
  if (*(int *)(param_1 + 0x6d74) == 0) {
    fn_82F26110(param_1,&stack0x00000094,&stack0x0000009c,in_stack_00000074,in_stack_0000007c)
    ;
    lVar6 = (longlong)(in_stack_0000009c >> 2) * (longlong)*(int *)(param_1 + 0x564) +
            (longlong)(in_stack_00000094 >> 2);
    if (in_stack_00000084 == 1) {
      (**(code **)(param_1 + 0x9b8))(lVar6 + param_5);
    }
    else {
      (**(code **)(param_1 + 0x9c0))
                (lVar6 + param_5,*(int *)(param_1 + 0x564),uVar8,0x10,in_stack_00000094,
                 in_stack_0000009c,0,*(undefined4 *)(param_1 + 0x618));
    }
    fn_82F26110(param_1,&stack0x000000a4,&stack0x000000ac,in_stack_00000074,in_stack_0000007c)
    ;
    lVar6 = (longlong)(in_stack_000000ac >> 2) * (longlong)*(int *)(param_1 + 0x564) +
            (longlong)(in_stack_000000a4 >> 2);
    if (in_stack_00000084 == 1) {
      (**(code **)(param_1 + 0x9b8))(lVar6 + param_8);
    }
    else {
      (**(code **)(param_1 + 0x9c0))
                (lVar6 + param_8,*(int *)(param_1 + 0x564),lVar7,0x10,in_stack_000000a4,
                 in_stack_000000ac,0,*(undefined4 *)(param_1 + 0x618));
    }
    (**(code **)(param_1 + 0xb1c))(uVar8,0x10,lVar7,0x10,uVar8,0x10,0x10,0x10);
    iVar4 = (*pcVar2)(param_2,0x10,uVar8,0x10,0x10);
    aiStack_b0[0] = in_stack_00000094;
    aiStack_a0[0] = in_stack_0000009c;
    fn_82EAA320(param_1,aiStack_b0,aiStack_a0,&uStack_bc,&uStack_c0,1);
    aiStack_b0[0] = in_stack_000000a4;
    aiStack_a0[0] = in_stack_000000ac;
    fn_82EAA320(param_1,aiStack_b0,aiStack_a0,&uStack_b4,&uStack_b8,1);
    if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
      fn_82F26F98(param_1,param_6,*(undefined4 *)(param_1 + 0x568),uVar8,8,uStack_bc,uStack_c0
                        ,0);
      fn_82F26F98(param_1,in_stack_00000054,*(undefined4 *)(param_1 + 0x568),lVar7,8,uStack_b4
                        ,uStack_b8,0);
      (**(code **)(param_1 + 0xb1c))(uVar8,8,lVar7,8,uVar8,8,8,8);
      iVar5 = (*pcVar1)(param_3,8,uVar8,8);
      iVar4 = iVar5 + iVar4;
    }
    if ((*(uint *)(param_1 + 0x6dc4) & 2) == 0) {
      *in_stack_000000bc = iVar4;
    }
    else {
      fn_82F26F98(param_1,param_7,*(undefined4 *)(param_1 + 0x568),uVar8,8,uStack_bc,uStack_c0
                        ,0);
      fn_82F26F98(param_1,in_stack_0000005c,*(undefined4 *)(param_1 + 0x568),lVar7,8,uStack_b4
                        ,uStack_b8,0);
      (**(code **)(param_1 + 0xb1c))(uVar8,8,lVar7,8,uVar8,8,8,8);
      iVar5 = (*pcVar1)(param_4,8,uVar8,8);
      *in_stack_000000bc = iVar5 + iVar4;
    }
  }
  else {
    uStack_b4 = 0;
    fn_82F26110(param_1,&stack0x00000094,&stack0x0000009c,in_stack_00000074,in_stack_0000007c)
    ;
    lVar6 = (longlong)(in_stack_0000009c >> 2) * (longlong)*(int *)(param_1 + 0x564) +
            (longlong)(in_stack_00000094 >> 2);
    if (in_stack_00000084 == 1) {
      (**(code **)(param_1 + 0x9b8))(lVar6 + param_5);
    }
    else {
      (**(code **)(param_1 + 0x9c0))
                (lVar6 + param_5,*(int *)(param_1 + 0x564),uVar8,0x10,in_stack_00000094,
                 in_stack_0000009c,0,*(undefined4 *)(param_1 + 0x618));
    }
    fn_82F26110(param_1,&stack0x000000a4,&stack0x000000ac,in_stack_00000074,in_stack_0000007c)
    ;
    iVar4 = *(int *)(param_1 + 0x564);
    if (in_stack_00000084 == 1) {
      (**(code **)(param_1 + 0x9b8))
                ((longlong)(in_stack_000000ac >> 2) * (longlong)iVar4 +
                 (longlong)(in_stack_000000a4 >> 2) + param_8);
    }
    else {
      (**(code **)(param_1 + 0x9c0))
                ((longlong)(in_stack_000000ac >> 2) * (longlong)iVar4 +
                 (longlong)(in_stack_000000a4 >> 2) + param_8,iVar4,lVar7,0x10,in_stack_000000a4,
                 in_stack_000000ac,0,*(undefined4 *)(param_1 + 0x618));
    }
    (**(code **)(param_1 + 0xb1c))(uVar8,0x10,lVar7,0x10,uVar8,0x10,0x10,0x10);
    fn_82E9AC18(param_1,param_2,0x10,uVar8,0x10,0x10,0x10,in_stack_0000006c);
    aiStack_b0[0] = in_stack_00000094;
    aiStack_a0[0] = in_stack_0000009c;
    fn_82EAA320(param_1,aiStack_b0,aiStack_a0,&uStack_bc,&uStack_c0,1);
    aiStack_b0[0] = in_stack_000000a4;
    aiStack_a0[0] = in_stack_000000ac;
    fn_82EAA320(param_1,aiStack_b0,aiStack_a0,&uStack_b4,&uStack_b8,1);
    uVar3 = uStack_b4;
    if ((*(uint *)(param_1 + 0x6dc4) & 1) != 0) {
      fn_82F26F98(param_1,param_6,*(undefined4 *)(param_1 + 0x568),uVar8,8,uStack_bc,uStack_c0
                        ,0);
      fn_82F26F98(param_1,in_stack_00000054,*(undefined4 *)(param_1 + 0x568),lVar7,8,uVar3,
                        uStack_b8,0);
      (**(code **)(param_1 + 0xb1c))(uVar8,8,lVar7,8,uVar8,8,8,8);
      fn_82E9AC18(param_1,param_3,8,uVar8,8,8,8,in_stack_0000006c);
    }
    if ((*(uint *)(param_1 + 0x6dc4) & 2) != 0) {
      fn_82F26F98(param_1,param_7,*(undefined4 *)(param_1 + 0x568),uVar8,8,uStack_bc,uStack_c0
                        ,0);
      fn_82F26F98(param_1,in_stack_0000005c,*(undefined4 *)(param_1 + 0x568),lVar7,8,uVar3,
                        uStack_b8,0);
      (**(code **)(param_1 + 0xb1c))(uVar8,8,lVar7,8,uVar8,8,8,8);
      fn_82E9AC18(param_1,param_4,8,uVar8,8,8,8,in_stack_0000006c);
    }
    *in_stack_000000bc = 0;
  }
  return;
}

