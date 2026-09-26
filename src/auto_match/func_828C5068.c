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
#define _iStack00000010 ((*(U64*)&iStack00000010))
#define _iStack00000020 ((*(U64*)&iStack00000020))
extern int fn_828C4EA8();
extern unsigned int iStack00000010;
extern unsigned int iStack00000020;
extern unsigned int uStack00000014;
extern unsigned int uStack00000018;
extern unsigned int uStack00000024;


void fn_828C5068(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  int iStack00000010;
  uint uStack00000014;
  ulonglong uStack00000018;
  int iStack00000020;
  uint uStack00000024;
  
  iStack00000010 = (int)(param_1 >> 0x20);
  uStack00000014 = (uint)param_1;
  uStack00000014 = uStack00000014 >> 2;
  if (*(uint *)(iStack00000010 + 8) <= uStack00000014) {
    uStack00000014 = uStack00000014 - *(uint *)(iStack00000010 + 8);
  }
  iStack00000020 = (int)(param_3 >> 0x20);
  uStack00000024 = (uint)param_3;
  uStack00000024 = uStack00000024 >> 2;
  if (*(uint *)(iStack00000020 + 8) <= uStack00000024) {
    uStack00000024 = uStack00000024 - *(uint *)(iStack00000020 + 8);
  }
  *(undefined4 *)
   (*(int *)(*(int *)(iStack00000020 + 4) + uStack00000024 * 4) + (int)((param_3 & 3) << 2)) =
       *(undefined4 *)
        (*(int *)(*(int *)(iStack00000010 + 4) + uStack00000014 * 4) + (int)((param_1 & 3) << 2));
  _iStack00000010 = param_1;
  uStack00000018 = param_2;
  _iStack00000020 = param_3;
  fn_828C4EA8(param_1,0,(param_2 & 0xffffffff) - (param_1 & 0xffffffff));
  return;
}

