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
extern int fn_822315A0();
extern int fn_8256BF70();
extern int fn_8256C100();
extern int fn_8256D528();
extern int fn_8256D590();
extern int fn_8256DE08();
extern int fn_827D9768();
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int lbl_83265A24;
extern unsigned int uStack_50;
extern unsigned int uStack_58;


void fn_8256CC50(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  
  puVar1 = *(uint **)(param_1 + 0x4c);
  for (puVar3 = *(uint **)(param_1 + 0x48); puVar3 != puVar1; puVar3 = puVar3 + 3) {
    cVar2 = fn_827D9768((ulonglong)*puVar3 + 0x1f8,param_2);
    if (cVar2 != '\0') break;
  }
  if (puVar3 == *(uint **)(param_1 + 0x4c)) {
    uStack_58 = 0;
    iStack_54 = 0;
    iStack_60 = 0;
    iStack_5c = 0;
    fn_8256DE08(&uStack_58,0);
    fn_8256BF70(param_1,param_2,lbl_83265A24,0,0,&iStack_60,&uStack_58,1);
    if (iStack_60 != 0) {
      uStack_58 = 0;
      iStack_54 = 0;
      fn_8256D528(&uStack_58,&iStack_60);
      uStack_50 = param_4;
      fn_8256D590(param_1 + 0x48,&uStack_58);
      if (iStack_54 != 0) {
        fn_822315A0();
      }
    }
    if (iStack_5c != 0) {
      fn_822315A0();
    }
  }
  puVar1 = *(uint **)(param_1 + 0x5c);
  for (puVar3 = *(uint **)(param_1 + 0x58); puVar3 != puVar1; puVar3 = puVar3 + 3) {
    cVar2 = fn_827D9768((ulonglong)*puVar3 + 0x1f8,param_3);
    if (cVar2 != '\0') break;
  }
  if (puVar3 == *(uint **)(param_1 + 0x5c)) {
    uStack_58 = 0;
    iStack_54 = 0;
    iStack_60 = 0;
    iStack_5c = 0;
    fn_8256DE08(&uStack_58,0);
    fn_8256C100(param_1,param_3,lbl_83265A24,0,0,&iStack_60,&uStack_58,1);
    if (iStack_60 != 0) {
      uStack_58 = 0;
      iStack_54 = 0;
      fn_8256D528(&uStack_58,&iStack_60);
      uStack_50 = param_4;
      fn_8256D590(param_1 + 0x58,&uStack_58);
      if (iStack_54 != 0) {
        fn_822315A0();
      }
    }
    if (iStack_5c != 0) {
      fn_822315A0();
    }
  }
  return;
}

