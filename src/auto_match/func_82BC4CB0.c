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
extern int fn_82B7BEB0();


void fn_82BC4CB0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  iVar4 = 0;
LAB_82bc4d04:
  do {
    if (*(int *)(iVar4 + param_1[5]) != 0) {
      if (*(int *)(*(int *)(iVar4 + param_1[5]) + 4) != 0) {
        iVar2 = *(int *)(iVar4 + param_1[5]);
        uVar1 = *(undefined4 *)(iVar2 + 4);
        if (iVar2 != 0) {
          fn_82B7BEB0(*(undefined4 *)(iVar2 + -4),iVar2 + -4);
        }
        *(undefined4 *)(iVar4 + param_1[5]) = uVar1;
        goto LAB_82bc4d04;
      }
    }
    iVar2 = *(int *)(iVar4 + param_1[5]);
    if (iVar2 != 0) {
      fn_82B7BEB0(*(undefined4 *)(iVar2 + -4),iVar2 + -4);
    }
    uVar3 = uVar3 + 1;
    iVar4 = iVar4 + 4;
    if ((uint)param_1[7] < uVar3) {
      fn_82B7BEB0(*(undefined4 *)(param_1[9] + 0x5b0),param_1[5]);
      fn_82B7BEB0(*(undefined4 *)(param_1[9] + 0x5b0),param_1[6]);
      fn_82B7BEB0(*(undefined4 *)(param_1[9] + 0x5b0),*param_1);
      fn_82B7BEB0(*(undefined4 *)(param_1[9] + 0x5b0),param_1[3]);
      fn_82B7BEB0(*(undefined4 *)(param_1[9] + 0x5b0),param_1[4]);
      fn_82B7BEB0(*(undefined4 *)(param_1[9] + 0x5b0),param_1[1]);
      fn_82B7BEB0(*(undefined4 *)(param_1[9] + 0x5b0),param_1[2]);
      param_1[6] = 0;
      return;
    }
  } while( true );
}

