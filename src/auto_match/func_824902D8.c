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
extern int fn_8248F890();
extern int fn_82491018();
extern int fn_82494B00();
extern int fn_82496D88();
extern int iRam83276734;
extern unsigned int lbl_821BED3C;
extern unsigned int lbl_821BED84;
extern unsigned int lbl_821BEDCC;
extern unsigned int lbl_821BEE14;
extern unsigned int lbl_821BEE74;


int fn_824902D8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 ulonglong param_5)

{
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar1;
  undefined4 *apuStack_50 [20];
  
  iVar2 = fn_8248F890(0x6c);
  if (iVar2 == 0) {
    iRam83276734 = 0;
  }
  else {
    iRam83276734 = fn_82491018();
  }
  apuStack_50[0] = (undefined4 *)fn_8248F890(0x18);
  if (apuStack_50[0] == (undefined4 *)0x0) {
    apuStack_50[0] = (undefined4 *)0x0;
  }
  else {
    apuStack_50[0][1] = 0;
    apuStack_50[0][2] = 0;
    apuStack_50[0][3] = 0;
    apuStack_50[0][5] = param_3;
    *apuStack_50[0] = &lbl_821BEE74;
  }
  fn_82494B00(iRam83276734 + 0x20,apuStack_50);
  apuStack_50[0] = (undefined4 *)fn_8248F890(0x18);
  if (apuStack_50[0] == (undefined4 *)0x0) {
    apuStack_50[0] = (undefined4 *)0x0;
  }
  else {
    apuStack_50[0][1] = 0;
    apuStack_50[0][2] = 0;
    apuStack_50[0][3] = 0;
    apuStack_50[0][5] = param_1;
    *apuStack_50[0] = &lbl_821BED3C;
  }
  iVar2 = iRam83276734 + 0x20;
  *(undefined4 **)(iRam83276734 + 0x30) = apuStack_50[0];
  fn_82494B00(iVar2,apuStack_50);
  apuStack_50[0] = (undefined4 *)fn_8248F890(0x18);
  if (apuStack_50[0] == (undefined4 *)0x0) {
    apuStack_50[0] = (undefined4 *)0x0;
  }
  else {
    apuStack_50[0][1] = 0;
    apuStack_50[0][2] = 0;
    apuStack_50[0][3] = 0;
    apuStack_50[0][5] = param_2;
    *apuStack_50[0] = &lbl_821BEDCC;
  }
  fn_82494B00(iRam83276734 + 0x20,apuStack_50);
  puVar3 = (undefined4 *)fn_8248F890(0x18);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[5] = (int)param_5;
    *puVar3 = &lbl_821BED84;
    if ((param_5 & 0xffffffff) != 0) {
      uVar1 = fn_8248F890(0x5c);
      if ((uVar1 & 0xffffffff) == 0) {
        apuStack_50[0] = (undefined4 *)0x0;
      }
      else {
        apuStack_50[0] = (undefined4 *)fn_82496D88(uVar1,param_5);
      }
      fn_82494B00(puVar3 + 1,apuStack_50);
    }
  }
  apuStack_50[0] = puVar3;
  fn_82494B00(iRam83276734 + 0x20,apuStack_50);
  puVar3 = (undefined4 *)fn_8248F890(0x18);
  apuStack_50[0] = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[5] = param_4;
    *puVar3 = &lbl_821BEE14;
    apuStack_50[0] = puVar3;
  }
  fn_82494B00(iRam83276734 + 0x20,apuStack_50);
  return iRam83276734;
}

