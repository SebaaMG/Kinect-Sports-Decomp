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
extern int fn_8251FA58();
extern int fn_825B51E8();
extern int fn_827D5738();
extern int fn_828515E8();
extern unsigned int lbl_83265A24;


void fn_825B5108(int *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar1 = *param_1;
  uVar3 = 0;
  if (*(int *)(iVar1 + 0x1c) != 0) {
    do {
      fn_825B51E8(param_1,param_2,uVar3);
      iVar1 = *param_1;
      uVar3 = uVar3 + 1;
    } while ((uVar3 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 0x1c));
  }
  uVar2 = 0;
  if (*(int *)(iVar1 + 300) != 0) {
    iVar4 = 0;
    do {
      if ((*(int *)(*(int *)(iVar1 + 0x128) + iVar4 + 4) != 0) &&
         (iVar1 = fn_827D5738(lbl_83265A24), iVar1 != 0)) {
        fn_8251FA58(*(undefined4 *)(*(int *)(*param_1 + 0x128) + iVar4 + 4));
      }
      if (*(int *)(*(int *)(*param_1 + 0x128) + iVar4 + 0xc) != 0) {
        fn_8251FA58();
      }
      iVar1 = *param_1;
      uVar2 = uVar2 + 1;
      iVar4 = iVar4 + 0x20;
    } while (uVar2 < *(uint *)(iVar1 + 300));
  }
  fn_828515E8();
  return;
}

