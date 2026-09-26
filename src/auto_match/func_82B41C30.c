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
extern int fn_82B40718();
extern int fn_82B41870();
extern int fn_82F6E018();


double fn_82B41C30(double param_1)

{
  int iVar1;
  float fVar2;
  double dVar3;
  
  iVar1 = fn_82F6E018();
  if ((iVar1 < 1) || (((2 < iVar1 && (iVar1 != 4)) && (iVar1 != 0x200)))) {
    fVar2 = (float)fn_82B41870((float)param_1,5,0xffffffff83223d70,0x17,0xffffffff820d8098,
                                 0xffffffff820d8198,0xffffffff820d8298,0xffffffff820d8398);
    dVar3 = (double)fVar2;
  }
  else {
    dVar3 = (double)fn_82B40718();
  }
  return dVar3;
}

