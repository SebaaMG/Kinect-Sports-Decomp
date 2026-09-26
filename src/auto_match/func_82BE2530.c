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
extern int fn_82BE6590();
extern int fn_82BE66A0();
extern int fn_82BEB9B8();
extern int fn_82BEBD00();
extern int fn_82BEC428();


undefined8 fn_82BE2530(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar1 = thunk_FUN_82be5550(0x98);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)fn_82BEBD00();
  }
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    lVar3 = 0x65;
    uVar4 = 0xffffffff820e8c28;
  }
  else {
    iVar1 = fn_82BEC428(puVar2,param_1,*(undefined4 *)(param_1 + 0x158),
                              *(undefined4 *)(param_1 + 0x15c));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      (**(code **)*puVar2)(puVar2,1);
      lVar3 = 0x452;
      uVar4 = 0xffffffff820e8bfc;
    }
    else {
      lVar3 = fn_82BE6590(puVar2);
      if (lVar3 == 0) {
        lVar3 = fn_82BEB9B8(param_1,puVar2);
        if (lVar3 == 0) {
          *(undefined4 *)(param_1 + 0x10) = 8;
          return 0;
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
        fn_82BE66A0(puVar2);
        (**(code **)*puVar2)(puVar2,1);
        uVar4 = 0xffffffff820e8b94;
      }
      else {
        *(undefined4 *)(param_1 + 0x10) = 0;
        (**(code **)*puVar2)(puVar2,1);
        uVar4 = 0xffffffff820e8bd0;
      }
    }
  }
  uVar4 = fn_82BE5240(param_1,lVar3,uVar4);
  return uVar4;
}

