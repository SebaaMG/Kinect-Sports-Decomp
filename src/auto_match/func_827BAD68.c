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
extern int fn_827BA110();
extern int fn_827BA1C0();
extern int fn_827BA4E8();
extern int fn_827BA938();


void fn_827BAD68(uint *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar4;
  ulonglong uVar3;
  uint uVar5;
  int iVar6;
  
  iVar2 = (int)param_3;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  else {
    uVar5 = *param_1;
    trapWord(6,param_3,0);
    uVar4 = (int)uVar5 / iVar2;
    trapWord(5,param_3 & ~((((ulonglong)uVar5 & 0x7fffffff) << 1 | (ulonglong)(uVar5 >> 0x1f)) - 1),
             0xffff);
  }
  iVar6 = (int)param_2;
  param_1[0x19] = uVar4;
  if (iVar6 == 0) {
    uVar3 = 1;
  }
  else {
    uVar4 = *param_1;
    trapWord(6,param_2,0);
    uVar3 = (ulonglong)((int)uVar4 / iVar6);
    trapWord(5,param_2 & ~((((ulonglong)uVar4 & 0x7fffffff) << 1 | (ulonglong)(uVar4 >> 0x1f)) - 1),
             0xffff);
  }
  uVar4 = *param_1;
  trapWord(6,uVar3,0);
  uVar5 = (uint)uVar3;
  param_1[0x1a] = uVar5;
  param_1[0x1b] = ((int)uVar4 / (int)uVar5) * uVar5;
  trapWord(5,uVar3 & ~((((ulonglong)uVar4 & 0x7fffffff) << 1 | (ulonglong)(uVar4 >> 0x1f)) - 1),
           0xffff);
  if ((iVar6 != 0) || (iVar2 != 0)) {
    fn_827BA110(param_1);
    uVar1 = fn_827BA1C0();
    if ((iVar6 != 0) && (*(short *)((int)param_1 + 0x5a) < *(short *)((int)param_1 + 0x5e))) {
      fn_827BA4E8(uVar1,2);
      fn_827BA938(param_1,2,param_1[0x1a],
                    (longlong)
                    (((int)*(short *)((int)param_1 + 0x5e) - (int)*(short *)((int)param_1 + 0x5a)) /
                    3) + (longlong)*(short *)((int)param_1 + 0x5a),param_4,param_5);
    }
    if ((iVar2 != 0) && (*(short *)((int)param_1 + 0x5a) < *(short *)((int)param_1 + 0x5e))) {
      fn_827BA4E8(param_1,1);
      fn_827BA938(param_1,1,param_1[0x19],
                    (longlong)
                    (((int)*(short *)(param_1 + 0x17) - (int)*(short *)(param_1 + 0x16)) / 3) +
                    (longlong)*(short *)(param_1 + 0x16),0,0);
    }
  }
  return;
}

