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
extern int fn_8269F918();
extern int fn_8272CBE8();
extern int fn_8272F9D8();
extern int fn_827912D8();
extern int fn_8279C658();
extern int fn_827A27B0();
extern int fn_827A2800();


void fn_8272FDD0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1[0x28] + 0x114);
  if (iVar3 == 0) {
    uVar1 = *(ushort *)(param_1[0x27] + 0x50) >> 5;
  }
  else {
    uVar1 = *(ushort *)(iVar3 + 0x68) >> 1;
  }
  iVar4 = (int)param_2;
  if ((uVar1 & 1) != 0) {
    if (iVar4 == 1) {
      if (((*(ushort *)(param_1 + 0x32) >> 10 & 1) == 0) && ((int)param_4 != 1)) {
        uVar2 = fn_827912D8(*(undefined4 *)(param_1[0x28] + 8));
        (**(code **)(*param_1 + 0x154))(param_1,0,uVar2);
      }
      if (*(int *)(param_1[0x28] + 0x114) == 0) goto LAB_8272fedc;
      fn_827A27B0();
    }
    else {
      if ((iVar4 != 0) || (iVar3 == 0)) goto LAB_8272fedc;
      if ((*(ushort *)(param_1 + 0x32) >> 9 & 1) == 0) {
        fn_8279C658(*(undefined4 *)(iVar3 + 8),0,0);
      }
      fn_827A2800(*(undefined4 *)(param_1[0x28] + 0x114));
    }
    iVar3 = (**(code **)(*param_1 + 0x40))(param_1);
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0xb00) = *(uint *)(iVar3 + 0xb00) | 0x400;
    }
  }
LAB_8272fedc:
  iVar3 = *(int *)(param_1[0x28] + 0x114);
  if (iVar3 == 0) {
    uVar1 = *(ushort *)(param_1[0x27] + 0x50) >> 3;
  }
  else {
    uVar1 = *(ushort *)(iVar3 + 0x68);
  }
  if ((uVar1 & 1) != 0) {
    if (iVar3 == 0) {
      uVar1 = *(ushort *)(param_1[0x27] + 0x50) >> 5;
    }
    else {
      uVar1 = *(ushort *)(iVar3 + 0x68) >> 1;
    }
    if ((uVar1 & 1) == 0) {
      return;
    }
  }
  if (iVar4 == 1) {
    fn_8272CBE8(param_1,1,1);
  }
  fn_8269F918(param_1,param_2,param_3,param_4);
  if ((*(int *)(param_1[0x28] + 0x114) != 0) &&
     ((*(ushort *)(*(int *)(param_1[0x28] + 0x114) + 0x68) & 1) == 0)) {
    *(ushort *)(param_1 + 0x32) = *(ushort *)(param_1 + 0x32) | 0x4000;
    uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
    fn_8272F9D8(param_1,uVar2);
  }
  return;
}

