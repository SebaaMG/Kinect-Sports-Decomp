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
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F68278();
extern unsigned int lbl_8329F60C;
extern unsigned int lbl_8329F620;


ulonglong fn_82F85D70(uint param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)fn_82F68278();
    *puVar1 = 0;
    puVar1 = (undefined4 *)fn_82F68240();
    *puVar1 = 9;
  }
  else {
    if (((-1 < (int)param_1) && (param_1 < lbl_8329F60C)) &&
       (puVar2 = (uint *)((&lbl_8329F620)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x48),
       (puVar2[1] & 0x1000000) != 0)) {
      return (ulonglong)*puVar2;
    }
    puVar1 = (undefined4 *)fn_82F68278();
    *puVar1 = 0;
    puVar1 = (undefined4 *)fn_82F68240();
    *puVar1 = 9;
    fn_82F63BA0();
  }
  return 0xffffffffffffffff;
}

