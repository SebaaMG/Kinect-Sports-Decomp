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


ulonglong fn_827B56E0(undefined4 *param_1,int *param_2,uint param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined4 *puVar3;
  
  puVar3 = param_1 + param_3 * 5 + 0xe;
  if (param_1[param_3 * 5 + 0xe] == 0) {
    uVar1 = (**(code **)(*param_2 + 8))(param_2);
    *puVar3 = (int)uVar1;
    if ((uVar1 & 0xffffffff) == 0) {
      return uVar1;
    }
    param_1[param_3 * 5 + 0x10] = param_1;
    param_1[param_3 * 5 + 0x11] = param_3 & 0xffff7fff;
    (**(code **)(*(int *)*puVar3 + 0x2c))((int *)*puVar3,param_1 + param_3 * 5 + 0xf);
    cVar2 = (**(code **)(*(int *)*puVar3 + 4))((int *)*puVar3,*param_1,param_1[1],9,0);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}

