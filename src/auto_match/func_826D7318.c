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
extern unsigned int *auStack_30;
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_826CDDC0();
extern int fn_826D4148();
extern int fn_826D6888();
extern int fn_826F6E98();
extern int fn_82703090();
extern unsigned int lbl_821AAD20;


int * fn_826D7318(int *param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar4;
  ulonglong uVar3;
  undefined4 auStack_30 [12];
  
  uVar1 = *(uint *)(param_1[7] + 0x14);
  uVar2 = (**(code **)(*param_1 + 0x30))();
  piVar4 = (int *)fn_826D6888(uVar2,param_2,uVar1 >> 0x1c & 1);
  if (piVar4 != (int *)0x0) {
    uVar3 = fn_8267B890(piVar4[5],0x1d8,0);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      auStack_30[0] = 0x40000;
      uVar3 = fn_826D4148(uVar3,*(undefined4 *)(param_1[7] + 0xc),param_1,piVar4,0,auStack_30,
                                0);
    }
    if ((uVar3 & 0xffffffff) != 0) {
      fn_826CDDC0(uVar3,0);
      fn_82703090(piVar4,0,uVar3);
      fn_826F6E98(piVar4);
      if (param_3 != '\0') {
        (**(code **)(*piVar4 + 0x8c))((double)lbl_821AAD20,piVar4);
      }
      fn_8267C498(uVar3);
      return piVar4;
    }
    fn_8267C4F0(piVar4);
  }
  return (int *)0x0;
}

