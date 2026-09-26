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
extern unsigned int *auStack_50;
extern int fn_83062E18();
extern int fn_83065890();
extern int fn_830677A0();
extern int fn_830678C8();
extern int fn_830679A8();
extern int fn_83069C28();
extern unsigned int iStack_40;
extern unsigned int lbl_8217E890;


longlong fn_8306A1A0(undefined8 param_1,undefined4 *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 auStack_50 [2];
  undefined **appuStack_48 [2];
  int iStack_40;
  
  iStack_40 = 0;
  appuStack_48[0] = &lbl_8217E890;
  auStack_50[0] = 0;
  lVar2 = 0;
  uVar1 = fn_83062E18();
  fn_83065890(appuStack_48,uVar1);
  for (; iStack_40 != 0; iStack_40 = (*(code *)appuStack_48[0][1])(appuStack_48,iStack_40)) {
    *(undefined4 *)(iStack_40 + 0x38) = 0;
    lVar2 = lVar2 + 1;
    *(undefined4 *)(iStack_40 + 0x74) = 0;
  }
  if ((param_3 & 0xffffffff) != 0) {
    fn_830677A0(param_3,lVar2,0xffffffff8217eae4);
  }
  lVar2 = 0;
  uVar1 = fn_83062E18(param_1);
  fn_83065890(appuStack_48,uVar1);
  for (; iStack_40 != 0; iStack_40 = (*(code *)appuStack_48[0][1])(appuStack_48,iStack_40)) {
    if ((*(int *)(iStack_40 + 0x38) == 0) && (*(int *)(iStack_40 + 0x3c) != 0)) {
      lVar2 = lVar2 + 1;
      fn_83069C28(iStack_40,lVar2,auStack_50,0);
    }
    if ((param_3 & 0xffffffff) != 0) {
      fn_830679A8(param_3);
    }
  }
  *param_2 = (int)lVar2;
  lVar2 = 0;
  uVar1 = fn_83062E18(param_1);
  fn_83065890(appuStack_48,uVar1);
  for (; iStack_40 != 0; iStack_40 = (*(code *)appuStack_48[0][1])(appuStack_48,iStack_40)) {
    if (*(int *)(iStack_40 + 0x38) == 0) {
      lVar2 = lVar2 + 1;
    }
    *(undefined4 *)(iStack_40 + 0x74) = 0;
  }
  if ((param_3 & 0xffffffff) != 0) {
    fn_830678C8(param_3);
  }
  return lVar2;
}

