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
extern unsigned int lbl_831898B8;


longlong fn_82E9AB00(undefined8 param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  iVar1 = (param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f);
  if ((iVar2 < 0x9f) && (iVar1 < 0x9f)) {
    return (ulonglong)*(uint *)(*(int *)(&lbl_831898B8 + iVar1 * 4) * 4 + param_4) +
           (ulonglong)*(uint *)(*(int *)(&lbl_831898B8 + iVar2 * 4) * 4 + param_4);
  }
  return ((ulonglong)*(uint *)(param_4 + 0x14) & 0x7fffffff) << 1;
}

