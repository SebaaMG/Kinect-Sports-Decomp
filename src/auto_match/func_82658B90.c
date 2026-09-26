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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_826582F8();
extern int fn_82658670();
extern int fn_82658940();
extern int fn_82658B20();
extern int fn_8265B200();
extern int fn_8265B358();
extern unsigned int lbl_82188300;
extern unsigned int lbl_831BD4C0;


void fn_82658B90(undefined8 param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  
  bVar4 = false;
  uVar8 = 0;
  cVar5 = fn_82658B20(param_2);
  if (cVar5 != '\0') {
    fn_8265B358(param_1,0xffffffff821ce3a8,0);
    return;
  }
  bVar9 = (&lbl_82188300)[*(byte *)(param_2 + 2) & 0x1f];
  if ((((((*(byte *)(param_2 + 2) & 0x1f) == 2) &&
        (((param_2[1] >> 1 ^ param_2[1]) & 0x2000000) == 0)) &&
       (*(char *)((int)param_2 + 9) == *(char *)((int)param_2 + 10))) &&
      ((((param_2[2] >> 1 ^ param_2[2]) & 0x40000000) == 0 &&
       (*(char *)((int)param_2 + 5) == *(char *)((int)param_2 + 6))))) &&
     (((param_2[2] & 0x80000000) == 0x80000000 ||
      (((param_2[1] >> 1 ^ param_2[1]) & 0x40000000) == 0)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    uVar6 = 0xffffffff821ce3ac;
  }
  else {
    uVar2 = param_2[2];
    uVar7 = uVar2 >> 0x18 & 0x1f;
    if ((((uVar7 == 0x1d) && (((param_2[1] >> 1 ^ param_2[1]) & 0x2000000) == 0)) &&
        ((*(char *)((int)param_2 + 9) == *(char *)((int)param_2 + 10) &&
         ((((uVar2 >> 1 ^ uVar2) & 0x40000000) == 0 &&
          (*(char *)((int)param_2 + 5) == *(char *)((int)param_2 + 6))))))) &&
       (((uVar2 & 0x80000000) == 0x80000000 || (((param_2[1] >> 1 ^ param_2[1]) & 0x40000000) == 0))
       )) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      bVar1 = *(byte *)param_2;
      uVar6 = ZEXT48((&lbl_831BD4C0)[uVar7]);
      goto LAB_82658d40;
    }
    uVar6 = 0xffffffff821ce3b0;
  }
  bVar1 = *(byte *)param_2;
  bVar9 = 1;
LAB_82658d40:
  fn_8265B358(param_1,uVar6,bVar1 & 1);
  uVar2 = *param_2;
  fn_826582F8(param_1,uVar2 & 0x3f,uVar2 >> 0x10 & 0xf,uVar2 >> 0xf & 1,uVar2 >> 6 & 1,
                uVar2 >> 0xe & 1,uVar2 >> 0x14 & 0xf);
  fn_8265B200(param_1,0xffffffff82196824);
  uVar2 = param_2[1];
  if ((((uVar2 & 0x80000000) == 0) && ((uVar2 & 0x40000000) == 0)) && ((uVar2 & 0x20000000) != 0)) {
    bVar4 = true;
  }
  if (bVar9 != 0) {
    uVar8 = ~-((int)param_2[2] >> 0x1f) & 1;
    if ((-((int)param_2[2] >> 0x1f) == 0) && (bVar4)) {
      fn_82658940(param_1,*(undefined1 *)((int)param_2 + 9),param_2[1] >> 0x1a & 1,
                    *(undefined1 *)((int)param_2 + 5));
    }
    else {
      uVar2 = param_2[1];
      fn_82658670(param_1,param_2[2] >> 0x1f,*(undefined1 *)((int)param_2 + 9),uVar2 >> 0x1f,
                    uVar2 >> 0x1d & 1,*param_2 >> 7 & 1,uVar2 >> 0x1a & 1,
                    *(undefined1 *)((int)param_2 + 5));
    }
  }
  if (1 < bVar9) {
    if (((param_2[2] & 0x40000000) == 0) && (uVar8 == 0)) {
      uVar8 = 2;
    }
    fn_8265B200(param_1,0xffffffff82196824);
    if (((param_2[2] & 0x40000000) == 0) && (bVar4)) {
      fn_82658940(param_1,*(undefined1 *)((int)param_2 + 10),param_2[1] >> 0x19 & 1,
                    *(undefined1 *)((int)param_2 + 6));
    }
    else {
      uVar2 = param_2[1] >> 0x1f;
      if (uVar8 != 2) {
        uVar2 = param_2[1] >> 0x1e;
      }
      fn_82658670(param_1,param_2[2] >> 0x1e & 1,*(undefined1 *)((int)param_2 + 10),uVar2 & 1,
                    param_2[1] >> 0x1d & 1,*param_2 >> 7 & 1,param_2[1] >> 0x19 & 1,
                    *(undefined1 *)((int)param_2 + 6));
    }
  }
  if (2 < bVar9) {
    if (((param_2[2] & 0x20000000) == 0) && (uVar8 == 0)) {
      uVar8 = 3;
    }
    fn_8265B200(param_1,0xffffffff82196824);
    if (((param_2[2] & 0x20000000) == 0) && (bVar4)) {
      fn_82658940(param_1,param_2[2] & 0xff,param_2[1] >> 0x18 & 1,param_2[1] & 0xff);
    }
    else {
      uVar2 = param_2[1] >> 0x1f;
      if (uVar8 != 3) {
        uVar2 = param_2[1] >> 0x1e;
      }
      uVar8 = param_2[1];
      fn_82658670(param_1,param_2[2] >> 0x1d & 1,param_2[2] & 0xff,uVar2 & 1,uVar8 >> 0x1d & 1,
                    *param_2 >> 7 & 1,uVar8 >> 0x18 & 1,uVar8 & 0xff);
    }
  }
  return;
}

