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
extern int fn_82BE8D50();
extern int fn_82BECB18();
extern int fn_82BECBA0();
extern int fn_82BF6CA8();
extern int fn_82BF7EB8();
extern int fn_82BF7FB0();


undefined8 fn_82BED360(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x50) == 2) {
    return 0;
  }
  fn_82BF6CA8(param_1 + 0x2c);
  uVar1 = thunk_FUN_82be5550(0x14);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82BF7EB8(uVar1,*(undefined4 *)(param_1 + 8));
  }
  if ((uVar1 & 0xffffffff) != 0) {
    iVar2 = fn_82BECB18(param_1,uVar1);
    if (iVar2 != 0) {
      fn_82BE8D50(uVar1);
      fn_82BECBA0(param_1);
      *(undefined4 *)(param_1 + 0x48) = 0;
      uVar1 = thunk_FUN_82be5550(0x14);
      if ((uVar1 & 0xffffffff) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = fn_82BF7FB0(uVar1,*(undefined4 *)(param_1 + 8));
      }
      if ((uVar1 & 0xffffffff) == 0) goto code_r0x82bed440;
      iVar2 = fn_82BECB18(param_1,uVar1);
      if (iVar2 != 0) {
        fn_82BE8D50(uVar1);
        *(undefined4 *)(param_1 + 0x50) = 1;
        return 1;
      }
    }
    fn_82BE8D50(uVar1);
  }
code_r0x82bed440:
  *(undefined4 *)(param_1 + 0x50) = 2;
  return 0;
}

