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
extern int fn_8267BE38();
extern int fn_826C8C70();
extern int fn_826E7438();
extern int fn_826E7990();
extern int fn_826E8780();
extern int fn_8276E0C8();


void fn_8276E270(int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar8;
  
  uVar8 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    fn_8267BE38();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  uVar2 = fn_826E8780(param_2,*(undefined4 *)(param_2 + 0x1c));
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined1 *)(param_2 + 0x15) = 0;
  if (*(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x2c) < 1) {
    fn_826E7990(param_2);
  }
  iVar6 = *(int *)(param_2 + 0x2c) + 1;
  bVar1 = *(byte *)(*(int *)(param_2 + 0x2c) + *(int *)(param_2 + 0x3c));
  *(int *)(param_2 + 0x2c) = iVar6;
  if (param_3 == 0x3e) {
    *(undefined1 *)(param_2 + 0x15) = 0;
    if (*(int *)(param_2 + 0x30) - iVar6 < 1) {
      fn_826E7990(param_2);
    }
    uVar8 = *(undefined1 *)(*(int *)(param_2 + 0x2c) + *(int *)(param_2 + 0x3c));
    *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
  }
  if ((bVar1 & 0x10) == 0) {
    if ((bVar1 & 8) == 0) {
      uVar7 = *(uint *)(param_1 + 0x14) & 0xfffffcff;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0x14) & 0xfffffcff | 0x100;
    }
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x14) & 0xfffffcff | 0x200;
  }
  *(uint *)(param_1 + 0x14) = uVar7;
  if ((bVar1 & 4) == 0) {
    uVar7 = *(uint *)(param_1 + 0x14) & 0xfffffffe;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x14) | 1;
  }
  *(uint *)(param_1 + 0x14) = uVar7;
  if ((bVar1 & 2) == 0) {
    uVar7 = *(uint *)(param_1 + 0x14) & 0xfffffffd;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x14) | 2;
  }
  *(uint *)(param_1 + 0x14) = uVar7;
  if ((bVar1 & 1) == 0) {
    uVar7 = uVar7 & 0xffffbfff;
  }
  else {
    uVar7 = uVar7 | 0x4000;
  }
  *(uint *)(param_1 + 0x14) = uVar7;
  cVar3 = fn_826E7438(param_2);
  if (cVar3 != '\0') {
    if (param_3 == 0xd) {
      uVar4 = 0xffffffff82015108;
    }
    else {
      uVar4 = 0xffffffff820150ec;
    }
    fn_826C8C70(param_2,uVar4);
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x18);
    if (uVar5 == 0) {
      uVar5 = 0xffffffff82015030;
    }
    fn_826C8C70(param_2,0xffffffff820150dc,uVar5);
    uVar4 = 0xffffffff82015010;
    uVar7 = *(uint *)(param_1 + 0x14);
    if ((uVar7 & 0x300) == 0x200) {
      uVar4 = 0xffffffff82015004;
    }
    else if ((uVar7 & 0x300) == 0x100) {
      uVar4 = 0xffffffff82014ffc;
    }
    fn_826C8C70(param_2,0xffffffff820150b0,uVar4,uVar7 & 1,uVar7 >> 1 & 1);
    if (param_3 == 0x3e) {
      fn_826C8C70(param_2,0xffffffff82014fac,uVar8);
    }
  }
  fn_8276E0C8(param_1,param_2);
  return;
}

