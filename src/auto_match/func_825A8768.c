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
extern int fn_825737F0();
extern int fn_82CE4118();
extern int fn_82D89B48();
extern int fn_82D8B6C8();


void fn_825A8768(int param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  uint uVar5;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x748);
  for (uVar5 = *(uint *)(param_1 + 0x744); uVar5 < uVar1; uVar5 = uVar5 + 0x10) {
    iVar2 = *(int *)(uVar5 + 4);
    if (iVar2 != 0) {
      if ((*(char *)(iVar2 + 0xe8) == '\x05') || (bVar3 = false, *(char *)(iVar2 + 0xe8) == '\x04'))
      {
        bVar3 = true;
      }
      if (!bVar3) {
        fn_82D8B6C8(iVar2,5,1,0);
        *(undefined1 *)(*(int *)(uVar5 + 4) + 0x2a) = 0;
      }
      iVar2 = *(int *)(uVar5 + 4);
      uVar4 = (ulonglong)*(uint *)(iVar2 + 0x98);
      if (uVar4 != 0) {
        fn_82D89B48(iVar2,uVar4 + 8);
        *(undefined4 *)(iVar2 + 0x98) = 0;
        fn_82CE4118(uVar4);
        fn_825737F0(iVar2 + 0x200);
      }
      *(undefined4 *)(*(int *)(uVar5 + 4) + 0x2c) = 1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x75c);
  for (uVar5 = *(uint *)(param_1 + 0x758); uVar5 < uVar1; uVar5 = uVar5 + 0x3f0) {
    iVar2 = *(int *)(uVar5 + 0xd4);
    if (iVar2 != 0) {
      if ((*(char *)(iVar2 + 0xe8) == '\x05') || (bVar3 = false, *(char *)(iVar2 + 0xe8) == '\x04'))
      {
        bVar3 = true;
      }
      if (!bVar3) {
        fn_82D8B6C8(iVar2,5,1,0);
        *(undefined1 *)(*(int *)(uVar5 + 0xd4) + 0x2a) = 0;
      }
      iVar2 = *(int *)(uVar5 + 0xd4);
      uVar4 = (ulonglong)*(uint *)(iVar2 + 0x98);
      if (uVar4 != 0) {
        fn_82D89B48(iVar2,uVar4 + 8);
        *(undefined4 *)(iVar2 + 0x98) = 0;
        fn_82CE4118(uVar4);
        fn_825737F0(iVar2 + 0x200);
      }
      *(undefined4 *)(*(int *)(uVar5 + 0xd4) + 0x2c) = 1;
    }
  }
  return;
}

