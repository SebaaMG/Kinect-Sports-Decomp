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
extern int fn_82A4F4E0();
extern int fn_82A776F0();


void fn_82A77C10(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[0x2e] != 0) {
    iVar2 = (**(code **)(*param_1 + 8))();
    if ((iVar2 == 0) || (param_1[0x1f] != 0)) {
      piVar1 = (int *)param_1[0x42];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x28))
                  (piVar1,*(undefined4 *)(param_1[0x2e] + 4),
                   *(uint *)(param_1[0x2e] + 8) & 0x10000000);
      }
      if (*(int *)(param_1[0x2e] + 0x24) == 0) {
        fn_82A4F4E0();
      }
      else {
        *(undefined4 *)(param_1[0x2e] + 0x24) = 0;
      }
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
      param_1[0x30] = 0;
    }
    else {
      *(uint *)(param_1[0x2e] + 8) = *(uint *)(param_1[0x2e] + 8) | 0x80;
    }
  }
  if (param_1[0x2c] != 0) {
    do {
      iVar2 = fn_82A776F0(param_1 + 0x21);
      piVar1 = (int *)param_1[0x42];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x28))
                  (piVar1,*(undefined4 *)(iVar2 + 4),*(uint *)(iVar2 + 8) & 0x10000000);
      }
      if (*(int *)(iVar2 + 0x24) == 0) {
        fn_82A4F4E0(iVar2);
      }
      else {
        *(undefined4 *)(iVar2 + 0x24) = 0;
      }
    } while (param_1[0x2c] != 0);
  }
  if (param_1[0x2e] == 0) {
    if ((int *)param_1[0x42] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x42] + 0xc))();
    }
  }
  return;
}

