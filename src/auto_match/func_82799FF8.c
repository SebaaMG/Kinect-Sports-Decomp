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
extern unsigned int *auStack_2c;
extern int fn_827912D8();
extern int fn_82793908();
extern int fn_82796838();
extern int fn_82797968();
extern unsigned int uStack_30;


void fn_82799FF8(int *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined4 uStack_30;
  undefined4 auStack_2c [11];
  
  uVar1 = fn_827912D8(param_1[2]);
  if (((uVar1 & 0xffffffff) == 0) ||
     (cVar2 = fn_82793908(param_1[2],auStack_2c,&uStack_30,uVar1 - 1), cVar2 == '\0')) {
    fn_82797968(param_1[2],param_2,param_3,
                  (~(ulonglong)*(byte *)((int)param_1 + 0x13f) & 0xffffffff) >> 3 & 1);
  }
  else {
    fn_82796838(param_1[2],param_2,param_3,
                  (~(ulonglong)*(byte *)((int)param_1 + 0x13f) & 0xffffffff) >> 3 & 1,auStack_2c[0],
                  uStack_30);
  }
  (**(code **)(*param_1 + 4))(param_1,6);
  return;
}

