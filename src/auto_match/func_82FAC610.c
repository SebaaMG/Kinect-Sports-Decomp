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
extern int fn_82FA8588();
extern int fn_82FB3578();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82FAC610(int param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  uint uStack_30;
  undefined4 uStack_2c;
  
  iVar1 = fn_82FB3578(param_1 + 0x38,param_3,&uStack_30);
  while (iVar1 == 0x2d) {
    fn_82FA8588(uStack_2c,
                    ((ulonglong)uStack_30 - (ulonglong)*(uint *)(param_1 + 0x5c)) + param_2);
    iVar1 = fn_82FB3578(param_1 + 0x38,param_3,&uStack_30);
  }
  return;
}

