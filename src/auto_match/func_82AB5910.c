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
extern int fn_82AB4C70();
extern int fn_82B6B230();


undefined4 fn_82AB5910(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6a6c,0xffffffff820d68b0,0x5cd);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 8);
    if (iVar3 != 0) goto LAB_82ab5990;
  }
  fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6a20,0xffffffff820d68b0,0x5d3);
LAB_82ab5990:
  uVar1 = *(undefined4 *)(iVar3 + 0x10);
  if (iVar3 != *(int *)(param_1 + 0x10)) {
    puVar2 = (undefined4 *)fn_82AB4C70(iVar3);
    if (puVar2 == *(undefined4 **)(param_1 + 0x18)) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x10);
    }
    if (puVar2 != (undefined4 *)0x0) {
      fn_82B6B230(*puVar2);
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  }
  return uVar1;
}

