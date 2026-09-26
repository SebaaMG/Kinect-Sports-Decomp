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


void fn_828B58F0(undefined2 *param_1,int param_2,uint param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined **appuStack_20 [8];
  
  if ((uint)(*(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2) <= param_3) {
    fn_82311AB8(appuStack_20,0xffffffff821ae698);
    appuStack_20[0] = &lbl_82167E64;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dda18);
  }
  uVar1 = *(undefined2 *)(param_2 + 0x14);
  puVar2 = (undefined2 *)(param_3 * 4 + *(int *)(param_2 + 4));
  *(undefined1 *)(param_1 + 3) = 0xde;
  *param_1 = uVar1;
  *(undefined1 *)((int)param_1 + 7) = 1;
  uVar1 = puVar2[1];
  param_1[1] = *puVar2;
  param_1[2] = uVar1;
  return;
}

