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
extern int fn_82279D28();
extern int fn_822847A8();
extern int fn_822C5B18();
extern unsigned int iStack_4c;
extern unsigned int lbl_821A9994;


void fn_8228E4B0(int param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined **ppuStack_50;
  int iStack_4c;
  undefined ***pppuStack_40;
  undefined1 auStack_30 [24];
  
  *(undefined4 *)(param_1 + 400) = 1;
  if (*(int *)(param_1 + 0x194) != 0) {
    if (*(int *)(param_1 + 0x144) == 0) {
      pppuStack_40 = &ppuStack_50;
      ppuStack_50 = &lbl_821A9994;
      iStack_4c = param_1;
      uVar1 = fn_822C5B18(auStack_30,param_1 + 0x148);
      uVar2 = fn_822847A8(0,&ppuStack_50,0,uVar1,1,1);
      *(undefined4 *)(param_1 + 0x144) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x168) = 1;
    if (*(int *)(param_1 + 0x18c) == 0) {
      fn_82279D28(param_1,1,0);
    }
    fn_82279D28(param_1,0,0);
  }
  return;
}

