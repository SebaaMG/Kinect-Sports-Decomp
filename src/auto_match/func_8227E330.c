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
extern int fn_8227F358();
extern int fn_8227F578();
extern int fn_8227F7B8();
extern int fn_824BF8A8();
extern int fn_8265C9E0();
extern unsigned int iStack_2c;
extern unsigned int uStack_30;


void fn_8227E330(int param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uStack_30;
  int iStack_2c;
  
  uVar1 = fn_8265C9E0(0xf8);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_8227F358(uVar1,param_2,param_3);
  }
  iStack_2c = fn_8227F7B8(uVar2,*(int *)(param_1 + 0x30) != 0);
  if (((~(ulonglong)*(uint *)(iStack_2c + 0x6c) & 0xffffffff) >> 1 & 1) == 0) {
    *(uint *)(iStack_2c + 0x6c) = *(uint *)(iStack_2c + 0x6c) & 0xfffffffd;
  }
  if (((~(ulonglong)*(uint *)(iStack_2c + 0x6c) & 0xffffffff) >> 1 & 1) == 0) {
LAB_8227e3b4:
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    if ((~(ulonglong)*(uint *)(iStack_2c + 0x6c) & 1) == 0) goto LAB_8227e3b4;
  }
  *(undefined4 *)(*(int *)(iStack_2c + 0x70) + 0x34) = uVar3;
  if ((*(int *)(param_1 + 4) == 0) && (*(int *)(param_1 + 0x48) != 0)) {
    if ((*(uint *)(iStack_2c + 0x6c) & 8) != 0) goto LAB_8227e404;
    uVar4 = *(uint *)(iStack_2c + 0x6c) | 8;
  }
  else {
    if ((*(uint *)(iStack_2c + 0x6c) & 8) == 0) goto LAB_8227e404;
    uVar4 = *(uint *)(iStack_2c + 0x6c) & 0xfffffff7;
  }
  *(uint *)(iStack_2c + 0x6c) = uVar4;
  iStack_2c = fn_8227F578();
LAB_8227e404:
  uStack_30 = 0;
  fn_824BF8A8(param_1 + 0x1c,&uStack_30);
  return;
}

