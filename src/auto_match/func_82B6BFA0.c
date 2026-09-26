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


undefined8 fn_82B6BFA0(int param_1,int param_2,uint param_3,uint *param_4,uint *param_5)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9990,0xffffffff820d9998,0x18a);
  }
  if (param_4 == (uint *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9ac4,0xffffffff820d9998,0x18b);
  }
  if (param_5 == (uint *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9ab8,0xffffffff820d9998,0x18c);
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9a98,0xffffffff820d9998,0x18d);
  }
  if ((param_2 == 3) || (param_2 == 2)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9a48,0xffffffff820d9998,400);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    if (param_2 == 1) {
      if (0x5f < param_3) {
        return 1;
      }
      *param_4 = (0x5f - param_3) / 3;
      uVar2 = (0x5f - param_3) % 3;
      goto LAB_82b6c13c;
    }
    if (param_2 != 0) {
      uVar1 = 0x1a3;
      goto LAB_82b6c114;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9a24,0xffffffff820d9998,0x1af);
    }
    if (param_2 != 0) {
      uVar1 = 0x1b0;
LAB_82b6c114:
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9a04,0xffffffff820d9998,uVar1);
    }
  }
  if (0x1f < param_3) {
    return 1;
  }
  *param_4 = param_3;
  uVar2 = 0;
LAB_82b6c13c:
  *param_5 = uVar2;
  return 0;
}

