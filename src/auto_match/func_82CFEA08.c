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
extern int fn_82CE5410();
extern int fn_82CE63B0();


bool fn_82CFEA08(int param_1,ulonglong param_2,int *param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  param_3[1] = 0;
  uVar5 = (ulonglong)*(uint *)(param_1 + 8) - 1;
  if (-1 < (longlong)uVar5) {
    lVar6 = (uVar5 & 0x1fffffff) << 3;
    do {
      if ((uint)param_2 == 0) break;
      puVar4 = (uint *)(*(int *)(param_1 + 4) + (int)lVar6);
      uVar1 = *puVar4;
      if ((uVar1 & (uint)param_2) == uVar1) {
        uVar2 = puVar4[1];
        iVar3 = fn_82CE5410();
        if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar3 + 0x10),param_3,4);
        }
        param_2 = param_2 & ~(ulonglong)uVar1;
        *(uint *)(param_3[1] * 4 + *param_3) = uVar2;
        param_3[1] = param_3[1] + 1;
      }
      uVar5 = uVar5 - 1;
      lVar6 = lVar6 + -8;
    } while (-1 < (longlong)uVar5);
  }
  *param_4 = (int)param_2;
  return param_2 != 0;
}

