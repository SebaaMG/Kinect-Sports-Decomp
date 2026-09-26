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


short fn_82FF4508(short *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short sStack_1a;
  
  sVar1 = param_1[1];
  sVar2 = *param_1;
  sStack_1a = 0;
  if ((short)(sVar1 - sVar2) != 0) {
    iVar3 = fn_82F65350();
    sStack_1a = (short)(int)((double)(longlong)iVar3 * lbl_8217BB90 *
                             (double)(longlong)(int)(short)(sVar1 - sVar2) + lbl_82005730);
  }
  return *param_1 + sStack_1a;
}

