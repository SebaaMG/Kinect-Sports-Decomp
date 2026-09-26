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
extern int fn_82AB18E8();
extern int fn_82AB2168();
extern int fn_82AB25E0();
extern int fn_82AB2E60();
extern unsigned char lbl_83160630[];
extern unsigned int lbl_83160AC8;
extern unsigned int lbl_83160AD8;
extern unsigned int lbl_83160AE8;
extern unsigned int lbl_83160AF8;
extern unsigned int lbl_83160B18;
extern unsigned int lbl_83160B38;
extern unsigned int lbl_83160B48;
extern unsigned int lbl_83160B58;
extern unsigned int lbl_83160B68;
extern unsigned int lbl_83160C5C;


void fn_82AB2FA8(int param_1,uint *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if ((param_2[1] & 0x80000000) == 0x80000000) {
    if ((param_2[2] & 0x80000000) == 0) {
      uVar2 = 0xffffffff820d6594;
    }
    else {
      uVar2 = 0xffffffff820d6598;
    }
    fn_82AB18E8(param_1,0xffffffff820d3c58,uVar2);
  }
  uVar4 = *param_2 & 0x1f;
  if (uVar4 == 0) {
    fn_82AB2168(param_1,0xffffffff821ce400);
    fn_82AB18E8(param_1,0xffffffff821aa89c);
    if ((*param_2 & 0x40000) == 0) {
      uVar2 = 0xffffffff821ce3dc;
    }
    else {
      uVar2 = 0xffffffff821ce3d0;
    }
    fn_82AB18E8(param_1,uVar2,*param_2 >> 0xc & 0x3f);
    fn_82AB18E8(param_1,0xffffffff821c7f2c);
    fn_82AB18E8(param_1,0xffffffff821ce318,lbl_83160630[param_2[1] & 7]);
    fn_82AB18E8(param_1,0xffffffff821ce318,lbl_83160630[param_2[1] >> 3 & 7]);
    fn_82AB18E8(param_1,0xffffffff821ce318,lbl_83160630[param_2[1] >> 6 & 7]);
    fn_82AB18E8(param_1,0xffffffff821ce318,lbl_83160630[param_2[1] >> 9 & 7]);
    fn_82AB18E8(param_1,0xffffffff82196824);
    fn_82AB25E0(param_1,1,*param_2 >> 4 & 0x80 | *param_2 >> 5 & 0x3f,0,0,0,0,0);
    fn_82AB18E8(param_1,0xffffffff821ce414,lbl_83160630[*param_2 >> 0x1e]);
    if ((*(uint *)(param_1 + 8) & 2) == 0) {
      fn_82AB18E8(param_1,0xffffffff820d63a8,*param_2 >> 0x14 & 0x1f,
                    *(undefined4 *)((int)&lbl_83160C5C + (*param_2 >> 0x17 & 0xc)));
    }
    fn_82AB18E8(param_1,0xffffffff82196fac);
    uVar2 = 0xffffffff821c4da8;
    if ((*(uint *)(param_1 + 8) & 0x10) != 0) {
      fn_82AB18E8(param_1,0xffffffff821c4da8,0xffffffff821ce838);
    }
    if ((*(uint *)(param_1 + 8) & 2) == 0) {
      fn_82AB2E60(param_1);
      fn_82AB18E8(param_1,0xffffffff821ce3e0);
      fn_82AB18E8(param_1,0xffffffff820d638c,param_2[2] & 0xff,param_2[2] >> 8 & 0x7fffff);
      fn_82AB18E8(param_1,0xffffffff820d637c,
                    (&lbl_83160B68)[*(ushort *)(param_2 + 1) & 0x3f]);
    }
    fn_82AB2E60(param_1);
    fn_82AB18E8(param_1,0xffffffff821ce3e0);
    uVar5 = 0xffffffff821c7f38;
    if ((param_2[1] & 0x1000) != 0) {
      fn_82AB18E8(param_1,0xffffffff820d6370,0xffffffff821c7f38);
    }
    fn_82AB18E8(param_1,0xffffffff820d6364);
    if ((param_2[1] & 0x2000) == 0) {
      uVar1 = 0xffffffff820d6334;
    }
    else {
      uVar1 = 0xffffffff820d634c;
    }
    fn_82AB18E8(param_1,uVar1);
    fn_82AB18E8(param_1,0xffffffff82196824);
    fn_82AB2E60(param_1);
    fn_82AB18E8(param_1,0xffffffff821ce3e0);
    fn_82AB18E8(param_1,0xffffffff820d6328);
    if ((param_2[1] & 0x8000) == 0) {
      uVar5 = 0xffffffff821c7f40;
    }
    fn_82AB18E8(param_1,uVar5);
    if ((param_2[1] & 0x3f000000) != 0) {
      fn_82AB18E8(param_1,0xffffffff820d6318);
    }
    if ((param_3 != 0) && ((*(uint *)(param_1 + 8) & 2) == 0)) {
      fn_82AB18E8(param_1,0xffffffff82196fac);
      fn_82AB2E60(param_1);
      fn_82AB18E8(param_1,0xffffffff821ce3e0);
      if ((param_2[1] & 0x40000000) == 0) {
        fn_82AB18E8(param_1,0xffffffff820d62f4,(*param_2 >> 0x1b & 7) + 1);
      }
      else {
        fn_82AB18E8(param_1,0xffffffff820d62e4);
      }
    }
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      return;
    }
    uVar3 = 0xffffffff821ce828;
  }
  else {
    if ((uVar4 == 0) ||
       ((4 < uVar4 && ((uVar4 < 0x10 || ((0x13 < uVar4 && ((uVar4 < 0x18 || (0x1b < uVar4))))))))))
    {
      fn_82AB18E8(param_1,0xffffffff820d63b4);
      return;
    }
    uVar2 = 0xffffffff821ce4e8;
    switch(uVar4) {
    case 1:
      uVar2 = 0xffffffff820d658c;
      break;
    case 2:
      uVar2 = 0xffffffff820d657c;
      break;
    case 3:
      uVar2 = 0xffffffff820d656c;
      break;
    case 4:
      uVar2 = 0xffffffff820d6558;
      break;
    case 0x10:
      uVar2 = 0xffffffff820d6540;
      break;
    case 0x11:
      uVar2 = 0xffffffff820d6530;
      break;
    case 0x12:
      uVar2 = 0xffffffff820d6524;
      break;
    case 0x13:
      uVar2 = 0xffffffff820d6518;
      break;
    case 0x18:
      uVar2 = 0xffffffff821ce508;
      break;
    case 0x19:
      uVar2 = 0xffffffff821ce514;
      break;
    case 0x1a:
      uVar2 = 0xffffffff821ce524;
      break;
    case 0x1b:
      uVar2 = 0xffffffff820d6504;
    }
    fn_82AB2168(param_1,uVar2);
    fn_82AB18E8(param_1,0xffffffff821aa89c);
    if ((*param_2 & 0x40000) == 0) {
      uVar2 = 0xffffffff821ce3dc;
    }
    else {
      uVar2 = 0xffffffff821ce3d0;
    }
    fn_82AB18E8(param_1,uVar2,*param_2 >> 0xc & 0x3f);
    fn_82AB18E8(param_1,0xffffffff821c7f2c);
    fn_82AB18E8(param_1,0xffffffff821ce318,lbl_83160630[param_2[1] & 7]);
    fn_82AB18E8(param_1,0xffffffff821ce318,lbl_83160630[param_2[1] >> 3 & 7]);
    fn_82AB18E8(param_1,0xffffffff821ce318,lbl_83160630[param_2[1] >> 6 & 7]);
    fn_82AB18E8(param_1,0xffffffff821ce318,lbl_83160630[param_2[1] >> 9 & 7]);
    fn_82AB18E8(param_1,0xffffffff82196824);
    fn_82AB25E0(param_1,1,*param_2 >> 4 & 0x80 | *param_2 >> 5 & 0x3f,0,0,0,0,0);
    fn_82AB18E8(param_1,0xffffffff821c7f2c);
    fn_82AB18E8(param_1,0xffffffff821ce318,lbl_83160630[*param_2 >> 0x1a & 3]);
    fn_82AB18E8(param_1,0xffffffff821ce318,lbl_83160630[*param_2 >> 0x1c & 3]);
    if ((*param_2 & 0x1f) != 0x12) {
      fn_82AB18E8(param_1,0xffffffff821ce318,lbl_83160630[*param_2 >> 0x1e]);
    }
    fn_82AB18E8(param_1,0xffffffff820d64fc,*param_2 >> 0x14 & 0x1f);
    if ((*param_2 & 0x2000000) != 0) {
      fn_82AB18E8(param_1,0xffffffff820d64d8);
    }
    uVar4 = param_2[1] >> 0xc & 3;
    if (uVar4 != 3) {
      fn_82AB18E8(param_1,0xffffffff820d64c8,(&lbl_83160AC8)[uVar4]);
    }
    uVar4 = param_2[1] >> 0xe & 3;
    if (uVar4 != 3) {
      fn_82AB18E8(param_1,0xffffffff820d64b8,(&lbl_83160AD8)[uVar4]);
    }
    if ((*(ushort *)(param_2 + 1) & 3) != 3) {
      fn_82AB18E8(param_1,0xffffffff820d64a8,(&lbl_83160AE8)[*(ushort *)(param_2 + 1) & 3]
                   );
    }
    uVar4 = param_2[1] >> 0x12 & 7;
    if (uVar4 != 7) {
      fn_82AB18E8(param_1,0xffffffff820d6494,(&lbl_83160AF8)[uVar4]);
    }
    uVar4 = param_2[1] >> 0x15 & 7;
    if (uVar4 != 7) {
      fn_82AB18E8(param_1,0xffffffff821ce420,(&lbl_83160B18)[uVar4]);
    }
    if ((*(byte *)(param_2 + 1) & 3) != 3) {
      fn_82AB18E8(param_1,0xffffffff820d6480,(&lbl_83160B38)[*(byte *)(param_2 + 1) & 3]);
    }
    uVar4 = param_2[1] >> 0x1a & 3;
    if (uVar4 != 3) {
      fn_82AB18E8(param_1,0xffffffff820d646c,(&lbl_83160B48)[uVar4]);
    }
    if ((param_2[1] >> 0x1c & 1) != 0) {
      fn_82AB18E8(param_1,0xffffffff820d6458);
    }
    if ((param_2[1] >> 0x1d & 3) != 0) {
      fn_82AB18E8(param_1,0xffffffff820d6444,
                    (&lbl_83160B58)[param_2[1] >> 0x1d & 3]);
    }
    if ((param_2[2] & 1) != 0) {
      fn_82AB18E8(param_1,0xffffffff820d6428);
    }
    if ((param_2[2] & 2) != 0) {
      fn_82AB18E8(param_1,0xffffffff820d640c);
    }
    if ((param_2[2] >> 2 & 0x7f) != 0) {
      fn_82AB18E8(param_1,0xffffffff820d63fc);
    }
    if ((param_2[2] & 0x1f0000) != 0) {
      fn_82AB18E8(param_1,0xffffffff820d63ec);
    }
    if ((param_2[2] >> 0x15 & 0x1f) != 0) {
      fn_82AB18E8(param_1,0xffffffff820d63dc);
    }
    uVar3 = (ulonglong)(param_2[2] >> 0x1a) & 0x1f;
    if ((param_2[2] >> 0x1a & 0x1f) == 0) {
      return;
    }
    uVar2 = 0xffffffff820d63cc;
  }
  fn_82AB18E8(param_1,uVar2,uVar3);
  return;
}

