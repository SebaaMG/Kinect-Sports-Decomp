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
extern int fn_82C53BD0();
extern unsigned int lbl_820FD170;
extern unsigned int lbl_820FD418;


undefined8
fn_82C48268(double param_1,double param_2,int param_3,undefined4 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             int param_10)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int in_stack_00000054;
  
  *(undefined4 *)(param_3 + 0xd30) = param_4;
  *(undefined4 *)(param_3 + 0x5674) = 0;
  uVar3 = fn_82C53BD0(param_3,param_5,(int)param_1,param_8,param_9,
                            *(undefined4 *)(param_3 + 0x50));
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  *(float *)(param_3 + 0xe78) = (float)param_1;
  *(int *)(param_3 + 0xe70) = (int)param_5;
  *(float *)(param_3 + 0xe7c) = (float)param_2;
  *(undefined2 *)(param_3 + 0xe9c) = 0;
  *(int *)(param_3 + 0xe74) = param_10;
  if (param_10 < 5) {
    if (-2 < param_10) goto LAB_82c482f8;
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 4;
  }
  *(undefined4 *)(param_3 + 0xe74) = uVar4;
LAB_82c482f8:
  *(int *)(param_3 + 0x3cd0) = in_stack_00000054;
  if ((in_stack_00000054 != 0) && (in_stack_00000054 != 2)) {
    *(undefined4 *)(param_3 + 0x3cd0) = 0;
  }
  iVar1 = *(int *)(param_3 + 0xcc);
  *(int *)(param_3 + 0x58) = *(int *)(param_3 + 0x9c);
  *(int *)(param_3 + 0x60) = iVar1;
  *(int *)(param_3 + 0x5c) = *(int *)(param_3 + 0xa0);
  *(int *)(param_3 + 0x6c) = *(int *)(param_3 + 0xd0);
  *(int *)(param_3 + 0x68) = *(int *)(param_3 + 0xd4);
  *(undefined4 *)(param_3 + 0x74) = *(undefined4 *)(param_3 + 0xd8);
  *(int *)(param_3 + 100) = iVar1 << 4;
  *(int *)(param_3 + 0x70) = *(int *)(param_3 + 0xd0) << 3;
  if ((*(int *)(param_3 + 0x9c) != iVar1) ||
     (uVar4 = 1, *(int *)(param_3 + 0xa0) != *(int *)(param_3 + 0xd4))) {
    uVar4 = 0;
  }
  iVar1 = *(int *)(param_3 + 0xb4) >> 4;
  *(undefined4 *)(param_3 + 0x78) = uVar4;
  iVar2 = *(int *)(param_3 + 0xbc) >> 4;
  *(undefined4 *)(param_3 + 0xda8) = 0;
  *(int *)(param_3 + 0x80) = iVar1;
  *(int *)(param_3 + 0x84) = iVar2;
  *(undefined4 *)(param_3 + 0xdac) = 0;
  *(undefined4 *)(param_3 + 0xdb0) = 0;
  *(int *)(param_3 + 0x7c) = iVar2 * iVar1;
  *(undefined **)(param_3 + 0x100) = &lbl_820FD170;
  *(undefined **)(param_3 + 0x104) = &lbl_820FD418;
  return 0;
}

