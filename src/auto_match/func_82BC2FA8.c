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


undefined8 fn_82BC2FA8(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  piVar1 = *(int **)((param_2 + 0x3a) * 4 + param_1);
  while( true ) {
    if ((param_3 == (int *)0x0) || (uVar4 != 0)) {
      return 0;
    }
    puVar2 = (uint *)(param_3 + 0x39);
    if (((*puVar2 & 1) != 0) && (piVar1 == param_3)) break;
    param_3 = (int *)param_3[2];
    uVar4 = (~(ulonglong)*puVar2 & 0xffffffff) >> 2 & 1;
  }
  if (((param_2 != *(int *)(param_1 + 0x14)) || ((*(uint *)(param_1 + 0xe4) >> 9 & 1) == 0)) &&
     (cVar3 = (**(code **)(*piVar1 + 0x34))(), cVar3 == '\0')) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3c28,0xffffffff820e3b18,0x287);
  }
  return 1;
}

