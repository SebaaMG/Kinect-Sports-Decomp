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
extern int fn_82C53960();
extern int fn_82C53970();


int * fn_82CABB00(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)fn_82C53960(0x10,0);
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    *piVar1 = param_2;
    piVar1[1] = param_1;
    iVar2 = fn_82C53960((longlong)param_1 * (longlong)param_2,3);
    piVar1[3] = iVar2;
    if (iVar2 != 0) {
      iVar2 = 2;
      if (piVar1[1] < 3) {
        iVar2 = 1;
      }
      piVar1[2] = iVar2;
      return piVar1;
    }
    fn_82C53970(piVar1);
  }
  return (int *)0x0;
}

