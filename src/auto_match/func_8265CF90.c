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
extern unsigned int *auStack_18;
extern int fn_8265CF70();
extern int fn_8265D3F0();
extern int fn_8265D410();
extern int fn_8265D468();
extern int fn_8265D478();
extern int fn_8265D4D8();
extern int fn_8265D5A8();
extern int fn_8265FE68();
extern int fn_8265FE98();
extern int fn_82660870();
extern int fn_82666F40();
extern int fn_82668DC0();
extern int fn_82668E40();
extern int fn_8266AE20();
extern int fn_82BA02A8();
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8265CF90(uint *param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar1;
  uint uVar6;
  undefined8 uVar2;
  uint *puStack00000014;
  uint uStack0000001c;
  uint uStack00000024;
  undefined4 *puStack0000002c;
  undefined4 uStack_20;
  uint uStack_1c;
  undefined4 auStack_18 [2];
  
  if (param_3 != 0) {
    puStack00000014 = param_1;
    uStack0000001c = param_2;
    uStack00000024 = param_3;
    puStack0000002c = param_4;
    iVar3 = fn_8265FE68(param_1);
    iVar4 = fn_8265CF70(puStack00000014);
    if ((uint)(iVar3 - iVar4) < uStack00000024) {
      fn_82660870(puStack00000014);
    }
    else {
      uVar5 = fn_8265D3F0(puStack00000014);
      iVar3 = fn_8265CF70(puStack00000014);
      if (uVar5 < iVar3 + uStack00000024) {
        lVar1 = fn_8265CF70(puStack00000014);
        iVar3 = fn_82666F40(puStack00000014,lVar1 + (ulonglong)uStack00000024);
        uVar6 = fn_8265FE98(puStack00000014 + 3,iVar3,0);
        uVar5 = (int)(uStack0000001c - *puStack00000014) >> 2;
        uVar2 = fn_8265D5A8(puStack0000002c);
        fn_8265D410(puStack00000014,(ulonglong)uVar6 + ((ulonglong)uVar5 & 0x3fffffff) * 4,
                          uStack00000024,uVar2);
        fn_8266AE20(puStack00000014,*puStack00000014,uStack0000001c,uVar6);
        fn_8266AE20(puStack00000014,uStack0000001c,puStack00000014[1],
                          (ulonglong)uVar6 +
                          ((ulonglong)uVar5 + (ulonglong)uStack00000024 & 0x3fffffff) * 4);
        iVar4 = fn_8265CF70(puStack00000014);
        uStack00000024 = uStack00000024 + iVar4;
        if (*puStack00000014 != 0) {
          fn_82668DC0(puStack00000014,*puStack00000014,puStack00000014[1]);
          fn_82668E40(puStack00000014 + 3,*puStack00000014,
                            (int)(puStack00000014[2] - *puStack00000014) >> 2);
        }
        fn_82BA02A8(puStack00000014);
        puStack00000014[2] = uVar6 + iVar3 * 4;
        puStack00000014[1] = uVar6 + uStack00000024 * 4;
        *puStack00000014 = uVar6;
      }
      else if ((uint)((int)(puStack00000014[1] - uStack0000001c) >> 2) < uStack00000024) {
        uStack_20 = *puStack0000002c;
        fn_8266AE20(puStack00000014,uStack0000001c,puStack00000014[1],
                          (ulonglong)uStack0000001c + ((ulonglong)uStack00000024 & 0x3fffffff) * 4);
        uVar2 = fn_8265D5A8(&uStack_20);
        fn_8265D410(puStack00000014,puStack00000014[1],
                          (ulonglong)uStack00000024 -
                          (longlong)((int)(puStack00000014[1] - uStack0000001c) >> 2),uVar2);
        puStack00000014[1] = puStack00000014[1] + uStack00000024 * 4;
        fn_8265D468(puStack00000014,uStack0000001c,puStack00000014[1]);
        fn_8265D478(uStack0000001c,
                          (ulonglong)puStack00000014[1] +
                          ((ulonglong)uStack00000024 & 0x3fffffff) * -4,&uStack_20);
      }
      else {
        auStack_18[0] = *puStack0000002c;
        uStack_1c = puStack00000014[1];
        uVar5 = fn_8266AE20(puStack00000014,
                                  (ulonglong)uStack_1c +
                                  ((ulonglong)uStack00000024 & 0x3fffffff) * -4,uStack_1c,
                                  puStack00000014[1]);
        puStack00000014[1] = uVar5;
        fn_8265D468(puStack00000014,uStack0000001c,puStack00000014[1]);
        fn_8265D4D8(uStack0000001c,
                          (ulonglong)uStack_1c + ((ulonglong)uStack00000024 & 0x3fffffff) * -4,
                          uStack_1c);
        fn_8265D478(uStack0000001c,
                          (ulonglong)uStack0000001c + ((ulonglong)uStack00000024 & 0x3fffffff) * 4,
                          auStack_18);
      }
    }
  }
  return;
}

