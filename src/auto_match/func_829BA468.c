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
extern int fn_829AB0F0();
extern int fn_829AB128();
extern int fn_829AB308();
extern int fn_829AE2A0();
extern int fn_829B0F38();
extern int fn_829B5088();
extern int fn_829B9B60();


void fn_829BA468(int param_1,int param_2,ulonglong param_3)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  byte bStack_40;
  byte bStack_3f;
  byte bStack_3e;
  byte bStack_3d;
  byte bStack_3c;
  byte bStack_3b;
  byte bStack_38;
  byte bStack_37;
  
  if ((*(uint *)(param_1 + 0x558) & 1) == 0) {
    fn_829AB0F0(param_1,0xffffffff82054fe4);
LAB_829ba498:
    cVar1 = *(char *)(param_1 + 0x616);
    if (cVar1 == '\x03') {
      if ((*(uint *)(param_1 + 0x558) & 2) == 0) {
        fn_829AB128(param_1,0xffffffff82054fc8);
      }
      if (((param_3 & 0xffffffff) <= (ulonglong)*(ushort *)(param_1 + 0x608)) &&
         ((param_3 & 0xffffffff) < 0x101)) {
        if ((param_3 & 0xffffffff) != 0) {
          uVar2 = fn_829B5088(param_1,param_3);
          *(int *)(param_1 + 0x65c) = (int)uVar2;
          *(uint *)(param_1 + 0x55c) = *(uint *)(param_1 + 0x55c) | 0x2000;
          fn_829B0F38(param_1,uVar2,param_3);
          fn_829AB308(param_1,uVar2,param_3);
          *(short *)(param_1 + 0x60a) = (short)param_3;
          goto LAB_829ba648;
        }
        fn_829AB128(param_1,0xffffffff82054fb0);
        param_3 = 0;
        goto LAB_829ba68c;
      }
      uVar2 = 0xffffffff82054f64;
    }
    else {
      if (cVar1 == '\x02') {
        if ((param_3 & 0xffffffff) == 6) {
          fn_829B0F38(param_1,&bStack_40,6);
          fn_829AB308(param_1,&bStack_40,6);
          *(undefined2 *)(param_1 + 0x60a) = 1;
          *(ushort *)(param_1 + 0x662) = (ushort)bStack_40 * 0x100 + (ushort)bStack_3f;
          *(ushort *)(param_1 + 0x664) = (ushort)bStack_3e * 0x100 + (ushort)bStack_3d;
          *(ushort *)(param_1 + 0x666) = (ushort)bStack_3c * 0x100 + (ushort)bStack_3b;
LAB_829ba648:
          iVar3 = fn_829B9B60(param_1,0);
          if (iVar3 != 0) {
            return;
          }
          fn_829AE2A0(param_1,param_2,*(undefined4 *)(param_1 + 0x65c),
                          *(undefined2 *)(param_1 + 0x60a),param_1 + 0x660);
          return;
        }
      }
      else {
        if (cVar1 != '\0') {
          uVar2 = 0xffffffff82054f38;
          goto LAB_829ba684;
        }
        if ((param_3 & 0xffffffff) == 2) {
          fn_829B0F38(param_1,&bStack_38,2);
          fn_829AB308(param_1,&bStack_38,2);
          *(undefined2 *)(param_1 + 0x60a) = 1;
          *(ushort *)(param_1 + 0x668) = (ushort)bStack_38 * 0x100 + (ushort)bStack_37;
          goto LAB_829ba648;
        }
      }
      uVar2 = 0xffffffff82054f64;
    }
  }
  else if ((*(uint *)(param_1 + 0x558) & 4) == 0) {
    if ((param_2 == 0) || ((*(uint *)(param_2 + 8) & 0x10) == 0)) goto LAB_829ba498;
    uVar2 = 0xffffffff82054f80;
  }
  else {
    uVar2 = 0xffffffff82054f98;
  }
LAB_829ba684:
  fn_829AB128(param_1,uVar2);
LAB_829ba68c:
  fn_829B9B60(param_1,param_3);
  return;
}

