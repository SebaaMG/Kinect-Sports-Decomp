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
extern int fn_82AA0090();
extern unsigned int lbl_831606B8;
extern unsigned int lbl_83160870;


void fn_82AA0130(uint *param_1,char param_2,char param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (param_2 == '\0') {
    return;
  }
  if (param_3 == '\0') {
    uVar1 = param_1[1];
    if ((((uVar1 & 0x80000000) != 0) || ((uVar1 & 0x40000000) != 0)) ||
       (bVar2 = true, (uVar1 & 0x20000000) == 0)) {
      bVar2 = false;
    }
    if (bVar2) {
      uVar1 = param_1[2] >> 0x16 & 0x7c;
      if ((0 < *(int *)(&lbl_831606B8 + uVar1)) && ((param_1[2] & 0x80000000) == 0)) {
        uVar3 = fn_82AA0090(param_6,*(undefined1 *)((int)param_1 + 9));
        *(undefined1 *)((int)param_1 + 9) = uVar3;
      }
      if ((1 < *(int *)(&lbl_831606B8 + uVar1)) && ((param_1[2] & 0x40000000) == 0)) {
        uVar3 = fn_82AA0090(param_6,*(undefined1 *)((int)param_1 + 10));
        *(undefined1 *)((int)param_1 + 10) = uVar3;
      }
      if (((2 < *(int *)(&lbl_831606B8 + uVar1)) ||
          (*(int *)(&lbl_83160870 + (*param_1 >> 0x18 & 0xfc)) == 1)) &&
         ((param_1[2] & 0x20000000) == 0)) {
        uVar3 = fn_82AA0090(param_6,param_1[2] & 0xff);
        *(undefined1 *)((int)param_1 + 0xb) = uVar3;
      }
      if (*(int *)(&lbl_83160870 + (*param_1 >> 0x18 & 0xfc)) == 2) {
        uVar3 = fn_82AA0090(param_6,*(undefined1 *)((int)param_1 + 0xb));
        *(undefined1 *)((int)param_1 + 0xb) = uVar3;
      }
      param_1[1] = param_1[1] & 0xdfffffff;
    }
    return;
  }
  return;
}

