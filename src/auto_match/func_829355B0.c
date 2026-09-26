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
extern int fn_82F68CC0();
extern int fn_82F691F0();


undefined8 fn_829355B0(uint *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = ((ulonglong)param_1[1] + 3 & 0xffffffff) >> 2;
  if ((int)param_3 == -1) {
    param_3 = uVar2 + 2;
  }
  else if ((param_3 & 0xffffffff) < uVar2 + 2) {
    return 0xffffffff80004005;
  }
  if (0x8000 < (param_3 & 0xffffffff)) {
    return 0xffffffff80004005;
  }
  lVar4 = param_2 + 8;
  lVar3 = 0;
  *(uint *)param_2 = (uint)((param_3 - 1 & 0xffffffff) << 0x10) & 0x7fff0000 | 0xfffe;
  ((uint *)param_2)[1] = *param_1;
  puVar1 = (undefined4 *)param_1[2];
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar4,0xab,(param_3 - 2 & 0x3fffffff) * 4 - lVar3);
    }
    if ((puVar1[2] & 4) == 0) break;
    fn_82F68CC0(lVar4,*puVar1,puVar1[1]);
    lVar4 = (ulonglong)(uint)puVar1[1] + lVar4;
    lVar3 = (ulonglong)(uint)puVar1[1] + lVar3;
    puVar1 = (undefined4 *)puVar1[4];
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(lVar4,0xab,(lVar3 + 3U & 0xfffffffc) - lVar3);
}

