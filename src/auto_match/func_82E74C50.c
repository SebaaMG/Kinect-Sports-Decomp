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
extern unsigned int *auStack_40;
extern int fn_82EEAF58();


undefined8 fn_82E74C50(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint auStack_40 [16];
  
  if (param_3 == 0) {
    uVar2 = 0xffffffff80004003;
  }
  else if ((*(short *)(param_3 + 0x20) == *(short *)(param_1 + 0x14)) &&
          (uVar1 = *(uint *)(param_3 + 0x2c), uVar1 <= param_2)) {
    uVar5 = *(ulonglong *)(param_3 + 0x18);
    uVar4 = *(longlong *)(param_3 + 0x10) * 10000;
    if (*(int *)(param_1 + 0x5c) != 0) {
      auStack_40[0] = 0;
      iVar3 = fn_82EEAF58(*(int *)(param_1 + 0x5c),auStack_40);
      if (iVar3 < 0) {
        auStack_40[0] = *(uint *)(param_1 + 0x18);
      }
      trapDoubleWordImmediate(6,(ulonglong)auStack_40[0],0);
      uVar5 = ((ulonglong)(param_2 - uVar1) * 80000000) / (ulonglong)auStack_40[0] + uVar5;
    }
    if (uVar4 < uVar5) {
      *(ulonglong *)(param_3 + 0x18) = uVar4;
    }
    else {
      *(ulonglong *)(param_3 + 0x18) = uVar5;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff80070057;
  }
  return uVar2;
}

