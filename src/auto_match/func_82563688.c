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
extern int fn_8255FB38();
extern int fn_827F6318();
extern unsigned int lbl_8218E68C;
extern unsigned int lbl_8218E690;
extern unsigned int lbl_821CC160;


undefined8 fn_82563688(undefined8 param_1,undefined8 param_2,ushort *param_3,code *param_4)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  double dVar6;
  
  if ((uint)*param_3 == *(uint *)(&lbl_8218E690 + (uint)param_3[6] * 0xc)) {
    lVar3 = fn_8255FB38((double)*(float *)(param_3 + 2),param_1);
    if ((lVar3 != 0) && (param_4 != (code *)0x0)) {
      fn_827F6318(param_1);
      (*param_4)(param_3,param_2);
    }
    if (param_3[6] < 0x32) {
      uVar5 = *(uint *)(&lbl_8218E68C + (uint)param_3[6] * 0xc);
    }
    else {
      uVar5 = 0;
    }
    if ((((((param_3[7] | uVar5) & 4) != 0) &&
         (dVar6 = (double)fn_827F6318(param_1), (double)*(float *)(param_3 + 2) <= dVar6)) &&
        (dVar6 < (double)*(float *)(param_3 + 4))) && (param_4 != (code *)0x0)) {
      fn_827F6318(param_1);
      (*param_4)(param_3,param_2);
    }
    if ((*(float *)(param_3 + 4) == lbl_821CC160) || (iVar4 = fn_8255FB38(param_1), iVar4 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (param_4 != (code *)0x0) {
        fn_827F6318(param_1);
        (*param_4)(param_3,param_2);
      }
    }
    if (((int)lVar3 != 0) || (uVar2 = 0, bVar1)) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

