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
extern int fn_82A3FF60();
extern int fn_82A4F4E0();
extern int fn_82A5B680();
extern int fn_82A5C760();
extern int fn_82A786C8();
extern int fn_82F68CC0();


longlong fn_82A5B898(int param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar5 = (uint)param_3;
  if (uVar5 != 0xfffffffe) {
    (**(code **)(**(int **)(param_1 + 0xc) + 8))();
  }
  puVar4 = (uint *)0x0;
  bVar1 = true;
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar2 = param_1 + 0x1c;
    puVar4 = (uint *)(param_1 + 0x44);
  }
  else if (*(int *)(param_1 + 0x7c) == 0) {
    uVar2 = param_1 + 0x58;
    puVar4 = (uint *)(param_1 + 0x80);
  }
  else {
    KeGetCurrentProcessType();
    uVar2 = fn_82A3FF60(0xffffffff83219d50,0x28,0x20970006,0);
    bVar1 = false;
  }
  if (uVar2 == 0) {
    lVar6 = -0x7ff8fff2;
  }
  else {
    fn_82F68CC0(uVar2,param_2,0x28);
    if (bVar1) {
      *(undefined4 *)(uVar2 + 0x24) = 1;
    }
    uVar7 = param_1 + 4;
    iVar3 = fn_82A5B680(uVar7,param_3);
    if (iVar3 == 0) {
      if (bVar1) {
        puVar4[1] = uVar5;
        puVar4[3] = uVar7;
        puVar4[2] = 5;
        *puVar4 = (uint)(param_3 != 0);
        lVar6 = fn_82A5C760(*(undefined4 *)(param_1 + 0x14),puVar4);
      }
      else {
        puVar4 = (uint *)fn_82A3FF60(0xffffffff83219d50,0x14,0x20970006,0);
        if (puVar4 == (uint *)0x0) {
          lVar6 = -0x7ff8fff2;
        }
        else {
          puVar4[1] = uVar5;
          puVar4[3] = uVar7;
          puVar4[2] = 6;
          *puVar4 = (uint)(param_3 != 0);
          puVar4[4] = uVar2;
          lVar6 = fn_82A5C760(*(undefined4 *)(param_1 + 0x14),puVar4);
          if (-1 < lVar6) goto LAB_82a5ba34;
          fn_82A4F4E0(puVar4);
        }
        fn_82A4F4E0(uVar2);
      }
    }
    else {
      lVar6 = fn_82A786C8(*(undefined4 *)(param_1 + 0x94),uVar2);
    }
  }
LAB_82a5ba34:
  if (uVar5 != 0xfffffffe) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x14))();
  }
  return lVar6;
}

