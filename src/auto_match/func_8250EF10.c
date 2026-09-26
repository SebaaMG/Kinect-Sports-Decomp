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
extern int fn_827F5708();
extern int fn_827F6370();
extern unsigned int lbl_8218E8E8;


void fn_8250EF10(undefined8 param_1,double param_2,int param_3)

{
  double dVar1;
  
  fn_827F6370(*(undefined4 *)(*(int *)(param_3 + 0x14) + 0x5e0));
  fn_827F6370(param_1,*(undefined4 *)(*(int *)(param_3 + 0x14) + 0x5e4));
  fn_827F5708(param_2,(ulonglong)*(uint *)(param_3 + 0x14) + 0x4f0);
  dVar1 = (double)lbl_8218E8E8;
  *(uint *)(*(int *)(param_3 + 0x14) + 0x2fc) = (uint)(param_2 < dVar1);
  *(uint *)(*(int *)(param_3 + 0x14) + 0x4ac) = (uint)LZCOUNT((uint)(param_2 < dVar1)) >> 5;
  return;
}

