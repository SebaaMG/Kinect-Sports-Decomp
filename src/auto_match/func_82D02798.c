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
extern int fn_82CE5410();
extern unsigned int *lbl_8323B51C;


void fn_82D02798(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)lbl_8323B51C;
  if (lbl_8323B51C != (undefined1 *)0x0) {
    iVar1 = fn_82CE5410();
    (**(code **)(**(int **)(iVar1 + 0x10) + 8))(*(int **)(iVar1 + 0x10),iVar2,0x3c);
  }
  iVar2 = fn_82CE5410();
  lbl_8323B51C = (undefined1 *)
                 (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x3c);
  if (lbl_8323B51C == (undefined1 *)0x0) {
    lbl_8323B51C = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(lbl_8323B51C + 4) = 0;
    *lbl_8323B51C = 0;
    lbl_8323B51C[8] = 0;
  }
  return;
}

