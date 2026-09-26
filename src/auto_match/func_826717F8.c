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
extern int fn_8265CA20();
extern int fn_8266FFF0();
extern int fn_82F622A8();
extern int fn_82F68CC0();


void fn_826717F8(uint *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((param_2 & 0xffffffff) < 0x4000000) {
    if ((ulonglong)(uint)((int)(param_1[2] - *param_1) >> 6) < (param_2 & 0xffffffff)) {
      uVar1 = fn_8266FFF0(param_2,0);
      uVar3 = param_1[1];
      uVar4 = uVar1;
      for (uVar5 = (ulonglong)*param_1; (uVar5 & 0xffffffff) != (ulonglong)uVar3;
          uVar5 = uVar5 + 0x40) {
        if ((uVar4 & 0xffffffff) != 0) {
          fn_82F68CC0(uVar4,uVar5,0x40);
        }
        uVar4 = uVar4 + 0x40;
      }
      uVar3 = *param_1;
      iVar2 = param_1[1] - uVar3;
      if (uVar3 != 0) {
        for (; uVar3 != param_1[1]; uVar3 = uVar3 + 0x40) {
        }
        fn_8265CA20();
      }
      uVar3 = (uint)uVar1;
      *param_1 = uVar3;
      param_1[2] = (int)((param_2 & 0xffffffff) << 6) + uVar3;
      param_1[1] = (iVar2 >> 6) * 0x40 + uVar3;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F622A8(0xffffffff82196fd4);
}

