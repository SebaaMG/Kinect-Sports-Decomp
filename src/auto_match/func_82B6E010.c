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
extern int fn_82AB15D0();
extern int fn_82F691F0();


undefined8 fn_82B6E010(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da2c0,0xffffffff820da230,0x11d);
  }
  if (3 < param_2) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820da294,0xffffffff820da230,0x11e);
    return 0x19;
  }
  iVar2 = param_2 * 0x2c + param_1;
  if ((*(int *)(iVar2 + 0x14c) != 0) &&
     (iVar1 = (**(code **)(param_1 + 0x1f8))(*(undefined4 *)(param_1 + 0x1e8),iVar2 + 0x13c),
     iVar1 != 0)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da230,299);
  }
  if ((*(int *)(iVar2 + 0x150) != 0) &&
     (iVar1 = (**(code **)(param_1 + 0x1f0))(*(undefined4 *)(param_1 + 0x1e8)), iVar1 != 0)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da230,0x134);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(iVar2 + 0x128,0,0x2c);
}

