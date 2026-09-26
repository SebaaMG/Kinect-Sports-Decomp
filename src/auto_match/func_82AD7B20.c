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
extern int fn_82AD7788();
extern int fn_82B19000();


void fn_82AD7B20(int param_1,int param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x6c) + 1;
  *(int *)(param_1 + 0x6c) = (int)uVar6;
  *(int *)(param_2 + 0x2c) = (int)uVar6;
  fn_82B19000(param_1,uVar6,1);
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x6c) + 1;
  *(int *)(param_1 + 0x6c) = (int)uVar7;
  *(int *)(param_3 + 0x2c) = (int)uVar7;
  fn_82B19000(param_1,uVar7,1);
  for (uVar1 = *(uint *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(uint *)((uVar1 & 0xfffffffe) + 4)) {
    if (((ulonglong)*(uint *)(uVar1 + 0x2c) == (uVar6 & 0xffffffff)) &&
       (((ulonglong)*(uint *)(uVar1 + 0x2c) != (uVar7 & 0xffffffff) &&
        ((*(uint *)(uVar1 + 0x24) & 1) == 0)))) {
      uVar2 = *(uint *)(uVar1 + 0x20) & 0xfffffffe;
      iVar5 = uVar2 - 0x28;
      if (iVar5 != 0) {
        uVar2 = *(uint *)(uVar2 - 0x20);
        uVar4 = uVar2 >> 7 & 0x7f;
        if ((uVar4 < 0x53) || (bVar3 = true, 0x5f < uVar4)) {
          bVar3 = false;
        }
        if ((bVar3) && ((uVar2 >> 0x1b & 1) == 0)) {
          fn_82AD7788(param_1,iVar5,param_4);
        }
      }
    }
  }
  return;
}

