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
extern unsigned int *auStack_40;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_8267BED0();
extern int fn_8268CC00();
extern int fn_8268CF60();
extern int fn_8270E3B0();
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


undefined8 fn_8269AC18(undefined8 param_1,int param_2)

{
  int *piVar1;
  int iVar4;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 in_r7;
  undefined4 auStack_80 [4];
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_40 [40];
  
  uStack_60 = *(undefined4 *)(param_2 + 0x44);
  piVar1 = *(int **)(param_2 + 0x20);
  uStack_5c = *(undefined4 *)(param_2 + 0x48);
  uStack_58 = *(undefined4 *)(param_2 + 0x4c);
  uStack_54 = *(undefined4 *)(param_2 + 0x50);
  uStack_50 = *(undefined4 *)(param_2 + 0x54);
  uStack_4c = *(undefined4 *)(param_2 + 0x58);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    iVar4 = (**(code **)(*piVar1 + 0x38))(piVar1);
    if (iVar4 != 0) break;
    fn_8268CF60(&uStack_60,piVar1 + 0x11);
    piVar1 = (int *)piVar1[8];
  }
  fn_8268CC00(auStack_40);
  (**(code **)(*piVar1 + 0x2c))(auStack_70,piVar1,auStack_40);
  auStack_80[0] = 0x109;
  lVar2 = fn_8267BED0(param_2,0x16c,auStack_80);
  if (lVar2 == 0) {
    return 0;
  }
  uVar3 = (**(code **)(*piVar1 + 0x38))(piVar1);
  uVar3 = fn_8270E3B0(param_1,lVar2,uVar3,piVar1 + 0x11,&uStack_60,in_r7,auStack_70);
  return uVar3;
}

