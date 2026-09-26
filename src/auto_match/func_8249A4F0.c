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
extern unsigned int *auStack_30;
extern int fn_8249A2E0();


void fn_8249A4F0(int param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStack_30 [48];
  
  if (**(int **)(param_1 + 4) != param_2) {
    uVar1 = *(uint *)(param_2 + 4);
    do {
      uVar2 = (ulonglong)**(uint **)(param_1 + 4);
      fn_8249A2E0(auStack_30,param_1,uVar2 + 0x10,uVar2);
    } while (uVar2 != uVar1);
  }
  return;
}

