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
extern int fn_82BE1A10();
extern int fn_82BE1FA0();
extern int fn_82BE5240();
extern int fn_82BE56B0();
extern int fn_82BF4D90();
extern int fn_82BF4DF8();


undefined8 fn_82BEA590(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar1 = fn_82BE1A10();
    if (*(int *)(iVar1 + 0x10) == 4) {
      return 0x12d;
    }
    iVar1 = fn_82BE56B0(0x58);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)fn_82BF4D90();
    }
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      uVar3 = 0x65;
      uVar4 = 0xffffffff820eab8c;
    }
    else {
      fn_82BE1A10();
      uVar3 = fn_82BE1FA0();
      iVar1 = fn_82BF4DF8(puVar2,param_1,uVar3);
      if (iVar1 != 0) {
        *(undefined4 **)(param_1 + 0x4c) = puVar2;
        goto LAB_82bea65c;
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)*puVar2)(puVar2,1);
      uVar3 = 0x452;
      uVar4 = 0xffffffff820eab60;
    }
    uVar3 = fn_82BE5240(param_1,uVar3,uVar4);
  }
  else {
LAB_82bea65c:
    uVar3 = 0;
  }
  return uVar3;
}

