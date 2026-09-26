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
extern unsigned int fStack_c;
extern int fn_83062D28();
extern unsigned int uStack_10;


undefined4 fn_8266E408(double param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uStack_10;
  float fStack_c;
  
  uVar1 = *(uint *)(param_2 + 0x1f0);
  lVar2 = (ulonglong)uVar1 + 1;
  *(int *)(param_2 + 0x1f0) = (int)lVar2;
  if (lVar2 == 0) {
    *(uint *)(param_2 + 0x1f0) = uVar1 + 2;
  }
  uStack_10 = *(undefined4 *)(param_2 + 0x1f0);
  fStack_c = (float)param_1;
  fn_83062D28(param_2 + 0x1e0,&uStack_10);
  return uStack_10;
}

