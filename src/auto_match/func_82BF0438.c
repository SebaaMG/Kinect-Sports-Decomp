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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82BE5240();
extern int fn_82BE9200();
extern int fn_82BE94F0();
extern unsigned int lbl_8200F038;
extern unsigned int lbl_820EB318;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831754D8;
extern unsigned int lbl_8322B270;
extern unsigned int lbl_8322B274;
extern unsigned int uStack_2c;


double fn_82BF0438(undefined4 param_1,ushort param_2,ushort param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  double dVar6;
  undefined4 uStack_2c;
  
  if ((param_2 < 2) || (uVar1 = (uint)param_3, uVar1 < 2)) {
    fn_82BE5240(param_1,0x19a,0xffffffff820eb2f0,param_2,param_3);
    dVar6 = (double)lbl_821AAD20;
  }
  else if (param_2 == lbl_8322B274) {
    dVar6 = (double)lbl_8322B270;
  }
  else {
    lbl_8322B274 = param_2;
    piVar2 = (int *)fn_82BE9200();
    iVar3 = fn_82BE94F0();
    uVar5 = (uint)param_2;
    if ((iVar3 == 1) && (piVar2 != (int *)0x0)) {
      uVar4 = (longlong)(piVar2[3] - piVar2[1]) * (longlong)(piVar2[3] - piVar2[1]) +
              (longlong)(piVar2[2] - *piVar2) * (longlong)(piVar2[2] - *piVar2) & 0xffffffff;
    }
    else {
      uVar4 = (ulonglong)(int)(uVar1 * uVar1 + uVar5 * uVar5);
    }
    lbl_8322B270 = lbl_820EB318 / SQRT((float)(longlong)uVar4);
    dVar6 = (double)lbl_8322B270;
    uStack_2c = (undefined4)
                (longlong)
                ((double)SQRT((float)((longlong)(int)uVar1 * (longlong)(int)uVar5)) * lbl_8200F038);
    lbl_831754D8 = uStack_2c;
  }
  return dVar6;
}

