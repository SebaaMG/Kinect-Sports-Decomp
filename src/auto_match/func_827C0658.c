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
extern int fn_827C00B0();
extern int fn_827C05E8();


undefined8 fn_827C0658(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_1[100];
  if (*(char *)(iVar1 + 0x11) == '\0') {
    uVar2 = (**(code **)(param_1[0x65] + 4))(param_1);
    if ((int)uVar2 == 1) {
      if (*(char *)(iVar1 + 0x14) == '\0') {
        if (*(char *)(iVar1 + 0x10) == '\0') {
          *(undefined4 *)(*param_1 + 0x14) = 0x23;
          (**(code **)*param_1)(param_1);
        }
        fn_827C05E8(param_1);
      }
      else {
        fn_827C00B0(param_1);
        *(undefined1 *)(iVar1 + 0x14) = 0;
      }
    }
    else if ((int)uVar2 == 2) {
      *(undefined1 *)(iVar1 + 0x11) = 1;
      if (*(char *)(iVar1 + 0x14) == '\0') {
        if (param_1[0x1f] < param_1[0x21]) {
          param_1[0x21] = param_1[0x1f];
        }
      }
      else if (*(char *)(param_1[0x65] + 0xd) != '\0') {
        *(undefined4 *)(*param_1 + 0x14) = 0x3b;
        (**(code **)*param_1)(param_1);
      }
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

