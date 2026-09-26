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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
extern unsigned int *auStack_30;
extern int fn_826A91F0();
extern int fn_826A9798();
extern int fn_826A9FB0();
extern int fn_826C8C70();
extern int fn_826E7800();
extern int fn_82716330();


void fn_82716570(uint *param_1,int param_2,int param_3,longlong param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined4 auStack_30 [12];
  
  if ((int)param_4 != 0) {
    if (param_3 == 7) {
      *param_1 = 8;
    }
    else {
      *(undefined1 *)(param_2 + 0x15) = 0;
      if (*(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x2c) < 2) {
        fn_826E7800(param_2,2);
      }
      param_4 = param_4 + -2;
      puVar4 = (undefined1 *)(*(int *)(param_2 + 0x3c) + *(int *)(param_2 + 0x2c));
      uVar1 = puVar4[1];
      uVar2 = *puVar4;
      *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 2;
      *param_1 = (uint)CONCAT11(uVar1,uVar2);
    }
    fn_826C8C70(param_2,0xffffffff8200f780,*param_1);
    fn_826A91F0(param_2,0xffffffff8200f768);
    uVar3 = fn_826A9FB0();
    auStack_30[0] = (undefined4)uVar3;
    fn_826A9798(uVar3,param_2,param_4);
    fn_82716330(param_1 + 1,auStack_30);
  }
  return;
}

