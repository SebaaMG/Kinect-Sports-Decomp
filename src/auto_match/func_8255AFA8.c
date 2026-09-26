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
extern int fn_8251E530();
extern int fn_8255B0D8();
extern int fn_8255B490();
extern int fn_825603C8();
extern int fn_82566E58();
extern int fn_82567088();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83282244;


void fn_8255AFA8(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x358);
  if (iVar1 != 0) {
    if ((*(undefined4 **)(param_1 + 0x10))[3] == 0) goto LAB_8255b0a8;
    if ((*(int *)(iVar1 + 0x11c) != 0) ||
       (bVar2 = true, *(float *)(iVar1 + 0x88) < *(float *)(iVar1 + 0x94))) {
      bVar2 = false;
    }
    if (!bVar2) goto LAB_8255b0a8;
    fn_82566E58(**(undefined4 **)(param_1 + 0x10),param_1);
    fn_8251E530((undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x358) = 0;
    *(undefined4 *)(param_1 + 4) = 2;
  }
  if (*(undefined4 **)(param_1 + 0x14) == *(undefined4 **)(param_1 + 0x10)) {
    if (*(int *)(param_1 + 4) != 2) {
      return;
    }
    fn_8255B0D8(param_1);
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x358) = **(undefined4 **)(param_1 + 0x10);
  if ((*(int *)(param_1 + 4) == 0) &&
     (lbl_83282244 = lbl_83282244 | 1, *(int *)(param_1 + 0x1b0) == 0)) {
    fn_825603C8(0,param_1 + 0x30,1);
    *(undefined4 *)(param_1 + 0x1b0) = 1;
    fn_82567088(*(undefined4 *)(param_1 + 0x358),param_1 + 0x30);
  }
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 0x350) = lbl_821CC160;
LAB_8255b0a8:
  fn_8255B490(param_1);
  return;
}

