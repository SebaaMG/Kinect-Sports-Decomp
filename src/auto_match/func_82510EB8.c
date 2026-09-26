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
extern unsigned int *auStack_30;
extern int fn_82510F40();
extern int fn_82560100();
extern unsigned int lbl_821CC160;


void fn_82510EB8(int param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_30 [24];
  
  iVar1 = *param_2;
  if (*(int *)(iVar1 + 0x10) != 0) {
    fn_82510F40(auStack_30,param_1,*(undefined2 *)(iVar1 + 0x14),
                      (short)*(undefined4 *)(iVar1 + 0x18));
    fn_82560100((double)lbl_821CC160,*(undefined4 *)(param_1 + 4),iVar1 + 0x10,auStack_30);
  }
  return;
}

