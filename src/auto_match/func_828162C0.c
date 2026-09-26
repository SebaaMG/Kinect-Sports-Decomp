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
extern int fn_82815268();
extern int fn_82816068();
extern int fn_82820CC0();
extern int fn_82F65390();


undefined8 fn_828162C0(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x20;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 4;
    iVar1 = fn_82F65390(*(undefined4 *)(param_2 + 0x1c),0xffffffff8201e0a0,4);
    if (iVar1 == 0) {
      uVar3 = fn_82816068(param_1,param_2);
    }
    else {
      iVar1 = fn_82F65390(*(undefined4 *)(param_2 + 0x1c),0xffffffff8201e0a8,4);
      if (iVar1 == 0) {
        uVar3 = fn_82820CC0(param_1,param_2);
      }
      else {
        uVar2 = *(uint *)(param_2 + 0xc) | 1;
        *(uint *)(param_2 + 0xc) = uVar2;
        if (uVar2 != 0) {
          uVar3 = fn_82815268(param_1,param_2,*(undefined4 *)(param_2 + 0x14));
        }
      }
    }
  }
  else {
    uVar3 = fn_82815268(param_1,param_2,*(undefined4 *)(param_2 + 0x14));
  }
  return uVar3;
}

