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
extern unsigned int lbl_832179FC;


undefined4 fn_829D4DB8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*param_1 == 2) {
    if (-1 < param_1[2]) {
      iVar1 = lbl_832179FC + 0x8f274;
    }
    else {
      iVar1 = lbl_832179FC + 0x8f108;
    }
    return *(undefined4 *)(iVar1 + 4);
  }
  if (-1 < param_1[2]) {
    puVar2 = (undefined4 *)(lbl_832179FC + 0x8f274);
  }
  else {
    puVar2 = (undefined4 *)(lbl_832179FC + 0x8f108);
  }
  return *puVar2;
}

