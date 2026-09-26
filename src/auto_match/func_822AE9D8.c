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
extern int fn_822ABAF8();
extern int fn_822ABF20();
extern int fn_82526C70();


void fn_822AE9D8(uint *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if (piVar3 < (int *)param_1[1]) {
    do {
      iVar1 = *(int *)(((int *)*piVar3)[4] * 4 + *(int *)*piVar3);
      fn_82526C70(iVar1 + 0x28,0x20,0xffffffff821ac494);
      if (*(int *)(iVar1 + 0x18) == 0) {
        uVar2 = 0xffffffff821ac49c;
      }
      else {
        uVar2 = fn_822ABF20(iVar1);
      }
      fn_822ABAF8(iVar1,uVar2);
      piVar3 = piVar3 + 1;
    } while (piVar3 < (int *)param_1[1]);
  }
  return;
}

