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
extern int fn_82F152D0();
extern int fn_82F44D68();
extern int fn_82F691F0();
extern int iRam8325edb8;


void fn_82F15360(undefined4 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 auStack_40 [16];
  
  iRam8325edb8 = (int)((param_2 & 0xffffffff) >> 0x1f) + (uint)(param_2 < 6);
  if (0 < (int)param_3) {
    auStack_40[0] = 0;
    fn_82F152D0(param_1,param_3,auStack_40,param_4,0xffffffff83260000,5 - param_2);
  }
  iVar3 = 0;
  *param_1 = 1;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[0x16] = param_1[0x15];
  if (0 < (int)param_1[3]) {
    puVar2 = param_1 + 9;
    do {
      puVar2 = puVar2 + 1;
      piVar1 = (int *)*puVar2;
      piVar1[0xd] = 0;
      fn_82F691F0(piVar1[0xc],0,*piVar1 << 2);
      fn_82F44D68(piVar1,param_2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[3]);
  }
  return;
}

