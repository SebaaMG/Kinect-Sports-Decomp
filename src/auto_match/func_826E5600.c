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
extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_826E4B08();
extern int fn_826E4CA8();
extern int fn_826E4D70();


undefined8 fn_826E5600(undefined8 param_1,int *param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  if (param_2 == (int *)0x0) {
LAB_826e5640:
    if ((param_3 & 0xffffffff) != 0) {
      fn_826E4CA8(param_3 + 0xc,0xffffffff8200d5d8,param_1);
    }
    uVar1 = fn_826E4B08();
    if (uVar1 != 0) goto LAB_826e5668;
  }
  else {
    uVar1 = (**(code **)(*param_2 + 4))(param_2,param_1);
    if (uVar1 == 0) goto LAB_826e5640;
LAB_826e5668:
    uVar2 = fn_8267B890(param_4,0x1c,0);
    if ((uVar2 & 0xffffffff) != 0) {
      uVar3 = fn_826E4D70(uVar2,uVar1,1);
      goto LAB_826e5698;
    }
  }
  uVar3 = 0;
LAB_826e5698:
  if ((uVar1 & 0xffffffff) != 0) {
    fn_8267C498(uVar1);
  }
  return uVar3;
}

