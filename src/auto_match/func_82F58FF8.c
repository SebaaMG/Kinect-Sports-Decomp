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
extern int fn_8265C9E0();
extern int fn_82F58F98();
extern int fn_82F5CB80();


undefined8 fn_82F58FF8(int *param_1)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  int *piVar5;
  
  uVar3 = 0;
  if (param_1[4] == 0) {
    uVar4 = 0;
    piVar5 = param_1;
    do {
      if ((int)uVar3 < 0) goto LAB_82f590bc;
      uVar1 = fn_8265C9E0(0x50);
      if ((uVar1 & 0xffffffff) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = fn_82F5CB80(uVar1,0,param_1[7],param_1[9]);
      }
      *piVar5 = iVar2;
      if (iVar2 == 0) {
LAB_82f5909c:
        uVar3 = 0xffffffff8007000e;
      }
      else {
        uVar1 = fn_8265C9E0(0x50);
        if ((uVar1 & 0xffffffff) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = fn_82F5CB80(uVar1,1,param_1[7],param_1[9]);
        }
        piVar5[1] = iVar2;
        if (iVar2 == 0) goto LAB_82f5909c;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 < 2);
    if ((int)uVar3 < 0) {
LAB_82f590bc:
      fn_82F58F98(param_1);
    }
    else {
      param_1[4] = 1;
    }
  }
  else {
    uVar3 = 0xffffffff80004005;
  }
  return uVar3;
}

