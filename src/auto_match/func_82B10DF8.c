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
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82AD20C0();


void fn_82B10DF8(undefined8 param_1,int param_2,ulonglong param_3,ulonglong param_4,
                  undefined8 param_5,uint param_6)

{
  uint *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  
  uVar3 = 1;
  if ((param_3 & 0xffffffff) != 0) {
    puVar4 = (undefined4 *)(param_2 + 0x2c);
    do {
      if ((uVar3 & param_4) != 0) {
        puVar1 = (uint *)fn_82AD17B0(param_1,param_5);
        *puVar1 = (param_6 & 0x1b) << 5 | 0x2001c80 | *puVar1 & 0xf3fffc9f;
        fn_82AD20C0(param_2,*puVar4,param_1);
        uVar2 = fn_82AD1978(param_2,puVar1);
        param_6 = param_6 + 1;
        *puVar4 = uVar2;
      }
      param_3 = param_3 - 1;
      puVar4 = puVar4 + 1;
      uVar3 = (uVar3 & 0x7fffffff) << 1;
    } while (param_3 != 0);
  }
  return;
}

