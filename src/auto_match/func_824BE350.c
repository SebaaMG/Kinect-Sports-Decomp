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
extern unsigned int *auStack_10;
extern int fn_82837D98();
extern unsigned int lbl_83265988;
extern unsigned int lbl_832659CD;


undefined4 fn_824BE350(int *param_1)

{
  int iVar1;
  undefined4 auStack_10 [4];
  
  if ((lbl_832659CD == '\0') ||
     ((*(byte *)(*(int *)(*(int *)(lbl_83265988 + 0xf0) + 8) + 8) & 8) != 0)) {
    iVar1 = param_1[0x3c];
  }
  else {
    iVar1 = param_1[0x1f];
    if (iVar1 == 0) {
      iVar1 = param_1[0x3a];
    }
    else {
      if (iVar1 != 3) {
        if ((iVar1 != 1) && (iVar1 = *(int *)(*param_1 + 0xa4), iVar1 != 0)) {
          return *(undefined4 *)(iVar1 + 0x4c);
        }
        return *(undefined4 *)(*(int *)(*param_1 + 0xa0) + 0x4c);
      }
      iVar1 = param_1[0x3b];
    }
  }
  fn_82837D98(*(undefined4 *)(iVar1 + 0x14),0,auStack_10);
  return auStack_10[0];
}

