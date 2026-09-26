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
extern int fn_8302DF40();


undefined8 fn_8302E4C0(undefined8 param_1,int *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = 1;
  uVar6 = 0;
  uVar5 = (uint)*(ushort *)*param_2;
  *param_2 = (int)((ushort *)*param_2 + 1);
  if (uVar5 != 0) {
    do {
      puVar2 = (undefined4 *)*param_2;
      uVar3 = *puVar2;
      *param_2 = (int)(puVar2 + 1);
      uVar1 = *(undefined1 *)(puVar2 + 1);
      *param_2 = (int)puVar2 + 5;
      uVar4 = fn_8302DF40(param_1,uVar3,uVar1);
      if ((int)uVar4 == 0xf) {
        uVar4 = 1;
      }
      else if ((int)uVar4 != 1) {
        return uVar4;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  return uVar4;
}

