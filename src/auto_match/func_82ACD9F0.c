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
extern int fn_82ACC5D8();
extern int fn_82ACD310();
extern int fn_82ACD3D8();


undefined8 fn_82ACD9F0(int param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x3c);
  uVar4 = uVar1;
  do {
    if (uVar4 == 0) {
      return 1;
    }
    lVar2 = fn_82ACD3D8(param_1);
    uVar4 = *(uint *)(param_1 + 0x3c);
  } while (lVar2 == 0);
  if (uVar4 != uVar1) {
    do {
      uVar4 = *(uint *)((*(uint *)(param_1 + 0x3c) & 0xfffffffe) + 0x28);
      uVar4 = -(uint)((uVar4 & 1) == 0) & uVar4;
      fn_82ACC5D8(param_1,*(uint *)(param_1 + 0x3c),
                    (lVar2 + -2) - (lVar2 + -3 + (ulonglong)(lVar2 + -2 == 0)));
      *(uint *)(param_1 + 0x3c) = uVar4;
    } while (uVar4 != uVar1);
  }
  if (((int)lVar2 == 2) &&
     (iVar3 = fn_82ACD310(param_1,*(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x1c)),
     iVar3 == *(int *)(param_1 + 0x3c))) {
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return 0;
}

