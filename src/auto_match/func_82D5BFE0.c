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
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_30;


void fn_82D5BFE0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (*(char *)(param_1 + 0x84) == '\0') {
    uStack_1c = *(undefined4 *)(param_1 + 8);
    uStack_30 = param_2;
    puStack_2c = param_3;
    uStack_20 = param_4;
    uStack_18 = param_5;
    uStack_24 = (**(code **)(*(int *)*param_3 + 0x10))();
    fn_82D71478(param_1 + 0x30,&uStack_30);
  }
  return;
}

