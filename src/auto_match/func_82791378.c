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
extern int fn_8268B330();
extern int fn_8268B508();
extern int fn_8278FD18();


undefined8 fn_82791378(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  fn_8268B330();
  iVar4 = 0;
  iVar3 = 0;
  while( true ) {
    if ((((int *)(param_2 + 0xc) == (int *)0x0) || (iVar4 < 0)) ||
       (bVar2 = false, *(int *)(param_2 + 0x10) <= iVar4)) {
      bVar2 = true;
    }
    if (bVar2) break;
    puVar1 = *(undefined4 **)(*(int *)(param_2 + 0xc) + iVar3);
    if (puVar1[1] != 0) {
      fn_8278FD18(puVar1,*puVar1);
    }
    fn_8268B508(param_1);
    if (iVar4 < *(int *)(param_2 + 0x10)) {
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    }
  }
  return param_1;
}

