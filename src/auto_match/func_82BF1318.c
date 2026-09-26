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
extern int fn_82BE5240();
extern int fn_82BE52B8();
extern int fn_82BEB628();
extern int fn_82BF8E90();


undefined4 * fn_82BF1318(int param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = thunk_FUN_82be5550(0xf8);
  if ((uVar1 & 0xffffffff) == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    if (*(int *)(param_1 + 0x34) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x18);
    }
    puVar2 = (undefined4 *)fn_82BF8E90(uVar1,param_1,uVar4,param_2);
  }
  if (puVar2 == (undefined4 *)0x0) {
    fn_82BE5240(param_1,0x65,0xffffffff820eb580);
    puVar2 = (undefined4 *)0x0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    uVar1 = thunk_FUN_82be5550(0xc);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_82BEB628(uVar1,puVar2);
    }
    if (iVar3 == 0) {
      fn_82BE5240(param_1,0x65,0xffffffff820eb55c);
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)*puVar2)(puVar2,1);
      puVar2 = (undefined4 *)0x0;
    }
    else {
      fn_82BE52B8(param_1 + 0x3c);
    }
  }
  return puVar2;
}

