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
extern int fn_82BE19A0();
extern int fn_82BE2008();
extern int fn_82BE5240();
extern int fn_82BE52B8();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BEB628();
extern int fn_82F65AC0();
extern unsigned int lbl_831751CC;


undefined8 fn_82BE2078(int param_1,undefined8 param_2)

{
  int iVar3;
  longlong lVar1;
  ulonglong uVar2;
  int iVar4;
  
  iVar3 = fn_82BE2008();
  if (iVar3 == 0) {
    lVar1 = fn_82BE19A0(param_2);
    if (lVar1 == 0) {
      fn_82BE5240(param_1,0x65,0xffffffff82196582);
      *(undefined4 *)(param_1 + 0x10) = 0;
      return 0;
    }
    uVar2 = thunk_FUN_82be5550(0xc);
    if ((uVar2 & 0xffffffff) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_82BEB628(uVar2,lVar1);
    }
    if (iVar3 != 0) {
      fn_82BE52B8(param_1 + 0x160);
      if (*(int *)(param_1 + 0x17c) != 0) {
        iVar3 = param_1 + 0x170;
        fn_82BE5340(iVar3);
        while (*(int *)(param_1 + 0x178) != 0) {
          iVar4 = fn_82BE5378(iVar3);
          iVar4 = fn_82F65AC0(param_2,*(undefined4 *)(iVar4 + 0x38));
          if (iVar4 == 0) {
            iVar3 = fn_82BE5378(iVar3);
            *(undefined4 *)(iVar3 + 0x50) = 1;
            return 1;
          }
          fn_82BE5350();
        }
      }
      return 1;
    }
    fn_82BE5240(param_1,0x65,0xffffffff820e8a18);
    *(undefined4 *)(param_1 + 0x10) = 0;
    (*(code *)lbl_831751CC)(lVar1);
  }
  return 0;
}

