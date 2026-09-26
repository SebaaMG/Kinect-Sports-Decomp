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
extern unsigned int lbl_8326B4C8;
extern unsigned int lbl_8326B4D8;


uint fn_825580C0(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  if (lbl_8326B4D8 == 0) {
    if (param_1 == 4) {
      piVar2 = &lbl_8326B4C8;
      lVar4 = 4;
      do {
        iVar1 = *piVar2;
        if (iVar1 != 0) {
          uVar3 = *(uint *)(*(int *)(iVar1 + 0x34) * 0x28 + iVar1 + 0x38) & param_2 | uVar3;
        }
        piVar2 = piVar2 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    else {
      uVar3 = ((int *)((&lbl_8326B4C8)[param_1] + 0x34))
              [*(int *)((&lbl_8326B4C8)[param_1] + 0x34) * 10 + 1] & param_2;
    }
  }
  return uVar3;
}

