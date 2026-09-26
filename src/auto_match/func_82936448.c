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


undefined8 fn_82936448(int *param_1,uint *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  
  if (param_1 == (int *)0x0) {
    return 0xffffffff80004005;
  }
  iVar1 = *param_1;
  if ((iVar1 == 2) || (iVar1 == 4)) {
    iVar1 = 2;
LAB_82936478:
    if (iVar1 != 5) {
      if (iVar1 == 2) {
        uVar2 = param_1[2];
        if (0x7fffffff < uVar2) {
          return 0xffffffff80004005;
        }
      }
      else {
        if (iVar1 != 3) {
          return 0xffffffff80004005;
        }
        uVar2 = param_1[2];
      }
      if ((int)uVar2 < param_3) {
        return 0xffffffff80004005;
      }
      if (param_4 < (int)uVar2) {
        return 0xffffffff80004005;
      }
      goto LAB_82936520;
    }
  }
  else if ((iVar1 < 5) || (8 < iVar1)) goto LAB_82936478;
  dVar3 = *(double *)(param_1 + 2);
  if (((dVar3 < (double)(longlong)param_3) || ((double)(longlong)param_4 < dVar3)) ||
     (uVar2 = (uint)dVar3, dVar3 != (double)(longlong)(int)uVar2)) {
    return 0xffffffff80004005;
  }
LAB_82936520:
  *param_2 = uVar2;
  return 0;
}

