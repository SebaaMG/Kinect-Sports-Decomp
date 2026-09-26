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
extern int fn_82F65350();
extern unsigned int lbl_82005730;
extern unsigned int lbl_8217BB90;


longlong fn_8302BF38(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  uVar4 = 0;
  if ((ulonglong)uVar1 - (ulonglong)uVar2 != 0) {
    iVar3 = fn_82F65350();
    uVar4 = (ulonglong)
            (uint)(int)((double)(longlong)iVar3 * lbl_8217BB90 *
                        (double)(longlong)(int)((ulonglong)uVar1 - (ulonglong)uVar2) + lbl_82005730)
    ;
  }
  return *param_1 + uVar4;
}

