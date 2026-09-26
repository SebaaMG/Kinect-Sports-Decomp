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
extern unsigned int *auStack_820;
extern unsigned int *auStack_8e0;
extern int fn_82299BF0();
extern int fn_82358FD8();
extern int fn_8236B6E8();
extern unsigned int lbl_821917B0;
extern unsigned int lbl_82193960;


void fn_8236B8B0(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_8e0 [192];
  undefined1 auStack_820 [2056];
  
  iVar1 = fn_8236B6E8(param_1,param_2,auStack_8e0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(**(int **)(param_1 + 0x4b0) + 0xd4);
    fn_82358FD8(*(undefined4 *)(iVar1 + 0x1c),auStack_820,0x400,
                      (&lbl_82193960)[param_3]);
    iVar1 = *(int *)(iVar1 + 0x3c);
    if (*(int *)(iVar1 + 0x1220) == 0) {
      fn_82299BF0(iVar1,auStack_8e0,auStack_820);
      *(undefined4 *)(iVar1 + 0x121c) = lbl_821917B0;
    }
  }
  return;
}

