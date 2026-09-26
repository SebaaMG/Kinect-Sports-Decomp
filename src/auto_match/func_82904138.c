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
extern int fn_829639F0();
extern int fn_82964180();
extern int fn_82BA02A8();
extern int fn_82F68CC0();


undefined8 fn_82904138(int param_1,uint param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 < *(uint *)(iVar1 + 8)) {
    iVar3 = param_2 << 2;
    uVar2 = param_2;
    do {
      iVar1 = *(int *)(*(int *)(iVar1 + 0x14) + iVar3);
      if (iVar1 != 0) {
        fn_82BA02A8(iVar1);
        fn_82964180(iVar1);
      }
      uVar2 = uVar2 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + iVar3) = 0;
      iVar3 = iVar3 + 4;
      iVar1 = *(int *)(param_1 + 8);
    } while (uVar2 < *(uint *)(iVar1 + 8));
  }
  *(uint *)(iVar1 + 8) = param_2;
  iVar1 = *(int *)(param_1 + 8);
  if (param_3 < *(uint *)(iVar1 + 0xc)) {
    iVar3 = param_3 << 2;
    uVar2 = param_3;
    do {
      iVar1 = *(int *)(*(int *)(iVar1 + 0x18) + iVar3);
      if (iVar1 != 0) {
        fn_82BA02A8(iVar1);
        fn_829639F0(iVar1);
      }
      uVar2 = uVar2 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x18) + iVar3) = 0;
      iVar3 = iVar3 + 4;
      iVar1 = *(int *)(param_1 + 8);
    } while (uVar2 < *(uint *)(iVar1 + 0xc));
  }
  *(uint *)(iVar1 + 0xc) = param_3;
  fn_82F68CC0(*(undefined4 *)(param_1 + 0x18),param_4,*(int *)(*(int *)(param_1 + 4) + 0x1c) << 2);
  return 0;
}

