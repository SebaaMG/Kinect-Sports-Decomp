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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_826355E8();
extern int fn_82635E18();
extern int fn_82635E70();
extern int fn_82635ED0();
extern int fn_82635EE8();
extern unsigned int lbl_820D314C;
extern unsigned int uStack_10;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_20;


void fn_82AA1210(uint *param_1,char param_2,char param_3,undefined8 param_4,uint param_5,
                  int *param_6)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uStack_20;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  iVar1 = param_6[5];
  if (param_2 == '\0') {
    uStack_20 = *(undefined8 *)param_1;
    if ((1 << ((((U64)(uStack_20) >> 32) & 0xFFFFFFFF) >> 0xc & 0xf) & 0x607eU) != 0) {
      uStack_20 = ((((U64)(uStack_20)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)((ulonglong)uStack_20 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
      uStack_20 = CONCAT44((((U64)(uStack_20) >> 0) & 0xFFFFFFFF) & 0xfffff000 | (((U64)(uStack_20) >> 0) & 0xFFFFFFFF) - *param_6 & 0xfff,
                           (((U64)(uStack_20) >> 32) & 0xFFFFFFFF));
    }
    fn_826355E8(iVar1,&uStack_20);
  }
  else {
    param_6[1] = param_5;
    uVar3 = *param_1;
    if (param_3 == '\0') {
      if (((uVar3 & 0x8000) != 0) && ((uVar3 & 0x3f) == 0x3f)) {
        *param_1 = ((uint)(((ulonglong)(byte)(&lbl_820D314C)[*(byte *)(param_6 + 3) & 7] & 0xf) <<
                          0x14) | 0xff0fffff) &
                   ((uint)(((ulonglong)(byte)(&lbl_820D314C)[*(byte *)(param_6 + 3) & 7] & 0xf) <<
                          0x10) | 0xfff0ffff) & uVar3;
      }
      fn_82635EE8(iVar1,param_1);
    }
    else if ((uVar3 & 0x1f) == 0) {
      puVar2 = (uint *)param_6[2];
      uVar3 = *puVar2;
      if (uVar3 != 0) {
        do {
          if ((uVar3 & 0xfff) == param_5) break;
          puVar2 = puVar2 + 1;
          uVar3 = *puVar2;
        } while (uVar3 != 0);
        if (uVar3 != 0) {
          uStack_18 = *param_1;
          uStack_10 = param_1[2];
          uStack_14 = param_1[1] & 0xfffff000 | 0x688;
          fn_82635ED0(iVar1,&uStack_18,
                       ((ulonglong)(*puVar2 >> 8) & 0xf00 | (ulonglong)*puVar2 & 0xf000) >> 8,0);
          return;
        }
      }
      fn_82635E70(iVar1,param_1,0);
    }
    else {
      if ((uVar3 & 0x1f) == 1) {
        param_1[2] = (*(byte *)((uVar3 >> 0x14 & 0x1f) + param_6[6]) & 3) << 0xe |
                     param_1[2] & 0xffff3fff;
      }
      fn_82635E18(iVar1,param_1);
    }
  }
  return;
}

