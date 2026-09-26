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
extern int fn_822315A0();
extern int fn_8223AAC0();


void fn_82498BC8(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x5c);
  iVar5 = 0;
  iVar4 = 0;
  if ((iVar1 != 0) && (cVar3 = fn_8223AAC0(iVar1), cVar3 != '\0')) {
    iVar5 = iVar2;
    iVar4 = iVar1;
  }
  *(undefined4 *)(*(int *)(iVar5 + 0x1c) + 0x1ec) = 0;
  if (*(int *)(iVar5 + 0x34) != 0) {
    *(undefined4 *)(*(int *)(iVar5 + 0x34) + 0xd0) = 0;
  }
  if (iVar4 != 0) {
    fn_822315A0(iVar4);
  }
  return;
}

