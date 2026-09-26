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
extern int fn_82BF6E50();
extern int fn_82F68CC0();
extern unsigned int lbl_831751CC;
extern unsigned int lbl_831751D0;


undefined8 fn_82BF6EE8(int param_1,ulonglong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((param_2 & 0xffffffff) != 0) {
    if ((*(int *)(param_1 + 8) == 0) || (*(uint *)(param_1 + 0x10) == 0)) {
      uVar2 = fn_82BF6E50(param_1);
      return uVar2;
    }
    uVar5 = param_2;
    if (*(int *)(param_1 + 0x18) == 0) {
LAB_82bf6f60:
      lVar3 = (*(code *)lbl_831751D0)(uVar5);
      if (lVar3 != 0) {
        fn_82F68CC0(lVar3,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
        (*(code *)lbl_831751CC)(*(undefined4 *)(param_1 + 8));
        *(int *)(param_1 + 8) = (int)lVar3;
        *(int *)(param_1 + 0x10) = (int)uVar5;
        return 1;
      }
    }
    else if (*(int *)(param_1 + 0x18) == 1) {
      uVar5 = ((ulonglong)*(uint *)(param_1 + 0x10) & 0x7fffffff) << 1;
      do {
        if ((param_2 & 0xffffffff) <= uVar5) goto LAB_82bf6f60;
        uVar4 = (uVar5 & 0x7fffffff) << 1;
        bVar1 = uVar5 <= uVar4;
        uVar5 = uVar4;
      } while (bVar1);
    }
  }
  return 0;
}

