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
extern int fn_827AEAC0();
extern int fn_827AEE00();
extern int fn_827AFD48();


longlong fn_827AFE68(uint *param_1,int param_2)

{
  int iVar2;
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  iVar2 = fn_827AEE00(param_1,*(undefined4 *)(param_2 + 0x14));
  if (iVar2 == 0) {
    lVar1 = fn_827AEAC0(param_1,0,param_1[1],param_2 + 0x14,0xffffffff827aea98);
    fn_827AFD48(param_1,lVar1,param_2);
    lVar1 = lVar1 * 0x28 + (ulonglong)*param_1;
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}

