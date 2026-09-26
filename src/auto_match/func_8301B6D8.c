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
extern int fn_82FA5190();
extern int fn_83029E70();
extern unsigned int lbl_831BC768;


undefined8 fn_8301B6D8(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int *piVar4;
  
  uVar3 = 0x24;
  for (piVar4 = *(int **)(param_1 + 4); (piVar4 != *(int **)(param_1 + 8) && (*piVar4 != param_2));
      piVar4 = piVar4 + 1) {
  }
  if (piVar4 != *(int **)(param_1 + 8)) {
    puVar1 = (undefined4 *)*piVar4;
    if (1 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2)) {
      *piVar4 = *(int *)(*(int *)(param_1 + 8) + -4);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
    fn_83029E70(puVar1);
    uVar2 = lbl_831BC768;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      fn_82FA5190(uVar2,puVar1);
    }
    uVar3 = 1;
  }
  return uVar3;
}

