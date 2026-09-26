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
extern int iRam83248e40;
extern unsigned int lbl_83248E44;
extern unsigned int lbl_83248E48;


void fn_82E81780(int param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x658) = 1;
  if ((*(int *)(param_1 + 0x1ff0) == 0) || (*(int *)(*(int *)(param_1 + 0x1ff4) + 0xb4) == 0)) {
    if ((lbl_83248E44 != 0) || (lbl_83248E48 != 0)) {
      *(undefined4 *)(param_1 + 0x658) = 1;
    }
    if ((*(int *)(param_1 + 0x1a74) != 0) && (*(int *)(param_1 + 4) == 8)) {
      *(undefined4 *)(param_1 + 0x658) = 1;
    }
    if (iRam83248e40 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x658) = 1;
    return;
  }
  uVar1 = *(uint *)(*(int *)(param_1 + 0x1ff4) + 0x48);
  if (uVar1 == 0) {
    return;
  }
  if (4 < uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x658) = uVar1;
  return;
}

