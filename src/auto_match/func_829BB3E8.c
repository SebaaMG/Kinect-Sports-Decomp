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
extern int fn_829BAD00();
extern int fn_829BB348();


void fn_829BB3E8(int *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  puVar3 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x50);
  param_1[0x6b] = (int)puVar3;
  *puVar3 = fn_829BB348;
  if (param_2 != 0) {
    *(undefined4 *)(*param_1 + 0x14) = 4;
    (**(code **)*param_1)(param_1);
  }
  if (*(int *)(param_1[0x72] + 8) == 0) {
    iVar6 = param_1[0x50];
  }
  else {
    if (param_1[0x50] < 2) {
      *(undefined4 *)(*param_1 + 0x14) = 0x2f;
      (**(code **)*param_1)(param_1);
    }
    fn_829BAD00(param_1);
    iVar6 = param_1[0x50] + 2;
  }
  iVar7 = 0;
  if (0 < param_1[9]) {
    piVar8 = (int *)(param_1[0x37] + -0x38);
    puVar3 = puVar3 + 1;
    do {
      piVar2 = piVar8 + 0x17;
      uVar1 = param_1[0x50];
      uVar5 = piVar8[0x11] * *piVar2;
      piVar8 = piVar8 + 0x15;
      trapWord(6,(ulonglong)uVar1,0);
      trapWord(5,(ulonglong)uVar1 &
                 ~((((ulonglong)uVar5 & 0x7fffffff) << 1 | (ulonglong)(uVar5 >> 0x1f)) - 1),0xffff);
      uVar4 = (**(code **)(param_1[1] + 8))
                        (param_1,1,(longlong)*piVar8 * (longlong)*piVar2,
                         (longlong)((int)uVar5 / (int)uVar1) * (longlong)iVar6);
      iVar7 = iVar7 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = uVar4;
    } while (iVar7 < param_1[9]);
  }
  return;
}

