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
extern int fn_83005A08();


void fn_83002098(int param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  
  fn_83005A08();
  if (*(int *)(param_1 + 0x24) != 0) {
    *(float *)(param_2 + 4) = *(float *)(*(int *)(param_1 + 0x24) + 0x38) + *(float *)(param_2 + 4);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x54);
  if (puVar1 != (undefined4 *)0x0) {
    for (piVar2 = (int *)*puVar1; (piVar2 != (int *)puVar1[1] && (*piVar2 != param_4));
        piVar2 = piVar2 + 2) {
    }
    piVar2 = (int *)(-(uint)((int *)puVar1[1] != piVar2) & (uint)(piVar2 + 1));
    if (piVar2 != (int *)0x0) {
      *(float *)(param_2 + 4) = *(float *)(*piVar2 + 0x38) + *(float *)(param_2 + 4);
    }
  }
  return;
}

