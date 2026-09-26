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
extern int fn_82A28568();
extern int fn_82A28E60();
extern int fn_82F691F0();
extern unsigned int lbl_832179FC;


undefined4 fn_829EC0F8(int param_1,ulonglong param_2,int param_3,char param_4)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if ((param_3 == 3) || (param_3 == 4)) {
    uVar3 = (param_2 + 0x3f & 0xffffffc0) + 0x40;
  }
  else if ((param_3 == 1) || (uVar3 = param_2, param_3 == 2)) {
    uVar3 = (param_2 + 0xf & 0xfffffff0) + 0x10;
  }
  if ((*(int *)(param_1 + 8) == 0) || ((ulonglong)*(uint *)(param_1 + 0x10) != (uVar3 & 0xffffffff))
     ) {
    lVar1 = fn_82A28568(*(undefined4 *)(lbl_832179FC + 0x8f4cc),0,uVar3);
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 8) != 0) {
      fn_82A28E60(*(undefined4 *)(lbl_832179FC + 0x8f4cc),0);
    }
    *(int *)(param_1 + 0x10) = (int)uVar3;
    *(int *)(param_1 + 8) = (int)lVar1;
  }
  if ((param_3 == 3) || (param_3 == 4)) {
    uVar2 = *(int *)(param_1 + 8) + 0x3fU & 0xffffffc0;
  }
  else if ((param_3 == 1) || (param_3 == 2)) {
    uVar2 = *(int *)(param_1 + 8) + 0xfU & 0xfffffff0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 8);
  }
  *(uint *)(param_1 + 4) = uVar2;
  if (param_4 == '\0') {
    return *(undefined4 *)(param_1 + 4);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(*(undefined4 *)(param_1 + 4),0,param_2);
}

