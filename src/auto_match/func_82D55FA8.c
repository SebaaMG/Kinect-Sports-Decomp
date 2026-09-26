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
extern int fn_82CFF8D0();


void fn_82D55FA8(int param_1,int *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if ((uVar1 & 0x80000000) == 0) {
    uVar2 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0xc),
                              ((uVar1 & 0x3fffffff) + (uVar1 & 0x3fffffff) * 2) * 4);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff82138bfc,*(undefined4 *)(param_1 + 0xc),
               ((ulonglong)*(uint *)(param_1 + 0x10) +
                ((ulonglong)*(uint *)(param_1 + 0x10) & 0x7fffffff) * 2 & 0x3fffffff) << 2,uVar2);
  }
  iVar4 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(param_1 + 0x10) * 0xc + iVar4;
  for (; iVar4 != iVar3; iVar4 = iVar4 + 0xc) {
    if (*(int *)(iVar4 + 8) != 0) {
      (**(code **)(*param_2 + 0xc))(param_2,0xffffffff82138bf4,*(int *)(iVar4 + 8),0);
    }
  }
  return;
}

