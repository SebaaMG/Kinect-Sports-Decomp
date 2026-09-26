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
extern unsigned int *auStack_50;
extern int fn_82811080();
extern int fn_82811238();
extern int fn_82811438();


void fn_827F3980(int param_1,ushort param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  short sVar3;
  undefined4 auStack_50 [4];
  undefined1 auStack_40 [64];
  
  if (((*(short *)(param_1 + 0x1e) == 0) || (param_3 != 0)) ||
     (param_2 != *(ushort *)(param_1 + 0x1c))) {
    if (*(short *)(param_1 + 0x1e) != 0) {
      auStack_50[0] = 3;
      uVar1 = fn_82811438(auStack_40,auStack_50,0x10);
      fn_82811238(0xffffffff8320a3e0,*(undefined4 *)(param_1 + 0x18),uVar1);
    }
    *(ushort *)(param_1 + 0x1c) = param_2;
    *(int *)(param_1 + 0x18) = param_3;
    if ((param_2 == 0) || (sVar3 = 1, param_3 != 0)) {
      sVar3 = 0;
    }
    *(short *)(param_1 + 0x1e) = sVar3;
    if (sVar3 != 0) {
      auStack_50[0] = 0;
      uVar1 = fn_82811438(auStack_40,auStack_50,0x10);
      uVar2 = fn_82811080(0xffffffff8320a3e0,(ulonglong)param_2 << 2,uVar1);
      *(undefined4 *)(param_1 + 0x18) = uVar2;
    }
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}

