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
extern unsigned int *auStack_50;
extern int fn_8265CF50();
extern int fn_8265D3F0();
extern int fn_8265D7D0();
extern int fn_8265D828();
extern int fn_8265DED8();
extern int fn_8265E4C8();
extern int fn_8265F570();
extern int fn_82665628();
extern int fn_82665FD8();
extern int fn_82666010();
extern int fn_82666050();
extern int fn_82666090();
extern int fn_826660E8();
extern int fn_82666560();
extern int fn_8266C340();
extern int fn_82F92218();
extern unsigned int lbl_831E7A18;
extern unsigned int lbl_831E7A2C;
extern unsigned int stack0x00000014;
extern unsigned int uStack_10;
extern unsigned int uStack_14;
extern unsigned int uStack_34;
extern unsigned int uStack_c;


undefined4 fn_826642E0(int *param_1)

{
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar1;
  uint uVar4;
  int *piStack00000014;
  undefined1 auStack_50 [28];
  uint uStack_34;
  undefined1 auStack_30 [28];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  piStack00000014 = param_1;
  if (lbl_831E7A18 == '\0') {
    thunk_FUN_82a2b748(0x15);
    uStack_14 = 0;
  }
  else {
    if (param_1 == (int *)0x0) {
      fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x53,0xffffffff82001eb0);
    }
    if (piStack00000014 == (int *)0x0) {
      thunk_FUN_82a2b748(0x57);
      uStack_14 = 0;
    }
    else {
      iVar2 = fn_82665628(piStack00000014);
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*piStack00000014 + 0x14))(piStack00000014);
        if (iVar2 == 0) {
          uStack_14 = 0;
        }
        else {
          iVar2 = fn_8265D3F0(0xffffffff831e7a60);
          if (iVar2 == 0) {
            puVar3 = (undefined4 *)fn_8265CF50(0xffffffff831e7a1c,2);
            fn_826660E8(0xffffffff831e7a60,*puVar3);
          }
          fn_82666560(0xffffffff831e7a60,&stack0x00000014);
          uStack_34 = fn_82666050(lbl_831E7A2C,0x5c,0xffffffffffffffff);
          uVar1 = fn_82F92218(piStack00000014);
          fn_8265D7D0(auStack_50,uVar1);
          fn_82666010(auStack_50,0xffffffff821c5510);
          if (uStack_34 == 0xffffffff) {
            fn_82665FD8(auStack_50,lbl_831E7A2C);
          }
          else {
            uVar1 = fn_82666090(auStack_30,lbl_831E7A2C,(ulonglong)uStack_34 + 1,
                                      0xffffffffffffffff);
            fn_82665FD8(auStack_50,uVar1);
            fn_8265D828(auStack_30);
          }
          uVar4 = fn_8265DED8(auStack_50);
          if (uVar4 < 0x105) {
            fn_8265F570(auStack_50);
            iVar2 = fn_8265E4C8();
            if (((iVar2 < 0) && (iVar2 = thunk_FUN_82a2b798(), iVar2 != 2)) &&
               (iVar2 = thunk_FUN_82a2b798(), iVar2 != 3)) {
              uStack_10 = 0;
              fn_8265D828(auStack_50);
              uStack_14 = uStack_10;
            }
            else {
              uStack_c = 1;
              fn_8265D828(auStack_50);
              uStack_14 = uStack_c;
            }
          }
          else {
            thunk_FUN_82a2b748(0xa1);
            uStack_14 = 0;
            fn_8265D828(auStack_50);
          }
        }
      }
      else {
        uStack_14 = 1;
      }
    }
  }
  return uStack_14;
}

