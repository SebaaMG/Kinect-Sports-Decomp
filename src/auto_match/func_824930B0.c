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
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_8225F160();
extern int fn_8229EEA0();
extern int fn_824CCD80();
extern int fn_82522588();
extern int fn_825603C8();
extern unsigned int iStack_2c;
extern unsigned int lbl_832975B0;


void fn_824930B0(int param_1)

{
  int iVar1;
  int *piVar3;
  int iVar4;
  undefined8 uVar2;
  ulonglong uVar5;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  iVar1 = *(int *)(param_1 + 0x44);
  for (uVar5 = (ulonglong)*(uint *)(iVar1 + 0x30);
      (uVar5 & 0xffffffff) != (ulonglong)*(uint *)(iVar1 + 0x34); uVar5 = uVar5 + 8) {
    piVar3 = (int *)fn_82522588(auStack_30,uVar5);
    iVar4 = *piVar3;
    *(undefined4 *)(iVar4 + 0x390) = 0;
    *(undefined4 *)(iVar4 + 0x3c0) = 0;
    *(undefined4 *)(iVar4 + 0x3c4) = 0;
    if (iStack_2c != 0) {
      fn_822315A0();
    }
  }
  *(undefined4 *)(iVar1 + 0xe70) = 0;
  iVar4 = fn_8225F160();
  if (*(int *)(iVar4 + 8) == 1) {
    iVar4 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar4 = fn_82250A18();
    }
    if (*(char *)(iVar4 + 4) == '\0') {
      iVar4 = *(int *)(((uint)LZCOUNT(*(undefined4 *)(iVar1 + 0xee8)) >> 2 & 8) +
                      *(int *)(iVar1 + 0x30));
      if (*(int *)(iVar4 + 0x22c) != 1) {
        uVar2 = fn_824CCD80(*(undefined4 *)(iVar4 + 0x10));
        fn_825603C8(uVar2,iVar4 + 0x20,1);
        *(undefined4 *)(iVar4 + 0x22c) = 1;
      }
    }
  }
  if (*(int *)(*(int *)(iVar1 + 0x94) + 0x5c) != 0) {
    fn_8229EEA0();
  }
  return;
}

