extern unsigned int *puRam83296194;
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
extern int fn_825269D0();
extern unsigned int lbl_832960B4;
extern unsigned int lbl_832960C0;
extern unsigned int lbl_8329615C;
extern unsigned int lbl_8329618C;
extern unsigned int uRam832960bc;


int fn_8251CD18(ulonglong param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;

  iVar2 = 0;
  puVar3 = &lbl_8329615C;
  do {
    if (*puVar3 != 0) {
      fn_825269D0(0xf,param_1);
    }
    if ((((param_1 & 0xffffffff) == (ulonglong)*puVar3) ||
        ((param_1 & 0xffffffff) == (ulonglong)puVar3[-1])) && (puVar3[1] == 0)) {
      puVar3[1] = 1;
      uVar1 = lbl_8329618C;
      lbl_8329618C = puVar3 + -1;
      iVar2 = 1;
      fn_825269D0(0x11,*puVar3);
      puRam83296194 = (uint *)(-(uint)(puRam83296194 != puVar3 + -1) & (uint)puRam83296194);
      lbl_8329618C = (uint *)uVar1;
    }
    puVar3 = puVar3 + -0xc;
  } while (-0x7cd69f35 < (int)puVar3);
  if (iVar2 != 0) {
    lbl_832960B4 = lbl_832960B4 + 1;
    uRam832960bc = 0;
    lbl_832960C0 = 0;
  }
  return iVar2;
}
