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
extern int fn_82D71478();
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_60;


void fn_82D5B300(undefined8 param_1,int param_2,undefined4 param_3,undefined4 *param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uStack_60;
  undefined4 *puStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  if ((*(byte *)(param_2 + 0xb) & 0x20) == 0) {
    uStack_54 = (**(code **)(*(int *)*param_4 + 0x10))();
    uStack_60 = param_3;
    puStack_5c = param_4;
    uStack_50 = param_5;
    uStack_4c = param_6;
    uStack_48 = param_7;
    fn_82D71478(param_2 + 0x10,&uStack_60);
  }
  return;
}

