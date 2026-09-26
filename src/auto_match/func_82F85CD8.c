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


undefined8 fn_82F85CD8(uint param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  if ((-1 < (int)param_1) && (param_1 < lbl_8329F60C)) {
    piVar3 = (int *)((&lbl_8329F620)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x48);
    if (((*(byte *)(piVar3 + 1) & 1) != 0) && (*piVar3 != -1)) {
      iVar4 = -1;
      uVar1 = 0;
      goto LAB_82f85d5c;
    }
  }
  puVar2 = (undefined4 *)fn_82F68240();
  *puVar2 = 9;
  piVar3 = (int *)fn_82F68278();
  iVar4 = 0;
  uVar1 = 0xffffffffffffffff;
LAB_82f85d5c:
  *piVar3 = iVar4;
  return uVar1;
}

