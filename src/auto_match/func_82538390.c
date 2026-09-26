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
extern int fn_82268638();
extern int fn_8260D428();


int * fn_82538390(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != param_3) {
    do {
      iVar3 = param_2;
      param_2 = iVar3 + 0x38;
      if (param_2 == param_3) goto LAB_82538400;
      if (*(uint *)(iVar3 + 0x54) < 0x10) {
        iVar1 = iVar3 + 0x40;
      }
      else {
        iVar1 = *(int *)(iVar3 + 0x40);
      }
      iVar1 = fn_8260D428(iVar3 + 8,0,*(undefined4 *)(iVar3 + 0x18),iVar1,
                           *(undefined4 *)(iVar3 + 0x50));
    } while (iVar1 != 0);
    while (iVar1 = param_2 + 0x38, iVar1 != param_3) {
      if (*(uint *)(param_2 + 0x54) < 0x10) {
        iVar2 = param_2 + 0x40;
      }
      else {
        iVar2 = *(int *)(param_2 + 0x40);
      }
      iVar2 = fn_8260D428(iVar3 + 8,0,*(undefined4 *)(iVar3 + 0x18),iVar2,
                           *(undefined4 *)(param_2 + 0x50));
      param_2 = iVar1;
      if (iVar2 != 0) {
        iVar3 = iVar3 + 0x38;
        fn_82268638(iVar3,iVar1);
      }
    }
    param_3 = iVar3 + 0x38;
  }
LAB_82538400:
  *param_1 = param_3;
  return param_1;
}

