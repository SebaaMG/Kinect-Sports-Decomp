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
extern int fn_82A4F4E0();
extern int fn_82A5C960();


void fn_82A5C9E0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  fn_82A5C960();
  puVar1 = *(undefined4 **)(param_1 + 0xd4);
  while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
    if (puVar2 == (undefined4 *)0x0) {
      piVar3 = (int *)0x0;
      puVar1 = puVar2;
    }
    else {
      piVar3 = (int *)*puVar2;
      puVar1 = (undefined4 *)puVar2[1];
    }
    if (((piVar3[3] == param_2) ||
        ((*piVar3 == 2 && ((piVar3[5] == param_2 || (piVar3[4] == param_2)))))) &&
       (fn_82A40B38(param_1 + 8,puVar2), piVar3[2] != 5)) {
      fn_82A4F4E0(piVar3);
    }
  }
  return;
}

