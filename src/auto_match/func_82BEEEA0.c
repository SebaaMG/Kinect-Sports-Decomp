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
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BE5398();
extern unsigned int lbl_831751CC;


undefined8 fn_82BEEEA0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == 0) {
    fn_82BE5240(param_1,600,0xffffffff82196582);
  }
  else {
    iVar2 = param_1 + 0x4c;
    fn_82BE5340(iVar2);
    while (*(int *)(param_1 + 0x54) != 0) {
      piVar1 = (int *)fn_82BE5378(iVar2);
      if (*piVar1 == param_2) {
        fn_82BE5378(iVar2);
        (*(code *)lbl_831751CC)();
        fn_82BE5398(iVar2,*(undefined4 *)(param_1 + 0x54),1);
        return 1;
      }
      fn_82BE5350();
    }
  }
  return 0;
}

