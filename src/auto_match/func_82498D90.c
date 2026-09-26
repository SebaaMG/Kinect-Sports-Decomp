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
extern unsigned int *auStack_90;
extern int fn_824925D0();
extern int fn_82492768();
extern int fn_824973B0();
extern int fn_82499158();
extern unsigned int iStack_50;
extern unsigned int lbl_821BEBB4;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_66;
extern unsigned int uStack_67;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;


int fn_82498D90(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_90 [16];
  undefined **ppuStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_50;
  undefined **ppuStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [20];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar3 = fn_824973B0();
  iVar1 = *(int *)(param_1 + 4);
  piVar6 = (int *)(iVar3 * 8 + *(int *)(param_1 + 0x10));
  iVar3 = *piVar6;
  piVar2 = (int *)iVar3;
  while( true ) {
    iVar5 = iVar1;
    if (iVar3 != iVar1) {
      iVar5 = *(int *)piVar6[1];
    }
    piVar4 = (int *)iVar1;
    if ((piVar2 == (int *)iVar5) || (piVar4 = piVar2, piVar2[2] == *param_2)) break;
    piVar2 = (int *)*piVar2;
  }
  if (piVar4 == (int *)iVar1) {
    iStack_50 = *param_2;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    ppuStack_80 = &lbl_821BEBB4;
    uStack_68 = 0;
    uStack_67 = 0;
    uStack_66 = 0;
    ppuStack_4c = &lbl_821BEBB4;
    uStack_48 = 0;
    fn_824925D0(auStack_44,&uStack_78);
    uStack_30 = uStack_64;
    uStack_2c = uStack_60;
    uStack_28 = uStack_5c;
    uStack_24 = uStack_58;
    piVar4 = (int *)fn_82499158(auStack_90,param_1,&iStack_50);
    piVar4 = (int *)*piVar4;
    fn_82492768(&ppuStack_4c);
    fn_82492768(&ppuStack_80);
  }
  return (int)piVar4 + 0xc;
}

