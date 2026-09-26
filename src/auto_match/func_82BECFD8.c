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
extern unsigned int *auStack_15f;
extern int fn_82BA02A8();
extern int fn_82BE8D50();
extern int fn_82F691F0();


/* WARNING: Removing unreachable block (ram,0x82bed164) */

undefined8 fn_82BECFD8(int *param_1,undefined8 param_2,int *param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_15f [351];
  
  if ((((param_1 != (int *)0x0) && (param_3 != (int *)0x0)) && (param_4 != 0)) && (3 < param_4)) {
    piVar4 = (int *)((int)param_3 + param_4);
    iVar1 = *param_3;
    param_3 = param_3 + 1;
    if ((param_3 <= piVar4) &&
       (piVar2 = (int *)(**(code **)(*param_1 + 0xc))(), piVar2 != (int *)0x0)) {
      iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,param_3,iVar1);
      if ((((iVar3 != 0) &&
           ((param_3 = (int *)(iVar1 + (int)param_3), param_3 <= piVar4 &&
            (fn_82BA02A8(*(undefined8 *)param_3), param_3 + 2 <= piVar4)))) &&
          (param_3 + 3 <= piVar4)) && ((param_3[3] == 0 || (param_3 + 4 <= piVar4)))) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(auStack_15f,0,0x103);
      }
      if (piVar2 != (int *)0x0) {
        fn_82BE8D50(piVar2);
      }
    }
  }
  return 0;
}

