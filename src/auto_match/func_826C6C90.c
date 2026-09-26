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
extern int fn_82698FC8();


void fn_826C6C90(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1[0x6b];
  param_1[0x2f] = param_1[0x2f] + 1;
  if ((iVar3 == 0) || (*(char *)(iVar3 + 0x18) != '\0')) {
    uVar1 = (**(code **)(*(int *)param_1[0x27] + 0x28))();
  }
  else {
    uVar1 = *(uint *)(iVar3 + 0x10);
  }
  uVar2 = (**(code **)(*(int *)param_1[0x27] + 0x28))();
  if ((uVar1 < uVar2) && (uVar1 <= (uint)param_1[0x2f])) {
    iVar3 = uVar1 - 1;
    if (uVar1 == 0) {
      iVar3 = 0;
    }
    param_1[0x2f] = iVar3;
  }
  else if (uVar2 <= (uint)param_1[0x2f]) {
    param_1[0x2f] = 0;
    *(byte *)(param_1 + 0x73) = *(byte *)(param_1 + 0x73) | 2;
    if (uVar2 < 2) {
      (**(code **)(*param_1 + 0x124))(param_1,1);
    }
    else {
      fn_82698FC8(param_1 + 0x2a,0);
      *(uint *)(param_1[0x28] + 0xb00) = *(uint *)(param_1[0x28] + 0xb00) | 0x400;
    }
  }
  return;
}

