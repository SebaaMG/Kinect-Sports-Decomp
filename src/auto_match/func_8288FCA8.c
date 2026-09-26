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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _iStack00000020 ((*(U64*)&iStack00000020))
#define _iStack00000028 ((*(U64*)&iStack00000028))
extern int fn_8288B918();
extern int fn_8288BE40();
extern int fn_8288CA40();
extern int fn_8288E3F0();
extern unsigned int iStack00000020;
extern unsigned int iStack00000028;
extern unsigned int iStack_50;
extern unsigned int iStack_58;
extern unsigned int iStack_60;
extern unsigned int iStack_68;
extern unsigned int uStack_4c;
extern unsigned int uStack_54;
extern unsigned int uStack_5c;
extern unsigned int uStack_64;
extern unsigned int uStack_70;


undefined8 fn_8288FCA8(undefined8 param_1,int *param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  int iStack00000020;
  int iStack00000028;
  undefined1 uStack_70;
  int iStack_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  int iStack_50;
  uint uStack_4c;
  
  iVar1 = *param_2;
  iVar2 = param_2[4];
  uVar5 = 0;
  uStack_64 = 0;
  _iStack00000020 = param_3;
  _iStack00000028 = param_4;
  iStack_68 = iVar1;
  if (iVar2 != 0) {
    iStack00000020 = (int)(param_3 >> 0x20);
    iVar4 = iStack00000020 - iVar1;
    fn_8288B918(&iStack_68,
                  ((ulonglong)(uint)(iVar4 >> 2) & 0x7ffffff) * 0x20 + (param_3 & 0xffffffff));
    uVar5 = (ulonglong)uStack_64;
  }
  iVar4 = iStack_68;
  uStack_5c = 0;
  iStack_60 = iVar1;
  if (iVar2 != 0) {
    fn_8288B918(&iStack_60,
                  ((ulonglong)(uint)(iStack00000028 - iVar1 >> 2) & 0x7ffffff) * 0x20 +
                  (_iStack00000028 & 0xffffffff));
  }
  if ((iVar4 != iStack_60) || (bVar3 = true, uVar5 != uStack_5c)) {
    bVar3 = false;
  }
  if (!bVar3) {
    uStack_54 = 0;
    iStack_58 = iVar1;
    if (iVar2 != 0) {
      fn_8288B918(&iStack_58,iVar2);
    }
    fn_8288CA40(&iStack_50,CONCAT44(iStack_60,uStack_5c),CONCAT44(iStack_58,uStack_54),
                  CONCAT44(iStack_68,uStack_64),uStack_70);
    fn_8288E3F0(param_2,((ulonglong)(uint)(iStack_50 - *param_2 >> 2) & 0x7ffffff) * 0x20 +
                          (ulonglong)uStack_4c);
  }
  iStack_50 = *param_2;
  uStack_4c = 0;
  fn_8288BE40(param_1,&iStack_50,
                ((ulonglong)(uint)(iVar4 - iVar1 >> 2) & 0x7ffffff) * 0x20 + uVar5);
  return param_1;
}

