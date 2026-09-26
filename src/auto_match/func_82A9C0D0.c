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
extern int fn_82A99B70();
extern int fn_82A99BC8();
extern int fn_82A99C28();
extern int fn_82A9A860();
extern int fn_82A9BFE8();


void fn_82A9C0D0(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (-1 < *(int *)(param_1 + 0x90)) {
    iVar1 = *(int *)(param_3 + 0x184);
    fn_82A99BC8(param_2);
    fn_82A99B70(param_2,0xffffffff820d28b4,0xffffffff820d2ae8);
    fn_82A9A860(param_2);
    if (iVar1 != 0) {
      uVar3 = 0;
      iVar2 = *(int *)(iVar1 + 0x10) + iVar1;
      if (*(int *)(iVar1 + 0xc) != 0) {
        do {
          fn_82A9BFE8(param_1,param_2,iVar1,iVar2);
          uVar3 = uVar3 + 1;
          iVar2 = iVar2 + 0x14;
        } while (uVar3 < *(uint *)(iVar1 + 0xc));
      }
    }
    fn_82A99C28(param_2,0xffffffff820d2ae8);
  }
  return;
}

