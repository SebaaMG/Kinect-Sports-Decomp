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
extern unsigned int fStack_10;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_82FFF670(double param_1,int *param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  undefined4 uStack_14;
  float fStack_10;
  
  fStack_10 = (float)param_1;
  uStack_20 = 8;
  uStack_18 = 0;
  uStack_1c = param_4;
  uStack_14 = param_5;
  (**(code **)(*param_2 + 0x38))(param_2,&uStack_20);
  return;
}

