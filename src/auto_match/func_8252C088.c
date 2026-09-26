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
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_82522D98();
extern unsigned int lbl_82196288;


void fn_8252C088(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  uVar4 = 0;
  puVar2 = param_2;
  if (param_2 == (uint *)0x0) {
    puVar2 = &lbl_82196288;
  }
  *(uint *)(param_1 + 8) = *puVar2;
  puVar2 = &lbl_82196288;
  if (param_3 != (uint *)0x0) {
    puVar2 = param_3;
  }
  *(uint *)(param_1 + 0xc) = *puVar2;
  if (param_2 != (uint *)0x0) {
    uVar3 = (ulonglong)*param_2;
    if (uVar3 != (uVar3 - 1) + (ulonglong)(uVar3 == 0)) {
      uVar5 = fn_8251F720(param_2,1);
      if (uVar5 != 0) {
        uVar1 = fn_8251FBA8(uVar5);
        *(uint *)(param_1 + 0x10) = uVar1 >> 5;
      }
    }
  }
  if (param_3 != (uint *)0x0) {
    uVar3 = (ulonglong)*param_3;
    if ((uVar3 != (uVar3 - 1) + (ulonglong)(uVar3 == 0)) &&
       (uVar4 = fn_8251F720(param_3,1), uVar4 != 0)) {
      uVar1 = fn_8251FBA8(uVar4);
      *(uint *)(param_1 + 0x34) = uVar1 >> 5;
    }
  }
  if (((uVar5 & 0xffffffff) != 0) && (*(int *)(param_1 + 0x10) != 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82522D98(*(int *)(param_1 + 0x10) << 2);
  }
  if (((uVar4 & 0xffffffff) != 0) && (*(int *)(param_1 + 0x34) != 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82522D98(*(int *)(param_1 + 0x34) << 2);
  }
  if ((uVar5 & 0xffffffff) != 0) {
    fn_8251FA58(uVar5);
  }
  if ((uVar4 & 0xffffffff) != 0) {
    fn_8251FA58(uVar4);
  }
  return;
}

