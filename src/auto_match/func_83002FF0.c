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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FAF408();
extern int fn_83013B98();
extern int fn_8301B058();
extern int fn_83034438();
extern int fn_83034858();
extern int fn_83034DB0();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642EC;


undefined4 * fn_83002FF0(int param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined4 *puVar3;
  ulonglong uVar2;
  int iVar4;
  uint *puVar5;
  undefined1 uVar6;
  
  if ((param_2 & 0xffffffff) == 0) {
    fn_8301B058(lbl_832642EC,param_1);
    if (*(int *)(param_1 + 0x24) == 0) {
      if (*(int *)(param_1 + 0x28) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x3c);
      }
      uVar2 = fn_82FA5060(lbl_831BC768,0x40);
      if ((uVar2 & 0xffffffff) != 0) {
        puVar3 = (undefined4 *)fn_83034858(uVar2,param_1,uVar6);
        *(undefined4 **)(param_1 + 0x24) = puVar3;
        return puVar3;
      }
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x24);
  }
  else {
    puVar3 = *(undefined4 **)(param_1 + 0x54);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)fn_82FA5060(lbl_831BC768,0xc);
      *(undefined4 **)(param_1 + 0x54) = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      puVar3 = *(undefined4 **)(param_1 + 0x54);
      if (puVar3 == (undefined4 *)0x0) {
        return (undefined4 *)0x0;
      }
    }
    for (puVar5 = (uint *)*puVar3;
        (puVar5 != (uint *)puVar3[1] && ((ulonglong)*puVar5 != (param_2 & 0xffffffff)));
        puVar5 = puVar5 + 2) {
    }
    puVar3 = (undefined4 *)(-(uint)((uint *)puVar3[1] != puVar5) & (uint)(puVar5 + 1));
    if (puVar3 == (undefined4 *)0x0) {
      if (*(int *)(param_1 + 0x28) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x3c);
      }
      uVar2 = fn_82FA5060(lbl_831BC768,0x40);
      if ((uVar2 & 0xffffffff) != 0) {
        puVar3 = (undefined4 *)fn_83034438(uVar2,param_1,param_2,uVar6);
        if (puVar3 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        iVar4 = fn_83013B98(*(undefined4 *)(param_1 + 0x54),param_2,puVar3);
        uVar1 = lbl_831BC768;
        if (iVar4 == 0) {
          (**(code **)*puVar3)(puVar3,0);
          fn_82FA5190(uVar1,puVar3);
          return (undefined4 *)0x0;
        }
        iVar4 = fn_83034DB0(param_2,param_1);
        if (iVar4 == 1) {
          return puVar3;
        }
        fn_82FAF408(*(undefined4 *)(param_1 + 0x54),param_2);
        uVar1 = lbl_831BC768;
        (**(code **)*puVar3)(puVar3,0);
        fn_82FA5190(uVar1,puVar3);
      }
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)*puVar3;
    }
  }
  return puVar3;
}

