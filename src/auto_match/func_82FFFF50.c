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
extern int fn_82FA5060();
extern int fn_83027128();
extern unsigned int lbl_831BC768;


undefined8 fn_82FFFF50(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 100) == 0) {
    *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) | 1;
    iVar1 = fn_82FA5060(lbl_831BC768,0x50);
    if ((iVar1 == 0) || (iVar1 = fn_83027128(), iVar1 == 0)) {
      return 0x34;
    }
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0xc);
    *(int *)(param_1 + 100) = iVar1;
  }
  return 1;
}

