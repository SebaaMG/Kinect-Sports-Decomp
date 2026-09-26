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
extern int fn_82AB15D0();
extern int fn_82BD2C30();
extern unsigned int lbl_820E83A8;
extern unsigned int lbl_8316FF50;


longlong fn_82BD2E50(int param_1,int *param_2)

{
  char cVar3;
  longlong lVar1;
  int iVar2;
  char acStack_40 [64];
  
  cVar3 = (**(code **)(*param_2 + 0x34))(param_2);
  if (cVar3 == '\0') {
    iVar2 = fn_82BD2C30(param_2,acStack_40);
    if (iVar2 == -1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e8530,0xffffffff820e84a8,0xa9);
    }
    if (((*(int *)(param_1 + 4) == 0) || (iVar2 == 0)) || (*(char *)(param_1 + 8) == acStack_40[0]))
    {
      if ((*(uint *)(&lbl_8316FF50 + param_2[6] * 0x34) >> 2 & 1) == 0) {
        if (4 < *(int *)(param_1 + 4)) {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e8508,0xffffffff820e84a8,0xb9);
        }
        iVar2 = iVar2 * 5 + *(int *)(param_1 + 4);
      }
      else {
        if (4 < iVar2) {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e851c,0xffffffff820e84a8,0xb6);
        }
        iVar2 = *(int *)(param_1 + 4) * 5 + iVar2;
      }
      lVar1 = (ulonglong)*(uint *)(&lbl_820E83A8 + iVar2 * 4) + 1;
      lVar1 = lVar1 - ((ulonglong)*(uint *)(&lbl_820E83A8 + iVar2 * 4) + (ulonglong)(lVar1 == 0));
    }
    else {
      lVar1 = 0;
    }
  }
  else {
    lVar1 = 1;
  }
  return lVar1;
}

