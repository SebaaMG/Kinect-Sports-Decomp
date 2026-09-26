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
extern int fn_82A40B38();
extern int fn_82A47B28();


void fn_82A41998(int param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = (**(code **)(*param_2 + 0x54))(param_2);
  if (uVar2 < 3) {
    for (puVar1 = *(undefined4 **)(param_1 + 0x188);
        (puVar1 != (undefined4 *)0x0 && ((int *)*puVar1 != param_2 + -1));
        puVar1 = (undefined4 *)puVar1[1]) {
    }
    fn_82A40B38(param_1 + 0xbc,puVar1);
    if ((param_2[0xe] & 0x10U) != 0) {
      for (puVar1 = *(undefined4 **)(param_1 + 0x200);
          (puVar1 != (undefined4 *)0x0 && ((int *)*puVar1 != param_2 + -1));
          puVar1 = (undefined4 *)puVar1[1]) {
      }
      fn_82A47B28(param_1 + 0x1e8,puVar1);
    }
  }
  else if (uVar2 == 3) {
    piVar3 = *(int **)(param_1 + 0x1d8);
    if (piVar3 != (int *)0x0) {
      while( true ) {
        for (puVar1 = *(undefined4 **)(*piVar3 + 0x1c);
            (puVar1 != (undefined4 *)0x0 && ((int *)*puVar1 != param_2 + -1));
            puVar1 = (undefined4 *)puVar1[1]) {
        }
        if (puVar1 != (undefined4 *)0x0) break;
        if (piVar3 == (int *)0x0) {
          return;
        }
        piVar3 = (int *)piVar3[1];
        if (piVar3 == (int *)0x0) {
          return;
        }
      }
      fn_82A47B28(*piVar3 + 4,puVar1);
    }
  }
  else if (uVar2 < 5) {
    for (puVar1 = *(undefined4 **)(param_1 + 0x1b0);
        (puVar1 != (undefined4 *)0x0 && ((int *)*puVar1 != param_2 + -1));
        puVar1 = (undefined4 *)puVar1[1]) {
    }
    fn_82A47B28(param_1 + 0x198,puVar1);
    *(undefined4 *)(param_1 + 0x244) = 0;
  }
  return;
}

