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
extern int fn_82E3C5F8();


undefined8 fn_82E42C88(int param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ushort *apuStack_40 [16];
  
  if (param_2 == (ulonglong *)0x0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    uVar3 = 0xffffffffffffffff;
    uVar4 = 0;
    if (*(int *)(param_1 + 0x2ac) != 0) {
      do {
        fn_82E3C5F8(param_1 + 0x26c,uVar4,apuStack_40);
        uVar2 = (**(code **)(**(int **)((*apuStack_40[0] + 0x1b) * 4 + param_1) + 0x18))();
        if (uVar2 < uVar3) {
          uVar3 = uVar2;
        }
        uVar4 = uVar4 + 1;
      } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x2ac));
    }
    *param_2 = uVar3;
    uVar1 = 0;
  }
  return uVar1;
}

