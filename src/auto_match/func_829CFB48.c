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
extern int fn_829CB790();
extern unsigned int lbl_83217128;


void fn_829CFB48(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  RtlEnterCriticalSection(0xffffffff8315c428);
  iVar2 = (&lbl_83217128)[param_1];
  if (iVar2 != 0) {
    param_2[0x1b] = 0;
    fn_829CB790(param_2 + 0xc);
    iVar1 = *(int *)(iVar2 + 0x24);
    param_2[1] = iVar2 + 0x24;
    *param_2 = iVar1;
    *(int **)(iVar1 + 4) = param_2;
    *(int **)(iVar2 + 0x24) = param_2;
  }
  RtlLeaveCriticalSection(0xffffffff8315c428);
  return;
}

