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
extern int fn_82E59440();
extern int fn_82E72520();


longlong fn_82F34BC0(int param_1)

{
  longlong lVar1;
  ushort uVar2;
  ushort auStack_30 [2];
  int *piStack_2c;
  int *piStack_28;
  int *apiStack_24 [9];
  
  auStack_30[0] = 0;
  piStack_2c = (int *)0x0;
  piStack_28 = (int *)0x0;
  apiStack_24[0] = (int *)0x0;
  uVar2 = *(ushort *)(param_1 + 0x138);
  if (*(ushort *)(param_1 + 0x138) == 0) {
    lVar1 = fn_82E59440(*(undefined4 *)(param_1 + 0xc),0xffffffff820ed018,0xffffffff82154c58,
                              &piStack_2c);
    if (((-1 < lVar1) &&
        (lVar1 = (**(code **)*piStack_2c)(piStack_2c,0xffffffff82154c18,&piStack_28), -1 < lVar1))
       && (lVar1 = (**(code **)(*piStack_28 + 0x10))(piStack_28,0xffffffff821549e8,0,apiStack_24),
          -1 < lVar1)) {
      lVar1 = fn_82E72520(apiStack_24[0],auStack_30);
    }
    if (piStack_2c != (int *)0x0) {
      (**(code **)(*piStack_2c + 8))();
      piStack_2c = (int *)0x0;
    }
    if (piStack_28 != (int *)0x0) {
      (**(code **)(*piStack_28 + 8))();
      piStack_28 = (int *)0x0;
    }
    if (apiStack_24[0] != (int *)0x0) {
      (**(code **)(*apiStack_24[0] + 8))();
    }
    uVar2 = auStack_30[0];
    if ((int)lVar1 < 0) {
      return 0x22;
    }
  }
  return (ulonglong)uVar2 * 4 + 0x22;
}

