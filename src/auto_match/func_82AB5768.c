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
extern int fn_82AB55F0();


undefined4 fn_82AB5768(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6a6c,0xffffffff820d68b0,0x518);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 8);
    if (iVar1 != 0) goto LAB_82ab57e8;
  }
  fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6a14,0xffffffff820d68b0,0x51e);
LAB_82ab57e8:
  iVar1 = fn_82AB55F0(iVar1,*(undefined4 *)(param_1 + 0x10),
                        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xc));
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x18) = iVar1;
  return *(undefined4 *)(iVar1 + 0x10);
}

