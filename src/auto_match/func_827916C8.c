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
extern int fn_82790270();
extern int fn_82790358();
extern unsigned int iStack00000024;
extern unsigned int stack0x00000024;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


undefined4 * fn_827916C8(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar2;
  longlong lVar1;
  undefined4 *puVar3;
  int iStack00000024;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iStack00000024 = param_3;
  uStack_20 = param_1;
  uStack_1c = param_2;
  uVar2 = fn_82790358(&stack0x00000024,0,param_4,&uStack_20,0xffffffff82790e00);
  if (uVar2 < param_4) {
    puVar3 = (undefined4 *)(uVar2 * 0xc + param_3);
    lVar1 = fn_82790270(uStack_20,*puVar3,uStack_1c);
    if (lVar1 == 0) {
      return puVar3;
    }
  }
  return (undefined4 *)0x0;
}

