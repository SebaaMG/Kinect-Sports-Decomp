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
extern int fn_829C5BD8();
extern int fn_829C6000();
extern int fn_82A1F2F8();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82006848;
extern unsigned int lbl_820570B0;
extern unsigned int lbl_83214DDC;
extern unsigned int lbl_83214E00;
extern unsigned int lbl_83214F50;
extern unsigned int lbl_83214F58;
extern unsigned int lbl_83214F5C;
extern unsigned int lbl_83214F80;
extern unsigned int lbl_83215060;


undefined8 fn_829C62A8(double param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  int iVar3;
  undefined8 uVar2;
  uint *in_r7;
  uint uVar4;
  uint uVar5;
  
  iVar3 = fn_82A1F2F8();
  if ((((param_4 & 0x18) == 0x18) ||
      ((double)lbl_82002C5C < (double)(float)(param_1 * (double)lbl_82006848))) ||
     ((double)(float)(param_1 * (double)lbl_82006848) < lbl_820570B0)) {
LAB_829c632c:
    uVar2 = 0x57;
  }
  else {
    if (in_r7 != (uint *)0x0) {
      uVar1 = in_r7[1];
      if (6 < uVar1) goto LAB_829c632c;
      if (uVar1 != 0) {
        uVar4 = 0;
        uVar5 = 0;
        do {
          in_r7 = in_r7 + 8;
          if (((*in_r7 & 0x40000000) != 0) && (uVar4 = uVar4 + 1, 1 < uVar4)) goto LAB_829c632c;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
      }
    }
    if (lbl_83214E00 == 0) {
      if (20000 < (uint)(iVar3 - lbl_83214F58)) {
        lbl_83214F5C = 0;
      }
      if (((lbl_83215060 == 0) && (lbl_83214DDC != 0)) &&
         ((999 < (uint)(iVar3 - lbl_83214F58) || ((param_4 & 0x20) != 0)))) {
        if ((lbl_83214F5C < 0x10) || ((param_4 & 0x20) != 0)) {
          lbl_83214F80 = (undefined4)param_4;
          fn_829C5BD8();
          lbl_83214F50 = 0;
          uVar2 = fn_829C6000(param_1,param_2,param_3,param_4);
        }
        else {
          uVar2 = 0x38;
          lbl_83214F58 = iVar3;
        }
      }
      else {
        uVar2 = 0x4d5;
      }
    }
    else {
      uVar2 = 0xaa;
    }
  }
  return uVar2;
}

