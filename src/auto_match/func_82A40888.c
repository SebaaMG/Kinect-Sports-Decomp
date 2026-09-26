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
extern int fn_82A43BF8();
extern int fn_82A459A8();
extern int fn_83142F1C();


void fn_82A40888(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  float afStack_30 [12];
  
  fn_83142F1C(1,afStack_30);
  if (afStack_30[0] != *(float *)(param_1 + 0x20c)) {
    puVar4 = *(undefined4 **)(param_1 + 0x1fc);
    *(float *)(param_1 + 0x20c) = afStack_30[0];
    while (puVar4 != (undefined4 *)0x0) {
      if (puVar4 == (undefined4 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *puVar4;
        puVar4 = (undefined4 *)puVar4[1];
      }
      fn_82A43BF8(uVar1);
    }
  }
  piVar3 = (int *)(param_1 + 0x70);
  (**(code **)(*(int *)(param_1 + 0x70) + 8))(piVar3);
  if (*(int *)(param_1 + 0x234) != 0) {
    puVar4 = *(undefined4 **)(param_1 + 0x22c);
    while( true ) {
      if (puVar4 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = (undefined4 *)*puVar4;
        puVar4 = (undefined4 *)puVar4[1];
      }
      if (puVar2 == (undefined4 *)0x0) break;
      (**(code **)*puVar2)();
    }
  }
  (**(code **)(*piVar3 + 0x14))(piVar3);
  fn_82A459A8();
  return;
}

