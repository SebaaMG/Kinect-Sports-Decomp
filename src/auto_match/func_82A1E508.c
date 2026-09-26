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
extern unsigned int __imp__ExThreadObjectType;
extern int fn_82A2B760();
extern unsigned int iStack_1c;
extern unsigned int uStack_20;


longlong fn_82A1E508(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  undefined4 uStack_20;
  int iStack_1c;
  
  if (param_2 < 6) {
    lVar1 = ObReferenceObjectByHandle(param_1,__imp__ExThreadObjectType,&uStack_20);
    if (lVar1 < 0) goto LAB_82a1e594;
    lVar1 = KeSetAffinityThread(uStack_20,1 << (param_2 & 0x3f),&iStack_1c);
    ObDereferenceObject(uStack_20);
  }
  else {
    lVar1 = -0x3ffffff3;
  }
  if (-1 < (int)lVar1) {
    if (iStack_1c != 0) {
      return 0x1f - LZCOUNT(iStack_1c);
    }
    return 0;
  }
LAB_82a1e594:
  fn_82A2B760(lVar1);
  return -1;
}

