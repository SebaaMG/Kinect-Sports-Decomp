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
extern int fn_82AB4D18();
extern int fn_82AB85A8();
extern int fn_82BA02A8();
extern int fn_82F68CC0();


int fn_82AB8F70(ulonglong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d67c8,0xffffffff820d7400,0x84);
  }
  if (param_2 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d73ec,0xffffffff820d7400,0x85);
  }
  if (((param_1 & 0xffffffff) != 0) && (param_2 != 0)) {
    iVar1 = fn_82BA02A8(param_1);
    iVar2 = (**(code **)(iVar1 + 0x14))(*(undefined4 *)(iVar1 + 0x10),0x30);
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x20) = (int)param_1;
      *(undefined4 *)(iVar2 + 0x28) = 0;
      *(undefined4 *)(iVar2 + 0x2c) = 0;
      if (*(int *)(param_2 + 8) == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d73c8,0xffffffff820d7400,0xa9);
      }
      if (*(int *)(param_2 + 0x14) == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d73a0,0xffffffff820d7400,0xaa);
      }
      if (*(int *)(param_2 + 0x18) == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d737c,0xffffffff820d7400,0xab);
      }
      if (*(int *)(param_2 + 0x1c) == 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d7354,0xffffffff820d7400,0xac);
      }
      fn_82F68CC0(iVar2,param_2,0x20);
      uVar3 = fn_82AB4D18(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14),
                                *(undefined4 *)(iVar1 + 0x18),10);
      *(undefined4 *)(iVar2 + 0x24) = uVar3;
      fn_82AB85A8(param_1,iVar2);
      return iVar2;
    }
  }
  return 0;
}

