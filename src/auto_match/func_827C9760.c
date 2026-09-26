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
extern int fn_827C91E8();
extern int fn_827C94F0();
extern int fn_827C9598();
extern int fn_827C9738();


void fn_827C9760(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[0x61];
  if (param_2 == 0) {
    if (*(char *)(param_1[0x68] + 8) == '\0') {
      *(code **)(iVar1 + 4) = fn_827C94F0;
    }
    else {
      *(code **)(iVar1 + 4) = fn_827C9598;
      fn_827C91E8();
      *(undefined4 *)(iVar1 + 0x40) = 0;
      *(undefined4 *)(iVar1 + 0x44) = 0;
      *(undefined4 *)(iVar1 + 0x4c) = 0;
    }
    *(undefined1 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  else if (param_2 == 2) {
    *(code **)(iVar1 + 4) = fn_827C9738;
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 4;
    (**(code **)*param_1)();
  }
  return;
}

