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
extern int fn_825200A8();
extern int (*lbl_83276798)();
extern unsigned int lbl_832960D0;


undefined8 fn_8249C358(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if ((*(int *)(param_1 + 0x70) != 0) &&
     (iVar1 = fn_825200A8(*(int *)(param_1 + 0x70),param_1 + 0xe0), iVar1 != 0)) {
    if (lbl_83276798 == (code *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*lbl_83276798)();
    }
    if (iVar1 != 0) {
      uVar2 = 0;
      piVar3 = &lbl_832960D0;
      while ((*(int *)(param_1 + 0x70) != piVar3[-1] || (*piVar3 == 0))) {
        uVar2 = uVar2 + 0x30;
        piVar3 = piVar3 + 0xc;
        if (0xbf < uVar2) {
          return 1;
        }
      }
    }
  }
  return 0;
}

