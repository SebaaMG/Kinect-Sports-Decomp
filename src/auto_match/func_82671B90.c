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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82526B90();
extern int fn_82526C70();
extern int fn_8258C000();
extern int fn_8258D8D8();
extern int fn_8266C738();
extern int fn_8266EC60();
extern int fn_82671678();


void fn_82671B90(int param_1,undefined8 param_2)

{
  int iVar3;
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar4;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [96];
  
  fn_8266EC60();
  iVar3 = fn_8266C738();
  if (iVar3 != 0) {
    fn_82526C70(auStack_60,0x40,0xffffffff82002cf0,param_2,param_1);
    for (uVar4 = (ulonglong)*(uint *)(param_1 + 0x54);
        (uVar4 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x58); uVar4 = uVar4 + 0x40) {
      iVar3 = fn_82526B90(uVar4,auStack_60);
      if (iVar3 == 0) {
        uVar1 = fn_82230110(auStack_80,auStack_60);
        uVar2 = fn_8258C000();
        fn_8258D8D8(uVar2,uVar1);
        fn_82671678(auStack_90,param_1 + 0x54,uVar4);
        return;
      }
    }
  }
  return;
}

