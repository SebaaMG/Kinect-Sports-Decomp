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
extern unsigned int lbl_82005CCC;
extern unsigned int uStack_9;


undefined8 fn_8301ACE0(double param_1,double param_2,int param_3,uint param_4,uint param_5)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  undefined1 uStack_9;
  
  piVar2 = *(int **)((param_4 % 0xc1 + 10) * 4 + param_3);
  if (piVar2 != (int *)0x0) {
    while (piVar2[1] != param_4) {
      piVar2 = (int *)*piVar2;
      if (piVar2 == (int *)0x0) {
        return 2;
      }
    }
    if (piVar2 + 2 != (int *)0x0) {
      if (7 < param_5) {
        return 2;
      }
      iVar3 = param_5 + piVar2[2];
      uStack_9 = (undefined1)(longlong)(param_2 * (double)lbl_82005CCC);
      uVar1 = uStack_9;
      uStack_9 = (undefined1)(longlong)(param_1 * (double)lbl_82005CCC);
      *(undefined1 *)(iVar3 + 0x48) = uVar1;
      *(undefined1 *)(iVar3 + 0x40) = uStack_9;
      return 1;
    }
  }
  return 2;
}

