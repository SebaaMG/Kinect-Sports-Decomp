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
extern int fn_822883D0();
extern int fn_8252D240();
extern int fn_8252D370();
extern int fn_8252D6E0();


bool fn_82287590(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1[param_2 * 0x10 + 0x1b0] + 0x8c0);
  iVar2 = (**(code **)(*piVar1 + 0x14))(piVar1);
  if (iVar2 != 0) {
    fn_8252D240(param_1[param_2 * 0x10 + 0x1b0],param_1 + 0x57,0);
    fn_8252D370(param_1[param_2 * 0x10 + 0x1b0]);
    fn_8252D6E0(param_1[param_2 * 0x10 + 0x1b0],*param_1);
    param_1[param_2 * 0x10 + 0x1af] = 0;
    fn_822883D0(param_1,param_2,param_1[param_2 * 0x10 + 0x1b0]);
  }
  else {
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  return iVar2 != 0;
}

