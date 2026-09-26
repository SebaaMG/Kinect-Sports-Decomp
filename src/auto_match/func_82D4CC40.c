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
extern unsigned int *auStack_70;
extern int fn_82CE5110();
extern unsigned int uStack_30;
extern unsigned int uStack_50;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_82D4CC40(int *param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  char acStack_80 [16];
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_30;
  
  uStack_60 = param_4[1];
  uStack_5c = 0xffffffff;
  uStack_30 = 0;
  uStack_50 = 0xffffffff;
  (**(code **)(*param_1 + 0x20))(acStack_80,param_1,param_2,auStack_70);
  if (acStack_80[0] != '\0') {
    fn_82CE5110(auStack_70,*(undefined4 *)(param_3 + 8),auStack_70);
    (**(code **)*param_4)(param_4,param_3,auStack_70);
  }
  return;
}

