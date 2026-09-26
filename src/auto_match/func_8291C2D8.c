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
extern int fn_828F9A60();
extern int fn_828F9B38();
extern int fn_8291BDE8();


undefined8 fn_8291C2D8(int param_1,uint *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  ushort *puVar4;
  undefined8 uVar5;
  int aiStack_30 [12];
  
  if (param_2 == (uint *)0x0) {
    return 0xffffffff8876086c;
  }
  aiStack_30[0] = 0;
  uVar5 = 0;
  if ((*param_2 & 0xffffff00) == 0x102a1100) {
    uVar2 = param_2[4];
    if (uVar2 == 0) {
      return 0xffffffff88760b59;
    }
    aiStack_30[0] = (int)param_2 + uVar2 + 4;
    uVar5 = 1;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(uVar2 + (int)param_2);
  }
  else {
    uVar1 = fn_828F9B38(param_2,0x42415443,aiStack_30,param_1 + 0xc);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if ((int)uVar1 == 1) {
      return 0xffffffff88760b59;
    }
  }
  uVar5 = fn_8291BDE8(param_1,aiStack_30[0],*(undefined4 *)(param_1 + 0xc),uVar5);
  if (-1 < (int)uVar5) {
    if ((param_3 & 0xffffffff) != 0) {
      uVar3 = 0;
      uVar2 = 0;
      if (*(uint *)(param_1 + 0x18) != 0) {
        puVar4 = (ushort *)(*(int *)(*(int *)(param_1 + 0x10) + 0x10) + *(int *)(param_1 + 8) + 8);
        do {
          if ((puVar4[-2] == 2) && (uVar3 < (ulonglong)*puVar4 + (ulonglong)puVar4[-1])) {
            uVar3 = (ulonglong)*puVar4 + (ulonglong)puVar4[-1];
          }
          uVar2 = uVar2 + 1;
          puVar4 = puVar4 + 10;
        } while (uVar2 < *(uint *)(param_1 + 0x18));
      }
      uVar5 = fn_828F9A60(uVar3 << 4,param_3);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}

