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
extern int fn_82AA66A8();
extern int fn_82AE4D28();
extern int fn_82AE5550();
extern int fn_82AE6018();


longlong fn_82AE6B88(int *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = fn_82AE6018(param_1,0,param_2);
  if ((int)lVar2 != -1) {
    fn_82AE5550(param_1 + 1,lVar2,lVar2 + param_2 + -1);
    return lVar2;
  }
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0x324) != 0) {
    uVar3 = fn_82AE4D28(iVar1);
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(iVar1,0xdef,uVar3);
  }
  uVar3 = fn_82AE4D28(iVar1);
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(iVar1,0xdf0,uVar3);
}

