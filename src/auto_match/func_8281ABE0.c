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
extern int fn_8281BA78();
extern int fn_828233A8();
extern unsigned int iStack_30;


undefined8 fn_8281ABE0(int param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iStack_30;
  int aiStack_2c [11];
  
  fn_828233A8(param_1 + 0x88,&iStack_30,0xffffffff828192c8,param_2);
  if (iStack_30 != 0) {
    fn_828233A8(param_1 + 0x88,aiStack_2c,0xffffffff828192c8,param_2);
    uVar1 = (ulonglong)*(uint *)(aiStack_2c[0] + 0x28);
    if (((uVar1 != 0) && (*(int *)(aiStack_2c[0] + 0x24) != 0)) &&
       ((param_2 & 0xffffffff) == (ulonglong)*(uint *)(aiStack_2c[0] + 0x3c))) {
      if ((*(uint *)(param_1 + 0xc) & 4) != 0) {
        param_2 = *(uint *)(param_1 + 0x78) + param_2;
        uVar1 = uVar1 + ((ulonglong)*(uint *)(param_1 + 0x78) & 0x7fffffff) * -2;
      }
      fn_8281BA78(param_1,param_2,uVar1,0);
      return 1;
    }
  }
  return 0;
}

