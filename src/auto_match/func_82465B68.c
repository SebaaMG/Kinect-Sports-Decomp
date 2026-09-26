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
extern float fRam831d38cc;
extern int fn_82466200();
extern unsigned int lbl_821955F4;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D386C;
extern unsigned int uRam831d38a0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82465B68(int param_1,int param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  if (param_2 != *(int *)(param_1 + 0xd0)) {
    *(int *)(param_1 + 0xd0) = param_2;
    uVar1 = lbl_821955F4;
    if (param_2 == 0) {
      if (*(int *)(param_1 + 0xd4) != 0) {
        *(undefined4 *)(param_1 + 0xd4) = 0;
      }
      *(undefined4 *)(param_1 + 0xdc) = lbl_821CC160;
    }
    else if (param_2 == 1) {
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0xdc) = lbl_831D386C;
      *(undefined4 *)(param_1 + 0xe0) = uVar1;
      if (uRam831d38a0 != 0) {
        do {
          fn_82466200((double)fRam831d38cc,param_1,uVar2);
          uVar2 = uVar2 + 1;
        } while ((uVar2 & 0xffffffff) < (ulonglong)uRam831d38a0);
      }
    }
  }
  return;
}

