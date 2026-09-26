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
extern unsigned int *auStack_6c;
extern int fn_82E4FE08();
extern int fn_82E4FE40();
extern int fn_82F691F0();
extern unsigned int uStack_70;


undefined8 fn_82E28AA8(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uStack_70;
  uint auStack_6c [27];
  
  *param_2 = 0;
  auStack_6c[0] = 0;
  uStack_70 = 0;
  uVar3 = 0xb0;
  (**(code **)(*param_1 + 0x38))(param_1,0xffffffff821536c8,auStack_6c);
  uVar1 = auStack_6c[0] >> 2;
  (**(code **)(*param_1 + 0x38))(param_1,0xffffffff821536d8,&uStack_70);
  if ((ulonglong)uVar1 != 0) {
    uVar3 = ((ulonglong)uVar1 + 0x2b) * 4 & 0xfffffffc;
  }
  lVar2 = uStack_70 + uVar3;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = (int)lVar2;
  }
  uVar3 = fn_82E4FE08(lVar2);
  *param_2 = (int)uVar3;
  if ((uVar3 & 0xffffffff) == 0) {
    fn_82E4FE40(*param_2);
    return 0xffffffff8007000e;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar3,0,lVar2);
}

