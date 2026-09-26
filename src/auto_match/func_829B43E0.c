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
extern int fn_82965280();
extern int fn_829B3AC0();
extern int fn_829B3C30();


undefined8 fn_829B43E0(int param_1)

{
  int iVar2;
  undefined8 uVar1;
  uint uVar3;
  uint uVar4;
  
  iVar2 = fn_829B3AC0(param_1,param_1 + 0x50,param_1 + 0x4c);
  uVar4 = 0;
  uVar3 = 0;
  if (*(int *)(iVar2 + 0x38) != 0) {
    iVar2 = 0;
    do {
      *(uint *)(*(int *)(param_1 + 0x30) + iVar2) = uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x40)) =
           *(undefined4 *)(iVar2 + *(int *)(param_1 + 0x3c));
      iVar2 = iVar2 + 4;
      uVar3 = *(uint *)(param_1 + 0x38);
    } while (uVar4 < uVar3);
  }
  fn_82965280(0xffffffff829b3990,*(undefined4 *)(param_1 + 0x30),uVar3,param_1);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar2 = 0;
    do {
      uVar1 = fn_829B3C30(param_1,*(undefined4 *)(*(int *)(param_1 + 0x30) + iVar2));
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      if ((int)uVar1 == 0) {
        return 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (uVar3 < *(uint *)(param_1 + 0x38));
  }
  return 1;
}

