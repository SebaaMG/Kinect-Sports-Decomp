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
extern int fn_82A40BA8();
extern int fn_82A43A30();
extern int fn_82A45660();
extern int fn_82A459A8();
extern int fn_82A4F4E0();


void fn_82A48470(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  fn_82A459A8();
  uVar2 = 0;
  if (*(int *)(param_1 + 0x134) != 0) {
    do {
      fn_82A45660(*(undefined4 *)(param_1 + 0x14c),uVar2);
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x134));
  }
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  while( true ) {
    iVar1 = fn_82A40BA8(param_1 + 400);
    if (iVar1 == 0) break;
    fn_82A43A30(param_1,*(undefined4 *)(iVar1 + 8),0);
    fn_82A4F4E0(iVar1);
  }
  return;
}

