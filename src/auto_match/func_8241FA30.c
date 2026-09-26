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
extern int fn_82547C80();
extern unsigned int lbl_82191D8C;
extern unsigned int lbl_82191D9C;
extern unsigned int lbl_82191DA0;
extern unsigned int lbl_821CC160;


void fn_8241FA30(int *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  float in_register_00010010;
  
  fVar1 = (in_register_00010010 - (float)param_1[0x74]) - (float)param_1[0x84];
  iVar4 = 0;
  if (lbl_821CC160 < fVar1) {
    uVar5 = 0;
    pfVar3 = (float *)&lbl_82191D8C;
    fVar2 = lbl_821CC160;
    do {
      if (0xfb < uVar5) break;
      pfVar3 = pfVar3 + 3;
      iVar4 = iVar4 + 1;
      fVar2 = *pfVar3 + fVar2;
      uVar5 = uVar5 + 0xc;
    } while (fVar2 < fVar1);
  }
  uVar5 = 0xffffffffU - ((int)(iVar4 - 1U) >> 0x1f) & iVar4 - 1U;
  if (0x14 < (int)uVar5) {
    uVar5 = 0x15;
  }
  if (*(uint *)(&lbl_82191D9C + uVar5 * 0xc) != 0xffffffff) {
    if (param_1 == *(int **)(*param_1 + 0x2b20)) {
      fn_82547C80((ulonglong)**(uint **)(*param_1 + 0x2bfc) + 0xd0,
                   *(uint *)(&lbl_82191D9C + uVar5 * 0xc) & 0xff,1);
    }
  }
  if (*(uint *)(&lbl_82191DA0 + uVar5 * 0xc) != 0xffffffff) {
    if (param_1 == *(int **)(*param_1 + 0x2b20)) {
      fn_82547C80((ulonglong)**(uint **)(*param_1 + 0x2bfc) + 0xd0,
                   *(uint *)(&lbl_82191DA0 + uVar5 * 0xc) & 0xff,1);
    }
  }
  return;
}

