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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82230180();
extern int fn_8265C9E0();
extern int fn_82884B20();
extern int fn_82886518();
extern int fn_82890E18();
extern int fn_82897BD0();
extern int fn_8289D8D8();
extern int fn_8289DB78();
extern int fn_8289EEE0();
extern int fn_8289FAA8();
extern int fn_8289FAF0();
extern int fn_828A12E8();
extern int fn_828A3248();
extern int fn_828A39C0();
extern int fn_828ACC50();
extern int fn_828ACDB8();
extern int fn_828AD7A0();
extern int fn_828AEC88();
extern int fn_828B00F8();
extern int fn_828B55B0();
extern int fn_828B55F8();
extern int fn_828B5600();
extern int fn_828B58F0();
extern int fn_828BE158();
extern int fn_828C8058();
extern int fn_828DB600();
extern int fn_830B4CB8();


void fn_828B1878(int param_1,longlong param_2,undefined8 param_3,int param_4,undefined4 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar7;
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000064;
  int in_stack_0000006c;
  undefined4 auStack_80 [4];
  undefined1 auStack_70 [112];
  
  auStack_80[0] = 0;
  cVar7 = fn_828ACC50();
  if ((cVar7 != '\0') && (*(longlong *)(param_1 + 0xc0) == param_2)) {
    if (param_4 == 0) {
      *(undefined4 *)(param_1 + 0x84) = param_5;
      uVar1 = fn_82884B20(0x1000);
      fn_828A39C0(param_1,in_stack_00000054);
      uVar2 = fn_8265C9E0(0x68);
      if ((uVar2 & 0xffffffff) != 0) {
        uVar3 = fn_828AD7A0(auStack_70);
        fn_8289D8D8(uVar2,param_1,uVar1,in_stack_00000054,in_stack_0000005c,
                          *(undefined4 *)(param_1 + 0x7c),uVar3);
        fn_82230180(auStack_70);
      }
      piVar4 = (int *)fn_8289EEE0(param_1);
      fn_828A39C0(param_1,param_6);
      fn_830B4CB8(piVar4,param_6);
      fn_8289FAA8(piVar4,param_7);
      fn_8289DB78(piVar4,param_8);
      fn_8289FAF0(piVar4,in_stack_00000064);
      (**(code **)(*piVar4 + 0xc))(piVar4);
      fn_828AEC88();
      fn_828A3248(param_1 + 0x1e0);
      *(undefined1 *)(param_1 + 0x1dc) = 0;
      fn_828ACDB8(param_1,3);
      fn_828B00F8(param_1 + 0x278,0);
      uVar2 = fn_8265C9E0(0x98);
      if ((uVar2 & 0xffffffff) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = fn_828DB600(uVar2,0);
      }
      fn_82886518(uVar1,0xffffffffffffffff,0xffffffffffffffff);
      uVar3 = fn_82897BD0(piVar4);
      fn_828BE158(param_1,uVar1,uVar3,0);
      uVar2 = 0;
      if (*(int *)(in_stack_0000006c + 8) - *(int *)(in_stack_0000006c + 4) >> 2 != 0) {
        do {
          fn_828B58F0(auStack_80,in_stack_0000006c,uVar2);
          uVar5 = fn_828B5600(auStack_80);
          uVar6 = fn_828B55F8(auStack_80);
          uVar1 = fn_828A12E8(param_1);
          fn_82890E18(uVar1,uVar6,uVar5);
          fn_828B55B0(auStack_80);
          uVar2 = uVar2 + 1;
        } while ((uVar2 & 0xffffffff) <
                 (ulonglong)
                 (uint)(*(int *)(in_stack_0000006c + 8) - *(int *)(in_stack_0000006c + 4) >> 2));
        *(undefined4 *)(param_1 + 0x7c) = 0;
        return;
      }
    }
    else {
      *(int *)(param_1 + 0x98) = param_4;
      fn_828C8058(param_1,0x11);
    }
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}

