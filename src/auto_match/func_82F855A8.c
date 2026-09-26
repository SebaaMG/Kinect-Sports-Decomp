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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82A29B68();
extern int fn_82F68240();
extern int fn_82F682B0();
extern int fn_82F85D70();
extern unsigned int lbl_8329F620;
extern unsigned int uStack_20;


undefined8 fn_82F855A8(uint param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uStack_20;
  
  uStack_20 = param_2;
  uVar1 = fn_82F85D70();
  if ((int)uVar1 == -1) {
    puVar2 = (undefined4 *)fn_82F68240();
    uStack_20 = 0xffffffffffffffff;
    *puVar2 = 9;
  }
  else {
    iVar3 = fn_82A29B68(uVar1,(((U64)(uStack_20) >> 32) & 0xFFFFFFFF),&uStack_20,param_3);
    uStack_20 = CONCAT44((((U64)(uStack_20) >> 0) & 0xFFFFFFFF),iVar3);
    if ((iVar3 == -1) && (iVar3 = thunk_FUN_82a2b798(), iVar3 != 0)) {
      fn_82F682B0();
      uStack_20 = 0xffffffffffffffff;
    }
    else {
      iVar3 = (&lbl_8329F620)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x48;
      *(byte *)(iVar3 + 4) = *(byte *)(iVar3 + 4) & 0xfd;
    }
  }
  return uStack_20;
}

