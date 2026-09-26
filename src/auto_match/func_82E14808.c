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
extern int fn_82CFBBF0();


int fn_82E14808(int param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = 0;
  do {
    if ((param_3 == 0) || (*(int *)(param_1 + 0x20) <= iVar5)) break;
    iVar5 = iVar5 + 1;
    piVar3 = (int *)(*(int *)(param_1 + 0x1c) + iVar4);
    iVar4 = iVar4 + 4;
  } while (*piVar3 != param_3);
  if (iVar5 < *(int *)(param_1 + 0x20)) {
    iVar4 = iVar5 << 2;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      if ((param_2 & 0xffffffff) == 0) {
        return iVar1;
      }
      iVar2 = fn_82CFBBF0(param_2,*(uint *)(iVar1 + 8) & 0xfffffffe);
      if (iVar2 == 0) {
        return iVar1;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x20));
  }
  return 0;
}

