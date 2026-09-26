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
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82F68CC0();
extern unsigned int lbl_8323B1A0;


void fn_82D4AF70(int param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x34);
  iVar1 = fn_82CE5410();
  if (*(uint *)(param_1 + 0x38) == (*(uint *)(param_1 + 0x3c) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(undefined4 *)(iVar1 + 0x10),piVar2,0x38);
  }
  iVar1 = *(int *)(param_1 + 0x38) * 0x38 + *piVar2;
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x11) = 1;
    *(undefined4 *)(iVar1 + 0x30) = 1;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar1 + 1;
  iVar1 = iVar1 * 0x38 + *piVar2;
  fn_82F68CC0(iVar1,param_2,0x38);
  if (*(int *)(iVar1 + 0x20) == 0) {
    *(undefined4 *)(iVar1 + 0x30) = 1;
    *(undefined **)(iVar1 + 0x28) = &lbl_8323B1A0;
    *(undefined **)(iVar1 + 0x20) = &lbl_8323B1A0;
  }
  return;
}

