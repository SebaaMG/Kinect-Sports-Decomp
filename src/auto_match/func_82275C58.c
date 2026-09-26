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
extern int fn_822760B0();
extern int fn_8265CA20();
extern unsigned int iStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined4 * fn_82275C58(undefined4 *param_1,ulonglong param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  
  iVar1 = param_4[4];
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  iStack_40 = iVar1;
  if ((param_2 & 0xffffffff) != (ulonglong)param_3) {
    do {
      fn_822760B0(&uStack_50,param_2);
      param_2 = param_2 + 8;
    } while ((param_2 & 0xffffffff) != (ulonglong)param_3);
  }
  iVar2 = *param_4;
  param_1[4] = iVar1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (iVar2 != 0) {
    for (; iVar2 != param_4[2]; iVar2 = iVar2 + 8) {
    }
    fn_8265CA20();
  }
  return param_1;
}

