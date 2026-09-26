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


undefined8
fn_82BE0220(uint param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1 == 0) {
    uVar1 = 0x140;
    uVar7 = 0;
    uVar6 = 4;
    uVar5 = 0x10;
    uVar4 = 0;
    uVar2 = 0x16;
  }
  else {
    if (param_1 == 1) {
      uVar1 = 0x140;
      uVar7 = 2;
      uVar6 = 4;
      uVar5 = 0x10;
      uVar4 = 4;
      uVar3 = 0xfffffffe;
      uVar2 = 1;
      goto LAB_82be02a8;
    }
    if (param_1 < 3) {
      uVar7 = 2;
    }
    else {
      if (param_1 != 3) {
        return 6;
      }
      uVar7 = 6;
    }
    uVar1 = 0x280;
    uVar6 = 5;
    uVar5 = 0x20;
    uVar4 = 4;
    uVar2 = 0x21;
  }
  uVar3 = 7;
LAB_82be02a8:
  *param_2 = uVar1;
  *param_3 = uVar7;
  *param_4 = uVar6;
  *param_5 = uVar5;
  *param_6 = uVar4;
  *param_7 = uVar3;
  *param_8 = uVar2;
  return 0;
}

