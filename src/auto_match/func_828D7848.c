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
extern int fn_828D55B8();
extern int fn_828D6150();
extern int fn_828D6860();
extern int fn_828D70A0();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int uStack00000010;
extern unsigned int uStack00000018;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_828D7848(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uStack00000010;
  undefined8 uStack00000018;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  
  uStack00000018 = ((((U64)(uStack00000018)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((int)param_2)) & ((U64)0xFFFFFFFF)) << 32));
  iVar5 = (((U64)(uStack00000018) >> 32) & 0xFFFFFFFF);
  uStack00000010 = param_1;
  uStack00000018 = param_2;
  do {
    uVar1 = uStack00000010;
    iVar2 = (((U64)(uStack00000010) >> 32) & 0xFFFFFFFF);
    while( true ) {
      iVar3 = iVar5 - iVar2;
      if (iVar3 < 0x21) {
        if (1 < iVar3) {
          fn_828D55B8(uVar1,param_2,0);
        }
        return;
      }
      iVar4 = (int)param_3;
      if (iVar4 < 1) {
        if (1 < iVar3) {
          fn_828D6860(uVar1,param_2,0,0);
        }
        fn_828D70A0(uVar1,param_2);
        return;
      }
      fn_828D6150(&uStack_40,uVar1,param_2);
      param_3 = (longlong)(iVar4 >> 1) + (ulonglong)(iVar4 < 0 && (param_3 & 1) != 0);
      param_3 = (longlong)((int)param_3 >> 1) + (ulonglong)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      if (iStack_3c - iVar2 < iVar5 - iStack_34) break;
      fn_828D7848(CONCAT44(uStack_38,iStack_34),param_2,param_3);
      param_2 = CONCAT44(uStack_40,iStack_3c);
      iVar5 = iStack_3c;
      uStack00000018 = param_2;
    }
    fn_828D7848(uVar1,CONCAT44(uStack_40,iStack_3c),param_3);
    uStack00000010 = CONCAT44(uStack_38,iStack_34);
  } while( true );
}

