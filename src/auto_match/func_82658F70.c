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
extern int fn_826582F8();
extern int fn_82658670();
extern int fn_82658940();
extern int fn_8265B200();
extern int fn_8265B358();
extern unsigned int lbl_82188320;
extern unsigned int lbl_831BD540;


void fn_82658F70(undefined8 param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  byte bVar8;
  uint uVar10;
  ulonglong uVar9;
  
  uVar10 = param_2[1];
  bVar6 = false;
  if ((((uVar10 & 0x80000000) == 0) && ((uVar10 & 0x40000000) == 0)) && ((uVar10 & 0x20000000) != 0)
     ) {
    bVar6 = true;
  }
  bVar4 = false;
  if ((10 < (*(byte *)(param_2 + 2) & 0x1f)) && ((*(byte *)(param_2 + 2) & 0x1f) < 0xf)) {
    bVar4 = true;
  }
  uVar10 = param_2[1];
  uVar2 = uVar10 >> 6;
  if (bVar4) {
    uVar10 = (uVar10 >> 4) - 2;
  }
  bVar4 = (uVar2 - 1 & 3) != (uVar10 & 3);
  if ((bVar4) || (uVar9 = (ulonglong)*param_2, (*param_2 & 0xfc000000) != 0x14000000)) {
    if (bVar4) {
LAB_82659084:
      fn_8265B358(param_1,*(undefined4 *)((int)&lbl_831BD540 + (*param_2 >> 0x18 & 0xfc)),
                        *param_2 >> 0x19 & 1);
      goto LAB_826590a8;
    }
    uVar9 = (ulonglong)*param_2;
    if ((*param_2 & 0xfc000000) == 0x5c000000) {
      uVar7 = 0xffffffff821ce3c0;
    }
    else {
      uVar9 = (ulonglong)*param_2;
      if ((*param_2 & 0xfc000000) != 0x60000000) goto LAB_82659084;
      uVar7 = 0xffffffff821ce3c8;
    }
  }
  else {
    uVar7 = 0xffffffff821ce3b8;
  }
  fn_8265B358(param_1,uVar7,uVar9 >> 0x19 & 1);
LAB_826590a8:
  uVar10 = *param_2;
  uVar5 = uVar10 >> 0xf & 1;
  uVar2 = uVar10 >> 6;
  if (uVar5 == 0) {
    uVar2 = uVar10 >> 0xe;
  }
  uVar3 = uVar10;
  if (uVar5 == 0) {
    uVar3 = uVar10 >> 8;
  }
  fn_826582F8(param_1,uVar3 & 0x3f,uVar10 >> 0x14 & 0xf,uVar5,uVar2 & 1,uVar10 >> 0xe & 1,
                uVar10 >> 0x10 & 0xf);
  cVar1 = (&lbl_82188320)[*param_2 >> 0x1a];
  if (cVar1 != '\0') {
    fn_8265B200(param_1,0xffffffff82196824);
  }
  if (cVar1 == '\x01') {
    if ((param_2[2] & 0x80000000) == 0) {
      bVar8 = 1;
    }
    else if ((param_2[2] & 0x40000000) == 0) {
      bVar8 = 2;
    }
    else {
      bVar8 = -((param_2[2] & 0x20000000) == 0) & 3;
    }
    if (((param_2[2] & 0x20000000) == 0) && (bVar6)) {
      fn_82658940(param_1,param_2[2] & 0xff,param_2[1] >> 0x18 & 1,param_2[1] & 0xff);
    }
    else {
      if (bVar8 == 3) {
        uVar10 = param_2[1] >> 0x1f;
      }
      else {
        uVar10 = param_2[1] >> 0x1e;
      }
      uVar2 = param_2[1];
      fn_82658670(param_1,param_2[2] >> 0x1d & 1,param_2[2] & 0xff,uVar10 & 1,uVar2 >> 0x1d & 1,
                    *param_2 >> 7 & 1,uVar2 >> 0x18 & 1,uVar2 & 0xff);
    }
  }
  else if (cVar1 == '\x02') {
    if (((int)param_2[2] < 0) && ((~(param_2[2] >> 0x1e) & 1) << 1 == 3)) {
      uVar10 = param_2[1] >> 0x1f;
    }
    else {
      uVar10 = param_2[1] >> 0x1e;
    }
    uVar2 = param_2[1];
    fn_82658670(param_1,0,param_2[2] & 0xff,uVar10 & 1,uVar2 >> 0x1d & 1,*param_2 >> 7 & 1,
                  uVar2 >> 0x18 & 1,uVar2 & 0xff);
    fn_8265B200(param_1,0xffffffff82196824);
    uVar9 = ((ulonglong)(param_2[2] >> 2) & 0x8000000 | (ulonglong)*param_2 & 0x4000000) >> 0x1a |
            (ulonglong)param_2[1] & 0x3c;
    if ((*param_2 & 0x80) != 0) {
      uVar9 = uVar9 | 0x80;
    }
    fn_82658670(param_1,1,uVar9,0,0,0,*(byte *)(param_2 + 1) & 1,
                  ((ulonglong)param_2[1] + 1 & 3) << 6);
  }
  return;
}

