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
extern int fn_8284C850();
extern int fn_8284C858();


bool fn_825CAF68(double param_1,double param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  iVar2 = fn_8284C850(*(undefined4 *)(*(int *)(*(int *)(param_3 + 0x54) + 0x88) + 0x14));
  iVar3 = fn_8284C858(*(undefined4 *)(*(int *)(*(int *)(param_3 + 0x54) + 0x88) + 0x14));
  iVar1 = *(int *)(param_3 + 0x54);
  lVar4 = (ulonglong)(uint)(int)((double)(longlong)(iVar2 + -1) * param_1) +
          (longlong)*(int *)(iVar1 + 0xb4) *
          (longlong)(int)((double)(longlong)(iVar3 + -1) * param_2);
  if ((lVar4 < 0) || (iVar2 = (int)lVar4, *(int *)(iVar1 + 0xb8) * *(int *)(iVar1 + 0xb4) <= iVar2))
  {
    bVar5 = false;
  }
  else {
    bVar5 = *(char *)(*(int *)(iVar1 + 0xc0) + iVar2) != '\0';
  }
  return bVar5;
}

