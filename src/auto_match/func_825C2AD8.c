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
extern int fn_82560100();
extern unsigned int lbl_82192734;
extern unsigned int lbl_83282264;


undefined8
fn_825C2AD8(int param_1,int *param_2,uint param_3,int param_4,undefined8 param_5,
             undefined8 param_6)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (param_3 & 0xff) * 0x18 + *(int *)(*(int *)(param_1 + 0x4c) + 0x220);
  piVar2 = (int *)(iVar1 + 0x10);
  if (param_4 == 0) {
    piVar2 = (int *)(iVar1 + 0xc);
  }
  if (*piVar2 != 0) {
    iVar1 = fn_82560100((double)lbl_82192734,*(int *)(param_1 + 0x4c),piVar2,param_6,param_4,
                              param_5,0,0,0);
    *param_2 = iVar1;
    if (iVar1 != 0) {
      lbl_83282264 = lbl_83282264 + 1;
      return 1;
    }
  }
  return 0;
}

