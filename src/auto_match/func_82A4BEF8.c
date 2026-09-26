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
extern int fn_82A3FF60();
extern int fn_82A4B9B0();
extern int fn_82A4BB80();
extern int fn_82A59970();
extern int fn_82A5A1A8();
extern int fn_82A5A720();
extern int fn_82A5AA58();


longlong fn_82A4BEF8(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar2;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 0x1c);
  (**(code **)(*(int *)(param_1 + 0x1c) + 8))(piVar5);
  *(undefined4 *)(param_1 + 0x50) = param_4;
  uVar1 = fn_82A3FF60(0xffffffff83219d50,0x22c,0x20970006,0);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_82A59970(uVar1,param_2,param_3);
  }
  *(int *)(param_1 + 0x44) = iVar3;
  if (iVar3 == 0) {
LAB_82a4c01c:
    lVar2 = -0x7ff8fff2;
  }
  else {
    puVar4 = (undefined4 *)fn_82A3FF60(0xffffffff83219d50,0xe4,0x20970006,0);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 0;
      puVar4[1] = 0;
      fn_82A5A1A8(puVar4 + 2);
    }
    *(undefined4 **)(param_1 + 0x4c) = puVar4;
    if (puVar4 == (undefined4 *)0x0) goto LAB_82a4c01c;
    lVar2 = fn_82A4B9B0(puVar4,4);
    if (-1 < lVar2) {
      uVar1 = fn_82A3FF60(0xffffffff83219d50,0x2b0,0x20970006,0);
      if ((uVar1 & 0xffffffff) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_82A5AA58(uVar1,param_2,param_3,param_1 + 0xc,
                                  *(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x4c));
      }
      *(int *)(param_1 + 0x48) = iVar3;
      if (iVar3 == 0) goto LAB_82a4c01c;
      lVar2 = fn_82A5A720();
      if (-1 < lVar2) {
        *(undefined4 *)(param_1 + 0x18) = 1;
        goto LAB_82a4c02c;
      }
    }
  }
  fn_82A4BB80(param_1);
LAB_82a4c02c:
  (**(code **)(*piVar5 + 0x14))(piVar5);
  return lVar2;
}

