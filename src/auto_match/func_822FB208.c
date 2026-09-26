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
extern int fn_82F68B74();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_30;


void fn_822FB208(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uStack_30;
  
  if (*(int *)(param_1 + 0x88) != 0) {
    puVar3 = (undefined4 *)(param_1 + 0x78);
    if (0xf < *(uint *)(param_1 + 0x8c)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    fn_8255FD70(&uStack_30,**(undefined4 **)(param_1 + 0x58),puVar3);
    iVar2 = (((U64)(uStack_30) >> 0) & 0xFFFFFFFF);
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    iVar1 = (int)((float)(longlong)((((U64)(uStack_30) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_30) >> 0) & 0xFFFFFFFF) >> 2) *
                 ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460));
    puVar3 = (undefined4 *)(iVar1 * 4 + (((U64)(uStack_30) >> 0) & 0xFFFFFFFF));
    uStack_30 = (longlong)iVar1;
    fn_822B83D0(*(undefined4 *)(param_1 + 0x54),*puVar3);
    *(undefined4 *)(param_1 + 0x94) = 1;
    if (iVar2 != 0) {
      fn_8265CA20(iVar2);
    }
    return;
  }
  fn_82F68B74();
  return;
}

