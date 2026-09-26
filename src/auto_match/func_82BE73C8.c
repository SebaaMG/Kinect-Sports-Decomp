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
extern int fn_82BE56B0();
extern int fn_82BE56C0();
extern int fn_82BE5B48();
extern int fn_82BEA200();
extern int fn_82BEA230();
extern int fn_82BEB628();
extern int fn_82BEB640();


undefined8 fn_82BE73C8(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar3;
  ulonglong uVar2;
  int iVar4;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar1 = 0x2bd;
  }
  else {
    iVar3 = fn_82BE5B48(param_2);
    if (iVar3 == 0) {
      uVar1 = 700;
    }
    else {
      iVar4 = param_1 + 0x2c;
      iVar3 = fn_82BEA200(iVar4,0xffffffff820e98f4);
      if (iVar3 == 0) {
        uVar1 = 0x2c0;
      }
      else {
        uVar2 = fn_82BE56B0(0xc);
        if ((uVar2 & 0xffffffff) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = fn_82BEB628(uVar2,param_2);
        }
        if ((uVar2 & 0xffffffff) == 0) {
          fn_82BEA230(iVar4,0xffffffff820e98f4);
          *(undefined4 *)(param_1 + 0x10) = 0;
          uVar1 = fn_82BE5240(param_1,0x65,0xffffffff820e98d0);
        }
        else {
          iVar3 = fn_82BE52B8(param_1 + 0x14,uVar2);
          if (iVar3 == 0) {
            fn_82BEB640(uVar2);
            fn_82BE56C0(uVar2);
            uVar1 = 0x2be;
          }
          else {
            uVar1 = 0;
          }
          fn_82BEA230(iVar4,0xffffffff820e98f4);
        }
      }
    }
  }
  return uVar1;
}

