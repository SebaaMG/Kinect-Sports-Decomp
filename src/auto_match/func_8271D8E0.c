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
extern int fn_826824B0();
extern int fn_82696BC8();
extern int fn_826B32D0();
extern int fn_827451A8();


undefined1 * fn_8271D8E0(undefined1 *param_1,int param_2,float *param_3)

{
  ulonglong uVar1;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  *param_1 = 0;
  uVar1 = fn_826B32D0(param_2,*(undefined4 *)(*(int *)(param_2 + 0x78) + 0x28c),
                            *(int *)(param_2 + 0x78) + 0x44,0,0xffffffffffffffff);
  dStack_38 = (double)param_3[3];
  dStack_40 = (double)param_3[2];
  dStack_48 = (double)param_3[1];
  dStack_50 = (double)*param_3;
  fn_827451A8(uVar1,param_2,&dStack_50);
  fn_82696BC8(param_1,uVar1);
  if ((uVar1 & 0xffffffff) != 0) {
    fn_826824B0(uVar1);
  }
  return param_1;
}

