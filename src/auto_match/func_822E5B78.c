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
extern int fn_822C72E0();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_30;


void fn_822E5B78(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uStack_30;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x1bc) + 0x1e4);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x130) != 0)) &&
     (*(int *)(iVar2 + 0x134) == *(int *)(param_1 + 0x14))) {
    fn_8255FD70(&uStack_30,*(undefined4 *)(*(int *)(param_1 + 0x118) + 0x24),
                      0xffffffff821adee8);
    iVar2 = (((U64)(uStack_30) >> 0) & 0xFFFFFFFF);
    if ((((U64)(uStack_30) >> 0) & 0xFFFFFFFF) != (((U64)(uStack_30) >> 32) & 0xFFFFFFFF)) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      iVar1 = (int)((float)(longlong)((((U64)(uStack_30) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_30) >> 0) & 0xFFFFFFFF) >> 2) *
                   ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460));
      puVar3 = (undefined4 *)(iVar1 * 4 + (((U64)(uStack_30) >> 0) & 0xFFFFFFFF));
      uStack_30 = (longlong)iVar1;
      fn_822C72E0(*(undefined4 *)(*(int *)(param_1 + 0x114) + 0x20),*puVar3);
    }
    if (iVar2 != 0) {
      fn_8265CA20(iVar2);
    }
  }
  return;
}

