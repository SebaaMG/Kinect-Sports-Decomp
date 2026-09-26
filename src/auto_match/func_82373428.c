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
extern int fn_82250A18();
extern int fn_8225F160();
extern int fn_82372F88();
extern int fn_824CCD80();
extern int fn_825603C8();
extern unsigned int lbl_832975B0;


void fn_82373428(int param_1,int param_2)

{
  int iVar3;
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x9dc) != param_2) {
    *(int *)(param_1 + 0x9dc) = param_2;
    iVar3 = fn_8225F160();
    if (((*(int *)(param_1 + 0x9d8) != 0) && (*(int *)(iVar3 + 0x40) == 1)) &&
       (*(int *)(*(int *)(param_1 + 0x30) + 8) != 0)) {
      iVar3 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar3 = fn_82250A18();
      }
      if (*(char *)(iVar3 + 4) == '\0') {
        if ((*(int *)(param_1 + 0xa0) != 0) && (*(int *)(*(int *)(param_1 + 0xa0) + 0x40) == 1)) {
          if (*(int *)(param_1 + 0x204) == 0) {
            lVar1 = fn_82372F88(param_1);
            iVar3 = (int)(lVar1 + 1) - ((int)lVar1 + (uint)(lVar1 + 1 == 0));
          }
          else {
            iVar3 = *(int *)(param_1 + 0x658);
          }
          if (iVar3 != 0) {
            return;
          }
        }
        iVar3 = *(int *)(*(int *)(param_1 + 0x30) + 8);
        if (*(int *)(iVar3 + 0x22c) != 1) {
          uVar2 = fn_824CCD80(*(undefined4 *)(iVar3 + 0x10));
          fn_825603C8(uVar2,iVar3 + 0x20,1);
          *(undefined4 *)(iVar3 + 0x22c) = 1;
        }
      }
    }
  }
  return;
}

