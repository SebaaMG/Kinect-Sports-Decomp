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
extern int fn_8267B890();
extern int fn_826C6A68();
extern unsigned int lbl_831E7E64;


void fn_826D0A40(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x1b4) == 0) {
    puVar1 = (undefined4 *)fn_8267B890(lbl_831E7E64,0x24,0);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      *puVar1 = 100;
      puVar1[1] = 0;
    }
    *(undefined4 **)(param_1 + 0x1b4) = puVar1;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1b4) + 4) = param_2;
  fn_826C6A68(param_1);
  return;
}

