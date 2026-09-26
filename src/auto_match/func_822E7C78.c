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
extern unsigned int *auStack_44;
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822C1730();
extern int fn_822C18B8();
extern int fn_822CD140();
extern int fn_82535298();
extern int fn_82536288();
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_822E7C78(int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  bool bVar3;
  int aiStack_90 [4];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_60 [28];
  undefined1 auStack_44 [68];
  
  piVar1 = (int *)(*(int *)(param_1 + 0x1bc) + 0x824);
  if (piVar1 == (int *)0x0) {
    bVar3 = false;
  }
  else {
    bVar3 = *piVar1 != 0;
  }
  if (bVar3) {
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    if (*(int *)(param_1 + 0x214) == 0) {
      uVar2 = 0xffffffff821adae8;
    }
    else {
      uVar2 = 0xffffffff821adae0;
    }
    fn_82230110(auStack_60,0xffffffff821adf08);
    fn_82230110(auStack_44,uVar2);
    fn_822C1730(&uStack_80,auStack_60);
    fn_82230300(auStack_44,1,0);
    fn_82230300(auStack_60,1,0);
    aiStack_90[0] = *piVar1;
    uStack_70 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    aiStack_90[0] =
         fn_82535298(aiStack_90,
                           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1bc) + 0x174) + 0x84c),
                           &uStack_70,&uStack_80);
    fn_82536288(aiStack_90);
    fn_822CD140(&uStack_70);
    fn_822C18B8(&uStack_80);
  }
  return;
}

