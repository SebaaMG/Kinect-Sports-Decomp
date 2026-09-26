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
extern unsigned int iStack_5c;
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int lbl_83265A24;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


void fn_8256D1B8(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  
  puVar1 = *(uint **)(param_1 + 0x70);
  puVar3 = *(uint **)(param_1 + 0x6c);
  while( true ) {
    if (puVar3 == puVar1) break;
    cVar2 = fn_827D9768((ulonglong)*puVar3 + 0x1f8,param_2);
    if (cVar2 != '\0') break;
    puVar3 = puVar3 + 3;
  }
  iStack_68 = 0;
  iStack_64 = 0;
  if (puVar3 == *(uint **)(param_1 + 0x70)) {
    iStack_70 = 0;
    iStack_6c = 0;
    fn_8256DE08(&iStack_70,0);
    fn_8256BF70(param_1,param_2,lbl_83265A24,0,0,&iStack_68,&iStack_70,1);
  }
  else {
    fn_8256D528(&iStack_68,puVar3);
  }
  if (iStack_68 != 0) {
    uStack_60 = 0;
    iStack_5c = 0;
    fn_8256D528(&uStack_60,&iStack_68);
    uStack_58 = param_4;
    fn_8256D590(param_1 + 0x6c,&uStack_60);
    if (iStack_5c != 0) {
      fn_822315A0();
    }
  }
  puVar1 = *(uint **)(param_1 + 0x80);
  for (puVar3 = *(uint **)(param_1 + 0x7c); puVar3 != puVar1; puVar3 = puVar3 + 3) {
    cVar2 = fn_827D9768((ulonglong)*puVar3 + 0x1f8,param_3);
    if (cVar2 != '\0') break;
  }
  iStack_70 = 0;
  iStack_6c = 0;
  if (puVar3 == *(uint **)(param_1 + 0x80)) {
    uStack_60 = 0;
    iStack_5c = 0;
    fn_8256DE08(&uStack_60,0);
    fn_8256C100(param_1,param_3,lbl_83265A24,0,0,&iStack_70,&uStack_60,1);
  }
  else {
    fn_8256D528(&iStack_70,puVar3);
  }
  if (iStack_70 != 0) {
    uStack_60 = 0;
    iStack_5c = 0;
    fn_8256D528(&uStack_60,&iStack_70);
    uStack_58 = param_4;
    fn_8256D590(param_1 + 0x7c,&uStack_60);
    if (iStack_5c != 0) {
      fn_822315A0();
    }
  }
  if (iStack_6c != 0) {
    fn_822315A0();
  }
  if (iStack_64 != 0) {
    fn_822315A0();
  }
  return;
}

