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
extern int fn_82BE5240();
extern int fn_82BE52B8();
extern int fn_82BEB628();
extern unsigned int lbl_831751CC;
extern unsigned int lbl_831751D0;


undefined8 fn_82BEEF40(longlong param_1,int param_2)

{
  int *piVar2;
  ulonglong uVar1;
  int iVar3;
  
  if (param_2 == 0) {
    fn_82BE5240(param_1,600,0xffffffff82196582);
  }
  else {
    piVar2 = (int *)(*(code *)lbl_831751D0)(4);
    if (piVar2 != (int *)0x0) {
      *piVar2 = param_2;
      uVar1 = thunk_FUN_82be5550(0xc);
      if ((uVar1 & 0xffffffff) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_82BEB628(uVar1,piVar2);
      }
      if (iVar3 != 0) {
        fn_82BE52B8(param_1 + 0x4c);
        return 1;
      }
      (*(code *)lbl_831751CC)(piVar2);
    }
  }
  return 0;
}

