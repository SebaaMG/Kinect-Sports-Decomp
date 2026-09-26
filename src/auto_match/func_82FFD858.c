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
extern int fn_82FF92F8();
extern int fn_82FFA798();
extern int fn_82FFA898();
extern int fn_82FFC9A0();
extern int fn_82FFCB90();
extern int fn_82FFD1F0();
extern int fn_82FFD318();
extern int fn_82FFD568();
extern int fn_82FFD708();
extern int fn_82FFE268();
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;


undefined8 fn_82FFD858(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  uint uStack_30;
  
  iVar4 = param_1 + 0x34;
  uVar5 = 1;
  RtlEnterCriticalSection(iVar4);
  if (*(int *)(param_1 + 0x80) != 0) {
    do {
      puVar1 = *(undefined4 **)(param_1 + 0x6c);
      puVar2 = &uStack_54;
      lVar6 = 9;
      puVar3 = puVar1;
      do {
        puVar3 = puVar3 + 1;
        puVar2 = puVar2 + 1;
        *puVar2 = *puVar3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if (puVar1 != (undefined4 *)0x0) {
        fn_82FFE268((int *)(param_1 + 0x6c),puVar1,0);
      }
      RtlLeaveCriticalSection(iVar4);
      if (uStack_50 < 9) {
        if (uStack_50 == 1) {
          uVar5 = fn_82FFA798(param_1,CONCAT44(1,uStack_4c),uStack_48,uStack_40,uStack_38,
                                    (ulonglong)uStack_30 << 0x20);
        }
        else if (uStack_50 == 2) {
          uVar5 = fn_82FFD568(param_1,CONCAT44(2,uStack_4c),uStack_48,uStack_40,uStack_38,
                                (ulonglong)uStack_30 << 0x20);
        }
        else if (uStack_50 == 3) {
          uVar5 = fn_82FFD708(param_1,CONCAT44(3,uStack_4c),uStack_48,uStack_40,uStack_38,
                                (ulonglong)uStack_30 << 0x20);
        }
        else if (uStack_50 == 4) {
          uVar5 = fn_82FF92F8(param_1,CONCAT44(4,uStack_4c),uStack_48,uStack_40,uStack_38,
                                (ulonglong)uStack_30 << 0x20);
        }
        else if (uStack_50 == 5) {
          uVar5 = fn_82FFD1F0(param_1,CONCAT44(5,uStack_4c),uStack_48,uStack_40,uStack_38,
                                  (ulonglong)uStack_30 << 0x20);
        }
        else if (uStack_50 == 6) {
          uVar5 = fn_82FFD318(param_1,CONCAT44(6,uStack_4c),uStack_48,uStack_40,uStack_38,
                                  (ulonglong)uStack_30 << 0x20);
        }
        else if (uStack_50 == 7) {
          uVar5 = fn_82FFCB90(param_1,CONCAT44(7,uStack_4c),uStack_48,uStack_40,uStack_38,
                                  (ulonglong)uStack_30 << 0x20);
        }
        else if (uStack_50 == 0) {
          uVar5 = fn_82FFC9A0(param_1,&uStack_50);
        }
        else {
          uVar5 = fn_82FFA898(param_1,CONCAT44(uStack_50,uStack_4c),uStack_48,uStack_40,
                                  uStack_38,(ulonglong)uStack_30 << 0x20);
        }
      }
      RtlEnterCriticalSection(iVar4);
    } while (*(int *)(param_1 + 0x80) != 0);
  }
  RtlLeaveCriticalSection(iVar4);
  return uVar5;
}

