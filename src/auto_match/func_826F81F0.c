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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _uStack_20 ((*(U64*)&uStack_20))
extern int fn_826F6C28();
extern unsigned int iStack_1c;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005CCC;
extern unsigned int uStack_20;


void fn_826F81F0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  double dVar3;
  undefined4 uStack_20;
  int iStack_1c;
  
  if (param_2[0x6a] == 0) {
    piVar2 = (int *)(**(code **)(*param_2 + 0x40))(param_2);
    if (((uint)piVar2[0x2c0] >> 0x11 & 1) == 0) {
      dVar3 = (double)(**(code **)(*piVar2 + 0xa0))();
      iVar1 = (int)(dVar3 * (double)lbl_82005CCC + (double)lbl_82002C5C);
      *(char *)(param_1 + 4) = (char)iVar1;
      _uStack_20 = CONCAT44(*(undefined4 *)(param_1 + 4),iVar1);
      fn_826F6C28(piVar2,&uStack_20);
    }
  }
  return;
}

