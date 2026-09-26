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
extern int fn_8267BE38();
extern int fn_827A7D90();
extern int fn_827A7DF8();
extern int fn_827AE240();


void fn_827AE340(int param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  ushort *puVar2;
  ushort *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ushort *puVar6;
  ulonglong uVar7;
  
  puVar6 = *(ushort **)(param_1 + 0xc);
  if (puVar6 == (ushort *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar5 = (ulonglong)uVar1;
    if (*puVar6 == 0xfffe) {
      puVar3 = puVar6 + 1;
      uVar5 = ((longlong)((int)uVar1 >> 1) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0)) - 1;
      *(undefined4 *)(param_1 + 8) = 1;
      uVar7 = uVar5;
      if (0 < (longlong)uVar5) {
        do {
          puVar2 = puVar6 + 1;
          puVar6 = puVar6 + 1;
          *puVar6 = *puVar2 << 8 | *puVar2 >> 8;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    else if (*puVar6 == 0xfeff) {
      puVar3 = puVar6 + 1;
      uVar5 = ((longlong)((int)uVar1 >> 1) + (ulonglong)((int)uVar1 < 0 && (uVar1 & 1) != 0)) - 1;
      *(undefined4 *)(param_1 + 8) = 1;
      uVar7 = uVar5;
      if (0 < (longlong)uVar5) {
        do {
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    else {
      puVar3 = puVar6;
      if ((((2 < (int)uVar1) && (*(char *)puVar6 == -0x11)) && ((char)*puVar6 == -0x45)) &&
         (*(char *)(puVar6 + 1) == -0x41)) {
        puVar3 = (ushort *)((int)puVar6 + 3);
        uVar5 = uVar5 - 3;
      }
    }
    if (*(int *)(param_1 + 8) == 1) {
      uVar4 = fn_827A7DF8(param_3 + 0x30,puVar3,uVar5);
    }
    else {
      uVar4 = fn_827A7D90();
    }
    fn_8267BE38(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  fn_827AE240(param_3,param_2,uVar4);
  return;
}

