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
extern int fn_82AB9918();
extern int fn_82B6E398();
extern int fn_82B6E770();
extern int fn_82B6E830();


undefined8 fn_82AB9C00(int param_1,undefined8 param_2,ulonglong param_3,int *param_4)

{
  int *piVar1;
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d74d0,0xffffffff820d74e0,0x1ed);
  }
  piVar1 = (int *)fn_82B6E830(*(undefined4 *)(param_1 + 0x18),param_2,
                                    (param_3 & 0xffffffff) >> 2);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)fn_82AB9918(param_1,param_2,param_3);
    if (piVar1 == (int *)0x0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7594,0xffffffff820d74e0,0x209);
      return 0x10;
    }
    fn_82B6E398(*(undefined4 *)(param_1 + 0x14),*piVar1,piVar1);
    fn_82B6E770(*(undefined4 *)(param_1 + 0x18),piVar1[1],piVar1[2],piVar1);
    if (*piVar1 == 0) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d75e8,0xffffffff820d74e0,0x217);
    }
    *param_4 = *piVar1;
  }
  else {
    piVar1[4] = piVar1[4] + 1;
    *param_4 = *piVar1;
  }
  return 0;
}

