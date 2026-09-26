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


undefined8 fn_82EE13B8(int *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  short *psVar4;
  
  if (param_2 == 0) {
    return 0xffffffff80070057;
  }
  uVar1 = (**(code **)(*param_1 + 0x44))
                    (param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 0x10));
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  if (*(short *)(param_2 + 8) != 0) {
    psVar4 = *(short **)(param_2 + 0xc);
    if (psVar4 == (short *)0x0) {
      return 0xffffffff80004005;
    }
    uVar3 = 0x400;
    iVar2 = 0;
    do {
      if (*psVar4 == 0) break;
      uVar3 = uVar3 - 1;
      psVar4 = psVar4 + 1;
    } while (uVar3 != 0);
    if ((uVar3 & 0xffffffff) == 0) {
      iVar2 = -0x7ff8ffa9;
    }
    if (iVar2 < 0) {
      return 0xffffffff80004005;
    }
  }
  if ((*(int *)(param_2 + 0x10) != 0) && (*(int *)(param_2 + 0x14) == 0)) {
    return 0xffffffff80004005;
  }
  return 0;
}

