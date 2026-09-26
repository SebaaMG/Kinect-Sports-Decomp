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
extern int fn_82A3F758();
extern int fn_82E4FE40();
extern int fn_82E50BE8();


undefined8 fn_82F3FB10(int param_1,short *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  short *psVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_82E4FE40();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (param_2 == (short *)0x0) {
LAB_82f3fbe0:
    uVar3 = 0;
    *(short *)(param_1 + 0x5c) = (short)uVar5;
  }
  else {
    uVar5 = 0x7fffffff;
    psVar4 = param_2;
    do {
      if (*psVar4 == 0) break;
      uVar5 = uVar5 - 1;
      psVar4 = psVar4 + 1;
    } while (uVar5 != 0);
    if ((uVar5 & 0xffffffff) != 0) {
      uVar5 = 0x80000000 - uVar5;
      lVar1 = (uVar5 & 0x7fffffff) << 1;
      if (0x7fffffff < (uVar5 & 0xffffffff)) {
        lVar1 = -1;
      }
      uVar2 = fn_82E50BE8(lVar1,0,0,0,0);
      *(int *)(param_1 + 0x48) = (int)uVar2;
      if ((uVar2 & 0xffffffff) == 0) {
        return 0xffffffff8007000e;
      }
      if ((uVar5 & 0xffffffff) < 0x80000000) {
        uVar3 = fn_82A3F758(uVar2,uVar5,param_2);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        goto LAB_82f3fbe0;
      }
    }
    uVar3 = 0xffffffff80070057;
  }
  return uVar3;
}

