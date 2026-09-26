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
extern int fn_8225F160();
extern int fn_8255B620();
extern int fn_828EA5F8();
extern unsigned int lbl_832765BC;


void fn_822B17A8(int param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  char cVar6;
  
  if (lbl_832765BC == 0) {
    piVar5 = (int *)fn_8225F160();
    bVar4 = false;
    if (*piVar5 != 1) goto LAB_822b17e8;
  }
  bVar4 = true;
LAB_822b17e8:
  if ((param_3 != 0) || (!bVar4)) {
    cVar6 = fn_828EA5F8(param_1);
    if (cVar6 != '\0') {
      uVar2 = 1 << ((uint)param_2 & 7);
      iVar3 = (int)((param_2 & 0xffffffff) >> 3);
      if ((uVar2 & 0xff & (uint)*(byte *)(*(int *)(*(int *)(param_1 + 0xf4) + 8) + iVar3)) == 0) {
        fn_8255B620(param_1,param_2 - 4);
        iVar1 = *(int *)(*(int *)(param_1 + 0xf4) + 8);
        *(byte *)(iVar1 + iVar3) = (byte)uVar2 | *(byte *)(iVar1 + iVar3);
      }
    }
  }
  return;
}

