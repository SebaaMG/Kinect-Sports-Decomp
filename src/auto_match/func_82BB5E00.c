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


undefined8 fn_82BB5E00(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 0xe4);
  if (((uVar1 >> 5 & 1) == 0) && ((uVar1 >> 6 & 1) == 0)) {
    if ((*(int *)(param_1 + 0x10) == 0) ||
       (((uVar1 >> 1 & 1) != 0 ||
        (bVar2 = true, (&lbl_820E7F9C)[*(int *)(param_1 + 0x50) * 0xc] == '\0')))) {
      bVar2 = false;
    }
    if (bVar2) {
      return 1;
    }
  }
  return 0;
}

