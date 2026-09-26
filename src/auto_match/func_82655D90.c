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
extern unsigned int *auStack_8e0;
extern unsigned int *auStack_904;
extern unsigned int *auStack_92c;
extern int fn_82643A48();
extern int fn_82645110();
extern int fn_82655748();
extern int fn_82655C68();
extern int fn_82F68CC0();
extern int fn_8314282C();
extern int fn_8314283C();
extern unsigned int uStack_8f8;
extern unsigned int uStack_908;
extern unsigned int uStack_90c;
extern unsigned int uStack_910;
extern unsigned int uStack_914;
extern unsigned int uStack_918;
extern unsigned int uStack_91c;
extern unsigned int uStack_920;


void fn_82655D90(int param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 auStack_92c [3];
  uint uStack_920;
  uint uStack_91c;
  uint uStack_918;
  uint uStack_914;
  uint uStack_910;
  uint uStack_90c;
  undefined4 uStack_908;
  undefined1 auStack_904 [12];
  undefined4 uStack_8f8;
  undefined1 auStack_8e0 [2272];
  
  fn_82655C68();
  uVar4 = (ulonglong)uStack_920;
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x5508);
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x5500);
  uVar6 = (ulonglong)uStack_910;
  uVar5 = uStack_918 - uVar4;
  if (uVar7 != uVar3) {
    if ((uVar7 <= uVar6) && (uVar6 <= uVar3)) {
      uVar6 = uVar7;
    }
    if ((uVar7 <= (uVar5 & 0xffffffff)) && ((uVar5 & 0xffffffff) <= uVar3)) {
      uVar4 = (uVar3 - uVar6 & 0xffffffff) >> 1;
      uVar5 = uVar7;
    }
  }
  uVar8 = (param_2 & 0xffff) << 0x10 | param_3 & 0xffffffff0000ffff;
  uVar3 = (uVar6 & 0xffff) << 0x10;
  auStack_92c[0] = uStack_908;
  uVar6 = ((uVar7 - uVar6 & 0xffffffff) >> 1 & 0xffff) << 0x10 |
          ((ulonglong)*(uint *)(param_1 + 0x5504) - (ulonglong)uStack_90c & 0xffffffff) >> 1 &
          0xffff;
  fn_82655748(param_1,(uVar4 & 0xffff) << 0x10 | (ulonglong)uStack_91c & 0xffffffff0000ffff,
                (uVar5 & 0xffff) << 0x10 |
                (ulonglong)uStack_914 - (ulonglong)uStack_91c & 0xffffffff0000ffff,uVar6,
                (ulonglong)uStack_90c & 0xffff | uVar3,uVar8,auStack_92c,auStack_904);
  fn_8314283C(auStack_8e0,800,0xffffffff80000000);
  lVar1 = fn_82643A48(param_1,0xdc);
  iVar2 = fn_8314282C(((ulonglong)uStack_920 & 0xffff) << 0x10 |
                          (ulonglong)uStack_91c & 0xffffffff0000ffff,
                          ((ulonglong)uStack_918 - (ulonglong)uStack_920 & 0xffff) << 0x10 |
                          (ulonglong)uStack_914 - (ulonglong)uStack_91c & 0xffffffff0000ffff,uVar6,
                          (ulonglong)uStack_90c & 0xffff | uVar3,uVar8,auStack_92c[0],auStack_904,
                          uStack_8f8);
  fn_82F68CC0(lVar1 + 4,auStack_8e0,iVar2 * 4);
  *(int *)(param_1 + 0x30) = iVar2 * 4 + (int)lVar1;
  fn_82645110(param_1);
  return;
}

