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
extern unsigned int *auStack_50;
extern int fn_82EE1048();
extern int fn_82EE17C8();


undefined8 fn_82EE1B38(int param_1,short *param_2,short *param_3,short param_4,undefined8 param_5)

{
  short *psVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  short sVar4;
  ulonglong uVar5;
  uint auStack_50 [20];
  
  if ((int)param_5 != 0) {
    sVar4 = 0;
    uVar5 = 0;
    if (*(int *)(param_1 + 0x254) != 0) {
      do {
        uVar2 = fn_82EE1048(param_1 + 0x48,uVar5,auStack_50);
        uVar2 = ((uVar2 & 0xffffffff) >> 0x1f) - 1 & (ulonglong)auStack_50[0];
        if (uVar2 == 0) {
          return 0xffffffffc00d36bb;
        }
        psVar1 = (short *)uVar2;
        if (((param_2 == (short *)0x0) || (*param_2 == psVar1[1])) &&
           ((param_3 == (short *)0x0 || (*param_3 == *psVar1)))) {
          if (sVar4 == param_4) {
            uVar3 = fn_82EE17C8(param_1,uVar5 & 0xffff,param_5);
            return uVar3;
          }
          sVar4 = sVar4 + 1;
        }
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x254));
    }
  }
  return 0xffffffff80070057;
}

