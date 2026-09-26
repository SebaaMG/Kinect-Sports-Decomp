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
extern int fn_8225F160();
extern int fn_82486958();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_82A1DD38();
extern int fn_82F68CC0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


ulonglong fn_82486098(int param_1,int param_2,int param_3,ulonglong param_4)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar4;
  undefined8 uVar3;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((param_2 + 2) * 0x420 + param_1);
  if (param_3 == 0) {
    if (uVar1 == 0) {
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x18f4);
    }
    else if (uVar1 == 1) {
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x18fc);
    }
    else if (uVar1 < 3) {
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x1904);
    }
    else {
      if (uVar1 != 3) {
        return 0xffffffffffffffff;
      }
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x190c);
    }
  }
  else if (uVar1 == 0) {
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x18f0);
  }
  else if (uVar1 == 1) {
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x18f8);
  }
  else if (uVar1 < 3) {
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x1900);
  }
  else {
    if (uVar1 != 3) {
      return 0xffffffffffffffff;
    }
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x1908);
  }
  if (uVar5 == 0) {
    return 0xffffffffffffffff;
  }
  uVar2 = fn_8251FBA8(uVar5);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar2 = (ulonglong)
          (uint)(int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                     (float)(longlong)(int)((uVar2 & 0xffffffff) / 0x24));
  if (((*(int *)(param_1 + 0x18b8) == 1) && (param_2 == 2)) &&
     (iVar4 = fn_82486958(param_1), iVar4 == 3)) {
    iVar4 = fn_8225F160();
    fn_82F68CC0(iVar4 + 0x154,uVar2 * 0x24 + uVar5,0x24);
    *(undefined4 *)(iVar4 + 0x178) = 1;
  }
  iVar4 = fn_8225F160();
  iVar4 = param_2 * 0x28 + iVar4;
  lVar6 = uVar2 * 0x24 + uVar5;
  fn_82F68CC0(iVar4 + 300,lVar6,0x24);
  *(undefined4 *)(iVar4 + 0x150) = 1;
  uVar3 = fn_8251F720(lVar6 + 0x20,0);
  if ((param_4 & 0xffffffff) != 0) {
    fn_82A1DD38(param_4,uVar3,1000);
  }
  fn_82A1DD38(param_2 * 0x420 + param_1 + 0x844,uVar3,1000);
  fn_8251FA58(uVar3);
  return uVar2;
}

