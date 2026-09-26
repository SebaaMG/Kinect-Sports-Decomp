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
extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern int fn_82810360();
extern int fn_828105C8();
extern int fn_8285A808();
extern int fn_8285A830();
extern int fn_8285AAF0();
extern int fn_8285E398();
extern int fn_828602F8();
extern int fn_82860750();
extern int fn_82861370();
extern unsigned int lbl_832115A4;


void fn_8285E808(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [256];
  
  puVar1 = (undefined4 *)fn_8285A830();
  iVar2 = fn_8285A808(param_1,param_2);
  lbl_832115A4 = 0;
  if (*(int *)(iVar2 + 0x94) == 0) {
    fn_82861370(param_6,param_4,auStack_100);
  }
  fn_828105C8((double)*(float *)(param_4 + 0x30),(double)*(float *)(param_4 + 0x34),
               (double)*(float *)(param_4 + 0x38),auStack_110);
  if (puVar1[4] == 0) {
    fn_82810360(auStack_110,puVar1 + 5);
    fn_8285AAF0(param_1,param_2,auStack_110);
    iVar2 = fn_82860750(param_1,param_2,puVar1 + 5);
    if (iVar2 != 0) {
      puVar1[4] = 1;
      fn_8285E398(param_1,param_2,*puVar1,param_3,param_4,param_5,param_7,param_6);
    }
  }
  else if (puVar1[4] == 1) {
    puVar3 = puVar1 + 5;
    fn_82810360(puVar3,puVar1 + 8);
    fn_82810360(auStack_110,puVar3);
    fn_828602F8(param_1,param_2,puVar1 + 8,puVar3);
    fn_8285E398(param_1,param_2,*puVar1,param_3,param_4,param_5,param_7,param_6);
  }
  return;
}

