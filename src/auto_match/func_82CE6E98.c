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
extern int fn_82CF68D8();


void fn_82CE6E98(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_2[8] * 0x130 + param_1;
  piVar2 = (int *)(iVar1 + 0xadc);
  if ((param_3 & 2) != 0) {
    if (*(int *)(iVar1 + 0xc04) != 0) {
      if (param_2[2] != param_2[1]) {
        (**(code **)(*(int *)(param_1 + 0x1c) + 8))(param_1 + 0x1c);
        param_2[1] = 0;
        *param_2 = 0;
        param_2[2] = 0;
      }
    }
    (**(code **)(*piVar2 + 0x34))(piVar2);
    param_2[3] = 0;
    param_2[6] = 0;
  }
  if ((param_3 & 1) != 0) {
    (**(code **)(*piVar2 + 0x34))(piVar2);
    *(undefined4 *)(iVar1 + 0xbfc) = 0;
    *(undefined1 *)(iVar1 + 0xc00) = 0;
    fn_82CF68D8(param_2,0,0x24);
  }
  return;
}

