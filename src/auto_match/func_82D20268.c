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
extern int fn_82D2AD88();


void fn_82D20268(int param_1,int *param_2,char param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  iVar3 = fn_82CE5410();
  if ((int)(param_2[2] & 0x3fffffffU) < iVar1) {
    fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_2,iVar1,4);
  }
  for (puVar2 = *(undefined4 **)(param_1 + 0x2c); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    if (param_3 != '\0') {
      puVar2[0xd] = 0xffffffff;
    }
    *(undefined4 **)(param_2[1] * 4 + *param_2) = puVar2;
    param_2[1] = param_2[1] + 1;
  }
  if (1 < param_2[1]) {
    fn_82D2AD88(*param_2,0,(ulonglong)(uint)param_2[1] - 1,0);
  }
  return;
}

