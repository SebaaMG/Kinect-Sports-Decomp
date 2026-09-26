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
extern unsigned int *auStack_40;
extern int fn_82A1E300();
extern int fn_82BFE530();
extern unsigned int *lbl_831E7B40;


undefined8 fn_82670288(void)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint auStack_40 [16];
  
  bVar2 = false;
  if (lbl_831E7B40 != (undefined4 *)0x0) {
    uVar5 = 0;
    do {
      if (uVar5 == 0) {
        auStack_40[0] = 0;
        uVar5 = fn_82BFE530(*lbl_831E7B40,auStack_40);
        uVar5 = ((uVar5 & 0xffffffff) >> 0x1f) - 1 & (ulonglong)auStack_40[0];
      }
      piVar1 = (int *)uVar5;
      if (*(char *)(piVar1 + 4) == '\0') {
LAB_82670310:
        uVar4 = 0;
      }
      else if (piVar1[1] == 0) {
        uVar4 = (ulonglong)(uint)piVar1[3] + 0x108;
        if ((ulonglong)(uint)piVar1[3] == 0) goto LAB_82670310;
      }
      else {
        uVar4 = (ulonglong)(uint)piVar1[1] + 0x108;
      }
      if ((uVar4 & 0xffffffff) != 0) {
        RtlEnterCriticalSection(uVar4);
      }
      uVar3 = (**(code **)(*piVar1 + 4))(uVar5);
      if ((uVar4 & 0xffffffff) != 0) {
        RtlLeaveCriticalSection(uVar4);
      }
      if (uVar3 == 0) {
LAB_82670370:
        (**(code **)*piVar1)(uVar5,1);
        uVar5 = 0;
      }
      else if (uVar3 == 1) {
        fn_82A1E300();
      }
      else {
        if (uVar3 < 3) goto LAB_82670370;
        bVar2 = true;
      }
    } while (!bVar2);
  }
  return 0;
}

