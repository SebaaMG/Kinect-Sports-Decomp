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
extern int fn_82B841E8();


uint fn_82B10788(undefined8 param_1,undefined8 param_2,uint *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  uint uVar3;
  undefined8 uVar2;
  undefined4 uVar4;
  
  uVar3 = fn_82B841E8(param_1,param_2,0,3,2,4);
  uVar2 = fn_82AD17B0(param_1,param_4);
  uVar4 = fn_82AD1978(uVar3,uVar2);
  *(undefined4 *)(uVar3 + 0x2c) = uVar4;
  uVar2 = fn_82AD17B0(param_1,param_5);
  uVar4 = fn_82AD1978(uVar3,uVar2);
  *(undefined4 *)(uVar3 + 0x30) = uVar4;
  *(uint *)(uVar3 + 8) =
       (**(uint **)(uVar3 + 0x2c) >> 0x19 & 7) << 0xe | *(uint *)(uVar3 + 8) & 0xfffe3fff;
  if (param_3 != (uint *)0x0) {
    uVar1 = uVar3 & 0xfffffffe;
    *(uint *)(uVar1 + 0x24) = *param_3;
    *(uint *)(*param_3 & 0xfffffffe) = uVar1;
    *(uint *)(uVar1 + 0x28) = (uint)(param_3 + -9) | 1;
    *param_3 = uVar1 + 0x28;
  }
  return uVar3;
}

