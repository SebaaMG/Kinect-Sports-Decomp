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
extern int fn_82230360();
extern int fn_82F6DCE0();


undefined1 * fn_828B5B28(undefined1 *param_1,undefined2 *param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  char acStack_210 [512];
  
  if (*(char *)((int)param_2 + 7) == '\0') {
    if (param_3 == '\0') {
      uVar2 = 0xffffffff82024f10;
    }
    else {
      uVar2 = 0xffffffff82024f24;
    }
    fn_82F6DCE0(acStack_210,0x200,uVar2);
  }
  else {
    if (param_3 == '\0') {
      uVar2 = 0xffffffff82024fb0;
    }
    else {
      uVar2 = 0xffffffff82024fc8;
    }
    fn_82F6DCE0(acStack_210,0x200,uVar2,*param_2,param_2[1],param_2[2]);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  pcVar3 = acStack_210;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  fn_82230360(param_1,acStack_210,pcVar3 + (-1 - (int)acStack_210));
  return param_1;
}

