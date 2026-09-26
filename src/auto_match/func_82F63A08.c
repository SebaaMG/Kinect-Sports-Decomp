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
extern int fn_82F68240();
extern int fn_82F6B2A0();
extern unsigned int lbl_82015610;
extern unsigned int lbl_82015618;


double fn_82F63A08(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  double dVar5;
  
  puVar3 = (undefined4 *)fn_82F68240();
  uVar2 = *puVar3;
  puVar3 = (undefined4 *)fn_82F68240();
  *puVar3 = 0;
  dVar5 = (double)fn_82F6B2A0(param_1,param_2);
  puVar3 = (undefined4 *)fn_82F68240();
  *param_4 = *puVar3;
  puVar3 = (undefined4 *)fn_82F68240();
  bVar1 = (int)param_3 < 0;
  *puVar3 = uVar2;
  lVar4 = param_3;
  if (0 < (int)param_3) {
    lVar4 = 0;
    do {
      dVar5 = dVar5 * lbl_82015618;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    bVar1 = false;
  }
  if (bVar1) {
    lVar4 = -lVar4;
    do {
      dVar5 = dVar5 * lbl_82015610;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return dVar5;
}

