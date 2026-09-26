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
extern unsigned int *auStack_40;
extern unsigned int *auStack_70;
extern int fn_82BF9D18();
extern int fn_82BFA140();
extern int fn_82F6D460();
extern unsigned int lbl_83175598;
extern unsigned int lbl_8322B4F0;
extern unsigned int uStack_28;
extern unsigned int uStack_30;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


bool fn_82BF3860(ulonglong param_1)

{
  int iVar1;
  undefined4 auStack_70 [4];
  undefined *puStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 auStack_40 [2];
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  puStack_60 = lbl_83175598;
  if (lbl_83175598 == (undefined *)0x0) {
    uStack_5c = 0;
  }
  else {
    uStack_5c = fn_82F6D460(lbl_83175598,lbl_8322B4F0);
  }
  uStack_58 = (undefined4)param_1;
  uStack_50 = CONCAT22(0x50,(((U64)(uStack_50) >> 16) & 0xFFFF));
  if ((param_1 & 0xffffffff) == 0) {
    uStack_54 = 0;
  }
  else {
    uStack_54 = fn_82F6D460(param_1,0x104);
  }
  auStack_40[0] = 0;
  auStack_70[0] = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  iVar1 = fn_82BF9D18(auStack_70,&puStack_60,auStack_40);
  if (iVar1 == 0) {
    fn_82BFA140(auStack_70[0],1);
  }
  return iVar1 == 0;
}

