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
extern int fn_828C4CA0();
extern int fn_828C52A0();
extern int fn_828C59F0();
extern int fn_828C5E70();
extern unsigned int iStack_44;
extern unsigned int iStack_4c;
extern unsigned int uStack00000010;
extern unsigned int uStack00000018;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


void fn_828C62E0(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uStack00000010;
  undefined8 uStack00000018;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  
  uStack00000018 = ((((U64)(uStack00000018)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((int)param_2)) & ((U64)0xFFFFFFFF)) << 32));
  iVar4 = (((U64)(uStack00000018) >> 32) & 0xFFFFFFFF);
  uStack00000010 = param_1;
  uStack00000018 = param_2;
  do {
    uVar1 = uStack00000010;
    iVar2 = (((U64)(uStack00000010) >> 32) & 0xFFFFFFFF);
    while( true ) {
      iVar3 = iVar4 - iVar2;
      if (iVar3 < 0x21) {
        if (1 < iVar3) {
          fn_828C4CA0(uVar1,param_2,param_4,0);
        }
        return;
      }
      iVar5 = (int)param_3;
      if (iVar5 < 1) {
        if (1 < iVar3) {
          fn_828C59F0(uVar1,param_2,param_4,0,0);
        }
        fn_828C5E70(uVar1,param_2,param_4);
        return;
      }
      fn_828C52A0(&uStack_50,uVar1,param_2,param_4);
      param_3 = (longlong)(iVar5 >> 1) + (ulonglong)(iVar5 < 0 && (param_3 & 1) != 0);
      param_3 = (longlong)((int)param_3 >> 1) + (ulonglong)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      if (iStack_4c - iVar2 < iVar4 - iStack_44) break;
      fn_828C62E0(CONCAT44(uStack_48,iStack_44),param_2,param_3,param_4);
      param_2 = CONCAT44(uStack_50,iStack_4c);
      iVar4 = iStack_4c;
      uStack00000018 = param_2;
    }
    fn_828C62E0(uVar1,CONCAT44(uStack_50,iStack_4c),param_3,param_4);
    uStack00000010 = CONCAT44(uStack_48,iStack_44);
  } while( true );
}

