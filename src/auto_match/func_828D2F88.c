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
extern int fn_828ACCE8();
extern int fn_828AD740();
extern int fn_828D2DB8();


longlong fn_828D2F88(int param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    cVar2 = fn_828ACCE8(*(undefined4 *)(param_1 + 8));
    bVar1 = true;
    if (cVar2 == '\0') goto LAB_828d2fc4;
  }
  else {
LAB_828d2fc4:
    bVar1 = false;
  }
  if (bVar1) {
    cVar2 = fn_828AD740(*(undefined4 *)(param_1 + 8));
    lVar3 = 1;
    if (cVar2 != '\0') goto LAB_828d2ff0;
  }
  lVar3 = 0;
LAB_828d2ff0:
  if (lVar3 != 0) {
    fn_828D2DB8(param_1,3);
  }
  return lVar3;
}

