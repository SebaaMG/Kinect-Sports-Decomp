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
extern int fn_827977F8();
extern int fn_82799958();


void fn_82799EB8(int *param_1,char *param_2,char *param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  char *pcVar2;
  
  fn_827977F8(param_1[2]);
  pcVar2 = param_2;
  if (param_3 == (char *)0xffffffff) {
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    param_3 = pcVar2 + (-1 - (int)param_2);
  }
  fn_82799958(param_1[2],param_2,param_3,param_5,*(byte *)((int)param_1 + 0x13d) >> 2 & 1,param_4,
                param_6,param_7);
  (**(code **)(*param_1 + 4))(param_1,0x106);
  return;
}

