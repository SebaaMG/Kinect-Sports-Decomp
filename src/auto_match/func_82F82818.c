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
extern int fn_82F82758();
extern int fn_82F8295C();
extern int fn_82F85E30();
extern unsigned int lbl_8329F60C;
extern unsigned int lbl_8329F620;
extern unsigned int uStack00000014;
extern unsigned int uStack_50;


ulonglong fn_82F82818(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uStack00000014;
  uint uStack_50;
  
  uStack00000014 = (uint)param_1;
  if (uStack00000014 == 0xfffffffe) {
    puVar3 = (undefined4 *)fn_82F68278();
    *puVar3 = 0;
    puVar3 = (undefined4 *)fn_82F68240();
    *puVar3 = 9;
  }
  else {
    if ((-1 < (int)uStack00000014) && ((param_1 & 0xffffffff) < (ulonglong)lbl_8329F60C)) {
      iVar1 = (int)uStack00000014 >> 5;
      iVar2 = (uStack00000014 & 0x1f) * 0x48;
      if ((*(byte *)((&lbl_8329F620)[iVar1] + iVar2 + 4) & 1) != 0) {
        fn_82F85E30(param_1);
        if ((*(byte *)((&lbl_8329F620)[iVar1] + iVar2 + 4) & 1) == 0) {
          puVar3 = (undefined4 *)fn_82F68240();
          *puVar3 = 9;
          puVar3 = (undefined4 *)fn_82F68278();
          *puVar3 = 0;
          uStack_50 = 0xffffffff;
        }
        else {
          uStack_50 = fn_82F82758(param_1,param_2,param_3);
        }
        fn_82F8295C();
        return (ulonglong)uStack_50;
      }
    }
    puVar3 = (undefined4 *)fn_82F68278();
    *puVar3 = 0;
    puVar3 = (undefined4 *)fn_82F68240();
    *puVar3 = 9;
    fn_82F63BA0();
  }
  return 0xffffffffffffffff;
}

