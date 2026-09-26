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
extern int fn_82F68B70();
extern unsigned int lbl_83265988;
extern unsigned int lbl_8326B4C8;
extern unsigned int lbl_8326B4D8;


ulonglong fn_8260DFB0(undefined8 param_1,uint param_2)

{
  int iVar1;
  int iVar3;
  ulonglong uVar2;
  int *piVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar3 = 0;
  do {
    uVar5 = 0;
    if (lbl_8326B4D8 == 0) {
      if (iVar3 == 4) {
        piVar4 = &lbl_8326B4C8;
        lVar6 = 4;
        do {
          iVar1 = *piVar4;
          if (iVar1 != 0) {
            uVar5 = *(uint *)(*(int *)(iVar1 + 0x34) * 0x28 + iVar1 + 0x3c) & param_2 | uVar5;
          }
          piVar4 = piVar4 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      else {
        uVar5 = ((int *)((&lbl_8326B4C8)[iVar3] + 0x34))
                [*(int *)((&lbl_8326B4C8)[iVar3] + 0x34) * 10 + 2] & param_2;
      }
      if (uVar5 != 0) {
        if (iVar3 == 0xff) {
          return (ulonglong)lbl_83265988;
        }
        uVar2 = fn_82F68B70();
        return uVar2;
      }
    }
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      return 0;
    }
  } while( true );
}

