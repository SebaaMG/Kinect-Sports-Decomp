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
extern int fn_8226FDB8();
extern int fn_8226FE40();
extern int fn_82270B70();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831D1298;
extern unsigned int lbl_831D12AC;
extern unsigned int lbl_831D12B8;
extern unsigned int lbl_831D12C0;


undefined8 fn_822A21A8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if (lbl_831D12B8 == 0) {
    if (lbl_831D12AC == 0) {
      return 0;
    }
    iVar3 = fn_8226FE40();
    iVar2 = lbl_831D12AC;
    if (iVar3 == 0) {
      iVar3 = fn_82270B70();
      if (*(int *)(iVar3 + 0xac) == 0) {
        return 0;
      }
      iVar1 = *(int *)(*(int *)(iVar3 + 0xa8) + 4);
      iVar4 = fn_8226FDB8(iVar2,1);
      if (iVar4 == 0) {
        return 0;
      }
      if (*(int *)(iVar1 + 8) != iVar2) {
        return 0;
      }
      if ((*(int *)(iVar3 + 0xa0) != 4) && (*(int *)(iVar3 + 0xa0) != 5)) {
        return 0;
      }
    }
    iVar2 = lbl_831D12AC;
    iVar3 = fn_82270B70();
    if (*(int *)(iVar3 + 0xac) == 0) {
      return 0;
    }
    iVar1 = *(int *)(*(int *)(iVar3 + 0xa8) + 4);
    iVar4 = fn_8226FDB8(iVar2,1);
    if (iVar4 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 8) != iVar2) {
      return 0;
    }
    bVar5 = (uint)(*(int *)(iVar1 + 0x14) != 0) == **(uint **)(iVar3 + 0x240);
  }
  else {
    if (lbl_831D1298 < 1) {
      return 0;
    }
    bVar5 = lbl_831D12C0 == lbl_821CA460;
  }
  if (!bVar5) {
    return 0;
  }
  return 1;
}

