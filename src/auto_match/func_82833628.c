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
extern unsigned int *auStack_40;
extern int fn_82832E40();
extern int fn_82833330();
extern int fn_828335D0();
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


int fn_82833628(int param_1,uint *param_2)

{
  uint uVar2;
  undefined8 uVar1;
  uint uVar3;
  uint uVar4;
  uint auStack_40 [4];
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  
  uVar2 = fn_82832E40();
  if (uVar2 != *(uint *)(param_1 + 4)) {
    uVar4 = param_2[1];
    uVar3 = *(uint *)(uVar2 + 0x10);
    if (uVar4 == uVar3) {
      uVar4 = param_2[2];
      uVar3 = *(uint *)(uVar2 + 0x14);
      if (uVar4 == uVar3) {
        uVar4 = *param_2;
        uVar3 = *(uint *)(uVar2 + 0xc);
      }
    }
    if (uVar3 <= uVar4) goto LAB_828336d0;
  }
  uStack_30 = *param_2;
  uStack_2c = param_2[1];
  uStack_28 = param_2[2];
  uStack_24 = 0;
  uVar1 = fn_828335D0(param_1,&uStack_30);
  fn_82833330(auStack_40,param_1,uVar2,uVar1);
  uVar2 = auStack_40[0];
LAB_828336d0:
  return uVar2 + 0x18;
}

