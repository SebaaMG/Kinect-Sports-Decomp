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


undefined8 fn_82B6C280(int param_1,int param_2,int param_3,uint *param_4,undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar2 = *(uint *)(param_1 + 0x4a4);
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9a24,0xffffffff820d9998,0x2e4);
    }
    uVar2 = 0x20;
    uVar1 = 0x20 - *(int *)(param_1 + 0x4a4);
  }
  if (uVar1 < uVar2) {
    piVar3 = (int *)(uVar1 * 0x24 + param_1 + 0x1c);
    do {
      if (piVar3[-1] != 1) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9ad0,0xffffffff820d9998,0x2ec);
      }
      if (((*piVar3 != 1) && (*piVar3 == param_2)) && (piVar3[1] == param_3)) {
        *param_4 = uVar1;
        *param_5 = 0xffffffff;
        return 1;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 9;
    } while (uVar1 < uVar2);
  }
  return 0;
}

