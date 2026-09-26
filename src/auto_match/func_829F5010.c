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
extern int fn_829F5368();
extern int fn_829F5370();
extern int fn_829F5CA8();
extern int fn_829F6400();
extern int fn_829F6448();
extern unsigned int lbl_83218C30;
extern unsigned int *lbl_83218C34;


ulonglong fn_829F5010(uint *param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  uVar3 = (ulonglong)lbl_83218C30;
  if (uVar3 == 0) {
    if (param_1 == (uint *)0x0) {
      uVar2 = 0x57;
    }
    else {
      if ((*param_1 == 0) || (3 < *param_1)) goto LAB_829f50e8;
      lbl_83218C34 = (int *)param_1[3];
      iVar1 = fn_829F5368(0x106c0);
      if (iVar1 == 0) {
        uVar3 = 0;
        uVar2 = 0xe;
        lbl_83218C30 = 0;
      }
      else {
        uVar3 = fn_829F5CA8();
        lbl_83218C30 = (uint)uVar3;
        if ((uVar3 & 0xffffffff) == 0) {
          uVar2 = 0xe;
        }
        else {
          uVar2 = fn_829F6448(uVar3,param_1);
          if ((uVar2 & 0xffffffff) == 0) goto LAB_829f50e8;
          uVar3 = (ulonglong)lbl_83218C30;
        }
      }
    }
  }
  else {
    uVar2 = 0x4df;
  }
  if ((uVar3 & 0xffffffff) != 0) {
    fn_829F6400(uVar3);
    fn_829F5370(uVar3);
  }
  lbl_83218C30 = 0;
LAB_829f50e8:
  if (lbl_83218C34 != (int *)0x0) {
    (**(code **)(*lbl_83218C34 + 0xc))(lbl_83218C34,0);
  }
  return uVar2;
}

