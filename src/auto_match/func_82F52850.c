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
extern int fn_82F50BD8();
extern int fn_82F526B8();
extern int fn_82F52700();


int fn_82F52850(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = 9;
  iVar3 = param_1;
  do {
    fn_82F50BD8(iVar3);
    lVar4 = lVar4 + -1;
    iVar3 = iVar3 + 0xd00;
  } while (-1 < lVar4);
  puVar1 = (undefined4 *)fn_82F526B8(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  piVar2 = (int *)(param_1 + 0x8200);
  *piVar2 = (int)puVar1;
  *puVar1 = 0;
  *(undefined4 *)(*piVar2 + 4) = 0;
  *(undefined4 *)(*piVar2 + 8) = 0;
  fn_82F52700(param_1);
  return param_1;
}

