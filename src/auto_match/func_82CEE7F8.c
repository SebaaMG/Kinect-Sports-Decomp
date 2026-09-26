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
extern int fn_82CEB1B8();


void fn_82CEE7F8(undefined8 param_1,ulonglong param_2,undefined8 param_3,int *param_4)

{
  char *pcVar1;
  undefined1 auStack_30 [48];
  
  if ((param_2 & 0xffffffff) != 0) {
    pcVar1 = (char *)fn_82CEB1B8(auStack_30,param_3);
    if (*pcVar1 == '\0') {
      (**(code **)(*param_4 + 0x10))(param_4,param_3,param_1,param_2,0);
    }
    else {
      (**(code **)(*param_4 + 0xc))(param_4,param_1,param_2,0);
    }
  }
  return;
}

