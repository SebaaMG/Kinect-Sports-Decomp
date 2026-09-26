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
extern int fn_829E5BC0();
extern unsigned int lbl_82005344;
extern unsigned int lbl_82005748;
extern unsigned int lbl_82057B94;


undefined8 fn_829E5DD0(double param_1,double param_2)

{
  bool bVar1;
  char cVar2;
  double dVar3;
  
  dVar3 = (double)lbl_82057B94;
  if ((double)lbl_82057B94 <= param_2) {
    dVar3 = param_2;
  }
  if ((param_1 <= (double)lbl_82005748) || (bVar1 = true, (float)(param_1 / dVar3) <= lbl_82005344))
  {
    bVar1 = false;
  }
  if ((!bVar1) && (cVar2 = fn_829E5BC0(), cVar2 == '\0')) {
    return 0;
  }
  return 1;
}

