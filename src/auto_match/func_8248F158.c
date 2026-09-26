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
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_823F2E20();
extern int fn_8248E2C0();
extern unsigned int iStack_6c;
extern unsigned int uStack_70;


void fn_8248F158(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_70;
  int iStack_6c;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [80];
  
  puVar7 = param_1;
  puVar2 = param_1;
  while (puVar2 = puVar2 + 2, puVar2 != param_2) {
    uStack_70 = 0;
    iStack_6c = 0;
    if (&uStack_70 != puVar2) {
      iStack_6c = puVar7[3];
      puVar7[3] = 0;
      uStack_70 = *puVar2;
      *puVar2 = 0;
    }
    uVar3 = fn_82365BD8(auStack_58,param_1);
    uVar4 = fn_82365BD8(auStack_50,&uStack_70);
    cVar5 = fn_8248E2C0(uVar4,uVar3);
    puVar6 = puVar2;
    puVar8 = puVar7;
    puVar1 = puVar2;
    if (cVar5 == '\0') {
      while( true ) {
        uVar3 = fn_82365BD8(auStack_68,puVar8);
        uVar4 = fn_82365BD8(auStack_60,&uStack_70);
        cVar5 = fn_8248E2C0(uVar4,uVar3);
        if (cVar5 == '\0') break;
        fn_823F2E20(puVar6,puVar8);
        puVar6 = puVar8;
        puVar8 = puVar8 + -2;
      }
    }
    else {
      while (puVar6 = param_1, param_1 != puVar1) {
        fn_823F2E20(puVar1,puVar1 + -2);
        puVar1 = puVar1 + -2;
      }
    }
    fn_823F2E20(puVar6,&uStack_70);
    if (iStack_6c != 0) {
      fn_822315A0();
    }
    puVar7 = puVar7 + 2;
  }
  return;
}

