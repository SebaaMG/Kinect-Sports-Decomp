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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_822315A0();
extern int fn_8248ECD0();
extern int fn_8248F0A0();
extern int fn_8248F158();
extern int fn_8248F390();
extern unsigned int stack0x00000000;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


void fn_8248EA08(ulonglong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar6;
  ulonglong uVar5;
  uint uStack_48;
  uint uStack_44;
  ulonglong uVar4;
  
  uVar1 = ZEXT48(&stack0x00000000);
  uVar2 = (int)param_2 - (int)param_1 >> 3;
  uVar5 = param_2;
  if (0x20 < (int)uVar2) {
    do {
      iVar6 = (int)param_3;
      param_2 = uVar5;
      if (iVar6 < 1) break;
      fn_8248ECD0(uVar1 - 0x48,param_1,uVar5,param_4);
      param_3 = (longlong)(iVar6 >> 1) + (ulonglong)(iVar6 < 0 && (param_3 & 1) != 0);
      param_3 = (longlong)((int)param_3 >> 1) + (ulonglong)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      param_2 = (ulonglong)uStack_48;
      if ((int)(uStack_48 - (int)param_1 & 0xfffffff8) < (int)((int)uVar5 - uStack_44 & 0xfffffff8))
      {
        fn_8248EA08(param_1,param_2,param_3,param_4);
        param_2 = uVar5;
        param_1 = (ulonglong)uStack_44;
      }
      else {
        fn_8248EA08((ulonglong)uStack_44,uVar5,param_3,param_4);
      }
      uVar2 = (int)param_2 - (int)param_1 >> 3;
      uVar5 = param_2;
    } while (0x20 < (int)uVar2);
    if (0x20 < (int)uVar2) {
      if ((1 < (int)uVar2) &&
         (uVar5 = (longlong)((int)uVar2 >> 1) + (ulonglong)((int)uVar2 < 0 && (uVar2 & 1) != 0),
         0 < (longlong)uVar5)) {
        uVar4 = (uVar5 & 0x1fffffff) * 8 + param_1;
        do {
          uVar3 = uVar4 - 8;
          uStack_44 = 0;
          uVar5 = uVar5 - 1;
          if ((uVar1 - 0x48 & 0xffffffff) != (uVar3 & 0xffffffff)) {
            uStack_44 = *(int *)((int)uVar4 + -4);
            *(undefined4 *)((int)uVar4 + -4) = 0;
            *(undefined4 *)uVar3 = 0;
          }
          fn_8248F390(param_1,uVar5,uVar2,uVar1 - 0x48,param_4);
          if (uStack_44 != 0) {
            fn_822315A0();
          }
          uVar4 = uVar3;
        } while (0 < (int)uVar5);
      }
      fn_8248F0A0(param_1,param_2,param_4);
      return;
    }
  }
  if ((1 < (int)uVar2) && ((param_1 & 0xffffffff) != (param_2 & 0xffffffff))) {
    fn_8248F158(param_1,param_2,uVar1 - 0x50);
  }
  return;
}

