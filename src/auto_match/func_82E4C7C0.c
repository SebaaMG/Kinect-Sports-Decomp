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
extern int fn_82E91590();
extern int fn_82E92160();
extern int fn_82E92D78();


undefined8 fn_82E4C7C0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *apuStack_20 [4];
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x230) + 0x10);
  if ((uVar1 != 0) && (-1 < (longlong)((ulonglong)uVar1 - 1))) {
    iVar2 = fn_82E91590(*(int *)(param_1 + 0x230),apuStack_20,0);
    if ((iVar2 != 0) &&
       ((apuStack_20[0] != (undefined4 *)0x0 &&
        (iVar2 = fn_82E92160(*(undefined4 *)(param_1 + 0x234),*apuStack_20[0]), iVar2 == 0))))
    {
      fn_82E92D78(*(undefined4 *)(param_1 + 0x234));
      return 0;
    }
  }
  return 0xffffffffffffff9c;
}

