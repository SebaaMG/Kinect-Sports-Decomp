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
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5B48();
extern int fn_82BE6718();
extern int fn_82BEA200();
extern int fn_82BEA230();
extern unsigned int lbl_8322B1D8;


undefined8 fn_82BEB8C0(int param_1)

{
  int iVar3;
  undefined8 uVar1;
  int iVar4;
  longlong lVar2;
  
  iVar3 = fn_82BEA200((ulonglong)lbl_8322B1D8 + 0x2c,*(undefined4 *)(param_1 + 0xc));
  if (iVar3 == 0) {
    uVar1 = 0x2c0;
  }
  else {
    if (*(int *)(param_1 + 0x20) == 0) {
      uVar1 = 0x3ea;
    }
    else {
      iVar3 = param_1 + 0x14;
      fn_82BE5340(iVar3);
      while (lVar2 = fn_82BE5378(iVar3), lVar2 != 0) {
        iVar4 = fn_82BE5B48(lVar2);
        if (iVar4 != 0) {
          fn_82BE6718(lVar2);
        }
        fn_82BE5350(iVar3);
      }
      uVar1 = 0;
    }
    fn_82BEA230((ulonglong)lbl_8322B1D8 + 0x2c,*(undefined4 *)(param_1 + 0xc));
  }
  return uVar1;
}

