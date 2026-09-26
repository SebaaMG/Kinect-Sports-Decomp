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
extern int fn_82FF8108();


undefined8 fn_82FF6A78(int param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  
  for (piVar2 = *(int **)(param_1 + 4); (piVar2 != *(int **)(param_1 + 8) && (*piVar2 != param_2));
      piVar2 = piVar2 + 2) {
  }
  uVar1 = (uint)(*(int **)(param_1 + 8) != piVar2);
  puVar3 = (uint *)(-(uint)(uVar1 != 0) & (uint)(piVar2 + 1));
  if (puVar3 == (uint *)0x0) {
    return 0x14;
  }
  fn_82FF8108((ulonglong)*puVar3 + 0x1c,param_3,param_3,-uVar1);
  return 1;
}

