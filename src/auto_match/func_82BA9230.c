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
extern unsigned int lbl_820E7F9C;


undefined8 fn_82BA9230(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    if ((*(uint *)(param_1 + 0xe4) >> 1 & 1) == 0) {
      bVar2 = true;
      if ((&lbl_820E7F9C)[*(int *)(param_1 + 0x50) * 0xc] != '\0') goto code_r0x82ba9270;
    }
  }
  bVar2 = false;
code_r0x82ba9270:
  if (bVar2) {
    iVar3 = 0;
    do {
      bVar1 = *(byte *)(param_1 + 0x80 + iVar3);
      if ((1 < bVar1) && (bVar1 < 4)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
  }
  return 0;
}

