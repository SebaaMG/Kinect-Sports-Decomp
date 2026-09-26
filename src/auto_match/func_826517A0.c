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
extern unsigned int *auStack_6c;
extern int fn_82645110();
extern int fn_826453A0();
extern int fn_82651080();
extern int fn_82F691F0();
extern int fn_8314276C();


void fn_826517A0(int param_1,ulonglong param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 in_stack_00000054;
  undefined1 auStack_6c [108];
  
  *(int *)(param_1 + 0x5588) = (int)param_5;
  *(int *)(param_1 + 0x558c) = (int)param_6;
  *(int *)(param_1 + 0x5590) = (int)param_7;
  *(int *)(param_1 + 0x5594) = (int)param_4;
  *(int *)(param_1 + 0x5598) = (int)param_8;
  *(undefined4 *)(param_1 + 0x559c) = in_stack_00000054;
  if ((param_2 & 8) != 0) {
    fn_8314276C(param_1 + 0x55a0);
  }
  if ((*(uint *)(param_1 + 0x54f8) & 0x40000000) != 0) {
    if ((param_3 != 0) || ((*(byte *)(param_1 + 0x2abd) & 2) != 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_6c,0,0x18);
    }
    uVar1 = fn_82651080(param_1,param_4,param_5,param_6,param_7,param_8,in_stack_00000054);
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x38) < uVar3) {
      uVar3 = fn_82645110(param_1);
    }
    uVar2 = fn_826453A0(param_1,uVar3,0,0xffffffff82650fe0,uVar1);
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  return;
}

