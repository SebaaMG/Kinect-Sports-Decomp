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
extern int fn_829D47B0();
extern int fn_829D5F60();
extern int fn_82A28E60();
extern int fn_82A2B130();
extern int fn_82A2B218();
extern unsigned int lbl_832179FC;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


undefined8
fn_829D6198(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar2;
  undefined8 uVar1;
  ulonglong uVar3;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined1 auStack_50 [8];
  longlong alStack_48 [9];
  
  iVar2 = XamUserGetIndexFromXUID(param_1,1,&uStack_58);
  if ((iVar2 < 0) || (iVar2 = XamUserNuiGetEnrollmentIndex(uStack_58,auStack_50), iVar2 < 0)) {
    fn_829D47B0(&uStack_54,0x64000);
    uVar3 = (ulonglong)uStack_54;
    if (uVar3 != 0) {
      alStack_48[0] = 0;
      uStack_60 = 0x32000;
      uStack_5c = 0x32000;
      iVar2 = fn_82A2B218(param_1,alStack_48,uVar3,&uStack_60,0);
      if (((-1 < iVar2) && (alStack_48[0] != 0x80000000)) && (uStack_60 < 0x32001)) {
        *(char *)(param_3 + 0x21) = *(char *)(param_3 + 0x21) + '\x01';
        iVar2 = fn_82A2B130(1,0x10001,uVar3,uStack_60,0,&uStack_5c);
        if ((-1 < iVar2) &&
           (iVar2 = fn_82A2B130(1,0x10001,uVar3,uStack_60,uVar3 + 0x32000,&uStack_5c),
           -1 < iVar2)) {
          uVar1 = fn_829D5F60(uVar3 + 0x32000,uStack_5c,param_2,param_4,param_5);
          fn_82A28E60(*(undefined4 *)(lbl_832179FC + 0x8f4cc),0,uVar3);
          return uVar1;
        }
      }
      fn_82A28E60(*(undefined4 *)(lbl_832179FC + 0x8f4cc),0,uVar3);
    }
  }
  return 0;
}

