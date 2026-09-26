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
extern int fn_825200A8();
extern int fn_82560100();
extern unsigned int lbl_821CA460;
extern unsigned int stack0x00000020;


void fn_82421510(double param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(int *)(param_2 + 0x40) == 0) &&
     ((double)*(float *)(**(uint **)(param_2 + 0xc) + 0x89c) < param_1)) {
    lVar2 = (ulonglong)**(uint **)(param_2 + 0xc) + 0xd48;
    iVar1 = fn_825200A8(lVar2,0xffffffff82196288);
    if (iVar1 == 0) {
      fn_82560100((double)lbl_821CA460,*(undefined4 *)(*(int *)(param_2 + 0x10) + 0x4c),lVar2,
                        &stack0x00000020);
      *(undefined4 *)(param_2 + 0x40) = 1;
    }
  }
  return;
}

