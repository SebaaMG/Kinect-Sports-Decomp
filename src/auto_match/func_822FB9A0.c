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
extern int fn_822B83D0();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern int fn_82F63108();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_30;


void fn_822FB9A0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uStack_30;
  
  puVar3 = (undefined4 *)(param_1 + 0x5c);
  if (0xf < *(uint *)(param_1 + 0x70)) {
    puVar3 = (undefined4 *)*puVar3;
  }
  fn_8255FD70(&uStack_30,**(undefined4 **)(param_1 + 0x58),puVar3);
  iVar1 = (((U64)(uStack_30) >> 0) & 0xFFFFFFFF);
  if (*(int *)(param_1 + 0x90) == 0) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    iVar2 = (int)((float)(longlong)((((U64)(uStack_30) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_30) >> 0) & 0xFFFFFFFF) >> 2) *
                 ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460));
    uStack_30 = (longlong)iVar2;
  }
  else {
    if (*(int *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    iVar2 = (**(code **)(**(int **)(param_1 + 0x90) + 4))
                      (*(int **)(param_1 + 0x90),(((U64)(uStack_30) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_30) >> 0) & 0xFFFFFFFF) >> 2);
  }
  fn_822B83D0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(iVar2 * 4 + iVar1));
  if (iVar1 != 0) {
    fn_8265CA20(iVar1);
  }
  return;
}

