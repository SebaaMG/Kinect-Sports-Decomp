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
extern int fn_8229E090();
extern int fn_82511928();
extern int fn_82512A48();
extern int fn_82513D20();
extern int fn_82514888();
extern unsigned int lbl_832760A4;
extern unsigned int lbl_832766F7;
extern unsigned int lbl_83297810;
extern unsigned int uRam832766f1;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82231390(int param_1,int param_2)

{
  ulonglong uVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_1 == 2) {
    if (lbl_832760A4 != 0) {
      fn_82512A48();
      lbl_832760A4 = 0;
    }
    *(undefined4 *)(param_2 + 0x58) = 0;
  }
  else {
    fn_8229E090(*(undefined4 *)(param_2 + 0x58),0,1);
    *(undefined4 *)(param_2 + 0x58) = 0;
    uVar1 = (ulonglong)lbl_83297810;
    if (uVar1 == 0) {
      uVar1 = fn_82511928();
    }
    fn_82513D20(uVar1,1,0);
    if ((lbl_832766F7 == '\0') && (*(int *)(param_2 + 0x60) == 0)) {
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      fn_82514888(&uStack_30);
    }
    if ((*(char *)(param_2 + 0x5c) != '\0') && (*(int *)(param_2 + 0x60) == 0)) {
      uStack_30 = 0;
      uStack_2c = 0;
      uRam832766f1 = 0;
      uStack_28 = 0;
      fn_82514888(&uStack_30);
    }
  }
  return;
}

