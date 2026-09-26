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


void fn_82717430(int *param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 == '\0') {
    uVar3 = param_1[0x23] & 0xfffffffe;
  }
  else {
    uVar3 = param_1[0x23] | 1;
  }
  param_1[0x23] = uVar3;
  iVar2 = (**(code **)(*param_1 + 0x40))(param_1);
  if (iVar2 != 0) {
    if ((param_2 != '\0') || (uVar3 = 1, (*(uint *)(iVar2 + 0xb00) >> 0xb & 1) == 0)) {
      uVar3 = 0;
    }
    uVar1 = param_1[0x23];
    if (uVar3 != (uVar1 >> 3 & 1)) {
      uVar4 = uVar1 | 8;
      if (uVar3 == 0) {
        uVar4 = uVar1 & 0xfffffff7;
      }
      param_1[0x23] = uVar4;
      if ((param_1[8] != 0) && ((*(uint *)(param_1[8] + 0x8c) >> 3 & 1) == 0)) {
        (**(code **)(*param_1 + 0x108))(param_1);
      }
    }
    iVar2 = (**(code **)(*param_1 + 0x40))(param_1);
    *(uint *)(iVar2 + 0xb00) = *(uint *)(iVar2 + 0xb00) | 0x400;
    return;
  }
  return;
}

