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
extern int fn_82B52FF8();


void fn_82B53448(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x2c);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  do {
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(*(int *)(iVar2 + 8) + 4) == 6) {
      iVar1 = *(int *)(*(int *)(iVar2 + 8) + 0x18);
      if ((iVar1 == 0) || (*(int *)(iVar1 + 4) != 0xb)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      if (*(int *)(iVar1 + 0x14) != 0) {
        if ((*(uint *)(iVar1 + 0x2c) & 0x20) != 0) {
          fn_82B52FF8(param_1,param_3,*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x3c),
                        param_4);
        }
      }
    }
    iVar2 = *(int *)(iVar2 + 0xc);
  } while ((iVar2 == 0) || (*(int *)(iVar2 + 4) == 1));
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x12c1);
}

