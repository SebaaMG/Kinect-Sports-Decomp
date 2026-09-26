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
extern int fn_82E664E8();
extern int fn_82E667D8();
extern int fn_82EE8830();
extern int fn_82EE8EE0();
extern int fn_82EEACD0();
extern unsigned int lbl_8324017C;
extern U64 storeWordConditionalIndexed();


longlong fn_82E66BD8(longlong param_1,ulonglong param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  char in_RESERVE;
  
  lVar4 = param_1 + 0x21c;
  lVar5 = 0;
  fn_82E664E8(lVar4);
  puVar3 = (undefined4 *)param_1;
  if (puVar3[0x8d] == 0) {
    lVar5 = fn_82E667D8(param_1);
    bVar1 = lVar5 == 0;
    if (lVar5 < 0) goto LAB_82e66d38;
    do {
      if (in_RESERVE != '\0') {
        lbl_8324017C = storeWordConditionalIndexed((ulonglong)lbl_8324017C + 1,0,0xffffffff8324017c)
        ;
        bVar1 = true;
      }
    } while (!bVar1);
  }
  if (puVar3[0x84] == 0) {
    lVar5 = fn_82EEACD0(0xffffffff82eeaa60,2,param_1 + 0x208);
    bVar1 = lVar5 == 0;
    if (lVar5 < 0) goto LAB_82e66d38;
    lVar5 = fn_82EEACD0(0xffffffff82eeaa60,1,param_1 + 0x20c);
    bVar1 = lVar5 == 0;
    if (lVar5 < 0) goto LAB_82e66d38;
    lVar5 = fn_82EE8EE0(0xffffffff82ee9680,1,param_1);
    bVar1 = lVar5 == 0;
    if (lVar5 < 0) goto LAB_82e66d38;
    lVar5 = fn_82EE8830(*puVar3,0xf);
    bVar1 = lVar5 == 0;
    if (lVar5 < 0) goto LAB_82e66d38;
    lVar5 = fn_82EE8EE0(0xffffffff82eeaa60,0,param_1 + 4);
    bVar1 = lVar5 == 0;
    if (lVar5 < 0) goto LAB_82e66d38;
    lVar5 = fn_82EE8EE0(0xffffffff82eeaa60,0,param_1 + 0x200);
    bVar1 = lVar5 == 0;
    if (lVar5 < 0) goto LAB_82e66d38;
    lVar5 = fn_82EE8EE0(0xffffffff82eeaa60,1,param_1 + 8);
    bVar1 = lVar5 == 0;
    if (lVar5 < 0) goto LAB_82e66d38;
    puVar3[0x84] = 1;
  }
  bVar1 = (puVar3[0x86] & 1) == 0;
  if ((!bVar1) && (bVar1 = (param_2 & 1) == 0, bVar1)) {
    puVar3[0x86] = puVar3[0x86] & 0xfffffffe;
  }
  puVar3[0x8d] = puVar3[0x8d] + 1;
LAB_82e66d38:
  sync(1);
  do {
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(0,0,lVar4);
      *(undefined4 *)lVar4 = uVar2;
      bVar1 = true;
    }
  } while (!bVar1);
  return lVar5;
}

