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
extern int fn_82877520();
extern int fn_82A1E658();


undefined8 fn_8286A080(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x424);
  iVar3 = 0;
  while( true ) {
    iVar1 = iVar2;
    if (iVar1 == 0) {
      return 2;
    }
    if (*(int *)(iVar1 + 0x20) == param_2) break;
    iVar2 = *(int *)(iVar1 + 4);
    iVar3 = iVar1;
  }
  if (iVar1 == *(int *)(param_1 + 0x424)) {
    *(undefined4 *)(param_1 + 0x424) = *(undefined4 *)(iVar1 + 4);
  }
  else {
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar1 + 4);
  }
  fn_82A1E658(*(undefined4 *)(iVar1 + 0x1c));
  fn_82877520(iVar1);
  return 1;
}

