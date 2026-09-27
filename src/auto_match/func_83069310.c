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
extern unsigned int *auStack_50;
extern int fn_8305D7B8();
extern int fn_8305D7C0();
extern int fn_8305DC18();
extern int fn_8305E0F8();
extern int fn_8305E6F8();
extern int fn_83067658();
extern int fn_8305EC98();
extern int fn_83060380();
extern int fn_830603C0();
extern int fn_830603D0();
extern int fn_830604F0();
extern int fn_83060CB0();
extern int fn_83060CD0();
extern int fn_83065E50();
extern int fn_83067658();


ulonglong fn_83069310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       ulonglong param_5)

{
  char cVar4;
  undefined8 uVar1;
  int iVar3;
  ulonglong uVar2;
  undefined8 uVar5;
  undefined1 auStack_50 [32];

  fn_83060380(auStack_50,param_2);
  fn_83060CB0(auStack_50);
  cVar4 = fn_830603C0(auStack_50);
  if (cVar4 == '\0') {
    do {
      uVar1 = fn_830603D0(auStack_50);
      fn_83060CD0(auStack_50);
      iVar3 = fn_8305D7C0(uVar1);
      if (iVar3 == 0) {
        if ((param_5 & 0xffffffff) != 0) {
          uVar5 = 0xffffffff8217ea40;
          uVar1 = 0xffffffff8217ea00;
LAB_8306941c:
          fn_83067658(param_5,uVar5,uVar1);
        }
      }
      else {
        cVar4 = fn_8305DC18(uVar1);
        if (cVar4 == '\0') {
          if ((param_5 & 0xffffffff) != 0) {
            uVar1 = 0xffffffff8217ea88;
            uVar5 = 0xffffffff8217eac0;
            goto LAB_8306941c;
          }
        }
        else {
          uVar5 = fn_83065E50();
          fn_8305E0F8(uVar5,param_3);
          fn_8305EC98(uVar5,uVar1);
          uVar1 = fn_8305D7C0(uVar1);
          fn_8305D7B8(uVar5,uVar1);
          cVar4 = fn_8305E6F8(param_1,uVar5);
          if (cVar4 == '\0') {
            if ((param_5 & 0xffffffff) != 0) {
              fn_83067658(param_5,0xffffffff8217ea80,0xffffffff8217ea48);
            }
            fn_83067658(param_1,uVar5);
          }
        }
      }
      cVar4 = fn_830603C0(auStack_50);
    } while (cVar4 == '\0');
  }
  uVar2 = fn_830604F0(param_3);
  return (-uVar2 & ~uVar2 & 0xffffffff) >> 0x1f;
}
