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
extern unsigned int *auStack_30;
extern int fn_82767170();
extern int fn_827671F0();


double fn_82769420(int param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined4 auStack_30 [2];
  short sStack_28;
  short sStack_26;
  short sStack_24;
  short sStack_22;
  
  auStack_30[0] = *(undefined4 *)(param_1 + 8);
  uVar2 = fn_82767170();
  fn_827671F0(auStack_30,uVar2);
  if ((sStack_24 <= sStack_28) || (bVar1 = true, sStack_22 <= sStack_26)) {
    bVar1 = false;
  }
  if (!bVar1) {
    sStack_22 = 0;
    sStack_26 = 0;
  }
  return (double)(longlong)((int)sStack_22 - (int)sStack_26);
}

