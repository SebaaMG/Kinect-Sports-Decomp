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


undefined8 fn_828FC7D8(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    uVar2 = *(uint *)(param_1 + 0x68);
    if ((ulonglong)uVar2 < (ulonglong)*(uint *)(param_1 + 0x60)) {
      *(int *)(param_1 + 0x30) = param_2;
      uVar3 = (**(code **)(*piVar1 + 0xc))
                        (piVar1,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                         ((ulonglong)uVar2 & 0x3fffffff) * 4 + (ulonglong)*(uint *)(param_1 + 0x5c),
                         (ulonglong)*(uint *)(param_1 + 0x60) - (ulonglong)uVar2);
      if ((int)uVar3 < 0) {
        *(undefined4 *)(param_1 + 0x4c) = 1;
        *(undefined4 *)(param_1 + 0x50) = 1;
      }
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x60);
      return uVar3;
    }
  }
  return 0;
}

