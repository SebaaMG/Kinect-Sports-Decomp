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
extern int fn_82EEB3B8();
extern int fn_82EEB408();
extern int fn_82EEB480();


undefined8 fn_82EEB7A8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar4;
  longlong lVar3;
  undefined8 uVar5;
  int aiStack_20 [4];
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar5 = 0xffffffff8000ffff;
  }
  else {
    piVar4 = (int *)(*(int *)(param_1 + 0x14) + param_2);
    iVar2 = *piVar4;
    piVar4[1] = *(int *)(iVar2 + 8);
    *(int **)(iVar2 + 8) = piVar4;
    uVar1 = *(uint *)(iVar2 + 4);
    aiStack_20[0] = iVar2;
    if ((ulonglong)uVar1 < (ulonglong)*(uint *)(param_1 + 0x10)) {
      lVar3 = (ulonglong)uVar1 - 1;
      *(int *)(iVar2 + 4) = (int)lVar3;
      if (lVar3 != 0) {
        return 0;
      }
      lVar3 = fn_82EEB3B8(param_1,param_1 + 4,aiStack_20);
    }
    else {
      *(uint *)(iVar2 + 4) = uVar1 - 1;
      lVar3 = fn_82EEB3B8(param_1,param_1 + 8,aiStack_20);
      if (*(int *)(iVar2 + 4) != 0) {
        fn_82EEB480(lVar3,lVar3 + 4,aiStack_20);
        return 0;
      }
    }
    iVar2 = fn_82EEB480(lVar3,lVar3,aiStack_20);
    if (*(int *)(iVar2 + 0x20) != 0) {
      fn_82EEB408();
    }
  }
  return uVar5;
}

