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


undefined8 fn_82F3F038(int param_1,short *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    fn_82E4FE40();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (param_2 == (short *)0x0) {
LAB_82f3f11c:
    *(uint *)(param_1 + 0x5c) = uVar6;
    uVar3 = 0;
  }
  else {
    iVar5 = 0x7fffffff;
    psVar4 = param_2;
    do {
      if (*psVar4 == 0) break;
      iVar5 = iVar5 + -1;
      psVar4 = psVar4 + 1;
    } while (iVar5 != 0);
    if (iVar5 != 0) {
      uVar6 = 0x80000000 - iVar5;
      uVar1 = uVar6 & 0x7fffffff;
      if (0x7fffffff < uVar6) {
        uVar1 = 0xffffffff;
      }
      uVar2 = fn_82E50BE8(uVar1,0,0,0,0);
      *(int *)(param_1 + 0x50) = (int)uVar2;
      if ((uVar2 & 0xffffffff) == 0) {
        return 0xffffffff8007000e;
      }
      if (uVar6 < 0x80000000) {
        uVar3 = fn_82A3F758(uVar2,uVar6,param_2);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        *(undefined2 *)(iVar5 * -2 + *(int *)(param_1 + 0x50) + -2) = 0;
        goto LAB_82f3f11c;
      }
    }
    uVar3 = 0xffffffff80070057;
  }
  return uVar3;
}

