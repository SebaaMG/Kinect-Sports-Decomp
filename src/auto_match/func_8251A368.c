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
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern int fn_82240158();
extern int fn_8251B258();
extern int fn_8251B3B0();
extern int fn_8251B7F0();
extern int fn_8251B8B8();
extern int fn_828A0948();
extern int fn_828B1768();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_83265988;


void fn_8251A368(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [80];
  undefined **appuStack_70 [28];
  
  if (param_3 == 2) {
    if (*(int *)(param_1 + 0x50) != 4) {
      if (*(int *)(param_1 + 0x50) != 5) {
        return;
      }
      if (lbl_83265988 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 1;
        *(undefined4 *)(param_1 + 0x54) = 2;
        return;
      }
      fn_8251B258(param_1);
    }
    fn_8251B3B0(param_1);
    uVar5 = 1;
    goto LAB_8251a534;
  }
  if (param_3 != 3) {
    return;
  }
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 8) + 0xb4);
  if (iVar1 < 0x17) {
    if (iVar1 < 9) {
LAB_8251a3dc:
      iVar4 = 0;
      goto LAB_8251a3e0;
    }
    if (iVar1 < 0x10) {
      iVar4 = 1;
      goto LAB_8251a3e0;
    }
    if (iVar1 != 0x10) {
      if (0x10 < iVar1) {
        if (iVar1 < 0x15) {
          iVar4 = 3;
          goto LAB_8251a3e0;
        }
        if ((iVar1 == 0x15) || (iVar1 == 0x16)) goto LAB_8251a4d0;
      }
      goto LAB_8251a3dc;
    }
LAB_8251a4d0:
    if (*(int *)(param_1 + 0x50) != 4) {
      return;
    }
  }
  else {
    iVar4 = 6;
LAB_8251a3e0:
    if (iVar1 != 2) {
      if ((iVar4 != 6) && (iVar4 == 3)) {
        fn_8251B7F0(auStack_d0);
        fn_82240158(auStack_c0,0xffffffff821c2894);
        if (iVar1 == 0x11) {
          fn_828B1768(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
          uVar2 = fn_828A0948();
          uVar3 = fn_82240158(auStack_c0,0xffffffff821c28b8);
          fn_82240158(uVar3,uVar2);
        }
        if ((*(int *)(param_1 + 0x50) == 5) && (*(int *)(param_1 + 0x10) == 3)) {
          *(undefined4 *)(param_1 + 0xc) = 4;
          *(undefined4 *)(param_1 + 0x54) = 2;
          fn_8251B8B8(appuStack_70);
          appuStack_70[0] = &lbl_82020F30;
          fn_82F62F60(appuStack_70);
          return;
        }
        fn_8251B8B8(appuStack_70);
        appuStack_70[0] = &lbl_82020F30;
        fn_82F62F60(appuStack_70);
      }
      goto LAB_8251a4d0;
    }
    if (*(int *)(param_1 + 0x50) == 2) {
      return;
    }
  }
  uVar5 = 2;
  *(undefined4 *)(param_1 + 0xc) = 3;
LAB_8251a534:
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  return;
}

