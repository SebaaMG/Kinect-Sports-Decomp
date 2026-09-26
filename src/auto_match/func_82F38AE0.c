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
extern int fn_82F377E8();
extern int fn_82F384C0();


undefined8 fn_82F38AE0(int param_1,longlong *param_2)

{
  uint uVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int *apiStack_40 [2];
  longlong alStack_38 [7];
  
  if (param_2 == (longlong *)0x0) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    uVar3 = fn_82F384C0(param_1,0);
    if (-1 < (int)uVar3) {
      uVar1 = *(uint *)(param_1 + 0x70);
      lVar4 = 0;
      uVar5 = 0;
      if (uVar1 != 0) {
        do {
          fn_82F377E8(param_1 + 8,uVar5,apiStack_40);
          piVar2 = (int *)*apiStack_40[0];
          if (piVar2 == (int *)0x0) {
            uVar3 = 0xffffffff8000ffff;
            break;
          }
          alStack_38[0] = 0;
          uVar3 = (**(code **)(*piVar2 + 0x14))(piVar2,0,alStack_38);
          if ((int)uVar3 < 0) break;
          uVar5 = uVar5 + 1;
          lVar4 = alStack_38[0] + lVar4;
        } while ((uVar5 & 0xffffffff) < (ulonglong)uVar1);
      }
      *param_2 = lVar4;
    }
  }
  return uVar3;
}

