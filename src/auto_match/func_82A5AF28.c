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
extern int fn_82A59C80();
extern int fn_82A5ADB0();
extern int fn_82A68878();
extern int fn_82A76548();


void fn_82A5AF28(int param_1)

{
  code *pcVar2;
  undefined8 uVar1;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint auStack_40 [16];
  
  pcVar2 = (code *)fn_82A68878();
  (*pcVar2)(0xffffffffffffffff,0);
  uVar5 = *(uint *)(param_1 + 0x68);
  trapDoubleWordImmediate(6,(ulonglong)uVar5,0);
  uVar4 = ((ulonglong)(uVar5 >> 1) + (ulonglong)*(uint *)(param_1 + 100) * 1000) / (ulonglong)uVar5
          & 0xffffffff;
  while( true ) {
    auStack_40[0] = 0;
    uVar1 = fn_82A76548(*(undefined4 *)(param_1 + 0x78),auStack_40);
    for (uVar5 = 0; (-1 < (int)uVar1 && (uVar5 < auStack_40[0])); uVar5 = uVar5 + 1) {
      uVar1 = fn_82A5ADB0(param_1);
    }
    if (*(int *)(param_1 + 0x7c) != 0) {
      uVar4 = 0xffffffffffffffff;
    }
    if ((int)uVar1 < 0) break;
    iVar3 = fn_82A59C80(param_1,uVar4);
    if (iVar3 == 0) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  (**(code **)(**(int **)(param_1 + 0x6c) + 8))(*(int **)(param_1 + 0x6c),uVar1);
  return;
}

