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
extern unsigned int *auStack_80;
extern int fn_8241AFD0();
extern int fn_8241C3A0();


void fn_82418198(int param_1)

{
  undefined8 uVar1;
  undefined1 auStack_80 [104];
  
  if ((*(int *)(param_1 + 0x27c) == 0) || (*(int *)(param_1 + 0x27c) == 1)) {
    fn_8241C3A0(param_1,auStack_80);
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x6c))
                      (*(int **)(param_1 + 4),
                       (ulonglong)*(uint *)(param_1 + 0x18) * 0x1ac +
                       (ulonglong)*(uint *)(param_1 + 8),auStack_80);
    if (*(int *)(param_1 + 0x294) == 0) {
      fn_8241AFD0(param_1,uVar1,
                   *(undefined4 *)(*(int *)(param_1 + 0x18) * 0x1ac + *(int *)(param_1 + 8) + 0x14),
                   0);
      *(int *)(param_1 + 0x294) = (int)uVar1;
    }
    *(int *)(param_1 + 0x290) = (int)uVar1;
  }
  return;
}

