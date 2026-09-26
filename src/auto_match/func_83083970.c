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


void fn_83083970(int *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if ((int)param_2 < 3) {
    param_2 = 2;
  }
  iVar4 = (int)param_2;
  if (param_1[1] < iVar4) {
    iVar1 = fn_82CE5410();
    if ((int)(param_1[2] & 0x3fffffffU) < iVar4) {
      lVar2 = ((ulonglong)(uint)param_1[2] & 0x3fffffff) << 1;
      if ((int)lVar2 <= iVar4) {
        lVar2 = param_2;
      }
      fn_82CE6310(*(undefined4 *)(iVar1 + 0x10),param_1,lVar2,8);
    }
    param_2 = param_2 - (ulonglong)(uint)param_1[1];
    puVar3 = (undefined4 *)(param_1[1] * 8 + *param_1);
    if (0 < param_2) {
      do {
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = 0x7fffffff;
          puVar3[1] = 0;
        }
        puVar3 = puVar3 + 2;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    param_1[1] = iVar4;
  }
  puVar3 = (undefined4 *)*param_1;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0x7fffffff;
    puVar3[1] = 0;
  }
  *(undefined4 *)*param_1 = 0x7fffffff;
  *(undefined4 *)(*param_1 + 8) = 0x7fffffff;
  return;
}

