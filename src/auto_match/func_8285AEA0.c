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
extern int fn_8280AD30();
extern int fn_8305C3F0();
extern int fn_8305C550();
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


undefined8 fn_8285AEA0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  param_2 = *(int *)(param_1 + 100) + param_2;
  iVar1 = fn_8305C3F0(param_1 + 0x6c);
  if (iVar1 != 0) {
    if (*(int *)(param_2 + 0x94) == 0) {
      uStack_30 = *param_3;
      uStack_2c = param_3[1];
      uStack_28 = param_3[2];
    }
    else {
      fn_8280AD30(param_2 + 0x10,param_3,&uStack_30);
    }
    iVar1 = fn_8305C550(param_1 + 0x6c,&uStack_30);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

