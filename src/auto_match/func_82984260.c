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
extern unsigned int *auStack_80;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_82931D48();
extern int fn_8297F548();
extern int fn_8297F6B8();
extern int fn_8297F800();
extern int fn_82981738();
extern int fn_82981C40();
extern unsigned int uStack_6c;
extern unsigned int uStack_9c;


longlong fn_82984260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint auStack_c0 [4];
  undefined1 auStack_b0 [20];
  undefined4 uStack_9c;
  undefined1 auStack_80 [20];
  undefined4 uStack_6c;
  
  lVar7 = 0;
  uVar3 = fn_82981738();
  uVar4 = fn_82981738(param_1,param_3);
  iVar5 = fn_8297F6B8(param_1,param_2,param_3);
  if (iVar5 == 0) {
    bVar1 = false;
    bVar2 = false;
    fn_82931D48(auStack_b0);
    fn_82931D48(auStack_80);
    uVar8 = 0;
    if ((uVar3 & 0xffffffff) != 0) {
      while ((uVar8 & 0xffffffff) < (uVar4 & 0xffffffff)) {
        iVar5 = fn_82981C40(param_1,param_2,uVar8,auStack_b0);
        if (((iVar5 < 0) || (iVar5 = fn_82981C40(param_1,param_3,uVar8,auStack_80), iVar5 < 0)) ||
           (iVar5 = fn_8297F800(param_1,auStack_b0,auStack_80,auStack_c0), iVar5 < 0)) {
          bVar1 = true;
LAB_82984370:
          bVar2 = true;
        }
        else {
          uVar6 = (ulonglong)auStack_c0[0];
          iVar5 = fn_8297F548(param_1,uStack_9c,uVar6);
          if (iVar5 != 0) {
            bVar1 = true;
          }
          iVar5 = fn_8297F548(param_1,uVar6,uStack_6c);
          if (iVar5 != 0) goto LAB_82984370;
        }
        if (((bVar1) && (bVar2)) ||
           (uVar8 = uVar8 + 1, (uVar3 & 0xffffffff) <= (uVar8 & 0xffffffff))) break;
      }
    }
    if ((uVar4 & 0xffffffff) < (uVar3 & 0xffffffff)) {
      lVar7 = 4;
    }
    if (bVar1) {
      lVar7 = lVar7 + 0x200;
    }
    if (bVar2) {
      lVar7 = lVar7 + 0x10000;
    }
    if ((uVar3 & 0xffffffff) < (uVar4 & 0xffffffff)) {
      lVar7 = lVar7 + 0x800000;
    }
  }
  else {
    lVar7 = 0;
  }
  return lVar7;
}

