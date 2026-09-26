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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
extern unsigned int *auStack_50;
extern unsigned int *auStack_80;
extern int fn_82BF99F0();
extern int fn_82BF9FC0();
extern int fn_82BFA140();
extern int fn_82F6D460();
extern unsigned int lbl_83175598;
extern unsigned int lbl_8322B4F0;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;


ulonglong fn_82BF3608(ulonglong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 auStack_80 [4];
  undefined *puStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  ulonglong auStack_50 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  puStack_70 = lbl_83175598;
  if (lbl_83175598 == (undefined *)0x0) {
    uStack_6c = 0;
  }
  else {
    uStack_6c = fn_82F6D460(lbl_83175598,lbl_8322B4F0);
  }
  uStack_68 = (undefined4)param_1;
  uStack_60 = CONCAT22(0x50,(((U64)(uStack_60) >> 16) & 0xFFFF));
  if ((param_1 & 0xffffffff) == 0) {
    uStack_64 = 0;
  }
  else {
    uStack_64 = fn_82F6D460(param_1,0x104);
  }
  auStack_80[0] = 0;
  auStack_50[0] = param_3 & 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  iVar1 = fn_82BF99F0(auStack_80,&puStack_70,auStack_50);
  if (iVar1 == 0) {
    iVar1 = fn_82BF9FC0(auStack_80[0],param_2,param_3);
    if (iVar1 == 0) {
      fn_82BFA140(auStack_80[0],0);
      return param_3;
    }
    fn_82BFA140(auStack_80[0],1);
  }
  return 0;
}

