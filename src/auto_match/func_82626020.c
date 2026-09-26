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
extern int fn_82579288();
extern int fn_825795A8();
extern int fn_82579688();
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83274B14;
extern unsigned int lbl_83274B18;
extern unsigned int lbl_83274B20;
extern unsigned int uRam83274b24;
extern unsigned int uRam83274b28;
extern unsigned int uRam83274b2c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82626020(double param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)fn_82579288(*(undefined4 *)(param_2 + 0x6d0));
  if (param_1 == (double)lbl_821CC160) {
    iVar3 = fn_825795A8(piVar2,param_3,param_4,0x1000c);
  }
  else {
    iVar3 = fn_82579688(param_1);
  }
  if (iVar3 != 0) {
    iVar3 = *(int *)(piVar2[4] + 4);
    lbl_83274B14 = *(undefined1 *)(iVar3 + 0x23);
    lbl_83274B18 = *(undefined4 *)(iVar3 + 0x24);
    puVar1 = (undefined4 *)(iVar3 + 0x10U & 0xfffffff0);
    lbl_83274B20 = *puVar1;
    uRam83274b24 = puVar1[1];
    uRam83274b28 = puVar1[2];
    uRam83274b2c = puVar1[3];
  }
  *(undefined2 *)(piVar2 + 0x67) = 0;
  piVar2[100] = piVar2[99];
  *(undefined1 *)(piVar2[0x62] + *piVar2 + 0x754) = 0;
  return;
}

