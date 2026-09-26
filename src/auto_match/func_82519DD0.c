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
extern int fn_8251A808();
extern int fn_8251A8D0();
extern int fn_828C40D8();


void fn_82519DD0(undefined8 param_1,int *param_2)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = param_2[0x14];
  if (uVar1 == 0) {
    fn_8251A808(param_2);
    return;
  }
  if (uVar1 == 1) {
    return;
  }
  if (uVar1 < 3) {
    if (param_2[0x16] != 2) {
      return;
    }
    if (*(char *)(param_2 + 0x17) == '\0') {
      return;
    }
    param_2[3] = 0;
    return;
  }
  if (uVar1 == 3) {
    if (param_2[0x16] == 3) {
      if (*(char *)(param_2 + 0x17) != '\0') {
        pcVar2 = *(code **)(*param_2 + 0x20);
        goto LAB_82519e7c;
      }
    }
    else {
      (**(code **)(*param_2 + 0x18))(param_1,param_2);
    }
    pcVar2 = *(code **)(*param_2 + 0x1c);
  }
  else {
    if (4 < uVar1) {
      if (uVar1 != 5) {
        return;
      }
      fn_8251A8D0();
      return;
    }
    if (param_2[0x16] == 4) {
      if (*(char *)(param_2 + 0x17) == '\0') {
        return;
      }
      fn_828C40D8(*(undefined4 *)(param_2[1] + 8));
      return;
    }
    pcVar2 = *(code **)(*param_2 + 0x24);
  }
LAB_82519e7c:
  (*pcVar2)(param_1,param_2);
  return;
}

