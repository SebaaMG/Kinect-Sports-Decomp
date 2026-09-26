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
extern int fn_8223C3D0();
extern int fn_823AA970();
extern int fn_828E9D28();
extern int fn_828E9D60();
extern int fn_828E9D90();


void fn_8223C478(int param_1,longlong param_2)

{
  ulonglong uVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  lVar3 = fn_828E9D90();
  uVar1 = (lVar3 + param_2 + 7U & 0xffffffff) >> 3;
  if (((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x14) == 0)) ||
     (bVar2 = false, uVar1 <= *(uint *)(param_1 + 0x14))) {
    bVar2 = true;
  }
  if (((bVar2) && (*(int *)(param_1 + 0x10) == 0)) &&
     (uVar4 = fn_823AA970(param_1), (uVar4 & 0xffffffff) < uVar1)) {
    fn_8223C3D0(param_1 + 0x18,uVar1);
    uVar5 = fn_828E9D90(param_1);
    fn_828E9D28(param_1,*(undefined4 *)(param_1 + 0x18),uVar1);
    fn_828E9D60(param_1,uVar5);
  }
  return;
}

