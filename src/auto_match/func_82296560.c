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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_82296328();
extern int fn_822964C0();
extern int fn_82F640B0();


undefined4 *
fn_82296560(undefined4 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             longlong param_5,ulonglong param_6)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [72];
  
  while( true ) {
    uVar2 = fn_82F640B0(param_4,0,param_5);
    lVar4 = uVar2 - param_4;
    if ((uVar2 & 0xffffffff) == 0) {
      lVar4 = param_5;
    }
    puVar3 = (undefined8 *)fn_822964C0(auStack_50,param_2,param_3,param_4,lVar4);
    param_3 = *puVar3;
    if (param_5 - lVar4 == 0) break;
    if ((param_6 & 0xffff) != 0) {
      puVar3 = (undefined8 *)fn_82296328(auStack_48,param_3,param_6,1);
      param_3 = *puVar3;
    }
    param_4 = lVar4 + param_4 + 1;
    param_5 = (param_5 - lVar4) + -1;
  }
  uVar1 = *(undefined4 *)((int)puVar3 + 4);
  *param_1 = *(undefined4 *)puVar3;
  param_1[1] = uVar1;
  return param_1;
}

