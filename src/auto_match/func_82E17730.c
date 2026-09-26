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
extern int fn_82CE6310();


void fn_82E17730(int param_1,longlong param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iVar6;
  
  iVar3 = fn_82CE5410();
  uVar1 = param_4[1];
  lVar5 = (ulonglong)uVar1 + param_2;
  iVar6 = (int)lVar5;
  if ((int)(param_4[2] & 0x3fffffffU) < iVar6) {
    lVar2 = ((ulonglong)(uint)param_4[2] & 0x3fffffff) << 1;
    if (iVar6 < (int)lVar2) {
      lVar5 = lVar2;
    }
    fn_82CE6310(*(undefined4 *)(iVar3 + 0xc),param_4,lVar5,8);
  }
  param_4[1] = param_4[1] + (int)param_2;
  if (0 < (int)param_2) {
    puVar4 = (undefined4 *)(uVar1 * 8 + *param_4 + -4);
    do {
      puVar4[1] = param_1;
      param_1 = param_1 + 4;
      puVar4 = puVar4 + 2;
      *puVar4 = param_3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

