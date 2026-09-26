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
extern int fn_82F68240();
extern int fn_82F68278();
extern unsigned int lbl_8329F60C;
extern unsigned int lbl_8329F620;


undefined8 fn_82F85C50(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((-1 < (int)param_1) && (param_1 < lbl_8329F60C)) {
    iVar2 = (param_1 & 0x1f) * 0x48;
    if (*(int *)((&lbl_8329F620)[(int)param_1 >> 5] + iVar2) == -1) {
      *(undefined4 *)((&lbl_8329F620)[(int)param_1 >> 5] + iVar2) = param_2;
      return 0;
    }
  }
  puVar1 = (undefined4 *)fn_82F68240();
  *puVar1 = 9;
  puVar1 = (undefined4 *)fn_82F68278();
  *puVar1 = 0;
  return 0xffffffffffffffff;
}

