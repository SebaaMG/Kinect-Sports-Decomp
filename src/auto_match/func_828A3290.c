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
extern int fn_82311AB8();
extern int fn_82F69290();
extern unsigned int lbl_82167E64;


longlong fn_828A3290(int *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined **appuStack_20 [8];
  
  if ((ulonglong)(uint)param_1[4] <= (param_2 & 0xffffffff)) {
    fn_82311AB8(appuStack_20,0xffffffff821ad08c);
    appuStack_20[0] = &lbl_82167E64;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dda18);
  }
  piVar3 = (int *)0x0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 **)*param_1, puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  if (((piVar3 == (int *)0x0) || ((int *)*piVar3 == (int *)0x0)) ||
     (piVar3 = *(int **)*piVar3, piVar3 == (int *)0x0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar3;
  }
  uVar4 = ((uint)param_1[3] + param_2 & 0xffffffff) >> 2;
  if (*(uint *)(iVar2 + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)(iVar2 + 8);
  }
  return (ulonglong)*(uint *)((int)((uVar4 & 0xffffffff) << 2) + *(int *)(iVar2 + 4)) +
         ((uint)param_1[3] + param_2 & 3) * 4;
}

