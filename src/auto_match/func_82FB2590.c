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


undefined8 fn_82FB2590(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  piVar1 = *(int **)(param_1 + 0xbc);
  piVar4 = *(int **)(param_1 + 0xb8);
  for (piVar2 = piVar4; (piVar2 != piVar1 && (*piVar2 != param_2)); piVar2 = piVar2 + 2) {
  }
  puVar3 = (undefined4 *)(-(uint)(piVar1 != piVar2) & (uint)(piVar2 + 1));
  if (puVar3 == (undefined4 *)0x0) {
    for (; (piVar4 != piVar1 && (*piVar4 != *(int *)(param_1 + 200))); piVar4 = piVar4 + 2) {
    }
    puVar3 = (undefined4 *)(-(uint)(piVar1 != piVar4) & (uint)(piVar4 + 1));
    if (puVar3 == (undefined4 *)0x0) {
      *param_3 = 0;
      return 0x39;
    }
  }
  *param_3 = *puVar3;
  return 1;
}

