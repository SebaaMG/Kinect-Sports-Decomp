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
extern int fn_825602B8();
extern int fn_82560308();
extern int fn_82560758();
extern unsigned int lbl_83280B88;


undefined8 fn_82560218(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined *puVar4;
  
  puVar4 = &lbl_83280B88;
  if ((*(char *)((int)param_2 + -0x7cd7f310) != '\0') &&
     (uVar3 = param_2, iVar1 = fn_825602B8(param_2), iVar1 != 0)) {
    iVar1 = *(int *)(puVar4 + (int)((uVar3 & 0xffffffff) << 2) + 0x10);
    iVar2 = fn_82560758(param_1);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_82560308(param_1,param_2,iVar1);
    }
    if ((iVar2 != 0) && (*(int *)(iVar1 + 0xcc) == 0)) {
      return 1;
    }
  }
  return 0;
}

