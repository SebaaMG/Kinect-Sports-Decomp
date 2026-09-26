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
extern int fn_82653BE8();


void fn_82653ED0(undefined8 param_1,uint param_2,int param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  uint *puVar4;
  
  if ((((param_2 & 1) == 0) || ((param_2 & 2) != 0)) || ((param_2 & 0xfffffffc) == 0)) {
    uVar2 = 0xffffffff821cc990;
  }
  else {
    param_2 = *(uint *)(param_2 - 1);
    if (param_2 == 0) {
      fn_82653BE8(param_1,0xffffffff821cc888);
      goto LAB_82653f44;
    }
    uVar2 = 0xffffffff821cc900;
  }
  fn_82653BE8(param_1,uVar2,param_2);
LAB_82653f44:
  if ((param_3 == 0) && (param_2 != 0)) {
    if (*(int *)(param_2 + 0x98) == 0) {
      fn_82653BE8(param_1,0xffffffff821cca20,*(undefined4 *)(param_2 + 0xac),
                    *(undefined4 *)(param_2 + 0xa4));
    }
    fn_82653BE8(param_1,0xffffffff821ccaa0);
    for (puVar1 = *(uint **)(param_2 + 0x74); puVar1 != (uint *)0x0; puVar1 = (uint *)*puVar1) {
      uVar3 = 0;
      puVar4 = puVar1;
      if (puVar1[1] != 0) {
        do {
          fn_82653BE8(param_1,0xffffffff821ccb24,puVar4[3],puVar4[2] & 0xffffff);
          uVar3 = uVar3 + 1;
          puVar4 = puVar4 + 2;
        } while (uVar3 < puVar1[1]);
      }
    }
    if (*(int *)(param_2 + 0x98) == 0) {
      fn_82653BE8(param_1,0xffffffff821ccb38);
      fn_82653BE8(param_1,0xffffffff821ccbc8);
    }
  }
  return;
}

