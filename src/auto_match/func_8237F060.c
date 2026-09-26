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
extern int fn_822315A0();
extern int fn_82372C00();
extern int fn_824D2AE8();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


undefined8 fn_8237F060(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iStack_30;
  int iStack_2c;
  
  iVar1 = *(int *)(param_1 + 0x240);
  iVar6 = 0;
  iVar5 = fn_82372C00(iVar1);
  if (iVar5 != 0) {
    iVar6 = *(int *)(iVar5 + 0x28);
  }
  if (*(int *)(param_1 + 0x254) != *(int *)(iVar1 + 0x1f8)) {
    return 0xffffffff831d1ca8;
  }
  if ((*(int *)(iVar1 + 0x54) == 2) || (*(int *)(iVar1 + 0x54) == 4)) {
    bVar2 = true;
    bVar3 = true;
    bVar4 = true;
    if (*(int *)(iVar1 + 0x1e4) == *(int *)(param_1 + 0x254)) goto LAB_8237f0d0;
  }
  else {
    bVar4 = false;
  }
  bVar2 = bVar4;
  bVar3 = false;
LAB_8237f0d0:
  fn_824D2AE8(&iStack_30,param_1 + 0x24c);
  if ((iStack_30 == 0) || (bVar4 = true, *(int *)(iStack_30 + 0x9c) == 0)) {
    bVar4 = false;
  }
  if (((!bVar2) || (bVar3)) || (!bVar4)) {
    if (*(int *)(param_1 + 600) != iVar6) {
      if (iStack_2c != 0) {
        fn_822315A0();
      }
      return 0xffffffff831d1cf4;
    }
    if (*(int *)(*(int *)(param_1 + 0x240) + 0x1f0) == *(int *)(param_1 + 0x254)) {
      if (iStack_2c != 0) {
        fn_822315A0();
      }
      return 0xffffffff831d1d40;
    }
  }
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  return 0xffffffff831d1ca8;
}

