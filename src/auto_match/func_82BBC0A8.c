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
extern int fn_82AB15D0();


longlong fn_82BBC0A8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  int *piVar4;
  longlong lVar3;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x751) != '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e0cbc,0xffffffff820e0c10,0x1e2);
  }
  lVar1 = 0;
  piVar4 = (int *)(param_1 + 0x390);
  do {
    if (*piVar4 == 0) {
      *(int *)((int)((lVar1 + 0xf4U & 0xffffffff) << 2) + param_1) = param_2;
      *(undefined4 *)((int)((lVar1 + 0x104U & 0xffffffff) << 2) + param_1) = param_3;
      *(undefined4 *)((int)((lVar1 + 0xe4U & 0xffffffff) << 2) + param_1) = param_4;
      if (param_2 == 0x21) {
        return lVar1;
      }
      lVar3 = 0;
      lVar5 = 4;
      do {
        uVar2 = (lVar1 + 0x45U & 0x3fffffff) * 4 + lVar3;
        lVar3 = lVar3 + 1;
        *(undefined4 *)((int)((uVar2 & 0xffffffff) << 2) + param_1) = 5;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      return lVar1;
    }
    lVar1 = lVar1 + 1;
    piVar4 = piVar4 + 1;
  } while ((int)lVar1 < 0x10);
  fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff82196f10,0xffffffff820e0c10,499);
  return 0;
}

