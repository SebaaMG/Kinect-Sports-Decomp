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
extern int fn_83031520();
extern unsigned int lbl_831BC768;


void fn_83030B60(int param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc4);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    if ((ulonglong)(uint)puVar1[1] == (param_2 & 0xffffffff)) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  piVar2 = puVar1 + 2;
  if (piVar2 == (int *)0x0) {
    return;
  }
  if (*piVar2 != 0) {
    puVar1[3] = *piVar2;
    fn_82FA5190(lbl_831BC768);
    *piVar2 = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
  }
  fn_83031520(param_1 + 0xc4,param_2);
  return;
}

