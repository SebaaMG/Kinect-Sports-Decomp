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
extern int fn_82FF1488();
extern int fn_82FF53A8();
extern int fn_82FF5750();
extern int fn_82FF5B50();
extern unsigned int lbl_832642F4;


undefined8 fn_83038288(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  
  uVar1 = fn_82FF1488();
  if ((int)uVar1 != 1) {
    return uVar1;
  }
  if (param_1[0x16] != 0) {
    iVar2 = fn_82FF5B50(lbl_832642F4,param_1[0x16],param_1 + 3);
    if (iVar2 == 1) {
      cVar3 = fn_82FF53A8(lbl_832642F4,param_1[0x16]);
      if (cVar3 == '\0') {
        (**(code **)(*param_1 + 0x38))(param_1,0xe,0xffffffffffffffff);
      }
      else {
        fn_82FF5750(lbl_832642F4,param_1[0x16],param_1 + 3);
        param_1[0x16] = 0;
LAB_8303833c:
        if ((*(byte *)(param_1 + 0x18) & 0x80) != 0) {
          *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0x7f;
          *(byte *)(param_1 + 0x36) = *(byte *)(param_1 + 0x36) & 0x1f | 0x40;
        }
      }
    }
    else {
      if (iVar2 != 0x1c) {
        param_1[0x16] = 0;
      }
      if (iVar2 == 0x18) goto LAB_8303833c;
    }
  }
  if (param_1[0x17] != 0) {
    iVar2 = fn_82FF5B50(lbl_832642F4,param_1[0x17],param_1 + 3);
    if (iVar2 == 1) {
      cVar3 = fn_82FF53A8(lbl_832642F4,param_1[0x17]);
      if (cVar3 == '\0') {
        (**(code **)(*param_1 + 0x38))(param_1,0xe,0xffffffffffffffff);
        goto LAB_8303841c;
      }
      fn_82FF5750(lbl_832642F4,param_1[0x17],param_1 + 3);
      param_1[0x17] = 0;
    }
    else {
      if (iVar2 != 0x1c) {
        param_1[0x17] = 0;
      }
      if (iVar2 != 0x18) goto LAB_8303841c;
    }
    if ((*(byte *)(param_1 + 0x18) & 0x40) != 0) {
      if ((*(byte *)(param_1 + 0x36) & 0xe0) == 0) {
        *(byte *)(param_1 + 0x36) = *(byte *)(param_1 + 0x36) & 0x1f | 0x20;
      }
      *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xbf;
    }
  }
LAB_8303841c:
  if ((((*(byte *)(param_1 + 0x36) & 0xe0) == 0) && (param_1[0x4c] != 0)) && (param_1[0x17] == 0)) {
    *(byte *)(param_1 + 0x36) = *(byte *)(param_1 + 0x36) & 0x1f | 0x20;
  }
  return uVar1;
}

