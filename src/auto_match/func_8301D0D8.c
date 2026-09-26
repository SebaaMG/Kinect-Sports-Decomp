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
extern int fn_82FA5190();
extern int fn_83021E70();
extern int fn_830223E0();
extern int fn_830265E0();
extern int fn_83026AA8();
extern int fn_83039920();
extern int fn_8303A5E8();
extern unsigned int lbl_8217D040;
extern unsigned int lbl_831BC770;


void fn_8301D0D8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  
  puVar4 = (undefined4 *)(param_1 + 8);
  uVar5 = 0;
  do {
    puVar1 = (undefined4 *)puVar4[1];
    if (puVar1 == (undefined4 *)0x0) break;
    fn_8303A5E8(puVar1[0x3f],0);
    uVar3 = lbl_831BC770;
    puVar2 = (undefined4 *)puVar1[0x3f];
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      fn_82FA5190(uVar3,puVar2);
    }
    piVar7 = puVar1 + 0x40;
    lVar6 = 4;
    do {
      if (*piVar7 != 0) {
        fn_830265E0();
        uVar3 = lbl_831BC770;
        puVar2 = (undefined4 *)*piVar7;
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(puVar2,0);
          fn_82FA5190(uVar3,puVar2);
        }
      }
      lVar6 = lVar6 + -1;
      piVar7 = piVar7 + 1;
    } while (lVar6 != 0);
    fn_83026AA8(puVar1);
    fn_830223E0(puVar1 + 0x30);
    fn_83021E70(puVar1 + 0x33);
    puVar1[0x30] = &lbl_8217D040;
    fn_83039920(puVar1 + 4);
    *puVar1 = &lbl_8217D040;
    fn_82FA5190(lbl_831BC770,puVar1);
    uVar5 = uVar5 + 1;
    puVar4 = puVar4 + 1;
    *puVar4 = 0;
  } while (uVar5 < 2);
  fn_830223E0(param_1 + 0x198);
  return;
}

