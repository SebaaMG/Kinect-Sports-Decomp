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
extern int fn_82F68B74();


undefined8
fn_83029538(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  for (piVar2 = *(int **)(param_1 + 0x88);
      (piVar2 != *(int **)(param_1 + 0x8c) && (*piVar2 != param_2)); piVar2 = piVar2 + 2) {
  }
  puVar3 = (undefined4 *)(-(uint)(*(int **)(param_1 + 0x8c) != piVar2) & (uint)(piVar2 + 1));
  if (puVar3 == (undefined4 *)0x0) {
    return 2;
  }
  uVar1 = fn_82F68B74(*puVar3,param_3,param_4,param_5,param_6);
  return uVar1;
}

