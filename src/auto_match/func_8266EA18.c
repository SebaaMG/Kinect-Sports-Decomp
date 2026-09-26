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
extern int fn_822315A0();
extern int fn_8266D9F0();
extern int fn_8266DF80();
extern int fn_8266E458();
extern int fn_8266F680();
extern int fn_8266F688();
extern int fn_8266F6A0();
extern int fn_8266F6B0();
extern int fn_826735B0();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_8266EA18(double param_1,int param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  double dVar6;
  int iStack_70;
  int iStack_6c;
  uint uStack_60;
  uint uStack_5c;
  
  fn_8266E458(&uStack_60,param_2 + 0xd8);
  uVar5 = (ulonglong)uStack_60;
  if (uVar5 != uStack_5c) {
    do {
      fn_8266D9F0(&iStack_70,uVar5);
      iVar1 = iStack_70;
      if ((((iStack_70 != 0) &&
           ((iVar2 = fn_8266F688(iStack_70), param_4 == 0 ||
            (iVar3 = fn_8266F680(iVar1), iVar3 != 0)))) &&
          ((iVar2 == 0 || ((iVar2 == param_5 || (param_5 == 0)))))) &&
         ((iVar2 = fn_8266F6A0(iVar1), iVar2 == 0 &&
          (uVar4 = fn_8266F6B0(iVar1), (uVar4 & *(uint *)(param_2 + 0x1dc)) == 0)))) {
        dVar6 = param_1;
        if (*(int *)(param_2 + 0x1e0) != *(int *)(param_2 + 0x1e4)) {
          dVar6 = (double)*(float *)(*(int *)(param_2 + 0x1e4) + -4);
        }
        fn_826735B0(dVar6,iVar1);
      }
      if (iStack_6c != 0) {
        fn_822315A0();
      }
      uVar5 = uVar5 + 0xc;
    } while ((uVar5 & 0xffffffff) != (ulonglong)uStack_5c);
  }
  fn_8266DF80(&uStack_60);
  return;
}

