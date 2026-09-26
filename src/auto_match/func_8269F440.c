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
extern unsigned int *auStack_30;
extern int fn_8267BE38();
extern int fn_8267BED0();
extern int fn_8269A608();
extern int fn_8269F1B8();
extern int fn_8269F310();


void fn_8269F440(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 auStack_30 [12];
  
  if (*(int *)(*param_2 + 0x10) != 0) {
    *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xffffbfff;
  }
  if (*(int *)(param_1 + 0x80) == 0) {
    auStack_30[0] = 0x143;
    uVar3 = fn_8267BED0(param_1,0x14,auStack_30);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_8269F1B8(uVar3,param_2,*(undefined4 *)(param_1 + 0x20),param_1);
    }
    puVar1 = *(uint **)(param_1 + 0x80);
    if (puVar1 != (uint *)0x0) {
      uVar2 = *puVar1;
      *puVar1 = (uint)((ulonglong)uVar2 - 1);
      if ((longlong)((ulonglong)uVar2 - 1) < 1) {
        fn_8269A608(puVar1);
        fn_8267BE38(puVar1);
      }
    }
    *(undefined4 *)(param_1 + 0x80) = uVar4;
  }
  else {
    fn_8269F310(*(int *)(param_1 + 0x80),param_2,*(undefined4 *)(param_1 + 0x20));
  }
  return;
}

