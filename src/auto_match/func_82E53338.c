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
extern unsigned int *auStack_40;
extern int fn_82E50BE8();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E518B8();
extern int fn_82E520C8();
extern int fn_82E52208();
extern int fn_82E53288();
extern int fn_82EE21F8();


ulonglong fn_82E53338(int param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  int *piVar2;
  ulonglong uVar3;
  uint auStack_40 [16];
  
  uVar3 = 0;
  auStack_40[0] = 0;
  if (param_2 == (undefined4 *)0x0) {
    return 0xffffffff80070057;
  }
  *param_2 = 0;
  fn_82E50CB8(param_1 + 100);
  uVar1 = fn_82E50BE8(0x10c,0,0,0,0);
  if ((uVar1 & 0xffffffff) == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)fn_82E53288(uVar1,*(undefined4 *)(param_1 + 0x60),auStack_40);
    uVar3 = (ulonglong)auStack_40[0];
  }
  if (piVar2 == (int *)0x0) {
    uVar3 = 0xffffffff8007000e;
  }
  else {
    if (-1 < (int)uVar3) {
      *(undefined2 *)(piVar2 + 0x17) = *(undefined2 *)(param_1 + 0x5c);
      uVar3 = fn_82EE21F8(0xffffffff8202e618,piVar2 + 0x14,param_1 + 0x50);
      if ((((-1 < (longlong)uVar3) &&
           (uVar3 = fn_82E52208(param_1,piVar2), -1 < (longlong)uVar3)) &&
          (uVar3 = fn_82E520C8(piVar2), -1 < (longlong)uVar3)) &&
         ((uVar3 = fn_82E518B8(param_1,piVar2), -1 < (longlong)uVar3 &&
          (uVar3 = (**(code **)*piVar2)(piVar2,0xffffffff8215466c,param_2), -1 < (longlong)uVar3))))
      goto LAB_82e5346c;
    }
    (**(code **)(*piVar2 + 0xac))(piVar2,1);
  }
LAB_82e5346c:
  fn_82E50F10(param_1 + 100);
  return uVar3;
}

