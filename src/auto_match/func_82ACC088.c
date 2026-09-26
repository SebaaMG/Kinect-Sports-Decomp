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
extern int fn_82ABE8C8();
extern int fn_82ACBFC0();


undefined8 fn_82ACC088(int param_1,int param_2,int param_3)

{
  undefined4 uVar2;
  undefined8 uVar1;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(param_2 + 0x18) == 0) {
    fn_82ACBFC0();
  }
  uVar3 = *(uint *)(param_2 + 0x18);
  if (*(int *)(param_1 + 0x2c8) == 0) {
    uVar2 = fn_82ABE8C8(param_1 + 0x3cc,0xf94);
    *(undefined4 *)(param_1 + 0x2c8) = uVar2;
  }
  iVar4 = (uVar3 % 0x3e5) * 4;
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(iVar4 + *(int *)(param_1 + 0x2c8));
  *(int *)(iVar4 + *(int *)(param_1 + 0x2c8)) = param_2;
  uVar3 = *(int *)(param_1 + 0x2cc) + 1;
  *(uint *)(param_1 + 0x2cc) = uVar3;
  if (uVar3 < 0x61a9) {
    for (uVar3 = *(uint *)(param_3 + 0x1c); ((uVar3 & 1) == 0 && (uVar3 != 0));
        uVar3 = *(uint *)((uVar3 & 0xfffffffe) + 0x28)) {
      if ((*(uint *)(uVar3 + 8) >> 0x1a & 1) != 0) {
        iVar4 = (*(uint *)(uVar3 + 0x10) >> 0x14 & 0x780 | *(uint *)(uVar3 + 0x14) >> 0x19) * 4 +
                *(int *)(param_1 + 0x2d4);
        *(int *)(iVar4 + -4) = *(int *)(iVar4 + -4) + 1;
      }
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

