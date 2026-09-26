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
extern int fn_83062FE0();
extern int fn_83063800();
extern int fn_83064EB8();
extern int fn_83065C28();
extern int fn_83065E70();
extern int fn_830677A0();
extern int fn_830678C8();
extern int fn_830679A8();
extern int fn_83068F30();
extern unsigned int lbl_83068C20;


bool fn_83064FD8(int param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  bool bVar7;
  
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  lVar5 = fn_83065E70();
  *(int *)(param_1 + 0x2c) = (int)lVar5;
  cVar6 = fn_83062FE0(param_1,param_2,lVar5 + 0x44,param_3);
  if (cVar6 == '\0') {
    fn_83065C28(*(undefined4 *)(param_1 + 0x2c));
    bVar7 = false;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x30);
    if ((iVar1 != 0) && (iVar1 < *(int *)(*(int *)(param_1 + 0x2c) + 0x4c))) {
      uVar2 = *(undefined4 *)(param_1 + 0x14);
      uVar3 = *(undefined4 *)(param_1 + 0x18);
      *(undefined **)(param_1 + 0x14) = &lbl_83068C20;
      *(code **)(param_1 + 0x18) = fn_83068F30;
      uVar4 = *(uint *)(*(int *)(param_1 + 0x2c) + 0x4c);
      if (iVar1 << 5 < (int)uVar4) {
        *(uint *)(param_1 + 0x20) = ((int)uVar4 >> 4) + (uint)((int)uVar4 < 0 && (uVar4 & 0xf) != 0)
        ;
        if ((param_3 & 0xffffffff) != 0) {
          fn_830677A0(param_3,1,0xffffffff8217e7f8);
        }
        fn_83064EB8(param_1,*(undefined4 *)(param_1 + 0x2c),0,0);
        if ((param_3 & 0xffffffff) != 0) {
          fn_830679A8(param_3);
          fn_830678C8(param_3);
        }
        *(int *)(param_1 + 0x20) = iVar1;
      }
      fn_83064EB8(param_1,*(undefined4 *)(param_1 + 0x2c),param_3,0xffffffff8217e80c);
      *(undefined4 *)(param_1 + 0x14) = uVar2;
      *(undefined4 *)(param_1 + 0x18) = uVar3;
    }
    fn_83064EB8(param_1,*(undefined4 *)(param_1 + 0x2c),param_3,0xffffffff8217e828);
    fn_83063800(param_1,param_1 + 0xc4);
    bVar7 = *(int *)(param_1 + 0x2c) != 0;
  }
  return bVar7;
}

